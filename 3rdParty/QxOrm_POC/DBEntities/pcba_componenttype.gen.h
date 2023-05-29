/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_componenttype.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_COMPONENTTYPE_H_
#define _PCBAOI_PCBA_COMPONENTTYPE_H_

class pcba_component;

class PCBAOI_EXPORT pcba_componenttype {

  QX_REGISTER_FRIEND_CLASS(pcba_componenttype)

public:
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_component>>
      type_list_of_pcba_component;

protected:
  QString m_componentTypeId;
  QString m_nameEN;
  QString m_nameCN;
  QString m_strReserve;
  int m_inActive;
  type_list_of_pcba_component m_list_of_pcba_component;

public:
  pcba_componenttype();
  pcba_componenttype(const QString &id);
  virtual ~pcba_componenttype();

  QString getcomponentTypeId() const;
  QString getnameEN() const;
  QString getnameCN() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_list_of_pcba_component getlist_of_pcba_component() const;
  type_list_of_pcba_component &list_of_pcba_component();
  const type_list_of_pcba_component &list_of_pcba_component() const;

  void setcomponentTypeId(const QString &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void setlist_of_pcba_component(const type_list_of_pcba_component &val);

  type_list_of_pcba_component getlist_of_pcba_component(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_component &list_of_pcba_component(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_list_of_pcba_component(bool key = false) {
    Q_UNUSED(key);
    return "list_of_pcba_component";
  }

public:
  static QString column_componentTypeId(bool key = false) {
    Q_UNUSED(key);
    return "componentTypeId";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
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
    return "pcba_componenttype";
  }
};

typedef std::shared_ptr<pcba_componenttype> pcba_componenttype_ptr;
typedef qx::QxCollection<QString, pcba_componenttype_ptr>
    list_of_pcba_componenttype;
typedef std::shared_ptr<list_of_pcba_componenttype>
    list_of_pcba_componenttype_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_componenttype, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_componenttype,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_componenttype)

#include "pcba_component.gen.h"

#endif // _PCBAOI_PCBA_COMPONENTTYPE_H_
