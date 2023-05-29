
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_inspectscheme.gen.h"
#include "pcba_setaxis.gen.h"
#include "pcba_setcamera.gen.h"
#include "pcba_setlight.gen.h"
#include "pcba_subprogram.gen.h"
#include "pcba_user.gen.h"
#include "pcba_wholeboard.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_inspectscheme,
                                          pcba_inspectscheme)

namespace qx {

template <> void register_class(QxClass<pcba_inspectscheme> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_inspectscheme");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_inspectscheme::m_inspectSchemeId, "inspectSchemeId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_inspectscheme::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_inspectscheme::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_inspectscheme::m_createTime, "createTime", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationManyToOne(&pcba_inspectscheme::m_creatorId, "creatorId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectscheme2user");
  pRelation = t.relationManyToOne(&pcba_inspectscheme::m_wholeBoardId,
                                  "wholeBoardId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectscheme2wholeboard");
  pRelation = t.relationManyToOne(&pcba_inspectscheme::m_subProgramId,
                                  "subProgramId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectscheme2subprogram");
  pRelation =
      t.relationManyToOne(&pcba_inspectscheme::m_setAxisId, "setAxisId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectscheme2setaxis");

  pRelation =
      t.relationManyToOne(&pcba_inspectscheme::m_setLightId, "setLightId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectscheme2setlight");
  pRelation =
      t.relationManyToOne(&pcba_inspectscheme::m_setCameraId, "setCameraId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "inspectscheme2setcamera");

  qx::QxValidatorX<pcba_inspectscheme> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_inspectscheme::pcba_inspectscheme() { ; }

pcba_inspectscheme::pcba_inspectscheme(const QString &id)
    : m_inspectSchemeId(id) {
  ;
}

pcba_inspectscheme::~pcba_inspectscheme() { ; }

QString pcba_inspectscheme::getinspectSchemeId() const {
  return m_inspectSchemeId;
}

QString pcba_inspectscheme::getnameEN() const { return m_nameEN; }

QString pcba_inspectscheme::getnameCN() const { return m_nameCN; }

QDateTime pcba_inspectscheme::getcreateTime() const { return m_createTime; }

pcba_inspectscheme::type_creatorId pcba_inspectscheme::getcreatorId() const {
  return m_creatorId;
}

pcba_inspectscheme::type_wholeBoardId
pcba_inspectscheme::getwholeBoardId() const {
  return m_wholeBoardId;
}

pcba_inspectscheme::type_subProgramId
pcba_inspectscheme::getsubProgramId() const {
  return m_subProgramId;
}

pcba_inspectscheme::type_setAxisId pcba_inspectscheme::getsetAxisId() const {
  return m_setAxisId;
}

pcba_inspectscheme::type_setLightId pcba_inspectscheme::getsetLightId() const {
  return m_setLightId;
}

pcba_inspectscheme::type_setCameraId
pcba_inspectscheme::getsetCameraId() const {
  return m_setCameraId;
}

void pcba_inspectscheme::setinspectSchemeId(const QString &val) {
  m_inspectSchemeId = val;
}

void pcba_inspectscheme::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_inspectscheme::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_inspectscheme::setcreateTime(const QDateTime &val) {
  m_createTime = val;
}

void pcba_inspectscheme::setcreatorId(
    const pcba_inspectscheme::type_creatorId &val) {
  m_creatorId = val;
}

void pcba_inspectscheme::setwholeBoardId(
    const pcba_inspectscheme::type_wholeBoardId &val) {
  m_wholeBoardId = val;
}

void pcba_inspectscheme::setsubProgramId(
    const pcba_inspectscheme::type_subProgramId &val) {
  m_subProgramId = val;
}

void pcba_inspectscheme::setsetAxisId(
    const pcba_inspectscheme::type_setAxisId &val) {
  m_setAxisId = val;
}

void pcba_inspectscheme::setsetLightId(
    const pcba_inspectscheme::type_setLightId &val) {
  m_setLightId = val;
}

void pcba_inspectscheme::setsetCameraId(
    const pcba_inspectscheme::type_setCameraId &val) {
  m_setCameraId = val;
}

pcba_inspectscheme::type_creatorId pcba_inspectscheme::getcreatorId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcreatorId();
  }
  QString sRelation = "{inspectSchemeId} | creatorId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectscheme tmp;
  tmp.m_inspectSchemeId = this->m_inspectSchemeId;
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

pcba_inspectscheme::type_wholeBoardId pcba_inspectscheme::getwholeBoardId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getwholeBoardId();
  }
  QString sRelation = "{inspectSchemeId} | wholeBoardId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectscheme tmp;
  tmp.m_inspectSchemeId = this->m_inspectSchemeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_wholeBoardId = tmp.m_wholeBoardId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_wholeBoardId;
}

pcba_inspectscheme::type_subProgramId pcba_inspectscheme::getsubProgramId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsubProgramId();
  }
  QString sRelation = "{inspectSchemeId} | subProgramId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectscheme tmp;
  tmp.m_inspectSchemeId = this->m_inspectSchemeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_subProgramId = tmp.m_subProgramId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_subProgramId;
}

pcba_inspectscheme::type_setAxisId pcba_inspectscheme::getsetAxisId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsetAxisId();
  }
  QString sRelation = "{inspectSchemeId} | setAxisId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectscheme tmp;
  tmp.m_inspectSchemeId = this->m_inspectSchemeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_setAxisId = tmp.m_setAxisId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_setAxisId;
}

pcba_inspectscheme::type_setLightId pcba_inspectscheme::getsetLightId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsetLightId();
  }
  QString sRelation = "{inspectSchemeId} | setLightId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectscheme tmp;
  tmp.m_inspectSchemeId = this->m_inspectSchemeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_setLightId = tmp.m_setLightId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_setLightId;
}

pcba_inspectscheme::type_setCameraId pcba_inspectscheme::getsetCameraId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsetCameraId();
  }
  QString sRelation = "{inspectSchemeId} | setCameraId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_inspectscheme tmp;
  tmp.m_inspectSchemeId = this->m_inspectSchemeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_setCameraId = tmp.m_setCameraId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_setCameraId;
}
