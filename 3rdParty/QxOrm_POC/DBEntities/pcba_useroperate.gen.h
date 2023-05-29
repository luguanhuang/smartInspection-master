/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_useroperate.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_USEROPERATE_H_
#define _PCBAOI_PCBA_USEROPERATE_H_

class pcba_user;
class pcba_device;

class PCBAOI_EXPORT pcba_useroperate {

  QX_REGISTER_FRIEND_CLASS(pcba_useroperate)

public:
  typedef std::shared_ptr<pcba_user> type_userId;
  typedef std::shared_ptr<pcba_device> type_deviceId;

protected:
  QString m_operateId;
  long m_operateType;
  QDateTime m_operateTime;
  QString m_description;
  QString m_strReserve;
  int m_inactive;
  type_userId m_userId;
  type_deviceId m_deviceId;

public:
  pcba_useroperate();
  pcba_useroperate(const QString &id);
  virtual ~pcba_useroperate();

  QString getoperateId() const;
  long getoperateType() const;
  QDateTime getoperateTime() const;
  QString getdescription() const;
  QString getstrReserve() const;
  int getinactive() const;
  type_userId getuserId() const;
  type_deviceId getdeviceId() const;

  void setoperateId(const QString &val);
  void setoperateType(const long &val);
  void setoperateTime(const QDateTime &val);
  void setdescription(const QString &val);
  void setstrReserve(const QString &val);
  void setinactive(const int &val);
  void setuserId(const type_userId &val);
  void setdeviceId(const type_deviceId &val);

  type_userId getuserId(bool bLoadFromDatabase,
                        const QString &sAppendRelations = QString(),
                        QSqlDatabase *pDatabase = NULL,
                        QSqlError *pDaoError = NULL);
  type_deviceId getdeviceId(bool bLoadFromDatabase,
                            const QString &sAppendRelations = QString(),
                            QSqlDatabase *pDatabase = NULL,
                            QSqlError *pDaoError = NULL);

public:
  static QString relation_userId(bool key = false) {
    Q_UNUSED(key);
    return "userId";
  }
  static QString relation_deviceId(bool key = false) {
    Q_UNUSED(key);
    return "deviceId";
  }

public:
  static QString column_operateId(bool key = false) {
    Q_UNUSED(key);
    return "operateId";
  }
  static QString column_operateType(bool key = false) {
    Q_UNUSED(key);
    return "operateType";
  }
  static QString column_operateTime(bool key = false) {
    Q_UNUSED(key);
    return "operateTime";
  }
  static QString column_description(bool key = false) {
    Q_UNUSED(key);
    return "description";
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
    return "pcba_useroperate";
  }
};

typedef std::shared_ptr<pcba_useroperate> pcba_useroperate_ptr;
typedef qx::QxCollection<QString, pcba_useroperate_ptr>
    list_of_pcba_useroperate;
typedef std::shared_ptr<list_of_pcba_useroperate> list_of_pcba_useroperate_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_useroperate, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_useroperate,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_useroperate)

#include "pcba_device.gen.h"
#include "pcba_user.gen.h"

#endif // _PCBAOI_PCBA_USEROPERATE_H_
