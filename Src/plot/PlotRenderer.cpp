#include "PlotRenderer.h"
#include "PlotItem.h"
#include <QOpenGLFramebufferObjectFormat>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLContext>
#include <QOpenGLFunctions_3_3_Core>

#include <glm/gtx/transform.hpp>
#include <glm/gtx/matrix_transform_2d.hpp>

PlotRenderer::PlotRenderer()
{
    auto func = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_3_3_Core>();

    m_viewRotate        = glm::mat4(1.0f);
    m_viewTranslate     = glm::mat4(1.0f);
    m_viewZoom          = glm::mat4(1.0f);

    {
        m_program_grid = new QOpenGLShaderProgram;
        m_program_grid->addShaderFromSourceFile(QOpenGLShader::Vertex, ":/shaders/grid.vs");
        m_program_grid->addShaderFromSourceFile(QOpenGLShader::Fragment, ":/shaders/grid.fs");

        bool linked = m_program_grid->link();
        Q_ASSERT(linked);

        m_uniformLocation_grid_mvpMatrix = m_program_grid->uniformLocation("u_mvpMatrix");
        m_uniformLocation_grid_color = m_program_grid->uniformLocation("u_color");

        m_vboGrid = new QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
        m_vboGrid->create();
        m_vboGrid->setUsagePattern(QOpenGLBuffer::StaticDraw);
        m_vboGrid->bind();
        {
            QVector<glm::vec3> position;

            for(int x=0; x<=3000; x+=100)
            {
                position.append(glm::vec3(x, 0, 0));
                position.append(glm::vec3(x, 0, 1000));
            }

            for(int z=0; z<=3000; z+=100)
            {
                position.append(glm::vec3(0, 0, z));
                position.append(glm::vec3(1000, 0, z));
            }

            m_vboGrid->allocate(position.data(), position.size() * sizeof(glm::vec3));

            m_vertexNumGrid = position.size();
        }
        m_vboGrid->release();

        m_vaoGrid = new QOpenGLVertexArrayObject;
        m_vaoGrid->create();
        m_vaoGrid->bind();
        {
            func->glEnableVertexAttribArray(0);

            m_vboGrid->bind();
            func->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
        }
        m_vaoGrid->release();
    }

    {
        m_program_image = new QOpenGLShaderProgram;
        m_program_image->addShaderFromSourceFile(QOpenGLShader::Vertex, ":/shaders/image.vs");
        m_program_image->addShaderFromSourceFile(QOpenGLShader::Fragment, ":/shaders/image.fs");

        bool linked = m_program_image->link();
        Q_ASSERT(linked);

        m_uniformLocation_image_mvpMatrix = m_program_image->uniformLocation("u_mvpMatrix");
        m_uniformLocation_image_image = m_program_image->uniformLocation("u_image");

        m_vboPosImage = new QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
        m_vboPosImage->create();
        m_vboPosImage->setUsagePattern(QOpenGLBuffer::DynamicDraw);

        m_vboTexImage = new QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
        m_vboTexImage->create();
        m_vboTexImage->setUsagePattern(QOpenGLBuffer::DynamicDraw);

        m_vaoImage = new QOpenGLVertexArrayObject;
        m_vaoImage->create();
        m_vaoImage->bind();
        {
            func->glEnableVertexAttribArray(0);

            m_vboPosImage->bind();
            func->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

            func->glEnableVertexAttribArray(1);

            m_vboTexImage->bind();
            func->glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, 0);
        }
        m_vaoImage->release();

        func->glGenTextures(1, &m_imageTexture);
        func->glBindTexture(GL_TEXTURE_2D, m_imageTexture);
        {
            func->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            func->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            func->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
            func->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);

            float borderColor[] = {0.0f, 0.0f, 0.0f, 0.0f};
            func->glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, borderColor);
        }
        func->glBindTexture(GL_TEXTURE_2D, 0);
    }

    {
        m_program_data = new QOpenGLShaderProgram;
        m_program_data->addShaderFromSourceFile(QOpenGLShader::Vertex, ":/shaders/data.vs");
        m_program_data->addShaderFromSourceFile(QOpenGLShader::Fragment, ":/shaders/data.fs");

        bool linked = m_program_data->link();
        Q_ASSERT(linked);

        m_uniformLocation_data_mvpMatrix = m_program_data->uniformLocation("u_mvpMatrix");
        m_uniformLocation_data_selectLeftTop = m_program_data->uniformLocation("u_selectLeftTop");
        m_uniformLocation_data_selectRightBottom = m_program_data->uniformLocation("u_selectRightBottom");
        m_uniformLocation_data_image = m_program_data->uniformLocation("u_image");
        m_uniformLocation_data_imageSize = m_program_data->uniformLocation("u_imageSize");

        m_vboData = new QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
        m_vboData->create();
        m_vboData->setUsagePattern(QOpenGLBuffer::DynamicDraw);

        m_vaoData = new QOpenGLVertexArrayObject;
        m_vaoData->create();
        m_vaoData->bind();
        {
            func->glEnableVertexAttribArray(0);

            m_vboData->bind();
            func->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
        }
        m_vaoData->release();
    }

    Q_ASSERT(func->glGetError() == GL_NO_ERROR);
}

PlotRenderer::~PlotRenderer()
{
    auto func = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_3_3_Core>();

    {
        delete m_vaoGrid;
        m_vaoGrid = nullptr;

        delete m_vboGrid;
        m_vboGrid = nullptr;

        delete m_program_grid;
        m_program_grid = nullptr;

        m_uniformLocation_grid_mvpMatrix = -1;
        m_uniformLocation_grid_color = -1;
    }

    {
        delete m_vaoImage;
        m_vaoImage = nullptr;

        delete m_vboPosImage;
        m_vboPosImage = nullptr;

        delete m_vboTexImage;
        m_vboTexImage = nullptr;

        delete m_program_image;
        m_program_image = nullptr;

        m_uniformLocation_image_mvpMatrix = -1;

        func->glBindTexture(GL_TEXTURE_2D, 0);
        func->glDeleteTextures(1, &m_imageTexture);
        m_imageTexture = 0;
    }

    {
        delete m_vaoData;
        m_vaoData = nullptr;

        delete m_vboData;
        m_vboData = nullptr;

        delete m_program_data;
        m_program_data = nullptr;

        m_uniformLocation_data_mvpMatrix = -1;
        m_uniformLocation_data_selectLeftTop = -1;
        m_uniformLocation_data_selectRightBottom = -1;
        m_uniformLocation_data_image = -1;
        m_uniformLocation_data_imageSize = -1;
    }

    Q_ASSERT(func->glGetError() == GL_NO_ERROR);
}

QOpenGLFramebufferObject *PlotRenderer::createFramebufferObject(const QSize &size)
{
    QOpenGLFramebufferObjectFormat format;
    format.setSamples(4);
    return new QOpenGLFramebufferObject(size, format);
}

void PlotRenderer::render()
{
    if(m_winWidth <= 0 || m_winHeight <= 0)
    {
        return;
    }

    if(m_dataChanged)
    {
        if(m_imageWidth > 0 && m_imageHeight > 0)
        {
            buildWholeImage();
        }

        buildData();

        m_dataChanged = false;
    }

    if(m_resetView)
    {
        if(m_imageWidth > 0 && m_imageHeight > 0)
        {
            buildWholeImage();
        }

        m_resetView = false;
    }

    if(m_selectChanged)
    {
        if(m_imageWidth > 0 && m_imageHeight > 0)
        {
            buildSelectedImage();
        }

        m_selectChanged = false;
    }

    drawContent();
}

void PlotRenderer::synchronize(QQuickFramebufferObject *item)
{
    PlotItem *plotItem = qobject_cast<PlotItem *>(item);

    if(plotItem == nullptr)
    {
        return;
    }

    int width = static_cast<int>(plotItem->width());
    int height = static_cast<int>(plotItem->height());

    if(width != 0 && height != 0)
    {
        if(width != m_winWidth || height != m_winHeight)
        {
            m_winWidth = width;
            m_winHeight = height;
        }
    }

    if(plotItem->m_rotateWidthChanged)
    {
        m_viewRotate =
                glm::translate(glm::vec3(500, 0, 0)) *
                glm::rotate(glm::radians(plotItem->m_rotateWidth), glm::vec3(0, 0, 1)) *
                glm::translate(glm::vec3(-500, 0, 0)) *
                m_viewRotate;

        plotItem->m_rotateWidthChanged = false;
    }

    if(plotItem->m_rotateHeightChanged)
    {
        m_viewRotate =
                glm::translate(glm::vec3(0, 0, 500)) *
                glm::rotate(glm::radians(-plotItem->m_rotateHeight), glm::vec3(1, 0, 0)) *
                glm::translate(glm::vec3(0, 0, -500)) *
                m_viewRotate;

        plotItem->m_rotateHeightChanged = false;
    }

    if(plotItem->m_moveWidthChanged)
    {
        m_viewTranslate =
                glm::translate(glm::vec3(plotItem->m_moveWidth, 0, 0)) *
                m_viewTranslate;

        plotItem->m_moveWidthChanged = false;
    }

    if(plotItem->m_moveHeightChanged)
    {
        m_viewTranslate =
                glm::translate(glm::vec3(0, 0, plotItem->m_moveHeight)) *
                m_viewTranslate;

        plotItem->m_moveHeightChanged = false;
    }

    if(plotItem->m_resetView)
    {
        m_viewRotate        = glm::mat4(1.0f);
        m_viewTranslate     = glm::mat4(1.0f);
        m_viewZoom          = glm::mat4(1.0f);

        m_selectLeftTop     = glm::vec3(m_xMin, 0, m_yMin);
        m_selectRightBottom = glm::vec3(m_xMax, 0, m_yMax);

        m_resetView = true;

        plotItem->m_resetView = false;
    }

    if(plotItem->m_dataChanged)
    {
        m_imageWidth = plotItem->m_imageWidth;
        m_imageHeight = plotItem->m_imageHeight;
        m_imageBuffer.swap(plotItem->m_imageBuffer);
        plotItem->m_imageBuffer.clear();
        plotItem->m_imageBuffer.shrink_to_fit();

        m_xMin = plotItem->m_xMin;
        m_xMax = plotItem->m_xMax;
        m_yMin = plotItem->m_yMin;
        m_yMax = plotItem->m_yMax;
        m_hMin = plotItem->m_hMin;
        m_hMax = plotItem->m_hMax;
        m_data.swap(plotItem->m_data);
        plotItem->m_data.clear();
        plotItem->m_data.shrink_to_fit();

        m_viewRotate        = glm::mat4(1.0f);
        m_viewTranslate     = glm::mat4(1.0f);
        m_viewZoom          = glm::mat4(1.0f);

        m_selectLeftTop     = glm::vec3(m_xMin, 0, m_yMin);
        m_selectRightBottom = glm::vec3(m_xMax, 0, m_yMax);

        m_dataChanged = true;

        plotItem->m_dataChanged = false;
    }

    if(plotItem->m_selectChanged)
    {
        glm::vec4 lt_data = glm::vec4(0, 0, 0, 1);
        glm::vec4 rb_data = glm::vec4(1000, 0, 1000, 1);

        glm::mat4 mvpMatrix = modelViewProjectionMatrix();

        glm::vec4 lt_ndc = mvpMatrix * lt_data;
        lt_ndc /= lt_ndc.w;

        glm::vec4 rb_ndc = mvpMatrix * rb_data;
        rb_ndc /= rb_ndc.w;

        glm::mat3 matrixNDC2Data = glm::mat3(1.0f);
        matrixNDC2Data = glm::scale(matrixNDC2Data, glm::vec2(1000/(rb_ndc.x - lt_ndc.x), 1000/(lt_ndc.y - rb_ndc.y)));
        matrixNDC2Data = glm::translate(matrixNDC2Data, glm::vec2(-lt_ndc.x, -rb_ndc.y));

        glm::mat4 viewportMatrix = glm::mat4(1.0f);

        if(m_winWidth >= m_winHeight)
        {
            viewportMatrix =
                    glm::translate(glm::vec3(0.0f, (m_winHeight-m_winWidth)/2, 0.0f)) *
                    glm::scale(glm::vec3(m_winWidth/2.0f, m_winWidth/2.0f, 1.0f)) *
                    glm::translate(glm::vec3(1.0f, 1.0f, 0.0f));
        }
        else
        {
            viewportMatrix =
                    glm::translate(glm::vec3((m_winWidth-m_winHeight)/2, 0.0f, 0.0f)) *
                    glm::scale(glm::vec3(m_winHeight/2.0f, m_winHeight/2.0f, 1.0f)) *
                    glm::translate(glm::vec3(1.0f, 1.0f, 0.0f));
        }

        glm::mat4 viewportMatrixInverse = glm::inverse(viewportMatrix);

        glm::vec4 lt = glm::vec4(plotItem->m_selectX, plotItem->m_selectY, 0, 1);
        glm::vec3 lt_result = matrixNDC2Data * glm::vec3(glm::vec2(viewportMatrixInverse * lt), 1);
        m_selectLeftTop = glm::vec3(lt_result.x, 0, lt_result.y);

        glm::vec4 rb = glm::vec4(plotItem->m_selectX + plotItem->m_selectWidth, plotItem->m_selectY + plotItem->m_selectHeight, 0, 1);
        glm::vec3 rb_result = matrixNDC2Data * glm::vec3(glm::vec2(viewportMatrixInverse * rb), 1);
        m_selectRightBottom = glm::vec3(rb_result.x, 0, rb_result.y);

        m_selectChanged = true;

        plotItem->m_selectChanged = false;
    }

    if(plotItem->m_showGridChanged)
    {
        m_showGrid = plotItem->m_showGrid;

        plotItem->m_showGridChanged = false;
    }

    if(plotItem->m_showImageChanged)
    {
        m_showImage = plotItem->m_showImage;

        plotItem->m_showImageChanged = false;
    }

    if(plotItem->m_showPointsCloudChanged)
    {
        m_showPointsCloud = plotItem->m_showPointsCloud;

        plotItem->m_showPointsCloudChanged = false;
    }
}

void PlotRenderer::buildWholeImage()
{
    auto func = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_3_3_Core>();

    m_vertexNumImage = 4;

    m_vboPosImage->bind();
    {
        QVector<glm::vec3> position;

        position.append(glm::vec3(0, 0, 0));
        position.append(glm::vec3(0, 0, m_imageHeight));
        position.append(glm::vec3(m_imageWidth, 0, 0));
        position.append(glm::vec3(m_imageWidth, 0, m_imageHeight));

        m_vboPosImage->allocate(position.data(), position.size() * sizeof(glm::vec3));
    }
    m_vboPosImage->release();

    m_vboTexImage->bind();
    {
        QVector<glm::vec2> coords;

        coords.append(glm::vec2(0, 0));
        coords.append(glm::vec2(0, 1));
        coords.append(glm::vec2(1, 0));
        coords.append(glm::vec2(1, 1));

        m_vboTexImage->allocate(coords.data(), coords.size() * sizeof(glm::vec2));
    }
    m_vboTexImage->release();

    func->glBindTexture(GL_TEXTURE_2D, m_imageTexture);
    {
        func->glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, m_imageWidth, m_imageHeight, 0,
                           GL_BGRA, GL_UNSIGNED_BYTE, m_imageBuffer.data());
    }
    func->glBindTexture(GL_TEXTURE_2D, 0);

    Q_ASSERT(func->glGetError() == GL_NO_ERROR);
}

void PlotRenderer::buildSelectedImage()
{
    float pos_left      = glm::max(0.0f, m_selectLeftTop.x);
    float pos_right     = glm::min(float(m_imageWidth), m_selectRightBottom.x);
    float pos_top       = glm::max(0.0f, m_selectLeftTop.z);
    float pos_bottom    = glm::min(float(m_imageHeight), m_selectRightBottom.z);

    if(pos_left < pos_right && pos_top < pos_bottom)
    {
        auto func = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_3_3_Core>();

        m_vertexNumImage = 4;

        m_vboPosImage->bind();
        {
            QVector<glm::vec3> position;

            position.append(glm::vec3(pos_left, 0, pos_top));
            position.append(glm::vec3(pos_left, 0, pos_bottom));
            position.append(glm::vec3(pos_right, 0, pos_top));
            position.append(glm::vec3(pos_right, 0, pos_bottom));

            m_vboPosImage->allocate(position.data(), position.size() * sizeof(glm::vec3));
        }
        m_vboPosImage->release();

        m_vboTexImage->bind();
        {
            QVector<glm::vec2> coords;

            float coord_left    = pos_left / m_imageWidth;
            float coord_right   = pos_right / m_imageWidth;
            float coord_top     = pos_top / m_imageHeight;
            float coord_bottom  = pos_bottom / m_imageHeight;

            coords.append(glm::vec2(coord_left, coord_top));
            coords.append(glm::vec2(coord_left, coord_bottom));
            coords.append(glm::vec2(coord_right, coord_top));
            coords.append(glm::vec2(coord_right, coord_bottom));

            m_vboTexImage->allocate(coords.data(), coords.size() * sizeof(glm::vec2));
        }
        m_vboTexImage->release();

        Q_ASSERT(func->glGetError() == GL_NO_ERROR);
    }
    else
    {
        m_vertexNumImage = 0;
    }
}

void PlotRenderer::buildData()
{
    auto func = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_3_3_Core>();

    m_vboData->bind();
    {
        m_vboData->allocate(m_data.data(), m_data.size() * sizeof(float));
    }
    m_vboPosImage->release();

    m_vertexNumData = m_data.size() / 3;

    m_data.clear();
    m_data.shrink_to_fit();

    Q_ASSERT(func->glGetError() == GL_NO_ERROR);
}

glm::mat4 PlotRenderer::modelViewProjectionMatrix() const
{
    glm::mat4 view = glm::lookAt(
                glm::vec3(500.0f, 1000.0f, 500.0f),
                glm::vec3(500.0f, 0.0f, 500.0f),
                glm::vec3(0.0f, 0.0f, -1.0f))
            * m_viewZoom * m_viewRotate * m_viewTranslate;

    glm::mat4 projection = glm::perspective(glm::radians(75.0f), 1.0f, 10.0f, 5000.0f);

    return projection * view;
}

void PlotRenderer::drawContent()
{
    auto func = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_3_3_Core>();

    func->glEnable(GL_DEPTH_TEST);
    func->glClearDepth(1);

    func->glClearColor(0, 0, 0, 1);
    func->glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    func->glEnable(GL_BLEND);
    func->glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    if(m_winWidth >= m_winHeight)
    {
        func->glViewport(0, (m_winHeight-m_winWidth)/2, m_winWidth, m_winWidth);
    }
    else
    {
        func->glViewport((m_winWidth-m_winHeight)/2, 0, m_winHeight, m_winHeight);
    }

    glm::mat4 mvpMatrix = modelViewProjectionMatrix();

    if(m_showGrid)
    {
        m_program_grid->bind();
        {
            func->glUniformMatrix4fv(m_uniformLocation_grid_mvpMatrix, 1, GL_FALSE, &mvpMatrix[0][0]);

            func->glUniform3f(m_uniformLocation_grid_color, 1.0f, 0.0f, 0.0f);

            m_vaoGrid->bind();
            {
                func->glDrawArrays(GL_LINES, 0, m_vertexNumGrid);
            }
            m_vaoGrid->release();
        }
        m_program_grid->release();
    }

    if(m_showImage)
    {
        if(m_vertexNumImage > 0)
        {
            m_program_image->bind();
            {
                func->glUniformMatrix4fv(m_uniformLocation_image_mvpMatrix, 1, GL_FALSE, &mvpMatrix[0][0]);

                func->glActiveTexture(GL_TEXTURE0);
                func->glBindTexture(GL_TEXTURE_2D, m_imageTexture);
                func->glUniform1i(m_uniformLocation_image_image, 0);

                m_vaoImage->bind();
                {
                    func->glDrawArrays(GL_TRIANGLE_STRIP, 0, m_vertexNumImage);
                }
                m_vaoImage->release();
            }
            m_program_image->release();
        }
    }

    if(m_showPointsCloud)
    {
        if(m_vertexNumData > 0)
        {
            m_program_data->bind();
            {
                func->glUniformMatrix4fv(m_uniformLocation_data_mvpMatrix, 1, GL_FALSE, &mvpMatrix[0][0]);

                func->glActiveTexture(GL_TEXTURE0);
                func->glBindTexture(GL_TEXTURE_2D, m_imageTexture);
                func->glUniform1i(m_uniformLocation_data_image, 0);
                func->glUniform2f(m_uniformLocation_data_imageSize, m_imageWidth, m_imageHeight);

                func->glUniform3fv(m_uniformLocation_data_selectLeftTop, 1, &m_selectLeftTop[0]);
                func->glUniform3fv(m_uniformLocation_data_selectRightBottom, 1, &m_selectRightBottom[0]);

                m_vaoData->bind();
                {
                    func->glDrawArrays(GL_POINTS, 0, m_vertexNumData);
                }
                m_vaoData->release();
            }
            m_program_data->release();
        }
    }

    Q_ASSERT(func->glGetError() == GL_NO_ERROR);
}
