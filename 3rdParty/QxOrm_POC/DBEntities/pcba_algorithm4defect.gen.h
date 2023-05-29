/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_algorithm4defect.gen.h
 * @brief      算法与缺陷对应表ORM
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#ifndef _PCBAOI_PCBA_ALGORITHM4DEFECT_H_
#define _PCBAOI_PCBA_ALGORITHM4DEFECT_H_

class pcba_algorithm;
class pcba_defect;

class PCBAOI_EXPORT pcba_algorithm4defect {

  QX_REGISTER_FRIEND_CLASS(pcba_algorithm4defect)

public:
  typedef std::shared_ptr<pcba_algorithm> type_algorithmId;
  typedef std::shared_ptr<pcba_defect> type_defectId;

protected:
  QString m_id;
  type_algorithmId m_algorithmId;
  type_defectId m_defectId;

public:
  pcba_algorithm4defect();
  pcba_algorithm4defect(const QString &id);
  virtual ~pcba_algorithm4defect();

  QString getid() const;
  type_algorithmId getalgorithmId() const;
  type_defectId getdefectId() const;

  void setid(const QString &val);
  void setalgorithmId(const type_algorithmId &val);
  void setdefectId(const type_defectId &val);

  type_algorithmId getalgorithmId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);
  type_defectId getdefectId(bool bLoadFromDatabase,
                            const QString &sAppendRelations = QString(),
                            QSqlDatabase *pDatabase = NULL,
                            QSqlError *pDaoError = NULL);

public:
  static QString relation_algorithmId(bool key = false) {
    Q_UNUSED(key);
    return "algorithmId";
  }
  static QString relation_defectId(bool key = false) {
    Q_UNUSED(key);
    return "defectId";
  }

public:
  static QString column_id(bool key = false) {
    Q_UNUSED(key);
    return "id";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_algorithm4defect";
  }
};

typedef std::shared_ptr<pcba_algorithm4defect> pcba_algorithm4defect_ptr;
typedef qx::QxCollection<QString, pcba_algorithm4defect_ptr>
    list_of_pcba_algorithm4defect;
typedef std::shared_ptr<list_of_pcba_algorithm4defect>
    list_of_pcba_algorithm4defect_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_algorithm4defect, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_algorithm4defect,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_algorithm4defect)

#include "pcba_algorithm.gen.h"
#include "pcba_defect.gen.h"

#endif // _PCBAOI_PCBA_ALGORITHM4DEFECT_H_
