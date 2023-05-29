/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_wholeboardpattern.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_WHOLEBOARDPATTERN_H_
#define _PCBAOI_PCBA_WHOLEBOARDPATTERN_H_

class pcba_wholeboard;
class pcba_subboard;

class PCBAOI_EXPORT pcba_wholeboardpattern {

  QX_REGISTER_FRIEND_CLASS(pcba_wholeboardpattern)

public:
  typedef std::shared_ptr<pcba_wholeboard> type_wholeBoardId;
  typedef std::shared_ptr<pcba_subboard> type_subBoardId;

protected:
  QString m_id;
  int m_serial;
  double m_x;
  double m_y;
  double m_rotation;
  int m_bHorizontalMirror;
  int m_bVerticalMirror;
  QString m_strReserve;
  int m_inActive;
  type_wholeBoardId m_wholeBoardId;
  type_subBoardId m_subBoardId;

public:
  pcba_wholeboardpattern();
  pcba_wholeboardpattern(const QString &id);
  virtual ~pcba_wholeboardpattern();

  QString getid() const;
  int getserial() const;
  double getx() const;
  double gety() const;
  double getrotation() const;
  int getbHorizontalMirror() const;
  int getbVerticalMirror() const;
  QString getstrReserve() const;
  int getinActive() const;
  type_wholeBoardId getwholeBoardId() const;
  type_subBoardId getsubBoardId() const;

  void setid(const QString &val);
  void setserial(const int &val);
  void setx(const double &val);
  void sety(const double &val);
  void setrotation(const double &val);
  void setbHorizontalMirror(const int &val);
  void setbVerticalMirror(const int &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);
  void setwholeBoardId(const type_wholeBoardId &val);
  void setsubBoardId(const type_subBoardId &val);

  type_wholeBoardId getwholeBoardId(bool bLoadFromDatabase,
                                    const QString &sAppendRelations = QString(),
                                    QSqlDatabase *pDatabase = NULL,
                                    QSqlError *pDaoError = NULL);
  type_subBoardId getsubBoardId(bool bLoadFromDatabase,
                                const QString &sAppendRelations = QString(),
                                QSqlDatabase *pDatabase = NULL,
                                QSqlError *pDaoError = NULL);

public:
  static QString relation_wholeBoardId(bool key = false) {
    Q_UNUSED(key);
    return "wholeBoardId";
  }
  static QString relation_subBoardId(bool key = false) {
    Q_UNUSED(key);
    return "subBoardId";
  }

public:
  static QString column_id(bool key = false) {
    Q_UNUSED(key);
    return "id";
  }
  static QString column_serial(bool key = false) {
    Q_UNUSED(key);
    return "serial";
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
  static QString column_bHorizontalMirror(bool key = false) {
    Q_UNUSED(key);
    return "bHorizontalMirror";
  }
  static QString column_bVerticalMirror(bool key = false) {
    Q_UNUSED(key);
    return "bVerticalMirror";
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
    return "pcba_wholeboardpattern";
  }
};

typedef std::shared_ptr<pcba_wholeboardpattern> pcba_wholeboardpattern_ptr;
typedef qx::QxCollection<QString, pcba_wholeboardpattern_ptr>
    list_of_pcba_wholeboardpattern;
typedef std::shared_ptr<list_of_pcba_wholeboardpattern>
    list_of_pcba_wholeboardpattern_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_wholeboardpattern, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_wholeboardpattern,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_wholeboardpattern)

#include "pcba_subboard.gen.h"
#include "pcba_wholeboard.gen.h"

#endif // _PCBAOI_PCBA_WHOLEBOARDPATTERN_H_
