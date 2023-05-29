
#include "user.h"

#include "Precompiled/precompiled.h"
#include "common/functions.h"
#include "DBEntities/pcba_user.gen.h"
//#include <QFileDialog>
#include <QtWidgets/QTableWidget>
#include "DBEntities/pcba_device.gen.h"
#include <QtGui>
#include <stdio.h>
#include <time.h> // time_t数据类型，日历时间头文件 
#include "DBEntities/pcba_user.gen.h"
#include "DBEntities/pcba_useroperate.gen.h"
#include <QDateTime>



CUser::~CUser()
{

}

QString CUser::getUsrList(QString account, QString begintime)
{
	list_of_pcba_user m_list_pcba_usr;
  qx::dao::fetch_all(m_list_pcba_usr);

	list_of_pcba_useroperate m_list_pcba_usrlog;
  qx::dao::fetch_all(m_list_pcba_usrlog);
  
  QJsonObject json;
  QString dev;
  int idx = 0;

	QSqlError daoError;
	list_of_pcba_device m_list_pcba_alg;
	daoError = qx::dao::fetch_all(m_list_pcba_alg);
  
  for (int i = 0; i < m_list_pcba_usr.count(); i++) {
    pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);
    //qDebug() << "desc=**************" << tmp->getdescription();
	  QJsonObject pageObject;
	  pageObject.insert("id", tmp->getuserId());
	 
	  pageObject.insert("accountname", tmp->getname());
	   if (account != "" && account != tmp->getname())
	  	continue;
		bool find = false;
		for (int i = 0; i < m_list_pcba_usrlog.count(); i++) 
		{
			pcba_useroperate_ptr tmpoper = m_list_pcba_usrlog.getByIndex(i);
			if (tmpoper->getuserId() != NULL
					&& tmpoper->getuserId()->getuserId() == tmp->getuserId())
				{
					QString tmpstr = tmpoper->getoperateTime().toString("yyyy-MM-dd HH:mm:ss");
					QString tmpcompare = tmpoper->getoperateTime().toString("yyyy-MM-dd");
					 if (begintime != "" && begintime == tmpcompare)
					{
						
						pageObject.insert("logintime", tmpstr);
						find = true;
					}
					else if (begintime == "")
					{
						pageObject.insert("logintime", tmpstr);
						find = true;
					}
				
					 
					break;
				}
		}

		if (true != find && begintime != "")
			continue;
		
	  pageObject.insert("loginname", tmp->getlogName());
	  pageObject.insert("loginpasswd", tmp->getlogPassword());
      pageObject.insert("remark", tmp->getstrReserve());
	  
	  QString strRight = tr("%1").arg(tmp->getadmin()) + "|" + tr("%1").arg(tmp->getinspect()) + 
	  	"|" + tr("%1").arg(tmp->getprogram());

	
	for (int i=0; i<m_list_pcba_alg.size(); i++)
	{
		if (tmp->getdeviceId() != NULL)
            qDebug()<<"not NULL";
		else
            qDebug() << " NULL";
		
        if (tmp->getdeviceId() != NULL
			&& tmp->getdeviceId()->getdeviceId() == m_list_pcba_alg.getByIndex(i)->getdeviceId())
		{
			pageObject.insert("devnum", m_list_pcba_alg.getByIndex(i)->getdevicecode());
			break;
		}
		
	}
	
	 pageObject.insert("right", strRight);
	 pageObject.insert("inactive", tmp->getinactive());
	  dev = "user" + QString::number(idx);   
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

QString CUser::getLogList(QString account, QString devnum, QString type, QString begintime, QString endtime)
{
	list_of_pcba_useroperate m_list_pcba_usrlog;
  qx::dao::fetch_all(m_list_pcba_usrlog);
  
  QJsonObject json;
  QString dev;
  int idx = 0;

	qDebug() << "account=" << account << " devnum=" << devnum << " type=" << type << " begintime=" << begintime << " endtime=" << endtime;

	QSqlError daoError;
	list_of_pcba_user m_list_pcba_user;
	daoError = qx::dao::fetch_all(m_list_pcba_user);


	list_of_pcba_device m_list_pcba_device;
	daoError = qx::dao::fetch_all(m_list_pcba_device);
	
	for (int i = 0; i < m_list_pcba_usrlog.count(); i++) 
	{
		pcba_useroperate_ptr tmp = m_list_pcba_usrlog.getByIndex(i);
		

		
		//qDebug() << "desc=**************" << tmp->getdescription();
		QJsonObject pageObject;

		if (type != "")
		{
			int fillintype = 0;
			if (type == "登录")
			{
				fillintype = 2;
			}
			else if (type == "配置")
			{
				fillintype = 1;
			}

			if (fillintype != tmp->getoperateType())
			{
				qDebug() << "fillintype=" << fillintype << " getoperateType=" << tmp->getoperateType();
				continue;
			}
				
		}

		
		if (2 == tmp->getoperateType())
			pageObject.insert("type", "登录");
		else if (1 == tmp->getoperateType())
			pageObject.insert("type", "配置");
        QString tmpstr = tmp->getoperateTime().toString("yyyy-MM-dd HH:mm:ss");
		if (begintime != "")
		{
			QDateTime start = QDateTime::fromString(begintime, "yyyy-MM-dd");

			uint stime = start.toTime_t();		

            QDateTime datacurrent = QDateTime::fromString(tmpstr, "yyyy-MM-dd HH:mm:ss");

            uint ctime = datacurrent.toTime_t();
			if (ctime < stime)
				continue;
		}
		
	
		if (endtime != "")
		{
			QDateTime enddatatime = QDateTime::fromString(endtime, "yyyy-MM-dd");

			uint endtime = enddatatime.toTime_t();		

            QDateTime datacurrent = QDateTime::fromString(tmpstr, "yyyy-MM-dd HH:mm:ss");

            uint ctime = datacurrent.toTime_t();
			if (ctime > endtime)
				continue;
		}
		
		
		qDebug() << "timeeee=" << tmpstr.toLocal8Bit().data();
        pageObject.insert("time", tmpstr.toLocal8Bit().data());
       // pageObject.insert("time", tmp->getoperateTime().date().toLocal8Bit().data());
		bool find = false;

		for (int i=0; i<m_list_pcba_device.size(); i++)
		{		
			if (tmp->getdeviceId() != NULL
				&& tmp->getdeviceId()->getdeviceId() == m_list_pcba_device.getByIndex(i)->getdeviceId())
			{
				qDebug() << "devnum=" << devnum << " getoperateType=" << m_list_pcba_device.getByIndex(i)->getdevicecode() << " time=" << tmp->getoperateTime();
                if (devnum != "" && devnum == m_list_pcba_device.getByIndex(i)->getdevicecode())
				{
					pageObject.insert("devnum", m_list_pcba_device.getByIndex(i)->getdevicecode());
					find = true;
				}
				else if (devnum == "")
				{
					pageObject.insert("devnum", m_list_pcba_device.getByIndex(i)->getdevicecode());		
					find = true;
				}
				break;
			}

		}

		if (true != find && devnum != "")
			continue;

		find = false;		
		for (int i=0; i<m_list_pcba_user.size(); i++)
		{		
			if (tmp->getuserId() != NULL
				&& tmp->getuserId()->getuserId() == m_list_pcba_user.getByIndex(i)->getuserId())
			{
				if (account != "" && account == m_list_pcba_user.getByIndex(i)->getname())
				{
					pageObject.insert("account", m_list_pcba_user.getByIndex(i)->getname());
					pageObject.insert("name", m_list_pcba_user.getByIndex(i)->getlogName());
					find = true;
				}
				else if (account == "")
				{
					pageObject.insert("account", m_list_pcba_user.getByIndex(i)->getname());
					pageObject.insert("name", m_list_pcba_user.getByIndex(i)->getlogName());			
					find = true;
				}
				break;
			}

		}

		if (true == find || account == "")
		{
			dev = "user" + QString::number(idx);   
			json.insert(dev, QJsonValue(pageObject));
			idx++;	
		}
		
		//return tmp->getdescription();
		}

	  QJsonDocument document;
	  
	  document.setObject(json);
	  
	  QByteArray byteArray = document.toJson(QJsonDocument::Compact);
	  
	  QString strJson(byteArray);
	  
	  qDebug() << strJson;
	  
		 return strJson;
	}


int recordinfo(pcba_user_ptr &tmp, int type, QString desc)
{
	

	pcba_useroperate_ptr m_pcb_useroperate_ptr;
	m_pcb_useroperate_ptr.reset(new pcba_useroperate());
	m_pcb_useroperate_ptr->setoperateId(Functions::getUUidStr());
	pcba_user_ptr m_pcb_user_ptr;
	m_pcb_user_ptr.reset(new pcba_user());
	m_pcb_user_ptr->setuserId(tmp->getuserId());
    m_pcb_useroperate_ptr->setuserId(m_pcb_user_ptr);
	m_pcb_useroperate_ptr->setoperateType(type);
	if (tmp->getdeviceId() != NULL)
	{
		pcba_device_ptr m_pcb_device_ptr;
		m_pcb_device_ptr.reset(new pcba_device());
	    m_pcb_device_ptr->setdeviceId(tmp->getdeviceId()->getdeviceId());
		m_pcb_useroperate_ptr->setdeviceId(m_pcb_device_ptr);
	}

	
	QDateTime datetime = QDateTime::currentDateTime();
	//QString  now = datetime.toString("Date:yyyy-MM-ddThh:mm:ss.zzz");
	//可以通过格式化的方法转换成想要显示的时间格式
	QString now = datetime.toString("yyyy-MM-dd HH:mm:ss");
	
	QDateTime timeinfo = QDateTime::fromString(now, "yyyy-MM-dd hh:mm:ss");
	qDebug() << "datetime=" << datetime << " now=" << now;
    m_pcb_useroperate_ptr->setoperateTime(timeinfo);
	m_pcb_useroperate_ptr->setdescription(desc);
    m_pcb_useroperate_ptr->setinactive(0);

	QSqlError daoError;
    //QString & error = daoError.text();
    daoError = qx::dao::insert(m_pcb_useroperate_ptr);
	return 0;
}


int CUser::JudgeInput(QString username, QString passwd, int type)
{
	cout << "JudgeInput" <<endl;
	if (username == "admin" && passwd == "admin" && 0 == type)
	{
		return 0;		
	}

	list_of_pcba_user m_list_pcba_usr;
	qx::dao::fetch_all(m_list_pcba_usr);
	for (int i = 0; i < m_list_pcba_usr.count(); i++) 
	{
    	pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);
		if (username == tmp->getlogName() 
			&& tmp->getlogPassword() == passwd)
		{
			m_userid = tmp->getuserId();
			m_nickname = tmp->getname();
			if (0 == type && 1 == tmp->getadmin())
			{
				//m_userid = tmp->getuserId();
				//m_nickname = tmp->getname();
				recordinfo(tmp, 2, "user login");
				return 0;	
			}
			else if (1 == type && 1 == tmp->getinspect())
			{
			
				recordinfo(tmp, 2, "user login");
				return 0;	
			}
			else if (2 == type && 1 == tmp->getprogram())
			{
				recordinfo(tmp, 2, "user login");
				return 0;	
			}
		}		
	}

	
	return -1;
}


CUser::CUser(QObject *parent):QObject(parent)
{
	
}


int CUser::AddUser(QString account, QString name, QString passwd, QString rule,QString devid, QString remark)
{
	qWarning() << "AddUser" << "username=" << name 
		<< " passwd=" << passwd 
		<< " devname=" << devid 
		<< " account=" << account <<  " rule=" << rule << " remark=" << remark << endl;	

	
	QStringList list = rule.split(",");
	int isadmin = 0;
	int isinspector = 0;
	int isprogrammer = 0;
	if (list[0] == "true")
	{
		isadmin = 1;
	}


	if (list[1] == "true")
	{
		isinspector = 1;
	}

	if (list[2] == "true")
	{
		isprogrammer = 1;
	}

	pcba_user_ptr m_pcb_user_ptr;
	m_pcb_user_ptr.reset(new pcba_user());
	m_pcb_user_ptr->setuserId(Functions::getUUidStr());
	m_pcb_user_ptr->setadmin(isadmin);
	m_pcb_user_ptr->setinspect(isinspector);
	m_pcb_user_ptr->setprogram(isprogrammer);

	

	pcba_device_ptr m_pcb_device_ptr;
	m_pcb_device_ptr.reset(new pcba_device());
	m_pcb_device_ptr->setdeviceId(devid);
	
	
	m_pcb_user_ptr->setdeviceId(m_pcb_device_ptr);

	m_pcb_user_ptr->setlogName(name);
	m_pcb_user_ptr->setlogPassword(passwd);
	m_pcb_user_ptr->setname(account);

	m_pcb_user_ptr->setstrReserve(remark);
	
	QSqlError daoError;
    //QString & error = daoError.text();
    daoError = qx::dao::insert(m_pcb_user_ptr);
	if (daoError.isValid())
	{
		qDebug() << "error=" << daoError.text();
		recordinfo(m_pcb_user_ptr, 1, "添加用户失败");
		return -1;
	}

	recordinfo(m_pcb_user_ptr, 1, "添加用户成功");
    //qDebug << "bool=" << ;
	return 0;
}


int CUser::chgpasswd()
{
	return 0;
}

int CUser::chgUserStatus(QString userid, int status)
{
	list_of_pcba_user m_list_pcba_usr;
	qx::dao::fetch_all(m_list_pcba_usr);
	for (int i = 0; i < m_list_pcba_usr.count(); i++) 
	{
        pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);
		
		if (userid == tmp->getuserId())
		{
			tmp->setinactive(status);
            QSqlError daoError;
            //QString & error = daoError.text();
            daoError = qx::dao::update(m_list_pcba_usr); //将实体对象更新到数据库中
           //recordinfo(tmp, 1, "修改用户状态成功");
             //recordinfo(tmp, 1, "修改用户状态成功");
            //qDebug << "bool=" << ;
            return 0;
            
			
		}		
	}

	
	
	return -1;
}


QString CUser::getLoginName()
{
	return m_loginname;
}
void CUser::setLoginName(QString loginname)
{
	m_loginname = loginname;
}

int CUser::ModifyUser(QString id, QString account, QString name, QString passwd, QString rule,QString devid, QString remark)
{
	
	QStringList list = rule.split(",");
	int isadmin = 0;
	int isinspector = 0;
	int isprogrammer = 0;
	if (list[0] == "true")
	{
		isadmin = 1;
	}


	if (list[1] == "true")
	{
		isinspector = 1;
	}

	if (list[2] == "true")
	{
		isprogrammer = 1;
	}
	
	list_of_pcba_user m_list_pcba_usr;
	qx::dao::fetch_all(m_list_pcba_usr);
	for (int i = 0; i < m_list_pcba_usr.count(); i++) 
	{
        pcba_user_ptr m_pcb_user_ptr = m_list_pcba_usr.getByIndex(i);
        if (id == m_pcb_user_ptr->getuserId())
		{
			m_pcb_user_ptr->setadmin(isadmin);
			m_pcb_user_ptr->setinspect(isinspector);
			m_pcb_user_ptr->setprogram(isprogrammer);

			

			pcba_device_ptr m_pcb_device_ptr;
			m_pcb_device_ptr.reset(new pcba_device());
			m_pcb_device_ptr->setdeviceId(devid);
			
			
			m_pcb_user_ptr->setdeviceId(m_pcb_device_ptr);

			m_pcb_user_ptr->setlogName(name);
			m_pcb_user_ptr->setlogPassword(passwd);
			m_pcb_user_ptr->setname(account);

			m_pcb_user_ptr->setstrReserve(remark);
			 QSqlError daoError;
            //QString & error = daoError.text();
            daoError = qx::dao::update(m_list_pcba_usr); //将实体对象更新到数据库中
            if (daoError.isValid())
			{
				qDebug() << "error=" << daoError.text();
				recordinfo(m_pcb_user_ptr, 1, "修改用户信息失败");
				return -1;
			}
			
            recordinfo(m_pcb_user_ptr, 1, "修改用户信息成功");
            //qDebug << "bool=" << ;
            return 0;
		}		
	}
}


QString CUser::getUserId()
{
	return m_userid;
}

int CUser::chgUserPasswd(QString id, QString passwd)
{
	list_of_pcba_user m_list_pcba_usr;
	qx::dao::fetch_all(m_list_pcba_usr);
	for (int i = 0; i < m_list_pcba_usr.count(); i++) 
	{
        pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);
		
		if (id == tmp->getuserId())
		{
			tmp->setlogPassword(passwd);
            QSqlError daoError;
            //QString & error = daoError.text();
            daoError = qx::dao::update(m_list_pcba_usr); //将实体对象更新到数据库中			
			if (daoError.isValid())
			{
				qDebug() << "error=" << daoError.text();
				recordinfo(tmp, 1, "修改用户密码失败");
				return -1;
			}
			
            
            //qDebug << "bool=" << ;
            return 0;
			
		}		
	}
	
	return -1;
}

QString CUser::getNickname()
{
	return m_nickname;
}


