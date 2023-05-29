/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_subprogramitem.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_SUBPROGRAMITEM_H_
#define _PCBAOI_PCBA_SUBPROGRAMITEM_H_

class pcba_subprogram;
class pcba_subboardlayout;
class pcba_inspectlib;

class PCBAOI_EXPORT pcba_subprogramitem {

  QX_REGISTER_FRIEND_CLASS(pcba_subprogramitem)

public:
  typedef std::shared_ptr<pcba_subprogram> type_subProgramId;
  typedef std::shared_ptr<pcba_subboardlayout> type_layoutId;
  typedef std::shared_ptr<pcba_inspectlib> type_inspectLibItemId;

protected:
  QString m_subProgramItemId;
  long m_serial;
  type_subProgramId m_subProgramId;
  type_layoutId m_layoutId;
  type_inspectLibItemId m_inspectLibItemId;

public:
  pcba_subprogramitem();
  pcba_subprogramitem(const QString &id);
  virtual ~pcba_subprogramitem();

  QString getsubProgramItemId() const;
  long getserial() const;
  type_subProgramId getsubProgramId() const;
  type_layoutId getlayoutId() const;
  type_inspectLibItemId getinspectLibItemId() const;

  void setsubProgramItemId(const QString &val);
  void setserial(const long &val);
  void setsubProgramId(const type_subProgramId &val);
  void setlayoutId(const type_layoutId &val);
  void setinspectLibItemId(const type_inspectLibItemId &val);

  type_subProgramId getsubProgramId(bool bLoadFromDatabase,
                                    const QString &sAppendRelations = QString(),
                                    QSqlDatabase *pDatabase = NULL,
                                    QSqlError *pDaoError = NULL);
  type_layoutId getlayoutId(bool bLoadFromDatabase,
                            const QString &sAppendRelations = QString(),
                            QSqlDatabase *pDatabase = NULL,
                            QSqlError *pDaoError = NULL);
  type_inspectLibItemId getinspectLibItemId(
      bool bLoadFromDatabase, const QString &sAppendRelations = QString(),
      QSqlDatabase *pDatabase = NULL, QSqlError *pDaoError = NULL);

public:
  static QString relation_subProgramId(bool key = false) {
    Q_UNUSED(key);
    return "subProgramId";
  }
  static QString relation_layoutId(bool key = false) {
    Q_UNUSED(key);
    return "layoutId";
  }
  static QString relation_inspectLibItemId(bool key = false) {
    Q_UNUSED(key);
    return "inspectLibItemId";
  }

public:
  static QString column_subProgramItemId(bool key = false) {
    Q_UNUSED(key);
    return "subProgramItemId";
  }
  static QString column_serial(bool key = false) {
    Q_UNUSED(key);
    return "serial";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_subprogramitem";
  }
};

typedef std::shared_ptr<pcba_subprogramitem> pcba_subprogramitem_ptr;
typedef qx::QxCollection<QString, pcba_subprogramitem_ptr>
    list_of_pcba_subprogramitem;
typedef std::shared_ptr<list_of_pcba_subprogramitem>
    list_of_pcba_subprogramitem_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_subprogramitem, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_subprogramitem,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_subprogramitem)

#include "pcba_inspectlib.gen.h"
#include "pcba_subboardlayout.gen.h"
#include "pcba_subprogram.gen.h"

#endif // _PCBAOI_PCBA_SUBPROGRAMITEM_H_
