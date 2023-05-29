
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_device.gen.h"
#include "pcba_inspectresult.gen.h"
#include "pcba_inspectscheme.gen.h"
#include "pcba_user.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_inspectresult,
                                          pcba_inspectresult)

namespace qx {

template <> void register_class(QxClass<pcba_inspectresult> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_inspectresult");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_inspectresult::m_inspectResultId, "inspectResultId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_inspectresult::m_uniqueBoardIdentifier,
                 "uniqueBoardIdentifier", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_inspectresult::m_inspectTime, "inspectTime", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_inspectresult::m_nResult, "nResult", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_inspectresult::m_repair, "repair", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_inspectresult::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_inspectresult::m_inactive, "inactive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_inspectresult::m_inspectSchemeId,
                                  "inspectSchemeId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectresult2inspectscheme");
  pRelation =
      t.relationManyToOne(&pcba_inspectresult::m_inspectorId, "inspectorId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectresult2user");
  pRelation =
      t.relationManyToOne(&pcba_inspectresult::m_deviceId, "deviceId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectresult2device");

  qx::QxValidatorX<pcba_inspectresult> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_inspectresult::pcba_inspectresult()
    : m_nResult(0), m_repair(0), m_inactive(0) {
  ;
}

pcba_inspectresult::pcba_inspectresult(const QString &id)
    : m_inspectResultId(id), m_nResult(0), m_repair(0), m_inactive(0) {
  ;
}

pcba_inspectresult::~pcba_inspectresult() { ; }

QString pcba_inspectresult::getinspectResultId() const {
  return m_inspectResultId;
}

QString pcba_inspectresult::getuniqueBoardIdentifier() const {
  return m_uniqueBoardIdentifier;
}

QDateTime pcba_inspectresult::getinspectTime() const { return m_inspectTime; }

long pcba_inspectresult::getnResult() const { return m_nResult; }

long pcba_inspectresult::getrepair() const { return m_repair; }

QString pcba_inspectresult::getstrReserve() const { return m_strReserve; }

int pcba_inspectresult::getinactive() const { return m_inactive; }

pcba_inspectresult::type_inspectSchemeId
pcba_inspectresult::getinspectSchemeId() const {
  return m_inspectSchemeId;
}

pcba_inspectresult::type_inspectorId
pcba_inspectresult::getinspectorId() const {
  return m_inspectorId;
}

pcba_inspectresult::type_deviceId pcba_inspectresult::getdeviceId() const {
  return m_deviceId;
}

void pcba_inspectresult::setinspectResultId(const QString &val) {
  m_inspectResultId = val;
}

void pcba_inspectresult::setuniqueBoardIdentifier(const QString &val) {
  m_uniqueBoardIdentifier = val;
}

void pcba_inspectresult::setinspectTime(const QDateTime &val) {
  m_inspectTime = val;
}

void pcba_inspectresult::setnResult(const long &val) { m_nResult = val; }

void pcba_inspectresult::setrepair(const long &val) { m_repair = val; }

void pcba_inspectresult::setstrReserve(const QString &val) {
  m_strReserve = val;
}

void pcba_inspectresult::setinactive(const int &val) { m_inactive = val; }

void pcba_inspectresult::setinspectSchemeId(
    const pcba_inspectresult::type_inspectSchemeId &val) {
  m_inspectSchemeId = val;
}

void pcba_inspectresult::setinspectorId(
    const pcba_inspectresult::type_inspectorId &val) {
  m_inspectorId = val;
}

void pcba_inspectresult::setdeviceId(
    const pcba_inspectresult::type_deviceId &val) {
  m_deviceId = val;
}

pcba_inspectresult::type_inspectSchemeId pcba_inspectresult::getinspectSchemeId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getinspectSchemeId();
  }
  QString sRelation = "{inspectResultId} | inspectSchemeId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectresult tmp;
  tmp.m_inspectResultId = this->m_inspectResultId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_inspectSchemeId = tmp.m_inspectSchemeId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_inspectSchemeId;
}

pcba_inspectresult::type_inspectorId pcba_inspectresult::getinspectorId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getinspectorId();
  }
  QString sRelation = "{inspectResultId} | inspectorId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectresult tmp;
  tmp.m_inspectResultId = this->m_inspectResultId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_inspectorId = tmp.m_inspectorId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_inspectorId;
}

pcba_inspectresult::type_deviceId pcba_inspectresult::getdeviceId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdeviceId();
  }
  QString sRelation = "{inspectResultId} | deviceId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectresult tmp;
  tmp.m_inspectResultId = this->m_inspectResultId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_deviceId = tmp.m_deviceId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_deviceId;
}
