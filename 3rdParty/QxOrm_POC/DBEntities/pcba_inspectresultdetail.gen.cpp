
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_inspectresult.gen.h"
#include "pcba_inspectresultdetail.gen.h"
#include "pcba_subprogramitem.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_inspectresultdetail,
                                          pcba_inspectresultdetail)

namespace qx {

template <> void register_class(QxClass<pcba_inspectresultdetail> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_inspectresultdetail");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_inspectresultdetail::m_inspectResultDetailId,
               "inspectResultDetailId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_inspectresultdetail::m_subBoardSerial, "subBoardSerial",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_inspectresultdetail::m_result, "result", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_inspectresultdetail::m_repair, "repair", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_inspectresultdetail::m_inspectResultId,
                                  "inspectResultId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectresultdetail2inspectresult");
  pRelation = t.relationManyToOne(&pcba_inspectresultdetail::m_subProgramItemId,
                                  "subProgramItemId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectresultdetail2subprogramitem");

  qx::QxValidatorX<pcba_inspectresultdetail> *pAllValidator =
      t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_inspectresultdetail::pcba_inspectresultdetail()
    : m_subBoardSerial(0), m_result(0), m_repair(0) {
  ;
}

pcba_inspectresultdetail::pcba_inspectresultdetail(const QString &id)
    : m_inspectResultDetailId(id), m_subBoardSerial(0), m_result(0),
      m_repair(0) {
  ;
}

pcba_inspectresultdetail::~pcba_inspectresultdetail() { ; }

QString pcba_inspectresultdetail::getinspectResultDetailId() const {
  return m_inspectResultDetailId;
}

int pcba_inspectresultdetail::getsubBoardSerial() const {
  return m_subBoardSerial;
}

int pcba_inspectresultdetail::getresult() const { return m_result; }

int pcba_inspectresultdetail::getrepair() const { return m_repair; }

pcba_inspectresultdetail::type_inspectResultId
pcba_inspectresultdetail::getinspectResultId() const {
  return m_inspectResultId;
}

pcba_inspectresultdetail::type_subProgramItemId
pcba_inspectresultdetail::getsubProgramItemId() const {
  return m_subProgramItemId;
}

void pcba_inspectresultdetail::setinspectResultDetailId(const QString &val) {
  m_inspectResultDetailId = val;
}

void pcba_inspectresultdetail::setsubBoardSerial(const int &val) {
  m_subBoardSerial = val;
}

void pcba_inspectresultdetail::setresult(const int &val) { m_result = val; }

void pcba_inspectresultdetail::setrepair(const int &val) { m_repair = val; }

void pcba_inspectresultdetail::setinspectResultId(
    const pcba_inspectresultdetail::type_inspectResultId &val) {
  m_inspectResultId = val;
}

void pcba_inspectresultdetail::setsubProgramItemId(
    const pcba_inspectresultdetail::type_subProgramItemId &val) {
  m_subProgramItemId = val;
}

pcba_inspectresultdetail::type_inspectResultId
pcba_inspectresultdetail::getinspectResultId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getinspectResultId();
  }
  QString sRelation = "{inspectResultDetailId} | inspectResultId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectresultdetail tmp;
  tmp.m_inspectResultDetailId = this->m_inspectResultDetailId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_inspectResultId = tmp.m_inspectResultId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_inspectResultId;
}

pcba_inspectresultdetail::type_subProgramItemId
pcba_inspectresultdetail::getsubProgramItemId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsubProgramItemId();
  }
  QString sRelation = "{inspectResultDetailId} | subProgramItemId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectresultdetail tmp;
  tmp.m_inspectResultDetailId = this->m_inspectResultDetailId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_subProgramItemId = tmp.m_subProgramItemId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_subProgramItemId;
}
