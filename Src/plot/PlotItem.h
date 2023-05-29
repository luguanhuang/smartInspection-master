#ifndef PLOTITEM_H
#define PLOTITEM_H

#include <QQuickFramebufferObject>

class PlotItem : public QQuickFramebufferObject
{
    Q_OBJECT
public:
    explicit PlotItem(QQuickItem *parent = nullptr);
    ~PlotItem() override;

public:
    Renderer *createRenderer() const override;

public:
    Q_INVOKABLE void rotateWidth(float delta);
    Q_INVOKABLE void rotateHeight(float delta);

    Q_INVOKABLE void moveWidth(float delta);
    Q_INVOKABLE void moveHeight(float delta);

    Q_INVOKABLE void resetView();

    Q_INVOKABLE void reloadData(QString pathImage, QString pathData);

    Q_INVOKABLE void selectArea(int x, int y, int width, int height);

    Q_INVOKABLE void showGrid(bool show);
    Q_INVOKABLE void showImage(bool show);
    Q_INVOKABLE void showPointsCloud(bool show);

private:
    float m_rotateWidth {0};
    bool m_rotateWidthChanged {false};

    float m_rotateHeight {0};
    bool m_rotateHeightChanged {false};

    float m_moveWidth {0};
    bool m_moveWidthChanged {false};

    float m_moveHeight {0};
    bool m_moveHeightChanged {false};

    bool m_resetView {false};

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

    int m_selectX {0};
    int m_selectY {0};
    int m_selectWidth {0};
    int m_selectHeight {0};
    int m_selectChanged {false};

    bool m_showGrid {true};
    bool m_showGridChanged {false};

    bool m_showImage {true};
    bool m_showImageChanged {false};

    bool m_showPointsCloud {true};
    bool m_showPointsCloudChanged {false};

    friend class PlotRenderer;
};

#endif // PLOTITEM_H
