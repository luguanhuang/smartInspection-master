
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_component.gen.h"
#include "pcba_componenttype.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_component, pcba_component)

namespace qx {

template <> void register_class(QxClass<pcba_component> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_component");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_component::m_componentId, "componentId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_component::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_length, "length", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_width, "width", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_height, "height", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_ocr, "ocr", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_xOcrStart, "xOcrStart", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_yOcrStart, "yOcrStart", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_fOcrLength, "fOcrLength", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_fOcrWidth, "fOcrWidth", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_bSMD, "bSMD", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_pinCount, "pinCount", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_component::m_imageFilePath, "imageFilePath", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_component::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pRelation = t.relationManyToOne(&pcba_component::m_componentTypeId,
                                  "componentTypeId", 0);
  pRelation->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pRelation->setPropertyBag("QX_EE_IMPORTED_CONSTRAINT_NAME",
                            "component2componentType");

  qx::QxValidatorX<pcba_component> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_component::pcba_component()
    : m_length(0.0), m_width(0.0), m_height(0.0), m_xOcrStart(0.0),
      m_yOcrStart(0.0), m_fOcrLength(0.0), m_fOcrWidth(0.0), m_bSMD(0),
      m_pinCount(0), m_inActive(0) {
  ;
}

pcba_component::pcba_component(const QString &id)
    : m_componentId(id), m_length(0.0), m_width(0.0), m_height(0.0),
      m_xOcrStart(0.0), m_yOcrStart(0.0), m_fOcrLength(0.0), m_fOcrWidth(0.0),
      m_bSMD(0), m_pinCount(0), m_inActive(0) {
  ;
}

pcba_component::~pcba_component() { ; }

QString pcba_component::getcomponentId() const { return m_componentId; }

QString pcba_component::getnameEN() const { return m_nameEN; }

QString pcba_component::getnameCN() const { return m_nameCN; }

double pcba_component::getlength() const { return m_length; }

double pcba_component::getwidth() const { return m_width; }

double pcba_component::getheight() const { return m_height; }

QString pcba_component::getocr() const { return m_ocr; }

double pcba_component::getxOcrStart() const { return m_xOcrStart; }

double pcba_component::getyOcrStart() const { return m_yOcrStart; }

double pcba_component::getfOcrLength() const { return m_fOcrLength; }

double pcba_component::getfOcrWidth() const { return m_fOcrWidth; }

int pcba_component::getbSMD() const { return m_bSMD; }

long pcba_component::getpinCount() const { return m_pinCount; }

QString pcba_component::getimageFilePath() const { return m_imageFilePath; }

QString pcba_component::getstrReserve() const { return m_strReserve; }

int pcba_component::getinActive() const { return m_inActive; }

pcba_component::type_componentTypeId
pcba_component::getcomponentTypeId() const {
  return m_componentTypeId;
}

void pcba_component::setcomponentId(const QString &val) { m_componentId = val; }

void pcba_component::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_component::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_component::setlength(const double &val) { m_length = val; }

void pcba_component::setwidth(const double &val) { m_width = val; }

void pcba_component::setheight(const double &val) { m_height = val; }

void pcba_component::setocr(const QString &val) { m_ocr = val; }

void pcba_component::setxOcrStart(const double &val) { m_xOcrStart = val; }

void pcba_component::setyOcrStart(const double &val) { m_yOcrStart = val; }

void pcba_component::setfOcrLength(const double &val) { m_fOcrLength = val; }

void pcba_component::setfOcrWidth(const double &val) { m_fOcrWidth = val; }

void pcba_component::setbSMD(const int &val) { m_bSMD = val; }

void pcba_component::setpinCount(const long &val) { m_pinCount = val; }

void pcba_component::setimageFilePath(const QString &val) {
  m_imageFilePath = val;
}

void pcba_component::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_component::setinActive(const int &val) { m_inActive = val; }

void pcba_component::setcomponentTypeId(
    const pcba_component::type_componentTypeId &val) {
  m_componentTypeId = val;
}

pcba_component::type_componentTypeId pcba_component::getcomponentTypeId(
    bool bLoadFromDatabase, const QString &sAppendRelations /* = QString() */,
    QSqlDatabase *pDatabase /* = NULL */, QSqlError *pDaoError /* = NULL */) {
  if (pDaoError) {
    (*pDaoError) = QSqlError();
  }
  if (!bLoadFromDatabase) {
    return getcomponentTypeId();
  }
  QString sRelation = "{componentId} | componentTypeId";
  if (!sAppendRelations.isEmpty() && !sAppendRelations.startsWith("->") &&
      !sAppendRelations.startsWith(">>")) {
    sRelation += "->" + sAppendRelations;
  } else if (!sAppendRelations.isEmpty()) {
    sRelation += sAppendRelations;
  }
  pcba_component tmp;
  tmp.m_componentId = this->m_componentId;
  QSqlError daoError =
      qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
  if (!daoError.isValid()) {
    this->m_componentTypeId = tmp.m_componentTypeId;
  }
  if (pDaoError) {
    (*pDaoError) = daoError;
  }
  return m_componentTypeId;
}
