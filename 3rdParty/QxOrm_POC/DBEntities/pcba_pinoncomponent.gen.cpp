
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_component.gen.h"
#include "pcba_pinoncomponent.gen.h"
#include "pcba_pintype.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_pinoncomponent,
                                          pcba_pinoncomponent)

namespace qx {

template <> void register_class(QxClass<pcba_pinoncomponent> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_pinoncomponent");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_pinoncomponent::m_pinId, "pinId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_pinoncomponent::m_pinSerial, "pinSerial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pinoncomponent::m_xStart, "xStart", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pinoncomponent::m_yStart, "yStart", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pinoncomponent::m_rotation, "rotation", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_pinoncomponent::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pinoncomponent::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_pinoncomponent::m_componentId,
                                  "componentId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "pinoncomponent2component");
  pRelation =
      t.relationManyToOne(&pcba_pinoncomponent::m_pinTypeId, "pinTypeId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "pinoncomponent2pintype");

  qx::QxValidatorX<pcba_pinoncomponent> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_pinoncomponent::pcba_pinoncomponent()
    : m_pinSerial(0), m_xStart(0.0), m_yStart(0.0), m_rotation(0.0),
      m_inActive(0) {
  ;
}

pcba_pinoncomponent::pcba_pinoncomponent(const QString &id)
    : m_pinId(id), m_pinSerial(0), m_xStart(0.0), m_yStart(0.0),
      m_rotation(0.0), m_inActive(0) {
  ;
}

pcba_pinoncomponent::~pcba_pinoncomponent() { ; }

QString pcba_pinoncomponent::getpinId() const { return m_pinId; }

long pcba_pinoncomponent::getpinSerial() const { return m_pinSerial; }

double pcba_pinoncomponent::getxStart() const { return m_xStart; }

double pcba_pinoncomponent::getyStart() const { return m_yStart; }

double pcba_pinoncomponent::getrotation() const { return m_rotation; }

QString pcba_pinoncomponent::getstrReserve() const { return m_strReserve; }

int pcba_pinoncomponent::getinActive() const { return m_inActive; }

pcba_pinoncomponent::type_componentId
pcba_pinoncomponent::getcomponentId() const {
  return m_componentId;
}

pcba_pinoncomponent::type_pinTypeId pcba_pinoncomponent::getpinTypeId() const {
  return m_pinTypeId;
}

void pcba_pinoncomponent::setpinId(const QString &val) { m_pinId = val; }

void pcba_pinoncomponent::setpinSerial(const long &val) { m_pinSerial = val; }

void pcba_pinoncomponent::setxStart(const double &val) { m_xStart = val; }

void pcba_pinoncomponent::setyStart(const double &val) { m_yStart = val; }

void pcba_pinoncomponent::setrotation(const double &val) { m_rotation = val; }

void pcba_pinoncomponent::setstrReserve(const QString &val) {
  m_strReserve = val;
}

void pcba_pinoncomponent::setinActive(const int &val) { m_inActive = val; }

void pcba_pinoncomponent::setcomponentId(
    const pcba_pinoncomponent::type_componentId &val) {
  m_componentId = val;
}

void pcba_pinoncomponent::setpinTypeId(
    const pcba_pinoncomponent::type_pinTypeId &val) {
  m_pinTypeId = val;
}

pcba_pinoncomponent::type_componentId pcba_pinoncomponent::getcomponentId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcomponentId();
  }
  QString sRelation = "{pinId} | componentId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_pinoncomponent tmp;
  tmp.m_pinId = this->m_pinId;
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

pcba_pinoncomponent::type_pinTypeId pcba_pinoncomponent::getpinTypeId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getpinTypeId();
  }
  QString sRelation = "{pinId} | pinTypeId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_pinoncomponent tmp;
  tmp.m_pinId = this->m_pinId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_pinTypeId = tmp.m_pinTypeId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_pinTypeId;
}
