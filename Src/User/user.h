
#ifndef USER_H_G
#define USER_H_G
#include <QObject>
#include <QDateTime>
#include <iostream>

using namespace std;



class CUser : public QObject
{
	Q_OBJECT
	public:
		CUser(QObject *parent=nullptr);
		~CUser();
		Q_INVOKABLE int JudgeInput(QString username, QString passwd, int type);
		Q_INVOKABLE int AddUser(QString account, QString name, QString passwd, QString rule,QString devname, QString remark);

		Q_INVOKABLE QString getUsrList(QString account="", QString begintime="");
		Q_INVOKABLE int chgpasswd();		
		Q_INVOKABLE QString getLogList(QString account="", QString devnum="", QString type="", QString begintime="", QString endtime="");
		Q_INVOKABLE QString getLoginName();
		Q_INVOKABLE void setLoginName(QString loginname);
		Q_INVOKABLE int chgUserStatus(QString userid, int status);		
        Q_INVOKABLE int ModifyUser(QString id, QString account, QString name, QString passwd, QString rule,QString devid, QString remark);
		
		Q_INVOKABLE int chgUserPasswd(QString id, QString passwd);
		Q_INVOKABLE QString getUserId();
		Q_INVOKABLE QString getNickname();
		QString m_loginname;
		QString m_userid;
		QString m_nickname;
};

#endif
