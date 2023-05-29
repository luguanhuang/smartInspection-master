#ifndef PLOTRENDERER_H
#define PLOTRENDERER_H

#include <QQuickFramebufferObject>

#define GLM_FORCE_XYZW_ONLY
#include <glm/glm.hpp>
#include <glm/ext.hpp>

class QOpenGLShaderProgram;
class QOpenGLBuffer;
class QOpenGLVertexArrayObject;

class PlotRenderer : public QQuickFramebufferObject::Renderer
{
public:
    PlotRenderer();
    ~PlotRenderer() override;

protected:
    QOpenGLFramebufferObject *createFramebufferObject(const QSize &size) override;
    void render() override;
    void synchronize(QQuickFramebufferObject *item) override;

private:
    int m_winWidth {0};
    int m_winHeight {0};

    int m_imageWidth {0};
    int m_imageHeight {0};
    QByteArray m_imageBuffer;

    float m_xMin {0};
    float m_xMax {0};
    float m_yMin {0};
    float m_yMax {0};
    float m_hMin {0};
    float m_hMax {0};
    QVector<float> m_data;

    bool m_dataChanged {false};

    glm::vec3 m_selectLeftTop;
    glm::vec3 m_selectRightBottom;
    int m_selectChanged {false};

    bool m_showGrid {true};
    bool m_showImage {true};
    bool m_showPointsCloud {true};

private:
    QOpenGLShaderProgram *m_program_grid {nullptr};
    int m_uniformLocation_grid_mvpMatrix {-1};
    int m_uniformLocation_grid_color {-1};

    int m_vertexNumGrid {0};
    QOpenGLBuffer *m_vboGrid {nullptr};
    QOpenGLVertexArrayObject *m_vaoGrid {nullptr};

    QOpenGLShaderProgram *m_program_image {nullptr};
    int m_uniformLocation_image_mvpMatrix {-1};
    int m_uniformLocation_image_image {-1};

    int m_vertexNumImage {0};
    QOpenGLBuffer *m_vboPosImage {nullptr};
    QOpenGLBuffer *m_vboTexImage {nullptr};
    QOpenGLVertexArrayObject *m_vaoImage {nullptr};

    unsigned int m_imageTexture {0};

    void buildWholeImage();
    void buildSelectedImage();

    QOpenGLShaderProgram *m_program_data {nullptr};
    int m_uniformLocation_data_mvpMatrix {-1};
    int m_uniformLocation_data_selectLeftTop {-1};
    int m_uniformLocation_data_selectRightBottom {-1};
    int m_uniformLocation_data_image {-1};
    int m_uniformLocation_data_imageSize {-1};

    int m_vertexNumData {0};
    QOpenGLBuffer *m_vboData {nullptr};
    QOpenGLVertexArrayObject *m_vaoData {nullptr};

    void buildData();

    glm::mat4 m_viewRotate;
    glm::mat4 m_viewTranslate;
    glm::mat4 m_viewZoom;
    bool m_resetView {false};

    glm::mat4 modelViewProjectionMatrix() const;

    void drawContent();
};

#endif // PLOTRENDERER_H
