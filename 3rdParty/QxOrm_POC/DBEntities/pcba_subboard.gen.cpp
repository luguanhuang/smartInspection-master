
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_subboard.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_subboard, pcba_subboard)

namespace qx {

template <> void register_class(QxClass<pcba_subboard> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_subboard");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_subboard::m_subBoardId, "subBoardId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_subboard::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_description, "description", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_length, "length", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_width, "width", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_baseColorR, "baseColorR", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_baseColorG, "baseColorG", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_baseColorB, "baseColorB", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_subboard::m_imageFilePath, "imageFilePath", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_subboard::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  qx::QxValidatorX<pcba_subboard> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_subboard::pcba_subboard()
    : m_length(0.0), m_width(0.0), m_baseColorR(0), m_baseColorG(0),
      m_baseColorB(0), m_inActive(0) {
  ;
}

pcba_subboard::pcba_subboard(const QString &id)
    : m_subBoardId(id), m_length(0.0), m_width(0.0), m_baseColorR(0),
      m_baseColorG(0), m_baseColorB(0), m_inActive(0) {
  ;
}

pcba_subboard::~pcba_subboard() { ; }

QString pcba_subboard::getsubBoardId() const { return m_subBoardId; }

QString pcba_subboard::getnameEN() const { return m_nameEN; }

QString pcba_subboard::getnameCN() const { return m_nameCN; }

QString pcba_subboard::getdescription() const { return m_description; }

double pcba_subboard::getlength() const { return m_length; }

double pcba_subboard::getwidth() const { return m_width; }

int pcba_subboard::getbaseColorR() const { return m_baseColorR; }

int pcba_subboard::getbaseColorG() const { return m_baseColorG; }

int pcba_subboard::getbaseColorB() const { return m_baseColorB; }

QString pcba_subboard::getimageFilePath() const { return m_imageFilePath; }

QString pcba_subboard::getstrReserve() const { return m_strReserve; }

int pcba_subboard::getinActive() const { return m_inActive; }

void pcba_subboard::setsubBoardId(const QString &val) { m_subBoardId = val; }

void pcba_subboard::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_subboard::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_subboard::setdescription(const QString &val) { m_description = val; }

void pcba_subboard::setlength(const double &val) { m_length = val; }

void pcba_subboard::setwidth(const double &val) { m_width = val; }

void pcba_subboard::setbaseColorR(const int &val) { m_baseColorR = val; }

void pcba_subboard::setbaseColorG(const int &val) { m_baseColorG = val; }

void pcba_subboard::setbaseColorB(const int &val) { m_baseColorB = val; }

void pcba_subboard::setimageFilePath(const QString &val) {
  m_imageFilePath = val;
}

void pcba_subboard::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_subboard::setinActive(const int &val) { m_inActive = val; }
