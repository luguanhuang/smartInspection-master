/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_subboardlayout.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_SUBBOARDLAYOUT_H_
#define _PCBAOI_PCBA_SUBBOARDLAYOUT_H_

class pcba_subboard;
class pcba_component;

class PCBAOI_EXPORT pcba_subboardlayout {

  QX_REGISTER_FRIEND_CLASS(pcba_subboardlayout)

public:
  typedef std::shared_ptr<pcba_subboard> type_subBoardId;
  typedef std::shared_ptr<pcba_component> type_componentId;

protected:
  QString m_layoutId;
  long m_positionId;
  double m_x;
  double m_y;
  double m_rotation;
  QString m_strReserve;
  int m_inactive;
  type_subBoardId m_subBoardId;
  type_componentId m_componentId;

public:
  pcba_subboardlayout();
  pcba_subboardlayout(const QString &id);
  virtual ~pcba_subboardlayout();

  QString getlayoutId() const;
  long getpositionId() const;
  double getx() const;
  double gety() const;
  double getrotation() const;
  QString getstrReserve() const;
  int getinactive() const;
  type_subBoardId getsubBoardId() const;
  type_componentId getcomponentId() const;

  void setlayoutId(const QString &val);
  void setpositionId(const long &val);
  void setx(const double &val);
  void sety(const double &val);
  void setrotation(const double &val);
  void setstrReserve(const QString &val);
  void setinactive(const int &val);
  void setsubBoardId(const type_subBoardId &val);
  void setcomponentId(const type_componentId &val);

  type_subBoardId getsubBoardId(bool bLoadFromDatabase,
                                const QString &sAppendRelations = QString(),
                                QSqlDatabase *pDatabase = NULL,
                                QSqlError *pDaoError = NULL);
  type_componentId getcomponentId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);

public:
  static QString relation_subBoardId(bool key = false) {
    Q_UNUSED(key);
    return "subBoardId";
  }
  static QString relation_componentId(bool key = false) {
    Q_UNUSED(key);
    return "componentId";
  }

public:
  static QString column_layoutId(bool key = false) {
    Q_UNUSED(key);
    return "layoutId";
  }
  static QString column_positionId(bool key = false) {
    Q_UNUSED(key);
    return "positionId";
  }
  static QString column_x(bool key = false) {
    Q_UNUSED(key);
    return "x";
  }
  static QString column_y(bool key = false) {
    Q_UNUSED(key);
    return "y";
  }
  static QString column_rotation(bool key = false) {
    Q_UNUSED(key);
    return "rotation";
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
    return "pcba_subboardlayout";
  }
};

typedef std::shared_ptr<pcba_subboardlayout> pcba_subboardlayout_ptr;
typedef qx::QxCollection<QString, pcba_subboardlayout_ptr>
    list_of_pcba_subboardlayout;
typedef std::shared_ptr<list_of_pcba_subboardlayout>
    list_of_pcba_subboardlayout_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_subboardlayout, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_subboardlayout,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_subboardlayout)

#include "pcba_component.gen.h"
#include "pcba_subboard.gen.h"

#endif // _PCBAOI_PCBA_SUBBOARDLAYOUT_H_
