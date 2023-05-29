

#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_component.gen.h"
#include "pcba_subboard.gen.h"
#include "pcba_subboardlayout.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_subboardlayout,
                                          pcba_subboardlayout)

namespace qx {

template <> void register_class(QxClass<pcba_subboardlayout> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_subboardlayout");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_subboardlayout::m_layoutId, "layoutId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData =
      t.data(&pcba_subboardlayout::m_positionId, "positionId", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboardlayout::m_x, "x", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboardlayout::m_y, "y", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboardlayout::m_rotation, "rotation", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_subboardlayout::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboardlayout::m_inactive, "inactive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationManyToOne(&pcba_subboardlayout::m_subBoardId, "subBoardId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "subboardlayout2subboard");
  pRelation = t.relationManyToOne(&pcba_subboardlayout::m_componentId,
                                  "componentId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "subboardlayout2component");

  qx::QxValidatorX<pcba_subboardlayout> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_subboardlayout::pcba_subboardlayout()
    : m_positionId(0), m_x(0.0), m_y(0.0), m_rotation(0.0), m_inactive(0) {
  ;
}

pcba_subboardlayout::pcba_subboardlayout(const QString &id)
    : m_layoutId(id), m_positionId(0), m_x(0.0), m_y(0.0), m_rotation(0.0),
      m_inactive(0) {
  ;
}

pcba_subboardlayout::~pcba_subboardlayout() { ; }

QString pcba_subboardlayout::getlayoutId() const { return m_layoutId; }

long pcba_subboardlayout::getpositionId() const { return m_positionId; }

double pcba_subboardlayout::getx() const { return m_x; }

double pcba_subboardlayout::gety() const { return m_y; }

double pcba_subboardlayout::getrotation() const { return m_rotation; }

QString pcba_subboardlayout::getstrReserve() const { return m_strReserve; }

int pcba_subboardlayout::getinactive() const { return m_inactive; }

pcba_subboardlayout::type_subBoardId
pcba_subboardlayout::getsubBoardId() const {
  return m_subBoardId;
}

pcba_subboardlayout::type_componentId
pcba_subboardlayout::getcomponentId() const {
  return m_componentId;
}

void pcba_subboardlayout::setlayoutId(const QString &val) { m_layoutId = val; }

void pcba_subboardlayout::setpositionId(const long &val) { m_positionId = val; }

void pcba_subboardlayout::setx(const double &val) { m_x = val; }

void pcba_subboardlayout::sety(const double &val) { m_y = val; }

void pcba_subboardlayout::setrotation(const double &val) { m_rotation = val; }

void pcba_subboardlayout::setstrReserve(const QString &val) {
  m_strReserve = val;
}

void pcba_subboardlayout::setinactive(const int &val) { m_inactive = val; }

void pcba_subboardlayout::setsubBoardId(
    const pcba_subboardlayout::type_subBoardId &val) {
  m_subBoardId = val;
}

void pcba_subboardlayout::setcomponentId(
    const pcba_subboardlayout::type_componentId &val) {
  m_componentId = val;
}

pcba_subboardlayout::type_subBoardId pcba_subboardlayout::getsubBoardId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsubBoardId();
  }
  QString sRelation = "{layoutId} | subBoardId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_subboardlayout tmp;
  tmp.m_layoutId = this->m_layoutId;
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

pcba_subboardlayout::type_componentId pcba_subboardlayout::getcomponentId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcomponentId();
  }
  QString sRelation = "{layoutId} | componentId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_subboardlayout tmp;
  tmp.m_layoutId = this->m_layoutId;
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
