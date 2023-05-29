/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_setlight.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_SETLIGHT_H_
#define _PCBAOI_PCBA_SETLIGHT_H_

class PCBAOI_EXPORT pcba_setlight {

  QX_REGISTER_FRIEND_CLASS(pcba_setlight)

protected:
  QString m_setLightId;
  int m_lightSerial;
  long m_brightness;

public:
  pcba_setlight();
  pcba_setlight(const QString &id);
  virtual ~pcba_setlight();

  QString getsetLightId() const;
  int getlightSerial() const;
  long getbrightness() const;

  void setsetLightId(const QString &val);
  void setlightSerial(const int &val);
  void setbrightness(const long &val);

public:
  static QString column_setLightId(bool key = false) {
    Q_UNUSED(key);
    return "setLightId";
  }
  static QString column_lightSerial(bool key = false) {
    Q_UNUSED(key);
    return "lightSerial";
  }
  static QString column_brightness(bool key = false) {
    Q_UNUSED(key);
    return "brightness";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_setlight";
  }
};

typedef std::shared_ptr<pcba_setlight> pcba_setlight_ptr;
typedef qx::QxCollection<QString, pcba_setlight_ptr> list_of_pcba_setlight;
typedef std::shared_ptr<list_of_pcba_setlight> list_of_pcba_setlight_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_setlight, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_setlight,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_setlight)

#endif // _PCBAOI_PCBA_SETLIGHT_H_
