/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_cad2component.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#ifndef _PCBAOI_PCBA_CAD2COMPONENT_H_
#define _PCBAOI_PCBA_CAD2COMPONENT_H_

class pcba_wholeboard;
class pcba_component;

class PCBAOI_EXPORT pcba_cad2component {

  QX_REGISTER_FRIEND_CLASS(pcba_cad2component)

public:
  typedef std::shared_ptr<pcba_wholeboard> type_cadFileId;
  typedef std::shared_ptr<pcba_component> type_componentId;

protected:
  QString m_id;
  QString m_materialId;
  long m_serial;
  QString m_strReserve;
  int m_inactive;
  type_cadFileId m_cadFileId;
  type_componentId m_componentId;

public:
  pcba_cad2component();
  pcba_cad2component(const QString &id);
  virtual ~pcba_cad2component();

  QString getid() const;
  QString getmaterialId() const;
  long getserial() const;
  QString getstrReserve() const;
  int getinactive() const;
  type_cadFileId getcadFileId() const;
  type_componentId getcomponentId() const;

  void setid(const QString &val);
  void setmaterialId(const QString &val);
  void setserial(const long &val);
  void setstrReserve(const QString &val);
  void setinactive(const int &val);
  void setcadFileId(const type_cadFileId &val);
  void setcomponentId(const type_componentId &val);

  type_cadFileId getcadFileId(bool bLoadFromDatabase,
                              const QString &sAppendRelations = QString(),
                              QSqlDatabase *pDatabase = NULL,
                              QSqlError *pDaoError = NULL);
  type_componentId getcomponentId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);

public:
  static QString relation_cadFileId(bool key = false) {
    Q_UNUSED(key);
    return "cadFileId";
  }
  static QString relation_componentId(bool key = false) {
    Q_UNUSED(key);
    return "componentId";
  }

public:
  static QString column_id(bool key = false) {
    Q_UNUSED(key);
    return "id";
  }
  static QString column_materialId(bool key = false) {
    Q_UNUSED(key);
    return "materialId";
  }
  static QString column_serial(bool key = false) {
    Q_UNUSED(key);
    return "serial";
  }
  static QString column_strReserve(bool key = false) {
    Q_UNUSED(key);
    return "strReserve";
  }
  static QString column_inactive(bool key = false) {
    Q_UNUSED(key);
    return "inactive";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_cad2component";
  }
};

typedef std::shared_ptr<pcba_cad2component> pcba_cad2component_ptr;
typedef qx::QxCollection<QString, pcba_cad2component_ptr>
    list_of_pcba_cad2component;
typedef std::shared_ptr<list_of_pcba_cad2component>
    list_of_pcba_cad2component_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_cad2component, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_cad2component,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_cad2component)

#include "pcba_component.gen.h"
#include "pcba_wholeboard.gen.h"

#endif // _PCBAOI_PCBA_CAD2COMPONENT_H_
