
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_cad2component.gen.h"
#include "pcba_component.gen.h"
#include "pcba_wholeboard.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_cad2component,
                                          pcba_cad2component)

namespace qx {

template <> void register_class(QxClass<pcba_cad2component> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_cad2component");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_cad2component::m_id, "id", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData =
      t.data(&pcba_cad2component::m_materialId, "materialId", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_cad2component::m_serial, "serial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_cad2component::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_cad2component::m_inactive, "inactive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationManyToOne(&pcba_cad2component::m_cadFileId, "cadFileId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "cad2component2wholeboard");
  pRelation =
      t.relationManyToOne(&pcba_cad2component::m_componentId, "componentId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "cad2component2component");

  qx::QxValidatorX<pcba_cad2component> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_cad2component::pcba_cad2component() : m_serial(0), m_inactive(0) { ; }

pcba_cad2component::pcba_cad2component(const QString &id)
    : m_id(id), m_serial(0), m_inactive(0) {
  ;
}

pcba_cad2component::~pcba_cad2component() { ; }

QString pcba_cad2component::getid() const { return m_id; }

QString pcba_cad2component::getmaterialId() const { return m_materialId; }

long pcba_cad2component::getserial() const { return m_serial; }

QString pcba_cad2component::getstrReserve() const { return m_strReserve; }

int pcba_cad2component::getinactive() const { return m_inactive; }

pcba_cad2component::type_cadFileId pcba_cad2component::getcadFileId() const {
  return m_cadFileId;
}

pcba_cad2component::type_componentId
pcba_cad2component::getcomponentId() const {
  return m_componentId;
}

void pcba_cad2component::setid(const QString &val) { m_id = val; }

void pcba_cad2component::setmaterialId(const QString &val) {
  m_materialId = val;
}

void pcba_cad2component::setserial(const long &val) { m_serial = val; }

void pcba_cad2component::setstrReserve(const QString &val) {
  m_strReserve = val;
}

void pcba_cad2component::setinactive(const int &val) { m_inactive = val; }

void pcba_cad2component::setcadFileId(
    const pcba_cad2component::type_cadFileId &val) {
  m_cadFileId = val;
}

void pcba_cad2component::setcomponentId(
    const pcba_cad2component::type_componentId &val) {
  m_componentId = val;
}

pcba_cad2component::type_cadFileId pcba_cad2component::getcadFileId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcadFileId();
  }
  QString sRelation = "{id} | cadFileId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_cad2component tmp;
  tmp.m_id = this->m_id;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_cadFileId = tmp.m_cadFileId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_cadFileId;
}

pcba_cad2component::type_componentId pcba_cad2component::getcomponentId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcomponentId();
  }
  QString sRelation = "{id} | componentId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_cad2component tmp;
  tmp.m_id = this->m_id;
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
