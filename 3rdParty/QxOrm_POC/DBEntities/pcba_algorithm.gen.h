/************************************************************************************************
** File created by QxEntityEditor 1.2.6 (2022/08/19 22:57) : please, do NOT
*modify this file ! **
************************************************************************************************/

/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_algorithm.gen.h
 * @brief      算法表ORM
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#ifndef _PCBAOI_PCBA_ALGORITHM_H_
#define _PCBAOI_PCBA_ALGORITHM_H_

class pcba_algorithm4defect;
class pcba_algorithmconfig;
class pcba_inspectlib;

class PCBAOI_EXPORT pcba_algorithm {

  QX_REGISTER_FRIEND_CLASS(pcba_algorithm)

public:
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_algorithm4defect>>
      type_list_of_pcba_algorithm4defect;
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_algorithmconfig>>
      type_list_of_pcba_algorithmconfig;
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_inspectlib>>
      type_list_of_pcba_inspectlib;

protected:
  QString m_algorithmId;
  QString m_nameEN;
  QString m_nameCN;
  long m_nType;
  long m_nLightSource;
  QString m_description;
  QString m_strReserve;
  int m_inActive;
  type_list_of_pcba_algorithm4defect m_list_of_pcba_algorithm4defect;
  type_list_of_pcba_algorithmconfig m_list_of_pcba_algorithmconfig;
  type_list_of_pcba_inspectlib m_list_of_pcba_inspectlib;

public:
  pcba_algorithm();
  pcba_algorithm(const QString &id);
  virtual ~pcba_algorithm();

  QString getalgorithmId() const;
  QString getnameEN() const;
  QString getnameCN() const;
  long getnType() const;
  long getnLightSource() const;
  QString getdescription() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_list_of_pcba_algorithm4defect getlist_of_pcba_algorithm4defect() const;
  type_list_of_pcba_algorithm4defect &list_of_pcba_algorithm4defect();
  const type_list_of_pcba_algorithm4defect &
  list_of_pcba_algorithm4defect() const;
  type_list_of_pcba_algorithmconfig getlist_of_pcba_algorithmconfig() const;
  type_list_of_pcba_algorithmconfig &list_of_pcba_algorithmconfig();
  const type_list_of_pcba_algorithmconfig &list_of_pcba_algorithmconfig() const;
  type_list_of_pcba_inspectlib getlist_of_pcba_inspectlib() const;
  type_list_of_pcba_inspectlib &list_of_pcba_inspectlib();
  const type_list_of_pcba_inspectlib &list_of_pcba_inspectlib() const;

  void setalgorithmId(const QString &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setnType(const long &val);
  void setnLightSource(const long &val);
  void setdescription(const QString &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void setlist_of_pcba_algorithm4defect(
      const type_list_of_pcba_algorithm4defect &val);
  void
  setlist_of_pcba_algorithmconfig(const type_list_of_pcba_algorithmconfig &val);
  void setlist_of_pcba_inspectlib(const type_list_of_pcba_inspectlib &val);

  type_list_of_pcba_algorithm4defect getlist_of_pcba_algorithm4defect(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_algorithm4defect &list_of_pcba_algorithm4defect(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_algorithmconfig getlist_of_pcba_algorithmconfig(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_algorithmconfig &list_of_pcba_algorithmconfig(
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
  static QString relation_list_of_pcba_algorithmconfig(bool key = false) {
    Q_UNUSED(key);
    return "list_of_pcba_algorithmconfig";
  }
  static QString relation_list_of_pcba_inspectlib(bool key = false) {
    Q_UNUSED(key);
    return "list_of_pcba_inspectlib";
  }

public:
  static QString column_algorithmId(bool key = false) {
    Q_UNUSED(key);
    return "algorithmId";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
  }
  static QString column_nType(bool key = false) {
    Q_UNUSED(key);
    return "nType";
  }
  static QString column_nLightSource(bool key = false) {
    Q_UNUSED(key);
    return "nLightSource";
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
    return "pcba_algorithm";
  }
};

typedef std::shared_ptr<pcba_algorithm> pcba_algorithm_ptr;
typedef qx::QxCollection<QString, pcba_algorithm_ptr> list_of_pcba_algorithm;
typedef std::shared_ptr<list_of_pcba_algorithm> list_of_pcba_algorithm_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_algorithm, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_algorithm,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_algorithm)

#include "pcba_algorithm4defect.gen.h"
#include "pcba_algorithmconfig.gen.h"
#include "pcba_inspectlib.gen.h"

#endif // _PCBAOI_PCBA_ALGORITHM_H_
