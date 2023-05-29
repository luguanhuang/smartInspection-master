#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_algorithmconfigvalue.gen.h"
#include "pcba_inspectlib.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_algorithmconfigvalue,
                                          pcba_algorithmconfigvalue)

namespace qx {

template <> void register_class(QxClass<pcba_algorithmconfigvalue> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_algorithmconfigvalue");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_algorithmconfigvalue::m_id, "id", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_algorithmconfigvalue::m_serial, "serial", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value00, "value00", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value01, "value01", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value02, "value02", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value03, "value03", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value04, "value04", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value05, "value05", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value06, "value06", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value07, "value07", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value08, "value08", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value09, "value09", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value10, "value10", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value11, "value11", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value12, "value12", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value13, "value13", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value14, "value14", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value15, "value15", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value16, "value16", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value17, "value17", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value18, "value18", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_algorithmconfigvalue::m_value19, "value19", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(
      &pcba_algorithmconfigvalue::m_inspectLibItemId, "inspectLibItemId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "algorithmconfigvalue2inspectlib");

  qx::QxValidatorX<pcba_algorithmconfigvalue> *pAllValidator =
      t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_algorithmconfigvalue::pcba_algorithmconfigvalue()
    : m_serial(0), m_value00(0.0), m_value01(0.0), m_value02(0.0),
      m_value03(0.0), m_value04(0.0), m_value05(0.0), m_value06(0.0),
      m_value07(0.0), m_value08(0.0), m_value09(0.0), m_value10(0.0),
      m_value11(0.0), m_value12(0.0), m_value13(0.0), m_value14(0.0),
      m_value15(0.0), m_value16(0.0), m_value17(0.0), m_value18(0.0),
      m_value19(0.0) {
  ;
}

pcba_algorithmconfigvalue::pcba_algorithmconfigvalue(const QString &id)
    : m_id(id), m_serial(0), m_value00(0.0), m_value01(0.0), m_value02(0.0),
      m_value03(0.0), m_value04(0.0), m_value05(0.0), m_value06(0.0),
      m_value07(0.0), m_value08(0.0), m_value09(0.0), m_value10(0.0),
      m_value11(0.0), m_value12(0.0), m_value13(0.0), m_value14(0.0),
      m_value15(0.0), m_value16(0.0), m_value17(0.0), m_value18(0.0),
      m_value19(0.0) {
  ;
}

pcba_algorithmconfigvalue::~pcba_algorithmconfigvalue() { ; }

QString pcba_algorithmconfigvalue::getid() const { return m_id; }

int pcba_algorithmconfigvalue::getserial() const { return m_serial; }

double pcba_algorithmconfigvalue::getvalue00() const { return m_value00; }

double pcba_algorithmconfigvalue::getvalue01() const { return m_value01; }

double pcba_algorithmconfigvalue::getvalue02() const { return m_value02; }

double pcba_algorithmconfigvalue::getvalue03() const { return m_value03; }

double pcba_algorithmconfigvalue::getvalue04() const { return m_value04; }

double pcba_algorithmconfigvalue::getvalue05() const { return m_value05; }

double pcba_algorithmconfigvalue::getvalue06() const { return m_value06; }

double pcba_algorithmconfigvalue::getvalue07() const { return m_value07; }

double pcba_algorithmconfigvalue::getvalue08() const { return m_value08; }

double pcba_algorithmconfigvalue::getvalue09() const { return m_value09; }

double pcba_algorithmconfigvalue::getvalue10() const { return m_value10; }

double pcba_algorithmconfigvalue::getvalue11() const { return m_value11; }

double pcba_algorithmconfigvalue::getvalue12() const { return m_value12; }

double pcba_algorithmconfigvalue::getvalue13() const { return m_value13; }

double pcba_algorithmconfigvalue::getvalue14() const { return m_value14; }

double pcba_algorithmconfigvalue::getvalue15() const { return m_value15; }

double pcba_algorithmconfigvalue::getvalue16() const { return m_value16; }

double pcba_algorithmconfigvalue::getvalue17() const { return m_value17; }

double pcba_algorithmconfigvalue::getvalue18() const { return m_value18; }

double pcba_algorithmconfigvalue::getvalue19() const { return m_value19; }

pcba_algorithmconfigvalue::type_inspectLibItemId
pcba_algorithmconfigvalue::getinspectLibItemId() const {
  return m_inspectLibItemId;
}

void pcba_algorithmconfigvalue::setid(const QString &val) { m_id = val; }

void pcba_algorithmconfigvalue::setserial(const int &val) { m_serial = val; }

void pcba_algorithmconfigvalue::setvalue00(const double &val) {
  m_value00 = val;
}

void pcba_algorithmconfigvalue::setvalue01(const double &val) {
  m_value01 = val;
}

void pcba_algorithmconfigvalue::setvalue02(const double &val) {
  m_value02 = val;
}

void pcba_algorithmconfigvalue::setvalue03(const double &val) {
  m_value03 = val;
}

void pcba_algorithmconfigvalue::setvalue04(const double &val) {
  m_value04 = val;
}

void pcba_algorithmconfigvalue::setvalue05(const double &val) {
  m_value05 = val;
}

void pcba_algorithmconfigvalue::setvalue06(const double &val) {
  m_value06 = val;
}

void pcba_algorithmconfigvalue::setvalue07(const double &val) {
  m_value07 = val;
}

void pcba_algorithmconfigvalue::setvalue08(const double &val) {
  m_value08 = val;
}

void pcba_algorithmconfigvalue::setvalue09(const double &val) {
  m_value09 = val;
}

void pcba_algorithmconfigvalue::setvalue10(const double &val) {
  m_value10 = val;
}

void pcba_algorithmconfigvalue::setvalue11(const double &val) {
  m_value11 = val;
}

void pcba_algorithmconfigvalue::setvalue12(const double &val) {
  m_value12 = val;
}

void pcba_algorithmconfigvalue::setvalue13(const double &val) {
  m_value13 = val;
}

void pcba_algorithmconfigvalue::setvalue14(const double &val) {
  m_value14 = val;
}

void pcba_algorithmconfigvalue::setvalue15(const double &val) {
  m_value15 = val;
}

void pcba_algorithmconfigvalue::setvalue16(const double &val) {
  m_value16 = val;
}

void pcba_algorithmconfigvalue::setvalue17(const double &val) {
  m_value17 = val;
}

void pcba_algorithmconfigvalue::setvalue18(const double &val) {
  m_value18 = val;
}

void pcba_algorithmconfigvalue::setvalue19(const double &val) {
  m_value19 = val;
}

void pcba_algorithmconfigvalue::setinspectLibItemId(
    const pcba_algorithmconfigvalue::type_inspectLibItemId &val) {
  m_inspectLibItemId = val;
}

pcba_algorithmconfigvalue::type_inspectLibItemId
pcba_algorithmconfigvalue::getinspectLibItemId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getinspectLibItemId();
  }
  QString sRelation = "{id} | inspectLibItemId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_algorithmconfigvalue tmp;
  tmp.m_id = this->m_id;
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
