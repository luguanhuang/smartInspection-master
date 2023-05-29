
#include "hardwareConf.h"

#include "Precompiled/precompiled.h"
#include "common/functions.h"
//#include <QFileDialog>
#include <QtWidgets/QTableWidget>
#include <QtGui>
#include <stdio.h>
#include <time.h> // time_t数据类型，日历时间头文件 
#include "DBEntities/pcba_setlight.gen.h"
#include <QDateTime>
#include <string>
using std::string;


CHardwareConf::~CHardwareConf()
{

}

CHardwareConf::CHardwareConf(QObject *parent):QObject(parent)
{
	
}


int CHardwareConf::ProcHorizontalLightMsg(int value)
{
	qDebug() << "ProcHorizontalLightMsg";

	return 0;
}

int CHardwareConf::ProcRedLightMsg(int value)
{
		qDebug() << "ProcRedLightMsg";
	return 0;	
}

int CHardwareConf::ProcGreenLightMsg(int value)
{
	qDebug() << "ProcGreenLightMsg";

	return 0;
}

int CHardwareConf::ProcBlueLightMsg(int value)
{
	qDebug() << "ProcBlueLightMsg";

	return 0;
}

int CHardwareConf::ProcCoaxialLightMsg(int value)
{
	qDebug() << "ProcCoaxialLightMsg";

	return 0;
}

QString CHardwareConf::getHardwareList()
{
	QString dev;

	list_of_pcba_setlight m_list_pcba_setlight;
	qx::dao::fetch_all(m_list_pcba_setlight);
	QJsonObject json;
	int idx = 0;
	for (int j = 0; j < m_list_pcba_setlight.count(); j++) 
	{
		pcba_setlight_ptr tmp = m_list_pcba_setlight.getByIndex(j);
		QJsonObject pageObject;
	  	pageObject.insert("id", tmp->getsetLightId());
	  	pageObject.insert("light", tr("%1").arg(tmp->getbrightness()));	

		dev = "setlight" + QString::number(idx);   
	  json.insert(dev, QJsonValue(pageObject));
	  idx++;
	}

		
  QJsonDocument document;
  
  document.setObject(json);
  
  QByteArray byteArray = document.toJson(QJsonDocument::Compact);
  
  QString strJson(byteArray);
  
  qDebug() << strJson;
  
	 return strJson;
}


int CHardwareConf::SetLightValue(QString name, QString val, int value)
{
	QStringList namelist = name.split("|");
	QStringList vallist = val.split("|");
	list_of_pcba_setlight m_list_pcba_setlight;
	qx::dao::fetch_all(m_list_pcba_setlight);
	
	qDebug() << "count=" << namelist.count();
//	return 0;
	for (int i=0; i<namelist.count(); i++)
	{
		bool isfind = true;
		for (int j = 0; j < m_list_pcba_setlight.count(); j++) 
		{			
			pcba_setlight_ptr tmp = m_list_pcba_setlight.getByIndex(j);
			qDebug() << "id=" << tmp->getsetLightId();
			if (namelist[i] == tmp->getsetLightId())
			{
				isfind = false;
	            tmp->setbrightness(vallist[i].toInt());
	            QSqlError daoError;
	            //QString & error = daoError.text();
	            daoError = qx::dao::update(m_list_pcba_setlight); //将实体对象更新到数据库中			
				if (daoError.isValid())
				{
					qDebug() << "error=" << daoError.text();
					//recordinfo(tmp, 1, "setlignt failure");
					return -1;
				}

				break;
			}		
		}

		if (true == isfind)
		{
			pcba_setlight_ptr m_pcb_setlight_ptr;
			m_pcb_setlight_ptr.reset(new pcba_setlight());
			m_pcb_setlight_ptr->setsetLightId(namelist[i]);
		  	m_pcb_setlight_ptr->setbrightness(vallist[i].toInt());

			QSqlError daoError;
		    //QString & error = daoError.text();
		    daoError = qx::dao::insert(m_pcb_setlight_ptr);
			if (daoError.isValid())
			{
				qDebug() << "error=" << daoError.text();
				//recordinfo(m_pcb_user_ptr, 1, "添加用户失败");
				return -1;
			}

			qDebug() << "succeed";
			//recordinfo(m_pcb_user_ptr, 1, "添加用户成功");
		    //qDebug << "insert succeed";
		}
	}
	
	return 0;
}

int CHardwareConf::SlideMove(int type, int value)
{

	switch (type)
	{
	case COAXIAL_LIGHT:
		ProcCoaxialLightMsg(value);
		break;

	case RED_LIGHT:
		ProcRedLightMsg(value);
		break;

	case GREEN_LIGHT:
		ProcGreenLightMsg(value);
		break;

	case BLUE_LIGHT:
		ProcBlueLightMsg(value);
		break;

	case HORIZONTAL_LIGHT:
		ProcHorizontalLightMsg(value);
		break;
	}
	return 0;
}

int CHardwareConf::ProcUpMsg()
{
	qDebug() << "ProcUpMsg";

	return 0;
}

int CHardwareConf::ProcDownMsg()
{
	qDebug() << "ProcDownMsg";

	return 0;
}

int CHardwareConf::ProcLeftMsg()
{
	qDebug() << "ProcLeftMsg";

	return 0;
}

int CHardwareConf::ProcRightMsg()
{
	qDebug() << "ProcRightMsg";

	return 0;
}

int CHardwareConf::ProcFrontMsg()
{
	qDebug() << "ProcFrontMsg";

	return 0;
}

int CHardwareConf::ProcBackMsg()
{
	qDebug() << "ProcBackMsg";

	return 0;
}


int CHardwareConf::ControlMovement(int type)
{

	switch (type)
	{
	case MOVEMENT_UP:
		ProcUpMsg();
		break;

	case MOVEMENT_DOWN:
		ProcDownMsg();
		break;

	case MOVEMENT_LEFT:
		ProcLeftMsg();
		break;

	case MOVEMENT_RIGHT:
		ProcRightMsg();
		break;

	case MOVEMENT_FRONT:
		ProcFrontMsg();
		break;
	case MOVEMENT_BACK:
		ProcBackMsg();
		break;
		
	}
	return 0;
}


