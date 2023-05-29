
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_device.gen.h"
#include "pcba_user.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_user, pcba_user)

namespace qx {

template <> void register_class(QxClass<pcba_user> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_user");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_user::m_userId, "userId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_user::m_inspect, "inspect", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_program, "program", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_admin, "admin", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_logName, "logName", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_logPassword, "logPassword", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_workId, "workId", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_name, "name", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_phone, "phone", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_department, "department", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_user::m_inactive, "inactive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_user::m_deviceId, "deviceId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME", "user2device");

  qx::QxValidatorX<pcba_user> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_user::pcba_user() : m_inspect(0), m_program(0), m_admin(0), m_inactive(0) {
  ;
}

pcba_user::pcba_user(const QString &id)
    : m_userId(id), m_inspect(0), m_program(0), m_admin(0), m_inactive(0) {
  ;
}

pcba_user::~pcba_user() { ; }

QString pcba_user::getuserId() const { return m_userId; }

int pcba_user::getinspect() const { return m_inspect; }

int pcba_user::getprogram() const { return m_program; }

int pcba_user::getadmin() const { return m_admin; }

QString pcba_user::getlogName() const { return m_logName; }

QString pcba_user::getlogPassword() const { return m_logPassword; }

QString pcba_user::getworkId() const { return m_workId; }

QString pcba_user::getname() const { return m_name; }

QString pcba_user::getphone() const { return m_phone; }

QString pcba_user::getdepartment() const { return m_department; }

QString pcba_user::getstrReserve() const { return m_strReserve; }

int pcba_user::getinactive() const { return m_inactive; }

pcba_user::type_deviceId pcba_user::getdeviceId() const { return m_deviceId; }

void pcba_user::setuserId(const QString &val) { m_userId = val; }

void pcba_user::setinspect(const int &val) { m_inspect = val; }

void pcba_user::setprogram(const int &val) { m_program = val; }

void pcba_user::setadmin(const int &val) { m_admin = val; }

void pcba_user::setlogName(const QString &val) { m_logName = val; }

void pcba_user::setlogPassword(const QString &val) { m_logPassword = val; }

void pcba_user::setworkId(const QString &val) { m_workId = val; }

void pcba_user::setname(const QString &val) { m_name = val; }

void pcba_user::setphone(const QString &val) { m_phone = val; }

void pcba_user::setdepartment(const QString &val) { m_department = val; }

void pcba_user::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_user::setinactive(const int &val) { m_inactive = val; }

void pcba_user::setdeviceId(const pcba_user::type_deviceId &val) {
  m_deviceId = val;
}

pcba_user::type_deviceId pcba_user::getdeviceId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdeviceId();
  }
  QString sRelation = "{userId} | deviceId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_user tmp;
  tmp.m_userId = this->m_userId;
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
