/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_inspectresult.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#ifndef _PCBAOI_PCBA_INSPECTRESULT_H_
#define _PCBAOI_PCBA_INSPECTRESULT_H_

class pcba_inspectscheme;
class pcba_user;
class pcba_device;

class PCBAOI_EXPORT pcba_inspectresult {

  QX_REGISTER_FRIEND_CLASS(pcba_inspectresult)

public:
  typedef std::shared_ptr<pcba_inspectscheme> type_inspectSchemeId;
  typedef std::shared_ptr<pcba_user> type_inspectorId;
  typedef std::shared_ptr<pcba_device> type_deviceId;

protected:
  QString m_inspectResultId;
  QString m_uniqueBoardIdentifier;
  QDateTime m_inspectTime;
  long m_nResult;
  long m_repair;
  QString m_strReserve;
  int m_inactive;
  type_inspectSchemeId m_inspectSchemeId;
  type_inspectorId m_inspectorId;
  type_deviceId m_deviceId;

public:
  pcba_inspectresult();
  pcba_inspectresult(const QString &id);
  virtual ~pcba_inspectresult();

  QString getinspectResultId() const;
  QString getuniqueBoardIdentifier() const;
  QDateTime getinspectTime() const;
  long getnResult() const;
  long getrepair() const;
  QString getstrReserve() const;
  int getinactive() const;
  type_inspectSchemeId getinspectSchemeId() const;
  type_inspectorId getinspectorId() const;
  type_deviceId getdeviceId() const;

  void setinspectResultId(const QString &val);
  void setuniqueBoardIdentifier(const QString &val);
  void setinspectTime(const QDateTime &val);
  void setnResult(const long &val);
  void setrepair(const long &val);
  void setstrReserve(const QString &val);
  void setinactive(const int &val);
  void setinspectSchemeId(const type_inspectSchemeId &val);
  void setinspectorId(const type_inspectorId &val);
  void setdeviceId(const type_deviceId &val);

  type_inspectSchemeId getinspectSchemeId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_inspectorId getinspectorId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);
  type_deviceId getdeviceId(bool bLoadFromDatabase,
                            const QString &sAppendRelations = QString(),
                            QSqlDatabase *pDatabase = NULL,
                            QSqlError *pDaoError = NULL);

public:
  static QString relation_inspectSchemeId(bool key = false) {
    Q_UNUSED(key);
    return "inspectSchemeId";
  }
  static QString relation_inspectorId(bool key = false) {
    Q_UNUSED(key);
    return "inspectorId";
  }
  static QString relation_deviceId(bool key = false) {
    Q_UNUSED(key);
    return "deviceId";
  }

public:
  static QString column_inspectResultId(bool key = false) {
    Q_UNUSED(key);
    return "inspectResultId";
  }
  static QString column_uniqueBoardIdentifier(bool key = false) {
    Q_UNUSED(key);
    return "uniqueBoardIdentifier";
  }
  static QString column_inspectTime(bool key = false) {
    Q_UNUSED(key);
    return "inspectTime";
  }
  static QString column_nResult(bool key = false) {
    Q_UNUSED(key);
    return "nResult";
  }
  static QString column_repair(bool key = false) {
    Q_UNUSED(key);
    return "repair";
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
    return "pcba_inspectresult";
  }
};

typedef std::shared_ptr<pcba_inspectresult> pcba_inspectresult_ptr;
typedef qx::QxCollection<QString, pcba_inspectresult_ptr>
    list_of_pcba_inspectresult;
typedef std::shared_ptr<list_of_pcba_inspectresult>
    list_of_pcba_inspectresult_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_inspectresult, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_inspectresult,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_inspectresult)

#include "pcba_device.gen.h"
#include "pcba_inspectscheme.gen.h"
#include "pcba_user.gen.h"

#endif // _PCBAOI_PCBA_INSPECTRESULT_H_
