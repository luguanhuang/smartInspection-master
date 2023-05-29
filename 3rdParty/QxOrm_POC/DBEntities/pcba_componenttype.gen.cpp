
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_component.gen.h"
#include "pcba_componenttype.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_componenttype,
                                          pcba_componenttype)

namespace qx {

template <> void register_class(QxClass<pcba_componenttype> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_componenttype");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_componenttype::m_componentTypeId, "componentTypeId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_componenttype::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_componenttype::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_componenttype::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_componenttype::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationOneToMany(&pcba_componenttype::m_list_of_pcba_component,
                          "list_of_pcba_component", "componentTypeId", 0);

  qx::QxValidatorX<pcba_componenttype> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_componenttype::pcba_componenttype() : m_inActive(0) { ; }

pcba_componenttype::pcba_componenttype(const QString &id)
    : m_componentTypeId(id), m_inActive(0) {
  ;
}

pcba_componenttype::~pcba_componenttype() { ; }

QString pcba_componenttype::getcomponentTypeId() const {
  return m_componentTypeId;
}

QString pcba_componenttype::getnameEN() const { return m_nameEN; }

QString pcba_componenttype::getnameCN() const { return m_nameCN; }

QString pcba_componenttype::getstrReserve() const { return m_strReserve; }

int pcba_componenttype::getinActive() const { return m_inActive; }

pcba_componenttype::type_list_of_pcba_component
pcba_componenttype::getlist_of_pcba_component() const {
  return m_list_of_pcba_component;
}

pcba_componenttype::type_list_of_pcba_component &
pcba_componenttype::list_of_pcba_component() {
  return m_list_of_pcba_component;
}

const pcba_componenttype::type_list_of_pcba_component &
pcba_componenttype::list_of_pcba_component() const {
  return m_list_of_pcba_component;
}

void pcba_componenttype::setcomponentTypeId(const QString &val) {
  m_componentTypeId = val;
}

void pcba_componenttype::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_componenttype::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_componenttype::setstrReserve(const QString &val) {
  m_strReserve = val;
}

void pcba_componenttype::setinActive(const int &val) { m_inActive = val; }

void pcba_componenttype::setlist_of_pcba_component(
    const pcba_componenttype::type_list_of_pcba_component &val) {
  m_list_of_pcba_component = val;
}

pcba_componenttype::type_list_of_pcba_component
pcba_componenttype::getlist_of_pcba_component(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_pcba_component();
  }
  QString sRelation = "{componentTypeId} | list_of_pcba_component";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_componenttype tmp;
  tmp.m_componentTypeId = this->m_componentTypeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_component = tmp.m_list_of_pcba_component;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_component;
}

pcba_componenttype::type_list_of_pcba_component &
pcba_componenttype::list_of_pcba_component(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_pcba_component();
  }
  QString sRelation = "{componentTypeId} | list_of_pcba_component";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_componenttype tmp;
  tmp.m_componentTypeId = this->m_componentTypeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_component = tmp.m_list_of_pcba_component;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_component;
}
