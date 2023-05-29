
#include "device.h"

#include "Precompiled/precompiled.h"
#include "common/functions.h"
#include "DBEntities/pcba_user.gen.h"
#include "DBEntities/pcba_device.gen.h"
#include <QJsonArray>

//#include <QFileDialog>
#include <QtWidgets/QTableWidget>
//
#include <QtGui>

extern int recordinfo(pcba_user_ptr &tmp, int type, QString desc);


QString getAllInstruct()
{
	list_of_pcba_device m_list_pcba_alg;
	qx::dao::fetch_all(m_list_pcba_alg);

	QJsonObject json;
	QString dev;
	int idx = 0;
	for (int i = 0; i < m_list_pcba_alg.count(); i++) 
	{
		pcba_device_ptr tmp = m_list_pcba_alg.getByIndex(i);
		qDebug() << "desc=**************" << tmp->getdescription();
		QJsonObject pageObject;
		pageObject.insert("desc", tmp->getdescription());
		pageObject.insert("devicecode", tmp->getdevicecode());
		pageObject.insert("devicename", tmp->getdevicename());
		pageObject.insert("id", tmp->getdeviceId());
		dev = "device" + QString::number(idx);   
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


//QString CDevice::getInstructList(QString user)
QString CDevice::getInstructList(QString user)
{
	return getAllInstruct();
	if (user == "admin")
	{
		return getAllInstruct();
	}
	else
	{
		list_of_pcba_user m_list_pcba_usr;
  		qx::dao::fetch_all(m_list_pcba_usr);

		for (int i = 0; i < m_list_pcba_usr.count(); i++) 
		{
	    	pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);
			if (tmp->getlogName() == user)
			{
				if (tmp->getdeviceId() == NULL)
				{
					return getAllInstruct();
				}
				else
				{
					list_of_pcba_device m_list_pcba_dev;
					qx::dao::fetch_all(m_list_pcba_dev);
					for (int i = 0; i < m_list_pcba_dev.count(); i++) 
					{
						if (tmp->getdeviceId()->getdeviceId() == m_list_pcba_dev.getByIndex(i)->getdeviceId())
						{
							QJsonObject json;
							QString dev;
							int idx = 0;
							pcba_device_ptr tmp = m_list_pcba_dev.getByIndex(i);
							qDebug() << "desc=**************" << tmp->getdescription();
							QJsonObject pageObject;
							pageObject.insert("desc", tmp->getdescription());
							pageObject.insert("devicecode", tmp->getdevicecode());
							pageObject.insert("devicename", tmp->getdevicename());
							pageObject.insert("id", tmp->getdeviceId());
							dev = "device" + QString::number(idx);   
							json.insert(dev, QJsonValue(pageObject));
							QJsonDocument document;
							document.setObject(json);
							QByteArray byteArray = document.toJson(QJsonDocument::Compact);
							QString strJson(byteArray);
							qDebug() << strJson;
							return strJson;		
						}						
					}
				}
				
				break;	
			}
		}
		
        return "";
	}

}

int CDevice::AddDevice(QString id, QString num, QString name, QString desc)
{
	
	pcba_device_ptr m_pcb_device_ptr;
	m_pcb_device_ptr.reset(new pcba_device());
	m_pcb_device_ptr->setdeviceId(Functions::getUUidStr());
	
	m_pcb_device_ptr->setdescription(desc);
	m_pcb_device_ptr->setdevicename(name);
	m_pcb_device_ptr->setdevicecode(num);
	QSqlError daoError;
	daoError = qx::dao::insert(m_pcb_device_ptr);

	list_of_pcba_user m_list_pcba_usr;
	qx::dao::fetch_all(m_list_pcba_usr);
	for (int i = 0; i < m_list_pcba_usr.count(); i++) 
	{
        pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);
		
		if (id == tmp->getuserId())
		{
            if (daoError.isValid())
            {
                qDebug() << "error=" << daoError.text();
                //recordinfo(tmp, 1, "添加设备失败");
                return -1;
            }


            recordinfo(tmp, 1, "添加设备成功");
            //qDebug << "bool=" << ;
            return 0;
			
		}		
	}
	
	qDebug() << "num=" << num << " name=" << name << " desc=" << desc << " daoError=" << daoError;
	return 0;
}


CDevice::~CDevice()
{

}


CDevice::CDevice(QObject *parent):QObject(parent)
{
		
}

int CDevice::DelDevice(QString id, QString num)
{
	qDebug() << "num=" << num;	
	pcba_device_ptr m_pcb_device_ptr;
	m_pcb_device_ptr.reset(new pcba_device());
	m_pcb_device_ptr->setdeviceId(num);
	QSqlError daoError;
	daoError = qx::dao::delete_by_id(m_pcb_device_ptr);	 

	list_of_pcba_user m_list_pcba_usr;
	qx::dao::fetch_all(m_list_pcba_usr);
	for (int i = 0; i < m_list_pcba_usr.count(); i++) 
	{
		pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);

		if (id == tmp->getuserId())
		{
            if (daoError.isValid())
            {
                qDebug() << "error=" << daoError.text();
                recordinfo(tmp, 1, "删除设备失败");
                return -1;
            }
			recordinfo(tmp, 1, "删除设备成功");
			//qDebug << "bool=" << ;
			return 0;

		}		
	}
	
	return 0;
}

vector<string> splite(const string &s, const string &c)//分割字符用的
{
    std::string::size_type pos1, pos2;
    vector<string> v;
    pos2 = s.find(c);
    pos1 = 0;
    while (std::string::npos != pos2)
    {
        v.push_back(s.substr(pos1, pos2 - pos1));

        pos1 = pos2 + c.size();
        pos2 = s.find(c, pos1);
    }
    if (pos1 != s.length())
    {
        v.push_back(s.substr(pos1));
    }
    return v;
}

int CDevice::UpdateDevice(QString id, QString data)
{
	QSqlError daoError;
	list_of_pcba_device m_list_pcba_alg;
	daoError = qx::dao::fetch_all(m_list_pcba_alg);
	
	vector<string> vecres = splite(data.toStdString(), "|");
	qDebug() << "data=" << data;
	for (int i=0; i<m_list_pcba_alg.size(); i++)
	{
        if (QString::fromStdString(vecres[0]) == m_list_pcba_alg.getByIndex(i)->getdeviceId())
		{
			m_list_pcba_alg.getByIndex(i)->setdevicecode(QString::fromStdString(vecres[1]));
			m_list_pcba_alg.getByIndex(i)->setdevicename(QString::fromStdString(vecres[2]));
			if (vecres.size() > 3)
	            m_list_pcba_alg.getByIndex(i)->setdescription(QString::fromStdString(vecres[3]));            
			else
				m_list_pcba_alg.getByIndex(i)->setdescription(QString::fromStdString(""));            
            daoError = qx::dao::update(m_list_pcba_alg); //将实体对象更新到数据库中

			list_of_pcba_user m_list_pcba_usr;
			qx::dao::fetch_all(m_list_pcba_usr);
			for (int i = 0; i < m_list_pcba_usr.count(); i++) 
			{
				pcba_user_ptr tmp = m_list_pcba_usr.getByIndex(i);

				if (id == tmp->getuserId())
				{
                    if (daoError.isValid())
                    {
                        qDebug() << "error=" << daoError.text();
                        recordinfo(tmp, 1, "更新设备失败");
                        return -1;
                    }
					recordinfo(tmp, 1, "更新设备成功");
					//qDebug << "bool=" << ;
					return 0;

				}		
			}	
			
			break;
		}
	}
	
	
	return 0;
}


