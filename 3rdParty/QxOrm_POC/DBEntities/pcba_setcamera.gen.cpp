
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_setcamera.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_setcamera, pcba_setcamera)

namespace qx {

template <> void register_class(QxClass<pcba_setcamera> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_setcamera");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_setcamera::m_setCameraId, "setCameraId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData =
      t.data(&pcba_setcamera::m_cameraSerial, "cameraSerial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_setcamera::m_exposeTime, "exposeTime", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  qx::QxValidatorX<pcba_setcamera> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_setcamera::pcba_setcamera() : m_cameraSerial(0), m_exposeTime(0) { ; }

pcba_setcamera::pcba_setcamera(const QString &id)
    : m_setCameraId(id), m_cameraSerial(0), m_exposeTime(0) {
  ;
}

pcba_setcamera::~pcba_setcamera() { ; }

QString pcba_setcamera::getsetCameraId() const { return m_setCameraId; }

int pcba_setcamera::getcameraSerial() const { return m_cameraSerial; }

quint64 pcba_setcamera::getexposeTime() const { return m_exposeTime; }

void pcba_setcamera::setsetCameraId(const QString &val) { m_setCameraId = val; }

void pcba_setcamera::setcameraSerial(const int &val) { m_cameraSerial = val; }

void pcba_setcamera::setexposeTime(const quint64 &val) { m_exposeTime = val; }
