
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_subboard.gen.h"
#include "pcba_wholeboard.gen.h"
#include "pcba_wholeboardpattern.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_wholeboardpattern,
                                          pcba_wholeboardpattern)

namespace qx {

template <> void register_class(QxClass<pcba_wholeboardpattern> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_wholeboardpattern");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_wholeboardpattern::m_id, "id", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_wholeboardpattern::m_serial, "serial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboardpattern::m_x, "x", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboardpattern::m_y, "y", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_wholeboardpattern::m_rotation, "rotation", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboardpattern::m_bHorizontalMirror,
                 "bHorizontalMirror", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboardpattern::m_bVerticalMirror, "bVerticalMirror",
                 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboardpattern::m_strReserve, "strReserve", 0, true,
                 true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_wholeboardpattern::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_wholeboardpattern::m_wholeBoardId,
                                  "wholeBoardId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "wholeboardpattern2wholeboard");
  pRelation = t.relationManyToOne(&pcba_wholeboardpattern::m_subBoardId,
                                  "subBoardId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "wholeboardpattern2subboard");

  qx::QxValidatorX<pcba_wholeboardpattern> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_wholeboardpattern::pcba_wholeboardpattern()
    : m_serial(0), m_x(0.0), m_y(0.0), m_rotation(0.0), m_bHorizontalMirror(0),
      m_bVerticalMirror(0), m_inActive(0) {
  ;
}

pcba_wholeboardpattern::pcba_wholeboardpattern(const QString &id)
    : m_id(id), m_serial(0), m_x(0.0), m_y(0.0), m_rotation(0.0),
      m_bHorizontalMirror(0), m_bVerticalMirror(0), m_inActive(0) {
  ;
}

pcba_wholeboardpattern::~pcba_wholeboardpattern() { ; }

QString pcba_wholeboardpattern::getid() const { return m_id; }

int pcba_wholeboardpattern::getserial() const { return m_serial; }

double pcba_wholeboardpattern::getx() const { return m_x; }

double pcba_wholeboardpattern::gety() const { return m_y; }

double pcba_wholeboardpattern::getrotation() const { return m_rotation; }

int pcba_wholeboardpattern::getbHorizontalMirror() const {
  return m_bHorizontalMirror;
}

int pcba_wholeboardpattern::getbVerticalMirror() const {
  return m_bVerticalMirror;
}

QString pcba_wholeboardpattern::getstrReserve() const { return m_strReserve; }

int pcba_wholeboardpattern::getinActive() const { return m_inActive; }

pcba_wholeboardpattern::type_wholeBoardId
pcba_wholeboardpattern::getwholeBoardId() const {
  return m_wholeBoardId;
}

pcba_wholeboardpattern::type_subBoardId
pcba_wholeboardpattern::getsubBoardId() const {
  return m_subBoardId;
}

void pcba_wholeboardpattern::setid(const QString &val) { m_id = val; }

void pcba_wholeboardpattern::setserial(const int &val) { m_serial = val; }

void pcba_wholeboardpattern::setx(const double &val) { m_x = val; }

void pcba_wholeboardpattern::sety(const double &val) { m_y = val; }

void pcba_wholeboardpattern::setrotation(const double &val) {
  m_rotation = val;
}

void pcba_wholeboardpattern::setbHorizontalMirror(const int &val) {
  m_bHorizontalMirror = val;
}

void pcba_wholeboardpattern::setbVerticalMirror(const int &val) {
  m_bVerticalMirror = val;
}

void pcba_wholeboardpattern::setstrReserve(const QString &val) {
  m_strReserve = val;
}

void pcba_wholeboardpattern::setinActive(const int &val) { m_inActive = val; }

void pcba_wholeboardpattern::setwholeBoardId(
    const pcba_wholeboardpattern::type_wholeBoardId &val) {
  m_wholeBoardId = val;
}

void pcba_wholeboardpattern::setsubBoardId(
    const pcba_wholeboardpattern::type_subBoardId &val) {
  m_subBoardId = val;
}

pcba_wholeboardpattern::type_wholeBoardId
pcba_wholeboardpattern::getwholeBoardId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getwholeBoardId();
  }
  QString sRelation = "{id} | wholeBoardId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_wholeboardpattern tmp;
  tmp.m_id = this->m_id;
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

pcba_wholeboardpattern::type_subBoardId pcba_wholeboardpattern::getsubBoardId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getsubBoardId();
  }
  QString sRelation = "{id} | subBoardId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_wholeboardpattern tmp;
  tmp.m_id = this->m_id;
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
