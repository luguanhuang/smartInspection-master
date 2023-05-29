/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_defect.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_DEFECT_H_
#define _PCBAOI_PCBA_DEFECT_H_

class pcba_algorithm4defect;
class pcba_defect;
class pcba_inspectlib;

class PCBAOI_EXPORT pcba_defect {

  QX_REGISTER_FRIEND_CLASS(pcba_defect)

public:
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_algorithm4defect>>
      type_list_of_pcba_algorithm4defect;
  typedef std::shared_ptr<pcba_defect> type_parentDefectId;
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_defect>>
      type_list_of_parentDefectId_inverse;
  typedef std::shared_ptr<pcba_defect> type_brotherDefectId;
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_defect>>
      type_list_of_brotherDefectId_inverse;
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_inspectlib>>
      type_list_of_pcba_inspectlib;

protected:
  QString m_defectId;
  QString m_defectNameEN;
  QString m_defectNameCN;
  QString m_description;
  QString m_strReserve;
  int m_inActive;
  type_list_of_pcba_algorithm4defect m_list_of_pcba_algorithm4defect;
  type_parentDefectId m_parentDefectId;
  type_list_of_parentDefectId_inverse m_list_of_parentDefectId_inverse;
  type_brotherDefectId m_brotherDefectId;
  type_list_of_brotherDefectId_inverse m_list_of_brotherDefectId_inverse;
  type_list_of_pcba_inspectlib m_list_of_pcba_inspectlib;

public:
  pcba_defect();
  pcba_defect(const QString &id);
  virtual ~pcba_defect();

  QString getdefectId() const;
  QString getdefectNameEN() const;
  QString getdefectNameCN() const;
  QString getdescription() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_list_of_pcba_algorithm4defect getlist_of_pcba_algorithm4defect() const;
  type_list_of_pcba_algorithm4defect &list_of_pcba_algorithm4defect();
  const type_list_of_pcba_algorithm4defect &
  list_of_pcba_algorithm4defect() const;
  type_parentDefectId getparentDefectId() const;
  type_list_of_parentDefectId_inverse getlist_of_parentDefectId_inverse() const;
  type_list_of_parentDefectId_inverse &list_of_parentDefectId_inverse();
  const type_list_of_parentDefectId_inverse &
  list_of_parentDefectId_inverse() const;
  type_brotherDefectId getbrotherDefectId() const;
  type_list_of_brotherDefectId_inverse
  getlist_of_brotherDefectId_inverse() const;
  type_list_of_brotherDefectId_inverse &list_of_brotherDefectId_inverse();
  const type_list_of_brotherDefectId_inverse &
  list_of_brotherDefectId_inverse() const;
  type_list_of_pcba_inspectlib getlist_of_pcba_inspectlib() const;
  type_list_of_pcba_inspectlib &list_of_pcba_inspectlib();
  const type_list_of_pcba_inspectlib &list_of_pcba_inspectlib() const;

  void setdefectId(const QString &val);
  void setdefectNameEN(const QString &val);
  void setdefectNameCN(const QString &val);
  void setdescription(const QString &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void setlist_of_pcba_algorithm4defect(
      const type_list_of_pcba_algorithm4defect &val);
  void setparentDefectId(const type_parentDefectId &val);
  void setlist_of_parentDefectId_inverse(
      const type_list_of_parentDefectId_inverse &val);
  void setbrotherDefectId(const type_brotherDefectId &val);
  void setlist_of_brotherDefectId_inverse(
      const type_list_of_brotherDefectId_inverse &val);
  void setlist_of_pcba_inspectlib(const type_list_of_pcba_inspectlib &val);

  type_list_of_pcba_algorithm4defect getlist_of_pcba_algorithm4defect(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_algorithm4defect &list_of_pcba_algorithm4defect(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_parentDefectId getparentDefectId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_parentDefectId_inverse getlist_of_parentDefectId_inverse(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_parentDefectId_inverse &list_of_parentDefectId_inverse(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_brotherDefectId getbrotherDefectId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_brotherDefectId_inverse getlist_of_brotherDefectId_inverse(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_brotherDefectId_inverse &list_of_brotherDefectId_inverse(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_inspectlib getlist_of_pcba_inspectlib(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_inspectlib &list_of_pcba_inspectlib(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_list_of_pcba_algorithm4defect(bool key = false) {
    Q_UNUSED(key);
    return "list_of_pcba_algorithm4defect";
  }
  static QString relation_parentDefectId(bool key = false) {
    Q_UNUSED(key);
    return "parentDefectId";
  }
  static QString relation_list_of_parentDefectId_inverse(bool key = false) {
    Q_UNUSED(key);
    return "list_of_parentDefectId_inverse";
  }
  static QString relation_brotherDefectId(bool key = false) {
    Q_UNUSED(key);
    return "brotherDefectId";
  }
  static QString relation_list_of_brotherDefectId_inverse(bool key = false) {
    Q_UNUSED(key);
    return "list_of_brotherDefectId_inverse";
  }
  static QString relation_list_of_pcba_inspectlib(bool key = false) {
    Q_UNUSED(key);
    return "list_of_pcba_inspectlib";
  }

public:
  static QString column_defectId(bool key = false) {
    Q_UNUSED(key);
    return "defectId";
  }
  static QString column_defectNameEN(bool key = false) {
    Q_UNUSED(key);
    return "defectNameEN";
  }
  static QString column_defectNameCN(bool key = false) {
    Q_UNUSED(key);
    return "defectNameCN";
  }
  static QString column_description(bool key = false) {
    Q_UNUSED(key);
    return "description";
  }
  static QString column_strReserve(bool key = false) {
    Q_UNUSED(key);
    return "strReserve";
  }
  static QString column_inActive(bool key = false) {
    Q_UNUSED(key);
    return "inActive";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_defect";
  }
};

typedef std::shared_ptr<pcba_defect> pcba_defect_ptr;
typedef qx::QxCollection<QString, pcba_defect_ptr> list_of_pcba_defect;
typedef std::shared_ptr<list_of_pcba_defect> list_of_pcba_defect_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_defect, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_defect,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_defect)

#include "pcba_algorithm4defect.gen.h"
#include "pcba_defect.gen.h"
#include "pcba_inspectlib.gen.h"

#endif // _PCBAOI_PCBA_DEFECT_H_
