#include "PlotItem.h"
#include "PlotRenderer.h"
#include <QImage>

PlotItem::PlotItem(QQuickItem *parent) : QQuickFramebufferObject(parent)
{
    setMirrorVertically(true);
}

PlotItem::~PlotItem()
{

}

QQuickFramebufferObject::Renderer *PlotItem::createRenderer() const
{
    return new PlotRenderer;
}

void PlotItem::rotateWidth(float delta)
{
    if(m_rotateWidthChanged)
    {
        m_rotateWidth += delta;
    }
    else
    {
        m_rotateWidth = delta;
    }

    m_rotateWidthChanged = true;

    update();
}

void PlotItem::rotateHeight(float delta)
{
    if(m_rotateHeightChanged)
    {
        m_rotateHeight += delta;
    }
    else
    {
        m_rotateHeight = delta;
    }

    m_rotateHeightChanged = true;

    update();
}

void PlotItem::moveWidth(float delta)
{
    if(m_moveWidthChanged)
    {
        m_moveWidth += delta;
    }
    else
    {
        m_moveWidth = delta;
    }

    m_moveWidthChanged = true;

    update();
}

void PlotItem::moveHeight(float delta)
{
    if(m_moveHeightChanged)
    {
        m_moveHeight += delta;
    }
    else
    {
        m_moveHeight = delta;
    }

    m_moveHeightChanged = true;

    update();
}

void PlotItem::resetView()
{
    m_resetView = true;

    update();
}

void PlotItem::reloadData(QString pathImage, QString pathData)
{
    QImage image;
    if(image.load(pathImage))
    {
        m_imageWidth = image.width();
        m_imageHeight = image.height();
        m_imageBuffer.resize(m_imageWidth * m_imageHeight * 4);

        memcpy(m_imageBuffer.data(), image.bits(), m_imageWidth * m_imageHeight * 4);
    }

    m_data.clear();

    QFile inFile(pathData);
    if(inFile.open(QIODevice::ReadOnly))
    {
        bool first = true;

        float xMin = 0;
        float xMax = 0;
        float yMin = 0;
        float yMax = 0;
        float hMin = 0;
        float hMax = 0;

        while(true)
        {
            QString line = inFile.readLine();

            if(line.isEmpty())
            {
                break;
            }

            QStringList elements = line.split(',');
            Q_ASSERT(elements.size() == 3);

            float x = elements.at(0).toFloat();
            float y = elements.at(1).toFloat();
            float h = elements.at(2).toFloat();

            if(first)
            {
                first = false;
            }
            else
            {
                xMin = qMin<float>(x, xMin);
                xMax = qMax<float>(x, xMax);
                yMin = qMin<float>(y, yMin);
                yMax = qMax<float>(y, yMax);
                hMin = qMin<float>(h, hMin);
                hMax = qMax<float>(h, hMax);
            }

            m_data.append(abs(x));
            m_data.append(abs(y));
            m_data.append(abs(h));
        }
        inFile.close();

        m_xMin = xMin;
        m_xMax = xMax;
        m_yMin = yMin;
        m_yMax = yMax;
        m_hMin = hMin;
        m_hMax = hMax;
    }

    m_dataChanged = true;

    update();
}

void PlotItem::selectArea(int x, int y, int width, int height)
{
    m_selectX = x;
    m_selectY = y;
    m_selectWidth = width;
    m_selectHeight = height;
    m_selectChanged = true;

    update();
}

void PlotItem::showGrid(bool show)
{
    m_showGrid = show;
    m_showGridChanged = true;
    update();
}

void PlotItem::showImage(bool show)
{
    m_showImage = show;
    m_showImageChanged = true;
    update();
}

void PlotItem::showPointsCloud(bool show)
{
    m_showPointsCloud = show;
    m_showPointsCloudChanged = true;
    update();
}
