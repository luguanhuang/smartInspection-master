/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_algorithmconfigvalue.gen.h
 * @brief      算法对应具体参数值
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_ALGORITHMCONFIGVALUE_H_
#define _PCBAOI_PCBA_ALGORITHMCONFIGVALUE_H_

class pcba_inspectlib;

class PCBAOI_EXPORT pcba_algorithmconfigvalue {

  QX_REGISTER_FRIEND_CLASS(pcba_algorithmconfigvalue)

public:
  typedef std::shared_ptr<pcba_inspectlib> type_inspectLibItemId;

protected:
  QString m_id;
  int m_serial;
  double m_value00;
  double m_value01;
  double m_value02;
  double m_value03;
  double m_value04;
  double m_value05;
  double m_value06;
  double m_value07;
  double m_value08;
  double m_value09;
  double m_value10;
  double m_value11;
  double m_value12;
  double m_value13;
  double m_value14;
  double m_value15;
  double m_value16;
  double m_value17;
  double m_value18;
  double m_value19;
  type_inspectLibItemId m_inspectLibItemId;

public:
  pcba_algorithmconfigvalue();
  pcba_algorithmconfigvalue(const QString &id);
  virtual ~pcba_algorithmconfigvalue();

  QString getid() const;
  int getserial() const;
  double getvalue00() const;
  double getvalue01() const;
  double getvalue02() const;
  double getvalue03() const;
  double getvalue04() const;
  double getvalue05() const;
  double getvalue06() const;
  double getvalue07() const;
  double getvalue08() const;
  double getvalue09() const;
  double getvalue10() const;
  double getvalue11() const;
  double getvalue12() const;
  double getvalue13() const;
  double getvalue14() const;
  double getvalue15() const;
  double getvalue16() const;
  double getvalue17() const;
  double getvalue18() const;
  double getvalue19() const;
  type_inspectLibItemId getinspectLibItemId() const;

  void setid(const QString &val);
  void setserial(const int &val);
  void setvalue00(const double &val);
  void setvalue01(const double &val);
  void setvalue02(const double &val);
  void setvalue03(const double &val);
  void setvalue04(const double &val);
  void setvalue05(const double &val);
  void setvalue06(const double &val);
  void setvalue07(const double &val);
  void setvalue08(const double &val);
  void setvalue09(const double &val);
  void setvalue10(const double &val);
  void setvalue11(const double &val);
  void setvalue12(const double &val);
  void setvalue13(const double &val);
  void setvalue14(const double &val);
  void setvalue15(const double &val);
  void setvalue16(const double &val);
  void setvalue17(const double &val);
  void setvalue18(const double &val);
  void setvalue19(const double &val);
  void setinspectLibItemId(const type_inspectLibItemId &val);

  type_inspectLibItemId getinspectLibItemId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_inspectLibItemId(bool key = false) {
    Q_UNUSED(key);
    return "inspectLibItemId";
  }

public:
  static QString column_id(bool key = false) {
    Q_UNUSED(key);
    return "id";
  }
  static QString column_serial(bool key = false) {
    Q_UNUSED(key);
    return "serial";
  }
  static QString column_value00(bool key = false) {
    Q_UNUSED(key);
    return "value00";
  }
  static QString column_value01(bool key = false) {
    Q_UNUSED(key);
    return "value01";
  }
  static QString column_value02(bool key = false) {
    Q_UNUSED(key);
    return "value02";
  }
  static QString column_value03(bool key = false) {
    Q_UNUSED(key);
    return "value03";
  }
  static QString column_value04(bool key = false) {
    Q_UNUSED(key);
    return "value04";
  }
  static QString column_value05(bool key = false) {
    Q_UNUSED(key);
    return "value05";
  }
  static QString column_value06(bool key = false) {
    Q_UNUSED(key);
    return "value06";
  }
  static QString column_value07(bool key = false) {
    Q_UNUSED(key);
    return "value07";
  }
  static QString column_value08(bool key = false) {
    Q_UNUSED(key);
    return "value08";
  }
  static QString column_value09(bool key = false) {
    Q_UNUSED(key);
    return "value09";
  }
  static QString column_value10(bool key = false) {
    Q_UNUSED(key);
    return "value10";
  }
  static QString column_value11(bool key = false) {
    Q_UNUSED(key);
    return "value11";
  }
  static QString column_value12(bool key = false) {
    Q_UNUSED(key);
    return "value12";
  }
  static QString column_value13(bool key = false) {
    Q_UNUSED(key);
    return "value13";
  }
  static QString column_value14(bool key = false) {
    Q_UNUSED(key);
    return "value14";
  }
  static QString column_value15(bool key = false) {
    Q_UNUSED(key);
    return "value15";
  }
  static QString column_value16(bool key = false) {
    Q_UNUSED(key);
    return "value16";
  }
  static QString column_value17(bool key = false) {
    Q_UNUSED(key);
    return "value17";
  }
  static QString column_value18(bool key = false) {
    Q_UNUSED(key);
    return "value18";
  }
  static QString column_value19(bool key = false) {
    Q_UNUSED(key);
    return "value19";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_algorithmconfigvalue";
  }
};

typedef std::shared_ptr<pcba_algorithmconfigvalue>
    pcba_algorithmconfigvalue_ptr;
typedef qx::QxCollection<QString, pcba_algorithmconfigvalue_ptr>
    list_of_pcba_algorithmconfigvalue;
typedef std::shared_ptr<list_of_pcba_algorithmconfigvalue>
    list_of_pcba_algorithmconfigvalue_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_algorithmconfigvalue, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_algorithmconfigvalue,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_algorithmconfigvalue)

#include "pcba_inspectlib.gen.h"

#endif // _PCBAOI_PCBA_ALGORITHMCONFIGVALUE_H_
