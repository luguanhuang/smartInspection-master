/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_pinoncomponent.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_PINONCOMPONENT_H_
#define _PCBAOI_PCBA_PINONCOMPONENT_H_

class pcba_component;
class pcba_pintype;

class PCBAOI_EXPORT pcba_pinoncomponent {

  QX_REGISTER_FRIEND_CLASS(pcba_pinoncomponent)

public:
  typedef std::shared_ptr<pcba_component> type_componentId;
  typedef std::shared_ptr<pcba_pintype> type_pinTypeId;

protected:
  QString m_pinId;
  long m_pinSerial;
  double m_xStart;
  double m_yStart;
  double m_rotation;
  QString m_strReserve;
  int m_inActive;
  type_componentId m_componentId;
  type_pinTypeId m_pinTypeId;

public:
  pcba_pinoncomponent();
  pcba_pinoncomponent(const QString &id);
  virtual ~pcba_pinoncomponent();

  QString getpinId() const;
  long getpinSerial() const;
  double getxStart() const;
  double getyStart() const;
  double getrotation() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_componentId getcomponentId() const;
  type_pinTypeId getpinTypeId() const;

  void setpinId(const QString &val);
  void setpinSerial(const long &val);
  void setxStart(const double &val);
  void setyStart(const double &val);
  void setrotation(const double &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void setcomponentId(const type_componentId &val);
  void setpinTypeId(const type_pinTypeId &val);

  type_componentId getcomponentId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);
  type_pinTypeId getpinTypeId(bool bLoadFromDatabase,
                              const QString &sAppendRelations = QString(),
                              QSqlDatabase *pDatabase = NULL,
                              QSqlError *pDaoError = NULL);

public:
  static QString relation_componentId(bool key = false) {
    Q_UNUSED(key);
    return "componentId";
  }
  static QString relation_pinTypeId(bool key = false) {
    Q_UNUSED(key);
    return "pinTypeId";
  }

public:
  static QString column_pinId(bool key = false) {
    Q_UNUSED(key);
    return "pinId";
  }
  static QString column_pinSerial(bool key = false) {
    Q_UNUSED(key);
    return "pinSerial";
  }
  static QString column_xStart(bool key = false) {
    Q_UNUSED(key);
    return "xStart";
  }
  static QString column_yStart(bool key = false) {
    Q_UNUSED(key);
    return "yStart";
  }
  static QString column_rotation(bool key = false) {
    Q_UNUSED(key);
    return "rotation";
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
    return "pcba_pinoncomponent";
  }
};

typedef std::shared_ptr<pcba_pinoncomponent> pcba_pinoncomponent_ptr;
typedef qx::QxCollection<QString, pcba_pinoncomponent_ptr>
    list_of_pcba_pinoncomponent;
typedef std::shared_ptr<list_of_pcba_pinoncomponent>
    list_of_pcba_pinoncomponent_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_pinoncomponent, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_pinoncomponent,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_pinoncomponent)

#include "pcba_component.gen.h"
#include "pcba_pintype.gen.h"

#endif // _PCBAOI_PCBA_PINONCOMPONENT_H_
