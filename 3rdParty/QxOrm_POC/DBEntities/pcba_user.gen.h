/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_user.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_USER_H_
#define _PCBAOI_PCBA_USER_H_

class pcba_device;

class PCBAOI_EXPORT pcba_user {

  QX_REGISTER_FRIEND_CLASS(pcba_user)

public:
  typedef std::shared_ptr<pcba_device> type_deviceId;

protected:
  QString m_userId;
  int m_inspect;
  int m_program;
  int m_admin;
  QString m_logName;
  QString m_logPassword;
  QString m_workId;
  QString m_name;
  QString m_phone;
  QString m_department;
  QString m_strReserve;
  int m_inactive;
  type_deviceId m_deviceId;

public:
  pcba_user();
  pcba_user(const QString &id);
  virtual ~pcba_user();

  QString getuserId() const;
  int getinspect() const;
  int getprogram() const;
  int getadmin() const;
  QString getlogName() const;
  QString getlogPassword() const;
  QString getworkId() const;
  QString getname() const;
  QString getphone() const;
  QString getdepartment() const;
  QString getstrReserve() const;
  int getinactive() const;
  type_deviceId getdeviceId() const;

  void setuserId(const QString &val);
  void setinspect(const int &val);
  void setprogram(const int &val);
  void setadmin(const int &val);
  void setlogName(const QString &val);
  void setlogPassword(const QString &val);
  void setworkId(const QString &val);
  void setname(const QString &val);
  void setphone(const QString &val);
  void setdepartment(const QString &val);
  void setstrReserve(const QString &val);
  void setinactive(const int &val);
  void setdeviceId(const type_deviceId &val);

  type_deviceId getdeviceId(bool bLoadFromDatabase,
                            const QString &sAppendRelations = QString(),
                            QSqlDatabase *pDatabase = NULL,
                            QSqlError *pDaoError = NULL);

public:
  static QString relation_deviceId(bool key = false) {
    Q_UNUSED(key);
    return "deviceId";
  }

public:
  static QString column_userId(bool key = false) {
    Q_UNUSED(key);
    return "userId";
  }
  static QString column_inspect(bool key = false) {
    Q_UNUSED(key);
    return "inspect";
  }
  static QString column_program(bool key = false) {
    Q_UNUSED(key);
    return "program";
  }
  static QString column_admin(bool key = false) {
    Q_UNUSED(key);
    return "admin";
  }
  static QString column_logName(bool key = false) {
    Q_UNUSED(key);
    return "logName";
  }
  static QString column_logPassword(bool key = false) {
    Q_UNUSED(key);
    return "logPassword";
  }
  static QString column_workId(bool key = false) {
    Q_UNUSED(key);
    return "workId";
  }
  static QString column_name(bool key = false) {
    Q_UNUSED(key);
    return "name";
  }
  static QString column_phone(bool key = false) {
    Q_UNUSED(key);
    return "phone";
  }
  static QString column_department(bool key = false) {
    Q_UNUSED(key);
    return "department";
  }
  static QString column_strReserve(bool key = false) {
    Q_UNUSED(key);
    return "strReserve";
  }
  static QString column_inactive(bool key = false) {
    Q_UNUSED(key);
    return "inactive";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_user";
  }
};

typedef std::shared_ptr<pcba_user> pcba_user_ptr;
typedef qx::QxCollection<QString, pcba_user_ptr> list_of_pcba_user;
typedef std::shared_ptr<list_of_pcba_user> list_of_pcba_user_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_user, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_user,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_user)

#include "pcba_device.gen.h"

#endif // _PCBAOI_PCBA_USER_H_
