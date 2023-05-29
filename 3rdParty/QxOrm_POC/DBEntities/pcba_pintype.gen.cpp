
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_pinoncomponent.gen.h"
#include "pcba_pintype.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_pintype, pcba_pintype)

namespace qx {

template <> void register_class(QxClass<pcba_pintype> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_pintype");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_pintype::m_pinTypeId, "pinTypeId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_pintype::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pintype::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pintype::m_width, "width", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pintype::m_length1, "length1", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pintype::m_length2, "length2", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pintype::m_length3, "length3", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pintype::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_pintype::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation =
      t.relationOneToMany(&pcba_pintype::m_list_of_pcba_pinoncomponent,
                          "list_of_pcba_pinoncomponent", "pinTypeId", 0);

  qx::QxValidatorX<pcba_pintype> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_pintype::pcba_pintype()
    : m_width(0.0), m_length1(0.0), m_length2(0.0), m_length3(0.0),
      m_inActive(0) {
  ;
}

pcba_pintype::pcba_pintype(const QString &id)
    : m_pinTypeId(id), m_width(0.0), m_length1(0.0), m_length2(0.0),
      m_length3(0.0), m_inActive(0) {
  ;
}

pcba_pintype::~pcba_pintype() { ; }

QString pcba_pintype::getpinTypeId() const { return m_pinTypeId; }

QString pcba_pintype::getnameEN() const { return m_nameEN; }

QString pcba_pintype::getnameCN() const { return m_nameCN; }

double pcba_pintype::getwidth() const { return m_width; }

double pcba_pintype::getlength1() const { return m_length1; }

double pcba_pintype::getlength2() const { return m_length2; }

double pcba_pintype::getlength3() const { return m_length3; }

QString pcba_pintype::getstrReserve() const { return m_strReserve; }

int pcba_pintype::getinActive() const { return m_inActive; }

pcba_pintype::type_list_of_pcba_pinoncomponent
pcba_pintype::getlist_of_pcba_pinoncomponent() const {
  return m_list_of_pcba_pinoncomponent;
}

pcba_pintype::type_list_of_pcba_pinoncomponent &
pcba_pintype::list_of_pcba_pinoncomponent() {
  return m_list_of_pcba_pinoncomponent;
}

const pcba_pintype::type_list_of_pcba_pinoncomponent &
pcba_pintype::list_of_pcba_pinoncomponent() const {
  return m_list_of_pcba_pinoncomponent;
}

void pcba_pintype::setpinTypeId(const QString &val) { m_pinTypeId = val; }

void pcba_pintype::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_pintype::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_pintype::setwidth(const double &val) { m_width = val; }

void pcba_pintype::setlength1(const double &val) { m_length1 = val; }

void pcba_pintype::setlength2(const double &val) { m_length2 = val; }

void pcba_pintype::setlength3(const double &val) { m_length3 = val; }

void pcba_pintype::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_pintype::setinActive(const int &val) { m_inActive = val; }

void pcba_pintype::setlist_of_pcba_pinoncomponent(
    const pcba_pintype::type_list_of_pcba_pinoncomponent &val) {
  m_list_of_pcba_pinoncomponent = val;
}

pcba_pintype::type_list_of_pcba_pinoncomponent
pcba_pintype::getlist_of_pcba_pinoncomponent(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getlist_of_pcba_pinoncomponent();
  }
  QString sRelation = "{pinTypeId} | list_of_pcba_pinoncomponent";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_pintype tmp;
  tmp.m_pinTypeId = this->m_pinTypeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_pinoncomponent = tmp.m_list_of_pcba_pinoncomponent;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_pinoncomponent;
}

pcba_pintype::type_list_of_pcba_pinoncomponent &
pcba_pintype::list_of_pcba_pinoncomponent(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return list_of_pcba_pinoncomponent();
  }
  QString sRelation = "{pinTypeId} | list_of_pcba_pinoncomponent";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_pintype tmp;
  tmp.m_pinTypeId = this->m_pinTypeId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_list_of_pcba_pinoncomponent = tmp.m_list_of_pcba_pinoncomponent;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_list_of_pcba_pinoncomponent;
}
