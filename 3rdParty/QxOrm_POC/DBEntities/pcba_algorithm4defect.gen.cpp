

#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_algorithm.gen.h"
#include "pcba_algorithm4defect.gen.h"
#include "pcba_defect.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_algorithm4defect,
                                          pcba_algorithm4defect)

namespace qx {

template <> void register_class(QxClass<pcba_algorithm4defect> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_algorithm4defect");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_algorithm4defect::m_id, "id", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_algorithm4defect::m_algorithmId,
                                  "algorithmId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "algorithm4defect2algorithm");
  pRelation =
      t.relationManyToOne(&pcba_algorithm4defect::m_defectId, "defectId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "algorithm4defect2defect");

  qx::QxValidatorX<pcba_algorithm4defect> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_algorithm4defect::pcba_algorithm4defect() { ; }

pcba_algorithm4defect::pcba_algorithm4defect(const QString &id) : m_id(id) { ; }

pcba_algorithm4defect::~pcba_algorithm4defect() { ; }

QString pcba_algorithm4defect::getid() const { return m_id; }

pcba_algorithm4defect::type_algorithmId
pcba_algorithm4defect::getalgorithmId() const {
  return m_algorithmId;
}

pcba_algorithm4defect::type_defectId
pcba_algorithm4defect::getdefectId() const {
  return m_defectId;
}

void pcba_algorithm4defect::setid(const QString &val) { m_id = val; }

void pcba_algorithm4defect::setalgorithmId(
    const pcba_algorithm4defect::type_algorithmId &val) {
  m_algorithmId = val;
}

void pcba_algorithm4defect::setdefectId(
    const pcba_algorithm4defect::type_defectId &val) {
  m_defectId = val;
}

pcba_algorithm4defect::type_algorithmId pcba_algorithm4defect::getalgorithmId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getalgorithmId();
  }
  QString sRelation = "{id} | algorithmId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm4defect tmp;
  tmp.m_id = this->m_id;
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

pcba_algorithm4defect::type_defectId pcba_algorithm4defect::getdefectId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getdefectId();
  }
  QString sRelation = "{id} | defectId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithm4defect tmp;
  tmp.m_id = this->m_id;
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
