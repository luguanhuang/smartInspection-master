
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_algorithm.gen.h"
#include "pcba_algorithm4defect.gen.h"
#include "pcba_algorithmconfig.gen.h"
#include "pcba_inspectlib.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_algorithm, pcba_algorithm)

namespace qx {

template <> void register_class(QxClass<pcba_algorithm> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_algorithm");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_algorithm::m_algorithmId, "algorithmId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_algorithm::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithm::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithm::m_nType, "nType", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithm::m_nLightSource, "nLightSource", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithm::m_description, "description", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithm::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithm::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationOneToMany(&pcba_algorithm::m_list_of_pcba_algorithm4defect,
                          "list_of_pcba_algorithm4defect", "algorithmId", 0);
  pRelation =
      t.relationOneToMany(&pcba_algorithm::m_list_of_pcba_algorithmconfig,
                          "list_of_pcba_algorithmconfig", "algorithmId", 0);
  pRelation = t.relationOneToMany(&pcba_algorithm::m_list_of_pcba_inspectlib,
                                  "list_of_pcba_inspectlib", "algorithmId", 0);

  qx::QxValidatorX<pcba_algorithm> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_algorithm::pcba_algorithm()
    : m_nType(0), m_nLightSource(0), m_inActive(0) {
  ;
}

pcba_algorithm::pcba_algorithm(const QString &id)
    : m_algorithmId(id), m_nType(0), m_nLightSource(0), m_inActive(0) {
  ;
}

pcba_algorithm::~pcba_algorithm() { ; }

QString pcba_algorithm::getalgorithmId() const { return m_algorithmId; }

QString pcba_algorithm::getnameEN() const { return m_nameEN; }

QString pcba_algorithm::getnameCN() const { return m_nameCN; }

long pcba_algorithm::getnType() const { return m_nType; }

long pcba_algorithm::getnLightSource() const { return m_nLightSource; }

QString pcba_algorithm::getdescription() const { return m_description; }

QString pcba_algorithm::getstrReserve() const { return m_strReserve; }

int pcba_algorithm::getinActive() const { return m_inActive; }

pcba_algorithm::type_list_of_pcba_algorithm4defect
pcba_algorithm::getlist_of_pcba_algorithm4defect() const {
  return m_list_of_pcba_algorithm4defect;
}

pcba_algorithm::type_list_of_pcba_algorithm4defect &
pcba_algorithm::list_of_pcba_algorithm4defect() {
  return m_list_of_pcba_algorithm4defect;
}

const pcba_algorithm::type_list_of_pcba_algorithm4defect &
pcba_algorithm::list_of_pcba_algorithm4defect() const {
  return m_list_of_pcba_algorithm4defect;
}

pcba_algorithm::type_list_of_pcba_algorithmconfig
pcba_algorithm::getlist_of_pcba_algorithmconfig() const {
  return m_list_of_pcba_algorithmconfig;
}

pcba_algorithm::type_list_of_pcba_algorithmconfig &
pcba_algorithm::list_of_pcba_algorithmconfig() {
  return m_list_of_pcba_algorithmconfig;
}

const pcba_algorithm::type_list_of_pcba_algorithmconfig &
pcba_algorithm::list_of_pcba_algorithmconfig() const {
  return m_list_of_pcba_algorithmconfig;
}

pcba_algorithm::type_list_of_pcba_inspectlib
pcba_algorithm::getlist_of_pcba_inspectlib() const {
  return m_list_of_pcba_inspectlib;
}

pcba_algorithm::type_list_of_pcba_inspectlib &
pcba_algorithm::list_of_pcba_inspectlib() {
  return m_list_of_pcba_inspectlib;
}

const pcba_algorithm::type_list_of_pcba_inspectlib &
pcba_algorithm::list_of_pcba_inspectlib() const {
  return m_list_of_pcba_inspectlib;
}

void pcba_algorithm::setalgorithmId(const QString &val) { m_algorithmId = val; }

void pcba_algorithm::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_algorithm::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_algorithm::setnType(const long &val) { m_nType = val; }

void pcba_algorithm::setnLightSource(const long &val) { m_nLightSource = val; }

void pcba_algorithm::setdescription(const QString &val) { m_description = val; }

void pcba_algorithm::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_algorithm::setinActive(const int &val) { m_inActive = val; }

void pcba_algorithm::setlist_of_pcba_algorithm4defect(
    const pcba_algorithm::type_list_of_pcba_algorithm4defect &val) {
  m_list_of_pcba_algorithm4defect = val;
}

void pcba_algorithm::setlist_of_pcba_algorithmconfig(
    const pcba_algorithm::type_list_of_pcba_algorithmconfig &val) {
  m_list_of_pcba_algorithmconfig = val;
}

void pcba_algorithm::setlist_of_pcba_inspectlib(
    const pcba_algorithm::type_list_of_pcba_inspectlib &val) {
  m_list_of_pcba_inspectlib = val;
}

pcba_algorithm::type_list_of_pcba_algorithm4defect
pcba_algorithm::getlist_of_pcba_algorithm4defect(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_pcba_algorithm4defect();
  }
  QString sRelation = "{algorithmId} | list_of_pcba_algorithm4defect";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm tmp;
  tmp.m_algorithmId = this->m_algorithmId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_algorithm4defect = tmp.m_list_of_pcba_algorithm4defect;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_algorithm4defect;
}

pcba_algorithm::type_list_of_pcba_algorithm4defect &
pcba_algorithm::list_of_pcba_algorithm4defect(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_pcba_algorithm4defect();
  }
  QString sRelation = "{algorithmId} | list_of_pcba_algorithm4defect";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm tmp;
  tmp.m_algorithmId = this->m_algorithmId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_algorithm4defect = tmp.m_list_of_pcba_algorithm4defect;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_algorithm4defect;
}

pcba_algorithm::type_list_of_pcba_algorithmconfig
pcba_algorithm::getlist_of_pcba_algorithmconfig(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_pcba_algorithmconfig();
  }
  QString sRelation = "{algorithmId} | list_of_pcba_algorithmconfig";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm tmp;
  tmp.m_algorithmId = this->m_algorithmId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_algorithmconfig = tmp.m_list_of_pcba_algorithmconfig;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_algorithmconfig;
}

pcba_algorithm::type_list_of_pcba_algorithmconfig &
pcba_algorithm::list_of_pcba_algorithmconfig(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_pcba_algorithmconfig();
  }
  QString sRelation = "{algorithmId} | list_of_pcba_algorithmconfig";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm tmp;
  tmp.m_algorithmId = this->m_algorithmId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_algorithmconfig = tmp.m_list_of_pcba_algorithmconfig;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_algorithmconfig;
}

pcba_algorithm::type_list_of_pcba_inspectlib
pcba_algorithm::getlist_of_pcba_inspectlib(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_pcba_inspectlib();
  }
  QString sRelation = "{algorithmId} | list_of_pcba_inspectlib";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm tmp;
  tmp.m_algorithmId = this->m_algorithmId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_inspectlib = tmp.m_list_of_pcba_inspectlib;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_inspectlib;
}

pcba_algorithm::type_list_of_pcba_inspectlib &
pcba_algorithm::list_of_pcba_inspectlib(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_pcba_inspectlib();
  }
  QString sRelation = "{algorithmId} | list_of_pcba_inspectlib";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm tmp;
  tmp.m_algorithmId = this->m_algorithmId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_inspectlib = tmp.m_list_of_pcba_inspectlib;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_inspectlib;
}
