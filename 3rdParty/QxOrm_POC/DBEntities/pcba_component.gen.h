/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_component.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_COMPONENT_H_
#define _PCBAOI_PCBA_COMPONENT_H_

class pcba_componenttype;

class PCBAOI_EXPORT pcba_component {

  QX_REGISTER_FRIEND_CLASS(pcba_component)

public:
  typedef std::shared_ptr<pcba_componenttype> type_componentTypeId;

protected:
  QString m_componentId;
  QString m_nameEN;
  QString m_nameCN;
  double m_length;
  double m_width;
  double m_height;
  QString m_ocr;
  double m_xOcrStart;
  double m_yOcrStart;
  double m_fOcrLength;
  double m_fOcrWidth;
  int m_bSMD;
  long m_pinCount;
  QString m_imageFilePath;
  QString m_strReserve;
  int m_inActive;
  type_componentTypeId m_componentTypeId;

public:
  pcba_component();
  pcba_component(const QString &id);
  virtual ~pcba_component();

  QString getcomponentId() const;
  QString getnameEN() const;
  QString getnameCN() const;
  double getlength() const;
  double getwidth() const;
  double getheight() const;
  QString getocr() const;
  double getxOcrStart() const;
  double getyOcrStart() const;
  double getfOcrLength() const;
  double getfOcrWidth() const;
  int getbSMD() const;
  long getpinCount() const;
  QString getimageFilePath() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_componentTypeId getcomponentTypeId() const;

  void setcomponentId(const QString &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setlength(const double &val);
  void setwidth(const double &val);
  void setheight(const double &val);
  void setocr(const QString &val);
  void setxOcrStart(const double &val);
  void setyOcrStart(const double &val);
  void setfOcrLength(const double &val);
  void setfOcrWidth(const double &val);
  void setbSMD(const int &val);
  void setpinCount(const long &val);
  void setimageFilePath(const QString &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void setcomponentTypeId(const type_componentTypeId &val);

  type_componentTypeId getcomponentTypeId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_componentTypeId(bool key = false) {
    Q_UNUSED(key);
    return "componentTypeId";
  }

public:
  static QString column_componentId(bool key = false) {
    Q_UNUSED(key);
    return "componentId";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
  }
  static QString column_length(bool key = false) {
    Q_UNUSED(key);
    return "length";
  }
  static QString column_width(bool key = false) {
    Q_UNUSED(key);
    return "width";
  }
  static QString column_height(bool key = false) {
    Q_UNUSED(key);
    return "height";
  }
  static QString column_ocr(bool key = false) {
    Q_UNUSED(key);
    return "ocr";
  }
  static QString column_xOcrStart(bool key = false) {
    Q_UNUSED(key);
    return "xOcrStart";
  }
  static QString column_yOcrStart(bool key = false) {
    Q_UNUSED(key);
    return "yOcrStart";
  }
  static QString column_fOcrLength(bool key = false) {
    Q_UNUSED(key);
    return "fOcrLength";
  }
  static QString column_fOcrWidth(bool key = false) {
    Q_UNUSED(key);
    return "fOcrWidth";
  }
  static QString column_bSMD(bool key = false) {
    Q_UNUSED(key);
    return "bSMD";
  }
  static QString column_pinCount(bool key = false) {
    Q_UNUSED(key);
    return "pinCount";
  }
  static QString column_imageFilePath(bool key = false) {
    Q_UNUSED(key);
    return "imageFilePath";
  }
  static QString column_strReserve(bool key = false) {
    Q_UNUSED(key);
    return "strReserve";
  }
  static QString column_inActive(bool key = false) {
    Q_UNUSED(key);
    return "inActive";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_component";
  }
};

typedef std::shared_ptr<pcba_component> pcba_component_ptr;
typedef qx::QxCollection<QString, pcba_component_ptr> list_of_pcba_component;
typedef std::shared_ptr<list_of_pcba_component> list_of_pcba_component_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_component, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_component,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_component)

#include "pcba_componenttype.gen.h"

#endif // _PCBAOI_PCBA_COMPONENT_H_
