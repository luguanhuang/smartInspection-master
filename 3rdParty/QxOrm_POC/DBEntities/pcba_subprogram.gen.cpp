
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_subboard.gen.h"
#include "pcba_subprogram.gen.h"
#include "pcba_user.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_subprogram, pcba_subprogram)

namespace qx {

template <> void register_class(QxClass<pcba_subprogram> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_subprogram");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_subprogram::m_subProgramId, "subProgramId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_subprogram::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subprogram::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subprogram::m_createTime, "createTime", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subprogram::m_bFinished, "bFinished", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subprogram::m_finishTime, "finishTime", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subprogram::m_description, "description", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationManyToOne(&pcba_subprogram::m_subBoardId, "subBoardId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "subprogram2subboard");
  pRelation =
      t.relationManyToOne(&pcba_subprogram::m_creatorId, "creatorId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "subprogram2user");

  qx::QxValidatorX<pcba_subprogram> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_subprogram::pcba_subprogram() : m_bFinished(0) { ; }

pcba_subprogram::pcba_subprogram(const QString &id)
    : m_subProgramId(id), m_bFinished(0) {
  ;
}

pcba_subprogram::~pcba_subprogram() { ; }

QString pcba_subprogram::getsubProgramId() const { return m_subProgramId; }

QString pcba_subprogram::getnameEN() const { return m_nameEN; }

QString pcba_subprogram::getnameCN() const { return m_nameCN; }

QDateTime pcba_subprogram::getcreateTime() const { return m_createTime; }

int pcba_subprogram::getbFinished() const { return m_bFinished; }

QDateTime pcba_subprogram::getfinishTime() const { return m_finishTime; }

QString pcba_subprogram::getdescription() const { return m_description; }

pcba_subprogram::type_subBoardId pcba_subprogram::getsubBoardId() const {
  return m_subBoardId;
}

pcba_subprogram::type_creatorId pcba_subprogram::getcreatorId() const {
  return m_creatorId;
}

void pcba_subprogram::setsubProgramId(const QString &val) {
  m_subProgramId = val;
}

void pcba_subprogram::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_subprogram::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_subprogram::setcreateTime(const QDateTime &val) {
  m_createTime = val;
}

void pcba_subprogram::setbFinished(const int &val) { m_bFinished = val; }

void pcba_subprogram::setfinishTime(const QDateTime &val) {
  m_finishTime = val;
}

void pcba_subprogram::setdescription(const QString &val) {
  m_description = val;
}

void pcba_subprogram::setsubBoardId(
    const pcba_subprogram::type_subBoardId &val) {
  m_subBoardId = val;
}

void pcba_subprogram::setcreatorId(const pcba_subprogram::type_creatorId &val) {
  m_creatorId = val;
}

pcba_subprogram::type_subBoardId pcba_subprogram::getsubBoardId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsubBoardId();
  }
  QString sRelation = "{subProgramId} | subBoardId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_subprogram tmp;
  tmp.m_subProgramId = this->m_subProgramId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_subBoardId = tmp.m_subBoardId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_subBoardId;
}

pcba_subprogram::type_creatorId pcba_subprogram::getcreatorId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcreatorId();
  }
  QString sRelation = "{subProgramId} | creatorId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_subprogram tmp;
  tmp.m_subProgramId = this->m_subProgramId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_creatorId = tmp.m_creatorId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_creatorId;
}
