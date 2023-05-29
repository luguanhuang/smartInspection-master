
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_algorithm4defect.gen.h"
#include "pcba_defect.gen.h"
#include "pcba_inspectlib.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_defect, pcba_defect)

namespace qx {

template <> void register_class(QxClass<pcba_defect> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_defect");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_defect::m_defectId, "defectId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_defect::m_defectNameEN, "defectNameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_defect::m_defectNameCN, "defectNameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_defect::m_description, "description", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_defect::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_defect::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationOneToMany(&pcba_defect::m_list_of_pcba_algorithm4defect,
                          "list_of_pcba_algorithm4defect", "defectId", 0);
  pRelation =
      t.relationManyToOne(&pcba_defect::m_parentDefectId, "parentDefectId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME", "defect3parent");
  pRelation = t.relationOneToMany(
      &pcba_defect::m_list_of_parentDefectId_inverse,
      "list_of_parentDefectId_inverse", "parentDefectId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation = t.relationManyToOne(&pcba_defect::m_brotherDefectId,
                                  "brotherDefectId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME", "defect3brother");
  pRelation = t.relationOneToMany(
      &pcba_defect::m_list_of_brotherDefectId_inverse,
      "list_of_brotherDefectId_inverse", "brotherDefectId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation = t.relationOneToMany(&pcba_defect::m_list_of_pcba_inspectlib,
                                  "list_of_pcba_inspectlib", "defectId", 0);

  qx::QxValidatorX<pcba_defect> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_defect::pcba_defect() : m_inActive(0) { ; }

pcba_defect::pcba_defect(const QString &id) : m_defectId(id), m_inActive(0) {
  ;
}

pcba_defect::~pcba_defect() { ; }

QString pcba_defect::getdefectId() const { return m_defectId; }

QString pcba_defect::getdefectNameEN() const { return m_defectNameEN; }

QString pcba_defect::getdefectNameCN() const { return m_defectNameCN; }

QString pcba_defect::getdescription() const { return m_description; }

QString pcba_defect::getstrReserve() const { return m_strReserve; }

int pcba_defect::getinActive() const { return m_inActive; }

pcba_defect::type_list_of_pcba_algorithm4defect
pcba_defect::getlist_of_pcba_algorithm4defect() const {
  return m_list_of_pcba_algorithm4defect;
}

pcba_defect::type_list_of_pcba_algorithm4defect &
pcba_defect::list_of_pcba_algorithm4defect() {
  return m_list_of_pcba_algorithm4defect;
}

const pcba_defect::type_list_of_pcba_algorithm4defect &
pcba_defect::list_of_pcba_algorithm4defect() const {
  return m_list_of_pcba_algorithm4defect;
}

pcba_defect::type_parentDefectId pcba_defect::getparentDefectId() const {
  return m_parentDefectId;
}

pcba_defect::type_list_of_parentDefectId_inverse
pcba_defect::getlist_of_parentDefectId_inverse() const {
  return m_list_of_parentDefectId_inverse;
}

pcba_defect::type_list_of_parentDefectId_inverse &
pcba_defect::list_of_parentDefectId_inverse() {
  return m_list_of_parentDefectId_inverse;
}

const pcba_defect::type_list_of_parentDefectId_inverse &
pcba_defect::list_of_parentDefectId_inverse() const {
  return m_list_of_parentDefectId_inverse;
}

pcba_defect::type_brotherDefectId pcba_defect::getbrotherDefectId() const {
  return m_brotherDefectId;
}

pcba_defect::type_list_of_brotherDefectId_inverse
pcba_defect::getlist_of_brotherDefectId_inverse() const {
  return m_list_of_brotherDefectId_inverse;
}

pcba_defect::type_list_of_brotherDefectId_inverse &
pcba_defect::list_of_brotherDefectId_inverse() {
  return m_list_of_brotherDefectId_inverse;
}

const pcba_defect::type_list_of_brotherDefectId_inverse &
pcba_defect::list_of_brotherDefectId_inverse() const {
  return m_list_of_brotherDefectId_inverse;
}

pcba_defect::type_list_of_pcba_inspectlib
pcba_defect::getlist_of_pcba_inspectlib() const {
  return m_list_of_pcba_inspectlib;
}

pcba_defect::type_list_of_pcba_inspectlib &
pcba_defect::list_of_pcba_inspectlib() {
  return m_list_of_pcba_inspectlib;
}

const pcba_defect::type_list_of_pcba_inspectlib &
pcba_defect::list_of_pcba_inspectlib() const {
  return m_list_of_pcba_inspectlib;
}

void pcba_defect::setdefectId(const QString &val) { m_defectId = val; }

void pcba_defect::setdefectNameEN(const QString &val) { m_defectNameEN = val; }

void pcba_defect::setdefectNameCN(const QString &val) { m_defectNameCN = val; }

void pcba_defect::setdescription(const QString &val) { m_description = val; }

void pcba_defect::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_defect::setinActive(const int &val) { m_inActive = val; }

void pcba_defect::setlist_of_pcba_algorithm4defect(
    const pcba_defect::type_list_of_pcba_algorithm4defect &val) {
  m_list_of_pcba_algorithm4defect = val;
}

void pcba_defect::setparentDefectId(
    const pcba_defect::type_parentDefectId &val) {
  m_parentDefectId = val;
}

void pcba_defect::setlist_of_parentDefectId_inverse(
    const pcba_defect::type_list_of_parentDefectId_inverse &val) {
  m_list_of_parentDefectId_inverse = val;
}

void pcba_defect::setbrotherDefectId(
    const pcba_defect::type_brotherDefectId &val) {
  m_brotherDefectId = val;
}

void pcba_defect::setlist_of_brotherDefectId_inverse(
    const pcba_defect::type_list_of_brotherDefectId_inverse &val) {
  m_list_of_brotherDefectId_inverse = val;
}

void pcba_defect::setlist_of_pcba_inspectlib(
    const pcba_defect::type_list_of_pcba_inspectlib &val) {
  m_list_of_pcba_inspectlib = val;
}

pcba_defect::type_list_of_pcba_algorithm4defect
pcba_defect::getlist_of_pcba_algorithm4defect(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_pcba_algorithm4defect();
  }
  QString sRelation = "{defectId} | list_of_pcba_algorithm4defect";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
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

pcba_defect::type_list_of_pcba_algorithm4defect &
pcba_defect::list_of_pcba_algorithm4defect(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_pcba_algorithm4defect();
  }
  QString sRelation = "{defectId} | list_of_pcba_algorithm4defect";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
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

pcba_defect::type_parentDefectId pcba_defect::getparentDefectId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getparentDefectId();
  }
  QString sRelation = "{defectId} | parentDefectId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_parentDefectId = tmp.m_parentDefectId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_parentDefectId;
}

pcba_defect::type_list_of_parentDefectId_inverse
pcba_defect::getlist_of_parentDefectId_inverse(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_parentDefectId_inverse();
  }
  QString sRelation = "{defectId} | list_of_parentDefectId_inverse";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_parentDefectId_inverse =
        tmp.m_list_of_parentDefectId_inverse;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_parentDefectId_inverse;
}

pcba_defect::type_list_of_parentDefectId_inverse &
pcba_defect::list_of_parentDefectId_inverse(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_parentDefectId_inverse();
  }
  QString sRelation = "{defectId} | list_of_parentDefectId_inverse";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_parentDefectId_inverse =
        tmp.m_list_of_parentDefectId_inverse;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_parentDefectId_inverse;
}

pcba_defect::type_brotherDefectId pcba_defect::getbrotherDefectId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getbrotherDefectId();
  }
  QString sRelation = "{defectId} | brotherDefectId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_brotherDefectId = tmp.m_brotherDefectId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_brotherDefectId;
}

pcba_defect::type_list_of_brotherDefectId_inverse
pcba_defect::getlist_of_brotherDefectId_inverse(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_brotherDefectId_inverse();
  }
  QString sRelation = "{defectId} | list_of_brotherDefectId_inverse";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_brotherDefectId_inverse =
        tmp.m_list_of_brotherDefectId_inverse;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_brotherDefectId_inverse;
}

pcba_defect::type_list_of_brotherDefectId_inverse &
pcba_defect::list_of_brotherDefectId_inverse(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_brotherDefectId_inverse();
  }
  QString sRelation = "{defectId} | list_of_brotherDefectId_inverse";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_brotherDefectId_inverse =
        tmp.m_list_of_brotherDefectId_inverse;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_brotherDefectId_inverse;
}

pcba_defect::type_list_of_pcba_inspectlib
pcba_defect::getlist_of_pcba_inspectlib(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_pcba_inspectlib();
  }
  QString sRelation = "{defectId} | list_of_pcba_inspectlib";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
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

pcba_defect::type_list_of_pcba_inspectlib &pcba_defect::list_of_pcba_inspectlib(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_pcba_inspectlib();
  }
  QString sRelation = "{defectId} | list_of_pcba_inspectlib";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_defect tmp;
  tmp.m_defectId = this->m_defectId;
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
