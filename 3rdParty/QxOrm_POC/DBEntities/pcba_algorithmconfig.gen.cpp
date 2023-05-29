

#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_algorithm.gen.h"
#include "pcba_algorithmconfig.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_algorithmconfig,
                                          pcba_algorithmconfig)

namespace qx {

template <> void register_class(QxClass<pcba_algorithmconfig> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_algorithmconfig");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData =
      t.id(&pcba_algorithmconfig::m_algorithmConfigId, "algorithmConfigId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_algorithmconfig::m_serial, "serial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_dataType, "dataType", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_dataArraySize, "dataArraySize", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue00, "defaultValue00", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue01, "defaultValue01", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue02, "defaultValue02", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue03, "defaultValue03", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue04, "defaultValue04", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue05, "defaultValue05", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue06, "defaultValue06", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue07, "defaultValue07", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue08, "defaultValue08", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue09, "defaultValue09", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue10, "defaultValue10", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue11, "defaultValue11", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue12, "defaultValue12", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue13, "defaultValue13", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue14, "defaultValue14", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue15, "defaultValue15", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue16, "defaultValue16", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue17, "defaultValue17", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue18, "defaultValue18", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_defaultValue19, "defaultValue19", 0,
                 true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfig::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_algorithmconfig::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_algorithmconfig::m_algorithmId,
                                  "algorithmId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "algorithmconfig2algorithm");

  qx::QxValidatorX<pcba_algorithmconfig> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_algorithmconfig::pcba_algorithmconfig()
    : m_serial(0), m_dataType(0), m_dataArraySize(0), m_defaultValue00(0.0),
      m_defaultValue01(0.0), m_defaultValue02(0.0), m_defaultValue03(0.0),
      m_defaultValue04(0.0), m_defaultValue05(0.0), m_defaultValue06(0.0),
      m_defaultValue07(0.0), m_defaultValue08(0.0), m_defaultValue09(0.0),
      m_defaultValue10(0.0), m_defaultValue11(0.0), m_defaultValue12(0.0),
      m_defaultValue13(0.0), m_defaultValue14(0.0), m_defaultValue15(0.0),
      m_defaultValue16(0.0), m_defaultValue17(0.0), m_defaultValue18(0.0),
      m_defaultValue19(0.0), m_inActive(0) {
  ;
}

pcba_algorithmconfig::pcba_algorithmconfig(const QString &id)
    : m_algorithmConfigId(id), m_serial(0), m_dataType(0), m_dataArraySize(0),
      m_defaultValue00(0.0), m_defaultValue01(0.0), m_defaultValue02(0.0),
      m_defaultValue03(0.0), m_defaultValue04(0.0), m_defaultValue05(0.0),
      m_defaultValue06(0.0), m_defaultValue07(0.0), m_defaultValue08(0.0),
      m_defaultValue09(0.0), m_defaultValue10(0.0), m_defaultValue11(0.0),
      m_defaultValue12(0.0), m_defaultValue13(0.0), m_defaultValue14(0.0),
      m_defaultValue15(0.0), m_defaultValue16(0.0), m_defaultValue17(0.0),
      m_defaultValue18(0.0), m_defaultValue19(0.0), m_inActive(0) {
  ;
}

pcba_algorithmconfig::~pcba_algorithmconfig() { ; }

QString pcba_algorithmconfig::getalgorithmConfigId() const {
  return m_algorithmConfigId;
}

int pcba_algorithmconfig::getserial() const { return m_serial; }

QString pcba_algorithmconfig::getnameEN() const { return m_nameEN; }

QString pcba_algorithmconfig::getnameCN() const { return m_nameCN; }

long pcba_algorithmconfig::getdataType() const { return m_dataType; }

long pcba_algorithmconfig::getdataArraySize() const { return m_dataArraySize; }

double pcba_algorithmconfig::getdefaultValue00() const {
  return m_defaultValue00;
}

double pcba_algorithmconfig::getdefaultValue01() const {
  return m_defaultValue01;
}

double pcba_algorithmconfig::getdefaultValue02() const {
  return m_defaultValue02;
}

double pcba_algorithmconfig::getdefaultValue03() const {
  return m_defaultValue03;
}

double pcba_algorithmconfig::getdefaultValue04() const {
  return m_defaultValue04;
}

double pcba_algorithmconfig::getdefaultValue05() const {
  return m_defaultValue05;
}

double pcba_algorithmconfig::getdefaultValue06() const {
  return m_defaultValue06;
}

double pcba_algorithmconfig::getdefaultValue07() const {
  return m_defaultValue07;
}

double pcba_algorithmconfig::getdefaultValue08() const {
  return m_defaultValue08;
}

double pcba_algorithmconfig::getdefaultValue09() const {
  return m_defaultValue09;
}

double pcba_algorithmconfig::getdefaultValue10() const {
  return m_defaultValue10;
}

double pcba_algorithmconfig::getdefaultValue11() const {
  return m_defaultValue11;
}

double pcba_algorithmconfig::getdefaultValue12() const {
  return m_defaultValue12;
}

double pcba_algorithmconfig::getdefaultValue13() const {
  return m_defaultValue13;
}

double pcba_algorithmconfig::getdefaultValue14() const {
  return m_defaultValue14;
}

double pcba_algorithmconfig::getdefaultValue15() const {
  return m_defaultValue15;
}

double pcba_algorithmconfig::getdefaultValue16() const {
  return m_defaultValue16;
}

double pcba_algorithmconfig::getdefaultValue17() const {
  return m_defaultValue17;
}

double pcba_algorithmconfig::getdefaultValue18() const {
  return m_defaultValue18;
}

double pcba_algorithmconfig::getdefaultValue19() const {
  return m_defaultValue19;
}

QString pcba_algorithmconfig::getstrReserve() const { return m_strReserve; }

int pcba_algorithmconfig::getinActive() const { return m_inActive; }

pcba_algorithmconfig::type_algorithmId
pcba_algorithmconfig::getalgorithmId() const {
  return m_algorithmId;
}

void pcba_algorithmconfig::setalgorithmConfigId(const QString &val) {
  m_algorithmConfigId = val;
}

void pcba_algorithmconfig::setserial(const int &val) { m_serial = val; }

void pcba_algorithmconfig::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_algorithmconfig::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_algorithmconfig::setdataType(const long &val) { m_dataType = val; }

void pcba_algorithmconfig::setdataArraySize(const long &val) {
  m_dataArraySize = val;
}

void pcba_algorithmconfig::setdefaultValue00(const double &val) {
  m_defaultValue00 = val;
}

void pcba_algorithmconfig::setdefaultValue01(const double &val) {
  m_defaultValue01 = val;
}

void pcba_algorithmconfig::setdefaultValue02(const double &val) {
  m_defaultValue02 = val;
}

void pcba_algorithmconfig::setdefaultValue03(const double &val) {
  m_defaultValue03 = val;
}

void pcba_algorithmconfig::setdefaultValue04(const double &val) {
  m_defaultValue04 = val;
}

void pcba_algorithmconfig::setdefaultValue05(const double &val) {
  m_defaultValue05 = val;
}

void pcba_algorithmconfig::setdefaultValue06(const double &val) {
  m_defaultValue06 = val;
}

void pcba_algorithmconfig::setdefaultValue07(const double &val) {
  m_defaultValue07 = val;
}

void pcba_algorithmconfig::setdefaultValue08(const double &val) {
  m_defaultValue08 = val;
}

void pcba_algorithmconfig::setdefaultValue09(const double &val) {
  m_defaultValue09 = val;
}

void pcba_algorithmconfig::setdefaultValue10(const double &val) {
  m_defaultValue10 = val;
}

void pcba_algorithmconfig::setdefaultValue11(const double &val) {
  m_defaultValue11 = val;
}

void pcba_algorithmconfig::setdefaultValue12(const double &val) {
  m_defaultValue12 = val;
}

void pcba_algorithmconfig::setdefaultValue13(const double &val) {
  m_defaultValue13 = val;
}

void pcba_algorithmconfig::setdefaultValue14(const double &val) {
  m_defaultValue14 = val;
}

void pcba_algorithmconfig::setdefaultValue15(const double &val) {
  m_defaultValue15 = val;
}

void pcba_algorithmconfig::setdefaultValue16(const double &val) {
  m_defaultValue16 = val;
}

void pcba_algorithmconfig::setdefaultValue17(const double &val) {
  m_defaultValue17 = val;
}

void pcba_algorithmconfig::setdefaultValue18(const double &val) {
  m_defaultValue18 = val;
}

void pcba_algorithmconfig::setdefaultValue19(const double &val) {
  m_defaultValue19 = val;
}

void pcba_algorithmconfig::setstrReserve(const QString &val) {
  m_strReserve = val;
}

void pcba_algorithmconfig::setinActive(const int &val) { m_inActive = val; }

void pcba_algorithmconfig::setalgorithmId(
    const pcba_algorithmconfig::type_algorithmId &val) {
  m_algorithmId = val;
}

pcba_algorithmconfig::type_algorithmId pcba_algorithmconfig::getalgorithmId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getalgorithmId();
  }
  QString sRelation = "{algorithmConfigId} | algorithmId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithmconfig tmp;
  tmp.m_algorithmConfigId = this->m_algorithmConfigId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_algorithmId = tmp.m_algorithmId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_algorithmId;
}
