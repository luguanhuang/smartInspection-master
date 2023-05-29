
#ifndef DEVICE_H_G
#define DEVICE_H_G
#include <QObject>
#include <QDateTime>
#include <iostream>
using namespace std;
class CDevice : public QObject
{
	Q_OBJECT
	public:
		CDevice(QObject *parent=nullptr);
		~CDevice();		
		Q_INVOKABLE int AddDevice(QString id, QString num, QString name, QString desc);
		Q_INVOKABLE int DelDevice(QString id, QString num);
		Q_INVOKABLE  QString getInstructList(QString user);		
		Q_INVOKABLE int UpdateDevice(QString id, QString data);
};




#endif
