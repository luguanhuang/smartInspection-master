/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_pintype.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_PINTYPE_H_
#define _PCBAOI_PCBA_PINTYPE_H_

class pcba_pinoncomponent;

class PCBAOI_EXPORT pcba_pintype {

  QX_REGISTER_FRIEND_CLASS(pcba_pintype)

public:
  typedef qx::QxCollection<QString, std::shared_ptr<pcba_pinoncomponent>>
      type_list_of_pcba_pinoncomponent;

protected:
  QString m_pinTypeId;
  QString m_nameEN;
  QString m_nameCN;
  double m_width;
  double m_length1;
  double m_length2;
  double m_length3;
  QString m_strReserve;
  int m_inActive;
  type_list_of_pcba_pinoncomponent m_list_of_pcba_pinoncomponent;

public:
  pcba_pintype();
  pcba_pintype(const QString &id);
  virtual ~pcba_pintype();

  QString getpinTypeId() const;
  QString getnameEN() const;
  QString getnameCN() const;
  double getwidth() const;
  double getlength1() const;
  double getlength2() const;
  double getlength3() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_list_of_pcba_pinoncomponent getlist_of_pcba_pinoncomponent() const;
  type_list_of_pcba_pinoncomponent &list_of_pcba_pinoncomponent();
  const type_list_of_pcba_pinoncomponent &list_of_pcba_pinoncomponent() const;

  void setpinTypeId(const QString &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setwidth(const double &val);
  void setlength1(const double &val);
  void setlength2(const double &val);
  void setlength3(const double &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void
  setlist_of_pcba_pinoncomponent(const type_list_of_pcba_pinoncomponent &val);

  type_list_of_pcba_pinoncomponent getlist_of_pcba_pinoncomponent(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_list_of_pcba_pinoncomponent &list_of_pcba_pinoncomponent(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_list_of_pcba_pinoncomponent(bool key = false) {
    Q_UNUSED(key);
    return "list_of_pcba_pinoncomponent";
  }

public:
  static QString column_pinTypeId(bool key = false) {
    Q_UNUSED(key);
    return "pinTypeId";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
  }
  static QString column_width(bool key = false) {
    Q_UNUSED(key);
    return "width";
  }
  static QString column_length1(bool key = false) {
    Q_UNUSED(key);
    return "length1";
  }
  static QString column_length2(bool key = false) {
    Q_UNUSED(key);
    return "length2";
  }
  static QString column_length3(bool key = false) {
    Q_UNUSED(key);
    return "length3";
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
    return "pcba_pintype";
  }
};

typedef std::shared_ptr<pcba_pintype> pcba_pintype_ptr;
typedef qx::QxCollection<QString, pcba_pintype_ptr> list_of_pcba_pintype;
typedef std::shared_ptr<list_of_pcba_pintype> list_of_pcba_pintype_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_pintype, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_pintype,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_pintype)

#include "pcba_pinoncomponent.gen.h"

#endif // _PCBAOI_PCBA_PINTYPE_H_
