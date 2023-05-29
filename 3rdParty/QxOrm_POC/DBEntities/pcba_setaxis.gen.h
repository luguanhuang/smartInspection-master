/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_setaxis.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_SETAXIS_H_
#define _PCBAOI_PCBA_SETAXIS_H_

class PCBAOI_EXPORT pcba_setaxis {

  QX_REGISTER_FRIEND_CLASS(pcba_setaxis)

protected:
  QString m_setAxisId;
  int m_axisNo;
  long m_movePositionStep;
  double m_moveSpeedSpeed;
  double m_moveSpeedAcc;
  double m_moveSpeedDcc;
  double m_moveSpeedSmoothTime;
  int m_homeMode;

public:
  pcba_setaxis();
  pcba_setaxis(const QString &id);
  virtual ~pcba_setaxis();

  QString getsetAxisId() const;
  int getaxisNo() const;
  long getmovePositionStep() const;
  double getmoveSpeedSpeed() const;
  double getmoveSpeedAcc() const;
  double getmoveSpeedDcc() const;
  double getmoveSpeedSmoothTime() const;
  int gethomeMode() const;

  void setsetAxisId(const QString &val);
  void setaxisNo(const int &val);
  void setmovePositionStep(const long &val);
  void setmoveSpeedSpeed(const double &val);
  void setmoveSpeedAcc(const double &val);
  void setmoveSpeedDcc(const double &val);
  void setmoveSpeedSmoothTime(const double &val);
  void sethomeMode(const int &val);

public:
  static QString column_setAxisId(bool key = false) {
    Q_UNUSED(key);
    return "setAxisId";
  }
  static QString column_axisNo(bool key = false) {
    Q_UNUSED(key);
    return "axisNo";
  }
  static QString column_movePositionStep(bool key = false) {
    Q_UNUSED(key);
    return "movePositionStep";
  }
  static QString column_moveSpeedSpeed(bool key = false) {
    Q_UNUSED(key);
    return "moveSpeedSpeed";
  }
  static QString column_moveSpeedAcc(bool key = false) {
    Q_UNUSED(key);
    return "moveSpeedAcc";
  }
  static QString column_moveSpeedDcc(bool key = false) {
    Q_UNUSED(key);
    return "moveSpeedDcc";
  }
  static QString column_moveSpeedSmoothTime(bool key = false) {
    Q_UNUSED(key);
    return "moveSpeedSmoothTime";
  }
  static QString column_homeMode(bool key = false) {
    Q_UNUSED(key);
    return "homeMode";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_setaxis";
  }
};

typedef std::shared_ptr<pcba_setaxis> pcba_setaxis_ptr;
typedef qx::QxCollection<QString, pcba_setaxis_ptr> list_of_pcba_setaxis;
typedef std::shared_ptr<list_of_pcba_setaxis> list_of_pcba_setaxis_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_setaxis, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_setaxis,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_setaxis)

#endif // _PCBAOI_PCBA_SETAXIS_H_
