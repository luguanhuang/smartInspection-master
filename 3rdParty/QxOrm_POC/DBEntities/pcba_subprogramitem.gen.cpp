
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_inspectlib.gen.h"
#include "pcba_subboardlayout.gen.h"
#include "pcba_subprogram.gen.h"
#include "pcba_subprogramitem.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_subprogramitem,
                                          pcba_subprogramitem)

namespace qx {

template <> void register_class(QxClass<pcba_subprogramitem> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_subprogramitem");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_subprogramitem::m_subProgramItemId, "subProgramItemId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_subprogramitem::m_serial, "serial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_subprogramitem::m_subProgramId,
                                  "subProgramId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "subprogramitem2subprogram");
  pRelation =
      t.relationManyToOne(&pcba_subprogramitem::m_layoutId, "layoutId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "subprogramitem2layout");
  pRelation = t.relationManyToOne(&pcba_subprogramitem::m_inspectLibItemId,
                                  "inspectLibItemId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "subprogramitem2inspectlib");

  qx::QxValidatorX<pcba_subprogramitem> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_subprogramitem::pcba_subprogramitem() : m_serial(0) { ; }

pcba_subprogramitem::pcba_subprogramitem(const QString &id)
    : m_subProgramItemId(id), m_serial(0) {
  ;
}

pcba_subprogramitem::~pcba_subprogramitem() { ; }

QString pcba_subprogramitem::getsubProgramItemId() const {
  return m_subProgramItemId;
}

long pcba_subprogramitem::getserial() const { return m_serial; }

pcba_subprogramitem::type_subProgramId
pcba_subprogramitem::getsubProgramId() const {
  return m_subProgramId;
}

pcba_subprogramitem::type_layoutId pcba_subprogramitem::getlayoutId() const {
  return m_layoutId;
}

pcba_subprogramitem::type_inspectLibItemId
pcba_subprogramitem::getinspectLibItemId() const {
  return m_inspectLibItemId;
}

void pcba_subprogramitem::setsubProgramItemId(const QString &val) {
  m_subProgramItemId = val;
}

void pcba_subprogramitem::setserial(const long &val) { m_serial = val; }

void pcba_subprogramitem::setsubProgramId(
    const pcba_subprogramitem::type_subProgramId &val) {
  m_subProgramId = val;
}

void pcba_subprogramitem::setlayoutId(
    const pcba_subprogramitem::type_layoutId &val) {
  m_layoutId = val;
}

void pcba_subprogramitem::setinspectLibItemId(
    const pcba_subprogramitem::type_inspectLibItemId &val) {
  m_inspectLibItemId = val;
}

pcba_subprogramitem::type_subProgramId pcba_subprogramitem::getsubProgramId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsubProgramId();
  }
  QString sRelation = "{subProgramItemId} | subProgramId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_subprogramitem tmp;
  tmp.m_subProgramItemId = this->m_subProgramItemId;
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

pcba_subprogramitem::type_layoutId pcba_subprogramitem::getlayoutId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlayoutId();
  }
  QString sRelation = "{subProgramItemId} | layoutId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_subprogramitem tmp;
  tmp.m_subProgramItemId = this->m_subProgramItemId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_layoutId = tmp.m_layoutId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_layoutId;
}

pcba_subprogramitem::type_inspectLibItemId
pcba_subprogramitem::getinspectLibItemId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getinspectLibItemId();
  }
  QString sRelation = "{subProgramItemId} | inspectLibItemId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_subprogramitem tmp;
  tmp.m_subProgramItemId = this->m_subProgramItemId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_inspectLibItemId = tmp.m_inspectLibItemId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_inspectLibItemId;
}
