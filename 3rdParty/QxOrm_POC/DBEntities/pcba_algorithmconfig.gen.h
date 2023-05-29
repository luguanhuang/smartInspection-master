/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_algorithmconfig.gen.h
 * @brief      算法参数表
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_ALGORITHMCONFIG_H_
#define _PCBAOI_PCBA_ALGORITHMCONFIG_H_

class pcba_algorithm;

class PCBAOI_EXPORT pcba_algorithmconfig {

  QX_REGISTER_FRIEND_CLASS(pcba_algorithmconfig)

public:
  typedef std::shared_ptr<pcba_algorithm> type_algorithmId;

protected:
  QString m_algorithmConfigId;
  int m_serial;
  QString m_nameEN;
  QString m_nameCN;
  long m_dataType;
  long m_dataArraySize;
  double m_defaultValue00;
  double m_defaultValue01;
  double m_defaultValue02;
  double m_defaultValue03;
  double m_defaultValue04;
  double m_defaultValue05;
  double m_defaultValue06;
  double m_defaultValue07;
  double m_defaultValue08;
  double m_defaultValue09;
  double m_defaultValue10;
  double m_defaultValue11;
  double m_defaultValue12;
  double m_defaultValue13;
  double m_defaultValue14;
  double m_defaultValue15;
  double m_defaultValue16;
  double m_defaultValue17;
  double m_defaultValue18;
  double m_defaultValue19;
  QString m_strReserve;
  int m_inActive;
  type_algorithmId m_algorithmId;

public:
  pcba_algorithmconfig();
  pcba_algorithmconfig(const QString &id);
  virtual ~pcba_algorithmconfig();

  QString getalgorithmConfigId() const;
  int getserial() const;
  QString getnameEN() const;
  QString getnameCN() const;
  long getdataType() const;
  long getdataArraySize() const;
  double getdefaultValue00() const;
  double getdefaultValue01() const;
  double getdefaultValue02() const;
  double getdefaultValue03() const;
  double getdefaultValue04() const;
  double getdefaultValue05() const;
  double getdefaultValue06() const;
  double getdefaultValue07() const;
  double getdefaultValue08() const;
  double getdefaultValue09() const;
  double getdefaultValue10() const;
  double getdefaultValue11() const;
  double getdefaultValue12() const;
  double getdefaultValue13() const;
  double getdefaultValue14() const;
  double getdefaultValue15() const;
  double getdefaultValue16() const;
  double getdefaultValue17() const;
  double getdefaultValue18() const;
  double getdefaultValue19() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_algorithmId getalgorithmId() const;

  void setalgorithmConfigId(const QString &val);
  void setserial(const int &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setdataType(const long &val);
  void setdataArraySize(const long &val);
  void setdefaultValue00(const double &val);
  void setdefaultValue01(const double &val);
  void setdefaultValue02(const double &val);
  void setdefaultValue03(const double &val);
  void setdefaultValue04(const double &val);
  void setdefaultValue05(const double &val);
  void setdefaultValue06(const double &val);
  void setdefaultValue07(const double &val);
  void setdefaultValue08(const double &val);
  void setdefaultValue09(const double &val);
  void setdefaultValue10(const double &val);
  void setdefaultValue11(const double &val);
  void setdefaultValue12(const double &val);
  void setdefaultValue13(const double &val);
  void setdefaultValue14(const double &val);
  void setdefaultValue15(const double &val);
  void setdefaultValue16(const double &val);
  void setdefaultValue17(const double &val);
  void setdefaultValue18(const double &val);
  void setdefaultValue19(const double &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void setalgorithmId(const type_algorithmId &val);

  type_algorithmId getalgorithmId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);

public:
  static QString relation_algorithmId(bool key = false) {
    Q_UNUSED(key);
    return "algorithmId";
  }

public:
  static QString column_algorithmConfigId(bool key = false) {
    Q_UNUSED(key);
    return "algorithmConfigId";
  }
  static QString column_serial(bool key = false) {
    Q_UNUSED(key);
    return "serial";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
  }
  static QString column_dataType(bool key = false) {
    Q_UNUSED(key);
    return "dataType";
  }
  static QString column_dataArraySize(bool key = false) {
    Q_UNUSED(key);
    return "dataArraySize";
  }
  static QString column_defaultValue00(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue00";
  }
  static QString column_defaultValue01(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue01";
  }
  static QString column_defaultValue02(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue02";
  }
  static QString column_defaultValue03(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue03";
  }
  static QString column_defaultValue04(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue04";
  }
  static QString column_defaultValue05(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue05";
  }
  static QString column_defaultValue06(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue06";
  }
  static QString column_defaultValue07(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue07";
  }
  static QString column_defaultValue08(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue08";
  }
  static QString column_defaultValue09(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue09";
  }
  static QString column_defaultValue10(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue10";
  }
  static QString column_defaultValue11(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue11";
  }
  static QString column_defaultValue12(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue12";
  }
  static QString column_defaultValue13(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue13";
  }
  static QString column_defaultValue14(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue14";
  }
  static QString column_defaultValue15(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue15";
  }
  static QString column_defaultValue16(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue16";
  }
  static QString column_defaultValue17(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue17";
  }
  static QString column_defaultValue18(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue18";
  }
  static QString column_defaultValue19(bool key = false) {
    Q_UNUSED(key);
    return "defaultValue19";
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
    return "pcba_algorithmconfig";
  }
};

typedef std::shared_ptr<pcba_algorithmconfig> pcba_algorithmconfig_ptr;
typedef qx::QxCollection<QString, pcba_algorithmconfig_ptr>
    list_of_pcba_algorithmconfig;
typedef std::shared_ptr<list_of_pcba_algorithmconfig>
    list_of_pcba_algorithmconfig_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_algorithmconfig, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_algorithmconfig,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_algorithmconfig)

#include "pcba_algorithm.gen.h"

#endif // _PCBAOI_PCBA_ALGORITHMCONFIG_H_
