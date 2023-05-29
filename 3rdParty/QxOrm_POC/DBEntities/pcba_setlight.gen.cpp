

#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_setlight.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_setlight, pcba_setlight)

namespace qx {

template <> void register_class(QxClass<pcba_setlight> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_setlight");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_setlight::m_setLightId, "setLightId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_setlight::m_lightSerial, "lightSerial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_setlight::m_brightness, "brightness", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  qx::QxValidatorX<pcba_setlight> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_setlight::pcba_setlight() : m_lightSerial(0), m_brightness(0) { ; }

pcba_setlight::pcba_setlight(const QString &id)
    : m_setLightId(id), m_lightSerial(0), m_brightness(0) {
  ;
}

pcba_setlight::~pcba_setlight() { ; }

QString pcba_setlight::getsetLightId() const { return m_setLightId; }

int pcba_setlight::getlightSerial() const { return m_lightSerial; }

long pcba_setlight::getbrightness() const { return m_brightness; }

void pcba_setlight::setsetLightId(const QString &val) { m_setLightId = val; }

void pcba_setlight::setlightSerial(const int &val) { m_lightSerial = val; }

void pcba_setlight::setbrightness(const long &val) { m_brightness = val; }
