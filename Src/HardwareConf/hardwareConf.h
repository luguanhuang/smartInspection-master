
#ifndef HARDWARE_CONF_H_G
#define HARDWARE_CONF_H_G
#include <QObject>
#include <QDateTime>
#include <iostream>

using namespace std;

typedef enum
{
	COAXIAL_LIGHT,
	RED_LIGHT,
	GREEN_LIGHT,
	BLUE_LIGHT,
	HORIZONTAL_LIGHT
}EnLight;

typedef enum
{
	MOVEMENT_UP,
	MOVEMENT_DOWN,
	MOVEMENT_LEFT,
	MOVEMENT_RIGHT,
	MOVEMENT_FRONT,
	MOVEMENT_BACK
}EnMovement;


class CHardwareConf : public QObject
{
	Q_OBJECT
	public:
		CHardwareConf(QObject *parent=nullptr);
		~CHardwareConf();
		Q_INVOKABLE int ProcHorizontalLightMsg(int value);
		Q_INVOKABLE int ProcRedLightMsg(int value);
		Q_INVOKABLE int ProcGreenLightMsg(int value);
		Q_INVOKABLE int ProcBlueLightMsg(int value);
		Q_INVOKABLE int ProcCoaxialLightMsg(int value);
		Q_INVOKABLE int SlideMove(int type, int value);

		Q_INVOKABLE int SetLightValue(QString name, QString val, int value);
	
		Q_INVOKABLE int ControlMovement(int type);
		Q_INVOKABLE int ProcUpMsg();
		Q_INVOKABLE int ProcDownMsg();
		Q_INVOKABLE int ProcLeftMsg();
		Q_INVOKABLE int ProcRightMsg();
		Q_INVOKABLE int ProcFrontMsg();
		Q_INVOKABLE int ProcBackMsg();
		
		Q_INVOKABLE QString getHardwareList();

		
};

class Object : public QObject
{
    Q_OBJECT
    Q_PROPERTY(qreal value READ value WRITE setValue NOTIFY valueChanged)
public:
    explicit Object(QObject *parent = 0) :
        QObject(parent),
        mValue(0)
    {
    }

    qreal value() const {
        return mValue;
    }

    void setValue(qreal value) {
        if (value != mValue) {
            mValue = value;
            emit valueChanged();
        }
    }
signals:
    qreal valueChanged();
private:
    qreal mValue;
};


#endif
