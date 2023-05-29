
#include "3rdparty/QxOrm_POC/Precompiled/precompiled.h"

#include "pcba_wholeboard.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_PCBAOI(pcba_wholeboard, pcba_wholeboard)

namespace qx {

template <> void register_class(QxClass<pcba_wholeboard> &t) {
  qx::IxDataMember *pData = NULL;
  Q_UNUSED(pData);
  qx::IxSqlRelation *pRelation = NULL;
  Q_UNUSED(pRelation);
  qx::IxFunction *pFct = NULL;
  Q_UNUSED(pFct);
  qx::IxValidator *pValidator = NULL;
  Q_UNUSED(pValidator);

  t.setName("pcba_wholeboard");
  t.setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.id(&pcba_wholeboard::m_wholeBoardId, "wholeBoardId", 0);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  pData = t.data(&pcba_wholeboard::m_cadFileId, "cadFileId", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_cadFilePath, "cadFilePath", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData =
      t.data(&pcba_wholeboard::m_imageFilePath, "imageFilePath", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_side, "side", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_nameEN, "nameEN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_nameCN, "nameCN", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_description, "description", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_length, "length", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_width, "width", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_nSubBoardCount, "nSubBoardCount", 0, true,
                 true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_subBoardId, "subBoardId", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_strReserve, "strReserve", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");
  pData = t.data(&pcba_wholeboard::m_inActive, "inActive", 0, true, true);
  pData->setPropertyBag("QX_EE_GENERATED_BY_MYSQL_IMPORT_PLUGIN", "1");

  qx::QxValidatorX<pcba_wholeboard> *pAllValidator = t.getAllValidator();
  Q_UNUSED(pAllValidator);
}

} // namespace qx

pcba_wholeboard::pcba_wholeboard()
    : m_side(0), m_length(0.0), m_width(0.0), m_nSubBoardCount(0),
      m_inActive(0) {
  ;
}

pcba_wholeboard::pcba_wholeboard(const QString &id)
    : m_wholeBoardId(id), m_side(0), m_length(0.0), m_width(0.0),
      m_nSubBoardCount(0), m_inActive(0) {
  ;
}

pcba_wholeboard::~pcba_wholeboard() { ; }

QString pcba_wholeboard::getwholeBoardId() const { return m_wholeBoardId; }

QString pcba_wholeboard::getcadFileId() const { return m_cadFileId; }

QString pcba_wholeboard::getcadFilePath() const { return m_cadFilePath; }

QString pcba_wholeboard::getimageFilePath() const { return m_imageFilePath; }

int pcba_wholeboard::getside() const { return m_side; }

QString pcba_wholeboard::getnameEN() const { return m_nameEN; }

QString pcba_wholeboard::getnameCN() const { return m_nameCN; }

QString pcba_wholeboard::getdescription() const { return m_description; }

double pcba_wholeboard::getlength() const { return m_length; }

double pcba_wholeboard::getwidth() const { return m_width; }

int pcba_wholeboard::getnSubBoardCount() const { return m_nSubBoardCount; }

QString pcba_wholeboard::getsubBoardId() const { return m_subBoardId; }

QString pcba_wholeboard::getstrReserve() const { return m_strReserve; }

int pcba_wholeboard::getinActive() const { return m_inActive; }

void pcba_wholeboard::setwholeBoardId(const QString &val) {
  m_wholeBoardId = val;
}

void pcba_wholeboard::setcadFileId(const QString &val) { m_cadFileId = val; }

void pcba_wholeboard::setcadFilePath(const QString &val) {
  m_cadFilePath = val;
}

void pcba_wholeboard::setimageFilePath(const QString &val) {
  m_imageFilePath = val;
}

void pcba_wholeboard::setside(const int &val) { m_side = val; }

void pcba_wholeboard::setnameEN(const QString &val) { m_nameEN = val; }

void pcba_wholeboard::setnameCN(const QString &val) { m_nameCN = val; }

void pcba_wholeboard::setdescription(const QString &val) {
  m_description = val;
}

void pcba_wholeboard::setlength(const double &val) { m_length = val; }

void pcba_wholeboard::setwidth(const double &val) { m_width = val; }

void pcba_wholeboard::setnSubBoardCount(const int &val) {
  m_nSubBoardCount = val;
}

void pcba_wholeboard::setsubBoardId(const QString &val) { m_subBoardId = val; }

void pcba_wholeboard::setstrReserve(const QString &val) { m_strReserve = val; }

void pcba_wholeboard::setinActive(const int &val) { m_inActive = val; }
