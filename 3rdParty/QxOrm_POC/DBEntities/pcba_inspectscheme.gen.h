/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_inspectscheme.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_INSPECTSCHEME_H_
#define _PCBAOI_PCBA_INSPECTSCHEME_H_

class pcba_user;
class pcba_wholeboard;
class pcba_subprogram;
class pcba_setaxis;
class pcba_setlight;
class pcba_setcamera;

class PCBAOI_EXPORT pcba_inspectscheme {

  QX_REGISTER_FRIEND_CLASS(pcba_inspectscheme)

public:
  typedef std::shared_ptr<pcba_user> type_creatorId;
  typedef std::shared_ptr<pcba_wholeboard> type_wholeBoardId;
  typedef std::shared_ptr<pcba_subprogram> type_subProgramId;
  typedef std::shared_ptr<pcba_setaxis> type_setAxisId;
  typedef std::shared_ptr<pcba_setlight> type_setLightId;
  typedef std::shared_ptr<pcba_setcamera> type_setCameraId;

protected:
  QString m_inspectSchemeId;
  QString m_nameEN;
  QString m_nameCN;
  QDateTime m_createTime;
  type_creatorId m_creatorId;
  type_wholeBoardId m_wholeBoardId;
  type_subProgramId m_subProgramId;
  type_setAxisId m_setAxisId;
  type_setLightId m_setLightId;
  type_setCameraId m_setCameraId;

public:
  pcba_inspectscheme();
  pcba_inspectscheme(const QString &id);
  virtual ~pcba_inspectscheme();

  QString getinspectSchemeId() const;
  QString getnameEN() const;
  QString getnameCN() const;
  QDateTime getcreateTime() const;
  type_creatorId getcreatorId() const;
  type_wholeBoardId getwholeBoardId() const;
  type_subProgramId getsubProgramId() const;
  type_setAxisId getsetAxisId() const;
  type_setLightId getsetLightId() const;
  type_setCameraId getsetCameraId() const;

  void setinspectSchemeId(const QString &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setcreateTime(const QDateTime &val);
  void setcreatorId(const type_creatorId &val);
  void setwholeBoardId(const type_wholeBoardId &val);
  void setsubProgramId(const type_subProgramId &val);
  void setsetAxisId(const type_setAxisId &val);
  void setsetLightId(const type_setLightId &val);
  void setsetCameraId(const type_setCameraId &val);

  type_creatorId getcreatorId(bool bLoadFromDatabase,
                              const QString &sAppendRelations = QString(),
                              QSqlDatabase *pDatabase = NULL,
                              QSqlError *pDaoError = NULL);
  type_wholeBoardId getwholeBoardId(bool bLoadFromDatabase,
                                    const QString &sAppendRelations = QString(),
                                    QSqlDatabase *pDatabase = NULL,
                                    QSqlError *pDaoError = NULL);
  type_subProgramId getsubProgramId(bool bLoadFromDatabase,
                                    const QString &sAppendRelations = QString(),
                                    QSqlDatabase *pDatabase = NULL,
                                    QSqlError *pDaoError = NULL);
  type_setAxisId getsetAxisId(bool bLoadFromDatabase,
                              const QString &sAppendRelations = QString(),
                              QSqlDatabase *pDatabase = NULL,
                              QSqlError *pDaoError = NULL);
  type_setLightId getsetLightId(bool bLoadFromDatabase,
                                const QString &sAppendRelations = QString(),
                                QSqlDatabase *pDatabase = NULL,
                                QSqlError *pDaoError = NULL);
  type_setCameraId getsetCameraId(bool bLoadFromDatabase,
                                  const QString &sAppendRelations = QString(),
                                  QSqlDatabase *pDatabase = NULL,
                                  QSqlError *pDaoError = NULL);

public:
  static QString relation_creatorId(bool key = false) {
    Q_UNUSED(key);
    return "creatorId";
  }
  static QString relation_wholeBoardId(bool key = false) {
    Q_UNUSED(key);
    return "wholeBoardId";
  }
  static QString relation_subProgramId(bool key = false) {
    Q_UNUSED(key);
    return "subProgramId";
  }
  static QString relation_setAxisId(bool key = false) {
    Q_UNUSED(key);
    return "setAxisId";
  }
  static QString relation_setLightId(bool key = false) {
    Q_UNUSED(key);
    return "setLightId";
  }
  static QString relation_setCameraId(bool key = false) {
    Q_UNUSED(key);
    return "setCameraId";
  }

public:
  static QString column_inspectSchemeId(bool key = false) {
    Q_UNUSED(key);
    return "inspectSchemeId";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
  }
  static QString column_createTime(bool key = false) {
    Q_UNUSED(key);
    return "createTime";
  }

public:
  static QString table_name(bool key = false) {
    Q_UNUSED(key);
    return "pcba_inspectscheme";
  }
};

typedef std::shared_ptr<pcba_inspectscheme> pcba_inspectscheme_ptr;
typedef qx::QxCollection<QString, pcba_inspectscheme_ptr>
    list_of_pcba_inspectscheme;
typedef std::shared_ptr<list_of_pcba_inspectscheme>
    list_of_pcba_inspectscheme_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_inspectscheme, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_inspectscheme,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_inspectscheme)

#include "pcba_setaxis.gen.h"
#include "pcba_setcamera.gen.h"
#include "pcba_setlight.gen.h"
#include "pcba_subprogram.gen.h"
#include "pcba_user.gen.h"
#include "pcba_wholeboard.gen.h"

#endif // _PCBAOI_PCBA_INSPECTSCHEME_H_
