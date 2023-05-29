
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_algorithm.gen.h"
#include "pcba_component.gen.h"
#include "pcba_defect.gen.h"
#include "pcba_inspectlib.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_inspectlib, pcba_inspectlib)

namespace qx {

template <> void register_class(QxClass<pcba_inspectlib> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_inspectlib");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_inspectlib::m_inspectLibItemId, "inspectLibItemId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationManyToOne(&pcba_inspectlib::m_componentId, "componentId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectlib2component");
  pRelation = t.relationManyToOne(&pcba_inspectlib::m_defectId, "defectId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectlib2defect");
  pRelation =
      t.relationManyToOne(&pcba_inspectlib::m_algorithmId, "algorithmId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectlib2algorithm");

  qx::QxValidatorX<pcba_inspectlib> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_inspectlib::pcba_inspectlib() { ; }

pcba_inspectlib::pcba_inspectlib(const QString &id) : m_inspectLibItemId(id) {
  ;
}

pcba_inspectlib::~pcba_inspectlib() { ; }

QString pcba_inspectlib::getinspectLibItemId() const {
  return m_inspectLibItemId;
}

pcba_inspectlib::type_componentId pcba_inspectlib::getcomponentId() const {
  return m_componentId;
}

pcba_inspectlib::type_defectId pcba_inspectlib::getdefectId() const {
  return m_defectId;
}

pcba_inspectlib::type_algorithmId pcba_inspectlib::getalgorithmId() const {
  return m_algorithmId;
}

void pcba_inspectlib::setinspectLibItemId(const QString &val) {
  m_inspectLibItemId = val;
}

void pcba_inspectlib::setcomponentId(
    const pcba_inspectlib::type_componentId &val) {
  m_componentId = val;
}

void pcba_inspectlib::setdefectId(const pcba_inspectlib::type_defectId &val) {
  m_defectId = val;
}

void pcba_inspectlib::setalgorithmId(
    const pcba_inspectlib::type_algorithmId &val) {
  m_algorithmId = val;
}

pcba_inspectlib::type_componentId pcba_inspectlib::getcomponentId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcomponentId();
  }
  QString sRelation = "{inspectLibItemId} | componentId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectlib tmp;
  tmp.m_inspectLibItemId = this->m_inspectLibItemId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_componentId = tmp.m_componentId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_componentId;
}

pcba_inspectlib::type_defectId pcba_inspectlib::getdefectId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdefectId();
  }
  QString sRelation = "{inspectLibItemId} | defectId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectlib tmp;
  tmp.m_inspectLibItemId = this->m_inspectLibItemId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_defectId = tmp.m_defectId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_defectId;
}

pcba_inspectlib::type_algorithmId pcba_inspectlib::getalgorithmId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getalgorithmId();
  }
  QString sRelation = "{inspectLibItemId} | algorithmId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectlib tmp;
  tmp.m_inspectLibItemId = this->m_inspectLibItemId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_algorithmId = tmp.m_algorithmId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_algorithmId;
}
