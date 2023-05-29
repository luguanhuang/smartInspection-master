/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_setcamera.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_SETCAMERA_H_
#define _PCBAOI_PCBA_SETCAMERA_H_

class PCBAOI_EXPORT pcba_setcamera {

  QX_REGISTER_FRIEND_CLASS(pcba_setcamera)

protected:
  QString m_setCameraId;
  int m_cameraSerial;
  quint64 m_exposeTime;

public:
  pcba_setcamera();
  pcba_setcamera(const QString &id);
  virtual ~pcba_setcamera();

  QString getsetCameraId() const;
  int getcameraSerial() const;
  quint64 getexposeTime() const;

  void setsetCameraId(const QString &val);
  void setcameraSerial(const int &val);
  void setexposeTime(const quint64 &val);

public:
  static QString column_setCameraId(bool key = false) {
    Q_UNUSED(key);
    return "setCameraId";
  }
  static QString column_cameraSerial(bool key = false) {
    Q_UNUSED(key);
    return "cameraSerial";
  }
  static QString column_exposeTime(bool key = false) {
    Q_UNUSED(key);
    return "exposeTime";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_setcamera";
  }
};

typedef std::shared_ptr<pcba_setcamera> pcba_setcamera_ptr;
typedef qx::QxCollection<QString, pcba_setcamera_ptr> list_of_pcba_setcamera;
typedef std::shared_ptr<list_of_pcba_setcamera> list_of_pcba_setcamera_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_setcamera, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_setcamera,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_setcamera)

#endif // _PCBAOI_PCBA_SETCAMERA_H_
