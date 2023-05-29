/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_inspectlib.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_INSPECTLIB_H_
#define _PCBAOI_PCBA_INSPECTLIB_H_

class pcba_component;
class pcba_defect;
class pcba_algorithm;

class PCBAOI_EXPORT pcba_inspectlib {

  QX_REGISTER_FRIEND_CLASS(pcba_inspectlib)

public:
  typedef std::shared_ptr<pcba_component> type_componentId;
  typedef std::shared_ptr<pcba_defect> type_defectId;
  typedef std::shared_ptr<pcba_algorithm> type_algorithmId;

protected:
  QString m_inspectLibItemId;
  type_componentId m_componentId;
  type_defectId m_defectId;
  type_algorithmId m_algorithmId;

public:
  pcba_inspectlib();
  pcba_inspectlib(const QString &id);
  virtual ~pcba_inspectlib();

  QString getinspectLibItemId() const;
  type_componentId getcomponentId() const;
  type_defectId getdefectId() const;
  type_algorithmId getalgorithmId() const;

  void setinspectLibItemId(const QString &val);
  void setcomponentId(const type_componentId &val);
  void setdefectId(const type_defectId &val);
  void setalgorithmId(const type_algorithmId &val);

  type_componentId getcomponentId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);
  type_defectId getdefectId(bool bLoadFromDatabase,
                            const QString &sAppendRelations = QString(),
                            QSqlDatabase *pDatabase = NULL,
                            QSqlError *pDaoError = NULL);
  type_algorithmId getalgorithmId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);

public:
  static QString relation_componentId(bool key = false) {
    Q_UNUSED(key);
    return "componentId";
  }
  static QString relation_defectId(bool key = false) {
    Q_UNUSED(key);
    return "defectId";
  }
  static QString relation_algorithmId(bool key = false) {
    Q_UNUSED(key);
    return "algorithmId";
  }

public:
  static QString column_inspectLibItemId(bool key = false) {
    Q_UNUSED(key);
    return "inspectLibItemId";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_inspectlib";
  }
};

typedef std::shared_ptr<pcba_inspectlib> pcba_inspectlib_ptr;
typedef qx::QxCollection<QString, pcba_inspectlib_ptr> list_of_pcba_inspectlib;
typedef std::shared_ptr<list_of_pcba_inspectlib> list_of_pcba_inspectlib_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_inspectlib, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_inspectlib,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_inspectlib)

#include "pcba_algorithm.gen.h"
#include "pcba_component.gen.h"
#include "pcba_defect.gen.h"

#endif // _PCBAOI_PCBA_INSPECTLIB_H_
