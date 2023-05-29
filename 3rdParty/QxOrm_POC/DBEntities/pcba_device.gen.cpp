
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_device.gen.h"
#include "pcba_setaxis.gen.h"
#include "pcba_setcamera.gen.h"
#include "pcba_setlight.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_device, pcba_device)

namespace qx {

template <> void register_class(QxClass<pcba_device> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_device");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

	pData = t.id(&pcba_device::m_deviceId, "deviceId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

	pData = t.data(&pcba_device::m_devicename, "devicename", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

	pData = t.data(&pcba_device::m_devicecode, "devicecode", 0, true, true);
	//pData = t.id(&pcba_device::m_devicecode, "devicecode", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");  

  pData = t.data(&pcba_device::m_description, "description", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_strVersion, "strVersion", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_device::m_strManufacturer, "strManufacturer", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_device::m_strDistributor, "strDistributor", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_device::m_strLocationCity, "strLocationCity", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_strOwner, "strOwner", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_strRsaEncHardInfo, "strRsaEncHardInfo", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_strRsaDecCode, "strRsaDecCode", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_inactive, "inactive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisXPositiveLimit, "axisXPositiveLimit", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisXNegativeLimit, "axisXNegativeLimit", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisXPulse2LenRatio, "axisXPulse2LenRatio", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisYPositiveLimit, "axisYPositiveLimit", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisYNegativeLimit, "axisYNegativeLimit", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisYPulse2LenRatio, "axisYPulse2LenRatio", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisZPositiveLimit, "axisZPositiveLimit", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisZNegativeLimit, "axisZNegativeLimit", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_axisZPulse2LenRatio, "axisZPulse2LenRatio", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraMainModelId, "cameraMainModelId", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraMainImageCols, "cameraMainImageCols", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraMainImageRows, "cameraMainImageRows", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide1ModelId, "cameraSide1ModelId", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide1ImageCols, "cameraSide1ImageCols",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide1ImageRows, "cameraSide1ImageRows",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide2ModelId, "cameraSide2ModelId", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide2ImageCols, "cameraSide2ImageCols",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide2ImageRows, "cameraSide2ImageRows",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide3ModelId, "cameraSide3ModelId", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide3ImageCols, "cameraSide3ImageCols",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide3ImageRows, "cameraSide3ImageRows",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide4ModelId, "cameraSide4ModelId", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide4ImageCols, "cameraSide4ImageCols",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_cameraSide4ImageRows, "cameraSide4ImageRows",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_lightControl1Serial, "lightControl1Serial", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_lightControl2Serial, "lightControl2Serial", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_lightControl3Serial, "lightControl3Serial", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_lightControl4Serial, "lightControl4Serial", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light1Max, "light1Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light1Min, "light1Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light2Max, "light2Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light2Min, "light2Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light3Max, "light3Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light3Min, "light3Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light4Max, "light4Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light4Min, "light4Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light5Max, "light5Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light5Min, "light5Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light6Max, "light6Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light6Min, "light6Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light7Max, "light7Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light7Min, "light7Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light8Max, "light8Max", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_device::m_light8Min, "light8Min", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_device::m_defaultSetAxisId,
                                  "defaultSetAxisId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME", "device2setaxis");
  pRelation = t.relationManyToOne(&pcba_device::m_defaultSetCameraId,
                                  "defaultSetCameraId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "device2setcamera");
  pRelation = t.relationManyToOne(&pcba_device::m_defaultSetLigthId,
                                  "defaultSetLigthId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "device2setlight");

  qx::QxValidatorX<pcba_device> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_device::pcba_device()
    : m_inactive(0), m_axisXPositiveLimit(0), m_axisXNegativeLimit(0),
      m_axisXPulse2LenRatio(0.0), m_axisYPositiveLimit(0),
      m_axisYNegativeLimit(0), m_axisYPulse2LenRatio(0.0),
      m_axisZPositiveLimit(0), m_axisZNegativeLimit(0),
      m_axisZPulse2LenRatio(0.0), m_cameraMainImageCols(0),
      m_cameraMainImageRows(0), m_cameraSide1ImageCols(0),
      m_cameraSide1ImageRows(0), m_cameraSide2ImageCols(0),
      m_cameraSide2ImageRows(0), m_cameraSide3ImageCols(0),
      m_cameraSide3ImageRows(0), m_cameraSide4ImageCols(0),
      m_cameraSide4ImageRows(0), m_lightControl1Serial(0),
      m_lightControl2Serial(0), m_lightControl3Serial(0),
      m_lightControl4Serial(0), m_light1Max(0), m_light1Min(0), m_light2Max(0),
      m_light2Min(0), m_light3Max(0), m_light3Min(0), m_light4Max(0),
      m_light4Min(0), m_light5Max(0), m_light5Min(0), m_light6Max(0),
      m_light6Min(0), m_light7Max(0), m_light7Min(0), m_light8Max(0),
      m_light8Min(0) {
  ;
}

pcba_device::pcba_device(const QString &id)
    : m_deviceId(id), m_inactive(0), m_axisXPositiveLimit(0),
      m_axisXNegativeLimit(0), m_axisXPulse2LenRatio(0.0),
      m_axisYPositiveLimit(0), m_axisYNegativeLimit(0),
      m_axisYPulse2LenRatio(0.0), m_axisZPositiveLimit(0),
      m_axisZNegativeLimit(0), m_axisZPulse2LenRatio(0.0),
      m_cameraMainImageCols(0), m_cameraMainImageRows(0),
      m_cameraSide1ImageCols(0), m_cameraSide1ImageRows(0),
      m_cameraSide2ImageCols(0), m_cameraSide2ImageRows(0),
      m_cameraSide3ImageCols(0), m_cameraSide3ImageRows(0),
      m_cameraSide4ImageCols(0), m_cameraSide4ImageRows(0),
      m_lightControl1Serial(0), m_lightControl2Serial(0),
      m_lightControl3Serial(0), m_lightControl4Serial(0), m_light1Max(0),
      m_light1Min(0), m_light2Max(0), m_light2Min(0), m_light3Max(0),
      m_light3Min(0), m_light4Max(0), m_light4Min(0), m_light5Max(0),
      m_light5Min(0), m_light6Max(0), m_light6Min(0), m_light7Max(0),
      m_light7Min(0), m_light8Max(0), m_light8Min(0) {
  ;
}

pcba_device::~pcba_device() { ; }

QString pcba_device::getdeviceId() const { return m_deviceId; }
#if 1
QString pcba_device::getdevicename() const
{
	return m_devicename;
}

QString pcba_device::getdevicecode() const
{
	return m_devicecode;
}
#endif
QString pcba_device::getdescription() const { return m_description; }

QString pcba_device::getstrVersion() const { return m_strVersion; }

QString pcba_device::getstrManufacturer() const { return m_strManufacturer; }

QString pcba_device::getstrDistributor() const { return m_strDistributor; }

QString pcba_device::getstrLocationCity() const { return m_strLocationCity; }

QString pcba_device::getstrOwner() const { return m_strOwner; }

QString pcba_device::getstrRsaEncHardInfo() const {
  return m_strRsaEncHardInfo;
}

QString pcba_device::getstrRsaDecCode() const { return m_strRsaDecCode; }

QString pcba_device::getstrReserve() const { return m_strReserve; }

int pcba_device::getinactive() const { return m_inactive; }

quint64 pcba_device::getaxisXPositiveLimit() const {
  return m_axisXPositiveLimit;
}

quint64 pcba_device::getaxisXNegativeLimit() const {
  return m_axisXNegativeLimit;
}

double pcba_device::getaxisXPulse2LenRatio() const {
  return m_axisXPulse2LenRatio;
}

quint64 pcba_device::getaxisYPositiveLimit() const {
  return m_axisYPositiveLimit;
}

quint64 pcba_device::getaxisYNegativeLimit() const {
  return m_axisYNegativeLimit;
}

double pcba_device::getaxisYPulse2LenRatio() const {
  return m_axisYPulse2LenRatio;
}

quint64 pcba_device::getaxisZPositiveLimit() const {
  return m_axisZPositiveLimit;
}

quint64 pcba_device::getaxisZNegativeLimit() const {
  return m_axisZNegativeLimit;
}

double pcba_device::getaxisZPulse2LenRatio() const {
  return m_axisZPulse2LenRatio;
}

QString pcba_device::getcameraMainModelId() const {
  return m_cameraMainModelId;
}

long pcba_device::getcameraMainImageCols() const {
  return m_cameraMainImageCols;
}

long pcba_device::getcameraMainImageRows() const {
  return m_cameraMainImageRows;
}

QString pcba_device::getcameraSide1ModelId() const {
  return m_cameraSide1ModelId;
}

long pcba_device::getcameraSide1ImageCols() const {
  return m_cameraSide1ImageCols;
}

long pcba_device::getcameraSide1ImageRows() const {
  return m_cameraSide1ImageRows;
}

QString pcba_device::getcameraSide2ModelId() const {
  return m_cameraSide2ModelId;
}

long pcba_device::getcameraSide2ImageCols() const {
  return m_cameraSide2ImageCols;
}

long pcba_device::getcameraSide2ImageRows() const {
  return m_cameraSide2ImageRows;
}

QString pcba_device::getcameraSide3ModelId() const {
  return m_cameraSide3ModelId;
}

long pcba_device::getcameraSide3ImageCols() const {
  return m_cameraSide3ImageCols;
}

long pcba_device::getcameraSide3ImageRows() const {
  return m_cameraSide3ImageRows;
}

QString pcba_device::getcameraSide4ModelId() const {
  return m_cameraSide4ModelId;
}

long pcba_device::getcameraSide4ImageCols() const {
  return m_cameraSide4ImageCols;
}

long pcba_device::getcameraSide4ImageRows() const {
  return m_cameraSide4ImageRows;
}

int pcba_device::getlightControl1Serial() const {
  return m_lightControl1Serial;
}

int pcba_device::getlightControl2Serial() const {
  return m_lightControl2Serial;
}

int pcba_device::getlightControl3Serial() const {
  return m_lightControl3Serial;
}

int pcba_device::getlightControl4Serial() const {
  return m_lightControl4Serial;
}

long pcba_device::getlight1Max() const { return m_light1Max; }

long pcba_device::getlight1Min() const { return m_light1Min; }

long pcba_device::getlight2Max() const { return m_light2Max; }

long pcba_device::getlight2Min() const { return m_light2Min; }

long pcba_device::getlight3Max() const { return m_light3Max; }

long pcba_device::getlight3Min() const { return m_light3Min; }

long pcba_device::getlight4Max() const { return m_light4Max; }

long pcba_device::getlight4Min() const { return m_light4Min; }

long pcba_device::getlight5Max() const { return m_light5Max; }

long pcba_device::getlight5Min() const { return m_light5Min; }

long pcba_device::getlight6Max() const { return m_light6Max; }

long pcba_device::getlight6Min() const { return m_light6Min; }

long pcba_device::getlight7Max() const { return m_light7Max; }

long pcba_device::getlight7Min() const { return m_light7Min; }

long pcba_device::getlight8Max() const { return m_light8Max; }

long pcba_device::getlight8Min() const { return m_light8Min; }

pcba_device::type_defaultSetAxisId pcba_device::getdefaultSetAxisId() const {
  return m_defaultSetAxisId;
}

pcba_device::type_defaultSetCameraId
pcba_device::getdefaultSetCameraId() const {
  return m_defaultSetCameraId;
}

pcba_device::type_defaultSetLigthId pcba_device::getdefaultSetLigthId() const {
  return m_defaultSetLigthId;
}

void pcba_device::setdeviceId(const QString &val) { m_deviceId = val; }

void pcba_device::setdevicename(const QString &val) { m_devicename = val; }

void pcba_device::setdevicecode(const QString &val) { m_devicecode = val; }




void pcba_device::setdescription(const QString &val) { m_description = val; }

void pcba_device::setstrVersion(const QString &val) { m_strVersion = val; }

void pcba_device::setstrManufacturer(const QString &val) {
  m_strManufacturer = val;
}

void pcba_device::setstrDistributor(const QString &val) {
  m_strDistributor = val;
}

void pcba_device::setstrLocationCity(const QString &val) {
  m_strLocationCity = val;
}

void pcba_device::setstrOwner(const QString &val) { m_strOwner = val; }

void pcba_device::setstrRsaEncHardInfo(const QString &val) {
  m_strRsaEncHardInfo = val;
}

void pcba_device::setstrRsaDecCode(const QString &val) {
  m_strRsaDecCode = val;
}

void pcba_device::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_device::setinactive(const int &val) { m_inactive = val; }

void pcba_device::setaxisXPositiveLimit(const quint64 &val) {
  m_axisXPositiveLimit = val;
}

void pcba_device::setaxisXNegativeLimit(const quint64 &val) {
  m_axisXNegativeLimit = val;
}

void pcba_device::setaxisXPulse2LenRatio(const double &val) {
  m_axisXPulse2LenRatio = val;
}

void pcba_device::setaxisYPositiveLimit(const quint64 &val) {
  m_axisYPositiveLimit = val;
}

void pcba_device::setaxisYNegativeLimit(const quint64 &val) {
  m_axisYNegativeLimit = val;
}

void pcba_device::setaxisYPulse2LenRatio(const double &val) {
  m_axisYPulse2LenRatio = val;
}

void pcba_device::setaxisZPositiveLimit(const quint64 &val) {
  m_axisZPositiveLimit = val;
}

void pcba_device::setaxisZNegativeLimit(const quint64 &val) {
  m_axisZNegativeLimit = val;
}

void pcba_device::setaxisZPulse2LenRatio(const double &val) {
  m_axisZPulse2LenRatio = val;
}

void pcba_device::setcameraMainModelId(const QString &val) {
  m_cameraMainModelId = val;
}

void pcba_device::setcameraMainImageCols(const long &val) {
  m_cameraMainImageCols = val;
}

void pcba_device::setcameraMainImageRows(const long &val) {
  m_cameraMainImageRows = val;
}

void pcba_device::setcameraSide1ModelId(const QString &val) {
  m_cameraSide1ModelId = val;
}

void pcba_device::setcameraSide1ImageCols(const long &val) {
  m_cameraSide1ImageCols = val;
}

void pcba_device::setcameraSide1ImageRows(const long &val) {
  m_cameraSide1ImageRows = val;
}

void pcba_device::setcameraSide2ModelId(const QString &val) {
  m_cameraSide2ModelId = val;
}

void pcba_device::setcameraSide2ImageCols(const long &val) {
  m_cameraSide2ImageCols = val;
}

void pcba_device::setcameraSide2ImageRows(const long &val) {
  m_cameraSide2ImageRows = val;
}

void pcba_device::setcameraSide3ModelId(const QString &val) {
  m_cameraSide3ModelId = val;
}

void pcba_device::setcameraSide3ImageCols(const long &val) {
  m_cameraSide3ImageCols = val;
}

void pcba_device::setcameraSide3ImageRows(const long &val) {
  m_cameraSide3ImageRows = val;
}

void pcba_device::setcameraSide4ModelId(const QString &val) {
  m_cameraSide4ModelId = val;
}

void pcba_device::setcameraSide4ImageCols(const long &val) {
  m_cameraSide4ImageCols = val;
}

void pcba_device::setcameraSide4ImageRows(const long &val) {
  m_cameraSide4ImageRows = val;
}

void pcba_device::setlightControl1Serial(const int &val) {
  m_lightControl1Serial = val;
}

void pcba_device::setlightControl2Serial(const int &val) {
  m_lightControl2Serial = val;
}

void pcba_device::setlightControl3Serial(const int &val) {
  m_lightControl3Serial = val;
}

void pcba_device::setlightControl4Serial(const int &val) {
  m_lightControl4Serial = val;
}

void pcba_device::setlight1Max(const long &val) { m_light1Max = val; }

void pcba_device::setlight1Min(const long &val) { m_light1Min = val; }

void pcba_device::setlight2Max(const long &val) { m_light2Max = val; }

void pcba_device::setlight2Min(const long &val) { m_light2Min = val; }

void pcba_device::setlight3Max(const long &val) { m_light3Max = val; }

void pcba_device::setlight3Min(const long &val) { m_light3Min = val; }

void pcba_device::setlight4Max(const long &val) { m_light4Max = val; }

void pcba_device::setlight4Min(const long &val) { m_light4Min = val; }

void pcba_device::setlight5Max(const long &val) { m_light5Max = val; }

void pcba_device::setlight5Min(const long &val) { m_light5Min = val; }

void pcba_device::setlight6Max(const long &val) { m_light6Max = val; }

void pcba_device::setlight6Min(const long &val) { m_light6Min = val; }

void pcba_device::setlight7Max(const long &val) { m_light7Max = val; }

void pcba_device::setlight7Min(const long &val) { m_light7Min = val; }

void pcba_device::setlight8Max(const long &val) { m_light8Max = val; }

void pcba_device::setlight8Min(const long &val) { m_light8Min = val; }

void pcba_device::setdefaultSetAxisId(
    const pcba_device::type_defaultSetAxisId &val) {
  m_defaultSetAxisId = val;
}

void pcba_device::setdefaultSetCameraId(
    const pcba_device::type_defaultSetCameraId &val) {
  m_defaultSetCameraId = val;
}

void pcba_device::setdefaultSetLigthId(
    const pcba_device::type_defaultSetLigthId &val) {
  m_defaultSetLigthId = val;
}

pcba_device::type_defaultSetAxisId pcba_device::getdefaultSetAxisId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdefaultSetAxisId();
  }
  QString sRelation = "{deviceId} | defaultSetAxisId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_device tmp;
  tmp.m_deviceId = this->m_deviceId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_defaultSetAxisId = tmp.m_defaultSetAxisId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_defaultSetAxisId;
}

pcba_device::type_defaultSetCameraId pcba_device::getdefaultSetCameraId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdefaultSetCameraId();
  }
  QString sRelation = "{deviceId} | defaultSetCameraId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_device tmp;
  tmp.m_deviceId = this->m_deviceId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_defaultSetCameraId = tmp.m_defaultSetCameraId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_defaultSetCameraId;
}

pcba_device::type_defaultSetLigthId pcba_device::getdefaultSetLigthId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdefaultSetLigthId();
  }
  QString sRelation = "{deviceId} | defaultSetLigthId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_device tmp;
  tmp.m_deviceId = this->m_deviceId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_defaultSetLigthId = tmp.m_defaultSetLigthId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_defaultSetLigthId;
}
