
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_setaxis.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_setaxis, pcba_setaxis)

namespace qx {

template <> void register_class(QxClass<pcba_setaxis> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_setaxis");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_setaxis::m_setAxisId, "setAxisId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_setaxis::m_axisNo, "axisNo", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_setaxis::m_movePositionStep, "movePositionStep", 0, true,
                 true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_setaxis::m_moveSpeedSpeed, "moveSpeedSpeed", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_setaxis::m_moveSpeedAcc, "moveSpeedAcc", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_setaxis::m_moveSpeedDcc, "moveSpeedDcc", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_setaxis::m_moveSpeedSmoothTime, "moveSpeedSmoothTime", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_setaxis::m_homeMode, "homeMode", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  qx::QxValidatorX<pcba_setaxis> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_setaxis::pcba_setaxis()
    : m_axisNo(0), m_movePositionStep(0), m_moveSpeedSpeed(0.0),
      m_moveSpeedAcc(0.0), m_moveSpeedDcc(0.0), m_moveSpeedSmoothTime(0.0),
      m_homeMode(0) {
  ;
}

pcba_setaxis::pcba_setaxis(const QString &id)
    : m_setAxisId(id), m_axisNo(0), m_movePositionStep(0),
      m_moveSpeedSpeed(0.0), m_moveSpeedAcc(0.0), m_moveSpeedDcc(0.0),
      m_moveSpeedSmoothTime(0.0), m_homeMode(0) {
  ;
}

pcba_setaxis::~pcba_setaxis() { ; }

QString pcba_setaxis::getsetAxisId() const { return m_setAxisId; }

int pcba_setaxis::getaxisNo() const { return m_axisNo; }

long pcba_setaxis::getmovePositionStep() const { return m_movePositionStep; }

double pcba_setaxis::getmoveSpeedSpeed() const { return m_moveSpeedSpeed; }

double pcba_setaxis::getmoveSpeedAcc() const { return m_moveSpeedAcc; }

double pcba_setaxis::getmoveSpeedDcc() const { return m_moveSpeedDcc; }

double pcba_setaxis::getmoveSpeedSmoothTime() const {
  return m_moveSpeedSmoothTime;
}

int pcba_setaxis::gethomeMode() const { return m_homeMode; }

void pcba_setaxis::setsetAxisId(const QString &val) { m_setAxisId = val; }

void pcba_setaxis::setaxisNo(const int &val) { m_axisNo = val; }

void pcba_setaxis::setmovePositionStep(const long &val) {
  m_movePositionStep = val;
}

void pcba_setaxis::setmoveSpeedSpeed(const double &val) {
  m_moveSpeedSpeed = val;
}

void pcba_setaxis::setmoveSpeedAcc(const double &val) { m_moveSpeedAcc = val; }

void pcba_setaxis::setmoveSpeedDcc(const double &val) { m_moveSpeedDcc = val; }

void pcba_setaxis::setmoveSpeedSmoothTime(const double &val) {
  m_moveSpeedSmoothTime = val;
}

void pcba_setaxis::sethomeMode(const int &val) { m_homeMode = val; }
