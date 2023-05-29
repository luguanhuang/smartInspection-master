/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_wholeboard.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_WHOLEBOARD_H_
#define _PCBAOI_PCBA_WHOLEBOARD_H_

class PCBAOI_EXPORT pcba_wholeboard {

  QX_REGISTER_FRIEND_CLASS(pcba_wholeboard)

protected:
  QString m_wholeBoardId;
  QString m_cadFileId;
  QString m_cadFilePath;
  QString m_imageFilePath;
  int m_side;
  QString m_nameEN;
  QString m_nameCN;
  QString m_description;
  double m_length;
  double m_width;
  int m_nSubBoardCount;
  QString m_subBoardId;
  QString m_strReserve;
  int m_inActive;

public:
  pcba_wholeboard();
  pcba_wholeboard(const QString &id);
  virtual ~pcba_wholeboard();

  QString getwholeBoardId() const;
  QString getcadFileId() const;
  QString getcadFilePath() const;
  QString getimageFilePath() const;
  int getside() const;
  QString getnameEN() const;
  QString getnameCN() const;
  QString getdescription() const;
  double getlength() const;
  double getwidth() const;
  int getnSubBoardCount() const;
  QString getsubBoardId() const;
  QString getstrReserve() const;
  int getinActive() const;

  void setwholeBoardId(const QString &val);
  void setcadFileId(const QString &val);
  void setcadFilePath(const QString &val);
  void setimageFilePath(const QString &val);
  void setside(const int &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setdescription(const QString &val);
  void setlength(const double &val);
  void setwidth(const double &val);
  void setnSubBoardCount(const int &val);
  void setsubBoardId(const QString &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);

public:
  static QString column_wholeBoardId(bool key = false) {
    Q_UNUSED(key);
    return "wholeBoardId";
  }
  static QString column_cadFileId(bool key = false) {
    Q_UNUSED(key);
    return "cadFileId";
  }
  static QString column_cadFilePath(bool key = false) {
    Q_UNUSED(key);
    return "cadFilePath";
  }
  static QString column_imageFilePath(bool key = false) {
    Q_UNUSED(key);
    return "imageFilePath";
  }
  static QString column_side(bool key = false) {
    Q_UNUSED(key);
    return "side";
  }
  static QString column_nameEN(bool key = false) {
    Q_UNUSED(key);
    return "nameEN";
  }
  static QString column_nameCN(bool key = false) {
    Q_UNUSED(key);
    return "nameCN";
  }
  static QString column_description(bool key = false) {
    Q_UNUSED(key);
    return "description";
  }
  static QString column_length(bool key = false) {
    Q_UNUSED(key);
    return "length";
  }
  static QString column_width(bool key = false) {
    Q_UNUSED(key);
    return "width";
  }
  static QString column_nSubBoardCount(bool key = false) {
    Q_UNUSED(key);
    return "nSubBoardCount";
  }
  static QString column_subBoardId(bool key = false) {
    Q_UNUSED(key);
    return "subBoardId";
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
    return "pcba_wholeboard";
  }
};

typedef std::shared_ptr<pcba_wholeboard> pcba_wholeboard_ptr;
typedef qx::QxCollection<QString, pcba_wholeboard_ptr> list_of_pcba_wholeboard;
typedef std::shared_ptr<list_of_pcba_wholeboard> list_of_pcba_wholeboard_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_wholeboard, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_wholeboard,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_wholeboard)

#endif // _PCBAOI_PCBA_WHOLEBOARD_H_
