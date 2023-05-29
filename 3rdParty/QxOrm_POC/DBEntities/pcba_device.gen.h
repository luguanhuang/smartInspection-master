/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_device.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_DEVICE_H_
#define _PCBAOI_PCBA_DEVICE_H_

class pcba_setaxis;
class pcba_setcamera;
class pcba_setlight;

class PCBAOI_EXPORT pcba_device {

  QX_REGISTER_FRIEND_CLASS(pcba_device)

public:
  typedef std::shared_ptr<pcba_setaxis> type_defaultSetAxisId;
  typedef std::shared_ptr<pcba_setcamera> type_defaultSetCameraId;
  typedef std::shared_ptr<pcba_setlight> type_defaultSetLigthId;

protected:
  QString m_deviceId;

	QString m_devicename;
	QString m_devicecode;
  
  QString m_description;
  QString m_strVersion;
  QString m_strManufacturer;
  QString m_strDistributor;
  QString m_strLocationCity;
  QString m_strOwner;
  QString m_strRsaEncHardInfo;
  QString m_strRsaDecCode;
  QString m_strReserve;
  int m_inactive;
  quint64 m_axisXPositiveLimit;
  quint64 m_axisXNegativeLimit;
  double m_axisXPulse2LenRatio;
  quint64 m_axisYPositiveLimit;
  quint64 m_axisYNegativeLimit;
  double m_axisYPulse2LenRatio;
  quint64 m_axisZPositiveLimit;
  quint64 m_axisZNegativeLimit;
  double m_axisZPulse2LenRatio;
  QString m_cameraMainModelId;
  long m_cameraMainImageCols;
  long m_cameraMainImageRows;
  QString m_cameraSide1ModelId;
  long m_cameraSide1ImageCols;
  long m_cameraSide1ImageRows;
  QString m_cameraSide2ModelId;
  long m_cameraSide2ImageCols;
  long m_cameraSide2ImageRows;
  QString m_cameraSide3ModelId;
  long m_cameraSide3ImageCols;
  long m_cameraSide3ImageRows;
  QString m_cameraSide4ModelId;
  long m_cameraSide4ImageCols;
  long m_cameraSide4ImageRows;
  int m_lightControl1Serial;
  int m_lightControl2Serial;
  int m_lightControl3Serial;
  int m_lightControl4Serial;
  long m_light1Max;
  long m_light1Min;
  long m_light2Max;
  long m_light2Min;
  long m_light3Max;
  long m_light3Min;
  long m_light4Max;
  long m_light4Min;
  long m_light5Max;
  long m_light5Min;
  long m_light6Max;
  long m_light6Min;
  long m_light7Max;
  long m_light7Min;
  long m_light8Max;
  long m_light8Min;
  type_defaultSetAxisId m_defaultSetAxisId;
  type_defaultSetCameraId m_defaultSetCameraId;
  type_defaultSetLigthId m_defaultSetLigthId;

public:
  pcba_device();
  pcba_device(const QString &id);
  virtual ~pcba_device();

  QString getdeviceId() const;
  
  QString getdevicename() const;
	QString getdevicecode() const;
  
  QString getdescription() const;
  QString getstrVersion() const;
  QString getstrManufacturer() const;
  QString getstrDistributor() const;
  QString getstrLocationCity() const;
  QString getstrOwner() const;
  QString getstrRsaEncHardInfo() const;
  QString getstrRsaDecCode() const;
  QString getstrReserve() const;
  int getinactive() const;
  quint64 getaxisXPositiveLimit() const;
  quint64 getaxisXNegativeLimit() const;
  double getaxisXPulse2LenRatio() const;
  quint64 getaxisYPositiveLimit() const;
  quint64 getaxisYNegativeLimit() const;
  double getaxisYPulse2LenRatio() const;
  quint64 getaxisZPositiveLimit() const;
  quint64 getaxisZNegativeLimit() const;
  double getaxisZPulse2LenRatio() const;
  QString getcameraMainModelId() const;
  long getcameraMainImageCols() const;
  long getcameraMainImageRows() const;
  QString getcameraSide1ModelId() const;
  long getcameraSide1ImageCols() const;
  long getcameraSide1ImageRows() const;
  QString getcameraSide2ModelId() const;
  long getcameraSide2ImageCols() const;
  long getcameraSide2ImageRows() const;
  QString getcameraSide3ModelId() const;
  long getcameraSide3ImageCols() const;
  long getcameraSide3ImageRows() const;
  QString getcameraSide4ModelId() const;
  long getcameraSide4ImageCols() const;
  long getcameraSide4ImageRows() const;
  int getlightControl1Serial() const;
  int getlightControl2Serial() const;
  int getlightControl3Serial() const;
  int getlightControl4Serial() const;
  long getlight1Max() const;
  long getlight1Min() const;
  long getlight2Max() const;
  long getlight2Min() const;
  long getlight3Max() const;
  long getlight3Min() const;
  long getlight4Max() const;
  long getlight4Min() const;
  long getlight5Max() const;
  long getlight5Min() const;
  long getlight6Max() const;
  long getlight6Min() const;
  long getlight7Max() const;
  long getlight7Min() const;
  long getlight8Max() const;
  long getlight8Min() const;
  type_defaultSetAxisId getdefaultSetAxisId() const;
  type_defaultSetCameraId getdefaultSetCameraId() const;
  type_defaultSetLigthId getdefaultSetLigthId() const;

  void setdeviceId(const QString &val);

	 void setdevicename(const QString &val) ;
	void setdevicecode(const QString &val) ;
  
  void setdescription(const QString &val);
  void setstrVersion(const QString &val);
  void setstrManufacturer(const QString &val);
  void setstrDistributor(const QString &val);
  void setstrLocationCity(const QString &val);
  void setstrOwner(const QString &val);
  void setstrRsaEncHardInfo(const QString &val);
  void setstrRsaDecCode(const QString &val);
  void setstrReserve(const QString &val);
  void setinactive(const int &val);
  void setaxisXPositiveLimit(const quint64 &val);
  void setaxisXNegativeLimit(const quint64 &val);
  void setaxisXPulse2LenRatio(const double &val);
  void setaxisYPositiveLimit(const quint64 &val);
  void setaxisYNegativeLimit(const quint64 &val);
  void setaxisYPulse2LenRatio(const double &val);
  void setaxisZPositiveLimit(const quint64 &val);
  void setaxisZNegativeLimit(const quint64 &val);
  void setaxisZPulse2LenRatio(const double &val);
  void setcameraMainModelId(const QString &val);
  void setcameraMainImageCols(const long &val);
  void setcameraMainImageRows(const long &val);
  void setcameraSide1ModelId(const QString &val);
  void setcameraSide1ImageCols(const long &val);
  void setcameraSide1ImageRows(const long &val);
  void setcameraSide2ModelId(const QString &val);
  void setcameraSide2ImageCols(const long &val);
  void setcameraSide2ImageRows(const long &val);
  void setcameraSide3ModelId(const QString &val);
  void setcameraSide3ImageCols(const long &val);
  void setcameraSide3ImageRows(const long &val);
  void setcameraSide4ModelId(const QString &val);
  void setcameraSide4ImageCols(const long &val);
  void setcameraSide4ImageRows(const long &val);
  void setlightControl1Serial(const int &val);
  void setlightControl2Serial(const int &val);
  void setlightControl3Serial(const int &val);
  void setlightControl4Serial(const int &val);
  void setlight1Max(const long &val);
  void setlight1Min(const long &val);
  void setlight2Max(const long &val);
  void setlight2Min(const long &val);
  void setlight3Max(const long &val);
  void setlight3Min(const long &val);
  void setlight4Max(const long &val);
  void setlight4Min(const long &val);
  void setlight5Max(const long &val);
  void setlight5Min(const long &val);
  void setlight6Max(const long &val);
  void setlight6Min(const long &val);
  void setlight7Max(const long &val);
  void setlight7Min(const long &val);
  void setlight8Max(const long &val);
  void setlight8Min(const long &val);
  void setdefaultSetAxisId(const type_defaultSetAxisId &val);
  void setdefaultSetCameraId(const type_defaultSetCameraId &val);
  void setdefaultSetLigthId(const type_defaultSetLigthId &val);

  type_defaultSetAxisId getdefaultSetAxisId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_defaultSetCameraId getdefaultSetCameraId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);
  type_defaultSetLigthId getdefaultSetLigthId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_defaultSetAxisId(bool key = false) {
    Q_UNUSED(key);
    return "defaultSetAxisId";
  }
  static QString relation_defaultSetCameraId(bool key = false) {
    Q_UNUSED(key);
    return "defaultSetCameraId";
  }
  static QString relation_defaultSetLigthId(bool key = false) {
    Q_UNUSED(key);
    return "defaultSetLigthId";
  }

public:
  static QString column_deviceId(bool key = false) {
    Q_UNUSED(key);
    return "deviceId";
  }

	static QString column_devicename(bool key = false) {
    Q_UNUSED(key);
    return "devicename";
  }

	static QString column_devicecode(bool key = false) {
    Q_UNUSED(key);
    return "devicecode";
  }
  
  static QString column_description(bool key = false) {
    Q_UNUSED(key);
    return "description";
  }
  static QString column_strVersion(bool key = false) {
    Q_UNUSED(key);
    return "strVersion";
  }
  static QString column_strManufacturer(bool key = false) {
    Q_UNUSED(key);
    return "strManufacturer";
  }
  static QString column_strDistributor(bool key = false) {
    Q_UNUSED(key);
    return "strDistributor";
  }
  static QString column_strLocationCity(bool key = false) {
    Q_UNUSED(key);
    return "strLocationCity";
  }
  static QString column_strOwner(bool key = false) {
    Q_UNUSED(key);
    return "strOwner";
  }
  static QString column_strRsaEncHardInfo(bool key = false) {
    Q_UNUSED(key);
    return "strRsaEncHardInfo";
  }
  static QString column_strRsaDecCode(bool key = false) {
    Q_UNUSED(key);
    return "strRsaDecCode";
  }
  static QString column_strReserve(bool key = false) {
    Q_UNUSED(key);
    return "strReserve";
  }
  static QString column_inactive(bool key = false) {
    Q_UNUSED(key);
    return "inactive";
  }
  static QString column_axisXPositiveLimit(bool key = false) {
    Q_UNUSED(key);
    return "axisXPositiveLimit";
  }
  static QString column_axisXNegativeLimit(bool key = false) {
    Q_UNUSED(key);
    return "axisXNegativeLimit";
  }
  static QString column_axisXPulse2LenRatio(bool key = false) {
    Q_UNUSED(key);
    return "axisXPulse2LenRatio";
  }
  static QString column_axisYPositiveLimit(bool key = false) {
    Q_UNUSED(key);
    return "axisYPositiveLimit";
  }
  static QString column_axisYNegativeLimit(bool key = false) {
    Q_UNUSED(key);
    return "axisYNegativeLimit";
  }
  static QString column_axisYPulse2LenRatio(bool key = false) {
    Q_UNUSED(key);
    return "axisYPulse2LenRatio";
  }
  static QString column_axisZPositiveLimit(bool key = false) {
    Q_UNUSED(key);
    return "axisZPositiveLimit";
  }
  static QString column_axisZNegativeLimit(bool key = false) {
    Q_UNUSED(key);
    return "axisZNegativeLimit";
  }
  static QString column_axisZPulse2LenRatio(bool key = false) {
    Q_UNUSED(key);
    return "axisZPulse2LenRatio";
  }
  static QString column_cameraMainModelId(bool key = false) {
    Q_UNUSED(key);
    return "cameraMainModelId";
  }
  static QString column_cameraMainImageCols(bool key = false) {
    Q_UNUSED(key);
    return "cameraMainImageCols";
  }
  static QString column_cameraMainImageRows(bool key = false) {
    Q_UNUSED(key);
    return "cameraMainImageRows";
  }
  static QString column_cameraSide1ModelId(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide1ModelId";
  }
  static QString column_cameraSide1ImageCols(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide1ImageCols";
  }
  static QString column_cameraSide1ImageRows(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide1ImageRows";
  }
  static QString column_cameraSide2ModelId(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide2ModelId";
  }
  static QString column_cameraSide2ImageCols(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide2ImageCols";
  }
  static QString column_cameraSide2ImageRows(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide2ImageRows";
  }
  static QString column_cameraSide3ModelId(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide3ModelId";
  }
  static QString column_cameraSide3ImageCols(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide3ImageCols";
  }
  static QString column_cameraSide3ImageRows(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide3ImageRows";
  }
  static QString column_cameraSide4ModelId(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide4ModelId";
  }
  static QString column_cameraSide4ImageCols(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide4ImageCols";
  }
  static QString column_cameraSide4ImageRows(bool key = false) {
    Q_UNUSED(key);
    return "cameraSide4ImageRows";
  }
  static QString column_lightControl1Serial(bool key = false) {
    Q_UNUSED(key);
    return "lightControl1Serial";
  }
  static QString column_lightControl2Serial(bool key = false) {
    Q_UNUSED(key);
    return "lightControl2Serial";
  }
  static QString column_lightControl3Serial(bool key = false) {
    Q_UNUSED(key);
    return "lightControl3Serial";
  }
  static QString column_lightControl4Serial(bool key = false) {
    Q_UNUSED(key);
    return "lightControl4Serial";
  }
  static QString column_light1Max(bool key = false) {
    Q_UNUSED(key);
    return "light1Max";
  }
  static QString column_light1Min(bool key = false) {
    Q_UNUSED(key);
    return "light1Min";
  }
  static QString column_light2Max(bool key = false) {
    Q_UNUSED(key);
    return "light2Max";
  }
  static QString column_light2Min(bool key = false) {
    Q_UNUSED(key);
    return "light2Min";
  }
  static QString column_light3Max(bool key = false) {
    Q_UNUSED(key);
    return "light3Max";
  }
  static QString column_light3Min(bool key = false) {
    Q_UNUSED(key);
    return "light3Min";
  }
  static QString column_light4Max(bool key = false) {
    Q_UNUSED(key);
    return "light4Max";
  }
  static QString column_light4Min(bool key = false) {
    Q_UNUSED(key);
    return "light4Min";
  }
  static QString column_light5Max(bool key = false) {
    Q_UNUSED(key);
    return "light5Max";
  }
  static QString column_light5Min(bool key = false) {
    Q_UNUSED(key);
    return "light5Min";
  }
  static QString column_light6Max(bool key = false) {
    Q_UNUSED(key);
    return "light6Max";
  }
  static QString column_light6Min(bool key = false) {
    Q_UNUSED(key);
    return "light6Min";
  }
  static QString column_light7Max(bool key = false) {
    Q_UNUSED(key);
    return "light7Max";
  }
  static QString column_light7Min(bool key = false) {
    Q_UNUSED(key);
    return "light7Min";
  }
  static QString column_light8Max(bool key = false) {
    Q_UNUSED(key);
    return "light8Max";
  }
  static QString column_light8Min(bool key = false) {
    Q_UNUSED(key);
    return "light8Min";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_device";
  }
};

typedef std::shared_ptr<pcba_device> pcba_device_ptr;
typedef qx::QxCollection<QString, pcba_device_ptr> list_of_pcba_device;
typedef std::shared_ptr<list_of_pcba_device> list_of_pcba_device_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_device, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_device,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_device)

#include "pcba_setaxis.gen.h"
#include "pcba_setcamera.gen.h"
#include "pcba_setlight.gen.h"

#endif // _PCBAOI_PCBA_DEVICE_H_
