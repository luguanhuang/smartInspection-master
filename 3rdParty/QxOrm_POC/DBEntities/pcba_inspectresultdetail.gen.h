/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_inspectresultdetail.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_INSPECTRESULTDETAIL_H_
#define _PCBAOI_PCBA_INSPECTRESULTDETAIL_H_

class pcba_inspectresult;
class pcba_subprogramitem;

class PCBAOI_EXPORT pcba_inspectresultdetail {

  QX_REGISTER_FRIEND_CLASS(pcba_inspectresultdetail)

public:
  typedef std::shared_ptr<pcba_inspectresult> type_inspectResultId;
  typedef std::shared_ptr<pcba_subprogramitem> type_subProgramItemId;

protected:
  QString m_inspectResultDetailId;
  int m_subBoardSerial;
  int m_result;
  int m_repair;
  type_inspectResultId m_inspectResultId;
  type_subProgramItemId m_subProgramItemId;

public:
  pcba_inspectresultdetail();
  pcba_inspectresultdetail(const QString &id);
  virtual ~pcba_inspectresultdetail();

  QString getinspectResultDetailId() const;
  int getsubBoardSerial() const;
  int getresult() const;
  int getrepair() const;
  type_inspectResultId getinspectResultId() const;
  type_subProgramItemId getsubProgramItemId() const;

  void setinspectResultDetailId(const QString &val);
  void setsubBoardSerial(const int &val);
  void setresult(const int &val);
  void setrepair(const int &val);
  void setinspectResultId(const type_inspectResultId &val);
  void setsubProgramItemId(const type_subProgramItemId &val);

  type_inspectResultId getinspectResultId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_subProgramItemId getsubProgramItemId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_inspectResultId(bool key = false) {
    Q_UNUSED(key);
    return "inspectResultId";
  }
  static QString relation_subProgramItemId(bool key = false) {
    Q_UNUSED(key);
    return "subProgramItemId";
  }

public:
  static QString column_inspectResultDetailId(bool key = false) {
    Q_UNUSED(key);
    return "inspectResultDetailId";
  }
  static QString column_subBoardSerial(bool key = false) {
    Q_UNUSED(key);
    return "subBoardSerial";
  }
  static QString column_result(bool key = false) {
    Q_UNUSED(key);
    return "result";
  }
  static QString column_repair(bool key = false) {
    Q_UNUSED(key);
    return "repair";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_inspectresultdetail";
  }
};

typedef std::shared_ptr<pcba_inspectresultdetail> pcba_inspectresultdetail_ptr;
typedef qx::QxCollection<QString, pcba_inspectresultdetail_ptr>
    list_of_pcba_inspectresultdetail;
typedef std::shared_ptr<list_of_pcba_inspectresultdetail>
    list_of_pcba_inspectresultdetail_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_inspectresultdetail, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_inspectresultdetail,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_inspectresultdetail)

#include "pcba_inspectresult.gen.h"
#include "pcba_subprogramitem.gen.h"

#endif // _PCBAOI_PCBA_INSPECTRESULTDETAIL_H_
