
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_device.gen.h"
#include "pcba_user.gen.h"
#include "pcba_useroperate.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_useroperate, pcba_useroperate)

namespace qx {

template <> void register_class(QxClass<pcba_useroperate> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_useroperate");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_useroperate::m_operateId, "operateId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData =
      t.data(&pcba_useroperate::m_operateType, "operateType", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_useroperate::m_operateTime, "operateTime", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_useroperate::m_description, "description", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_useroperate::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_useroperate::m_inactive, "inactive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_useroperate::m_userId, "userId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "useroperate2user");
  pRelation = t.relationManyToOne(&pcba_useroperate::m_deviceId, "deviceId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "useroperate2device");

  qx::QxValidatorX<pcba_useroperate> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_useroperate::pcba_useroperate() : m_operateType(0), m_inactive(0) { ; }

pcba_useroperate::pcba_useroperate(const QString &id)
    : m_operateId(id), m_operateType(0), m_inactive(0) {
  ;
}

pcba_useroperate::~pcba_useroperate() { ; }

QString pcba_useroperate::getoperateId() const { return m_operateId; }

long pcba_useroperate::getoperateType() const { return m_operateType; }

QDateTime pcba_useroperate::getoperateTime() const { return m_operateTime; }

QString pcba_useroperate::getdescription() const { return m_description; }

QString pcba_useroperate::getstrReserve() const { return m_strReserve; }

int pcba_useroperate::getinactive() const { return m_inactive; }

pcba_useroperate::type_userId pcba_useroperate::getuserId() const {
  return m_userId;
}

pcba_useroperate::type_deviceId pcba_useroperate::getdeviceId() const {
  return m_deviceId;
}

void pcba_useroperate::setoperateId(const QString &val) { m_operateId = val; }

void pcba_useroperate::setoperateType(const long &val) { m_operateType = val; }

void pcba_useroperate::setoperateTime(const QDateTime &val) {
  m_operateTime = val;
}

void pcba_useroperate::setdescription(const QString &val) {
  m_description = val;
}

void pcba_useroperate::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_useroperate::setinactive(const int &val) { m_inactive = val; }

void pcba_useroperate::setuserId(const pcba_useroperate::type_userId &val) {
  m_userId = val;
}

void pcba_useroperate::setdeviceId(const pcba_useroperate::type_deviceId &val) {
  m_deviceId = val;
}

pcba_useroperate::type_userId pcba_useroperate::getuserId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getuserId();
  }
  QString sRelation = "{operateId} | userId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_useroperate tmp;
  tmp.m_operateId = this->m_operateId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_userId = tmp.m_userId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_userId;
}

pcba_useroperate::type_deviceId pcba_useroperate::getdeviceId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdeviceId();
  }
  QString sRelation = "{operateId} | deviceId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_useroperate tmp;
  tmp.m_operateId = this->m_operateId;
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
