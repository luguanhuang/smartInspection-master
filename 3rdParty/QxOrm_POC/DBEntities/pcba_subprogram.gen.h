/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_subprogram.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_SUBPROGRAM_H_
#define _PCBAOI_PCBA_SUBPROGRAM_H_

class pcba_subboard;
class pcba_user;

class PCBAOI_EXPORT pcba_subprogram {

  QX_REGISTER_FRIEND_CLASS(pcba_subprogram)

public:
  typedef std::shared_ptr<pcba_subboard> type_subBoardId;
  typedef std::shared_ptr<pcba_user> type_creatorId;

protected:
  QString m_subProgramId;
  QString m_nameEN;
  QString m_nameCN;
  QDateTime m_createTime;
  int m_bFinished;
  QDateTime m_finishTime;
  QString m_description;
  type_subBoardId m_subBoardId;
  type_creatorId m_creatorId;

public:
  pcba_subprogram();
  pcba_subprogram(const QString &id);
  virtual ~pcba_subprogram();

  QString getsubProgramId() const;
  QString getnameEN() const;
  QString getnameCN() const;
  QDateTime getcreateTime() const;
  int getbFinished() const;
  QDateTime getfinishTime() const;
  QString getdescription() const;
  type_subBoardId getsubBoardId() const;
  type_creatorId getcreatorId() const;

  void setsubProgramId(const QString &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setcreateTime(const QDateTime &val);
  void setbFinished(const int &val);
  void setfinishTime(const QDateTime &val);
  void setdescription(const QString &val);
  void setsubBoardId(const type_subBoardId &val);
  void setcreatorId(const type_creatorId &val);

  type_subBoardId getsubBoardId(bool bLoadFromDatabase,
                                const QString &sAppendRelations = QString(),
                                QSqlDatabase *pDatabase = NULL,
                                QSqlError *pDaoError = NULL);
  type_creatorId getcreatorId(bool bLoadFromDatabase,
                              const QString &sAppendRelations = QString(),
                              QSqlDatabase *pDatabase = NULL,
                              QSqlError *pDaoError = NULL);

public:
  static QString relation_subBoardId(bool key = false) {
    Q_UNUSED(key);
    return "subBoardId";
  }
  static QString relation_creatorId(bool key = false) {
    Q_UNUSED(key);
    return "creatorId";
  }

public:
  static QString column_subProgramId(bool key = false) {
    Q_UNUSED(key);
    return "subProgramId";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
  }
  static QString column_createTime(bool key = false) {
    Q_UNUSED(key);
    return "createTime";
  }
  static QString column_bFinished(bool key = false) {
    Q_UNUSED(key);
    return "bFinished";
  }
  static QString column_finishTime(bool key = false) {
    Q_UNUSED(key);
    return "finishTime";
  }
  static QString column_description(bool key = false) {
    Q_UNUSED(key);
    return "description";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_subprogram";
  }
};

typedef std::shared_ptr<pcba_subprogram> pcba_subprogram_ptr;
typedef qx::QxCollection<QString, pcba_subprogram_ptr> list_of_pcba_subprogram;
typedef std::shared_ptr<list_of_pcba_subprogram> list_of_pcba_subprogram_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_subprogram, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_subprogram,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_subprogram)

#include "pcba_subboard.gen.h"
#include "pcba_user.gen.h"

#endif // _PCBAOI_PCBA_SUBPROGRAM_H_
