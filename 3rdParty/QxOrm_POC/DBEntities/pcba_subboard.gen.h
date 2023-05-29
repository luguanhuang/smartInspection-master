/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       pcba_subboard.gen.h
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/

#ifndef _PCBAOI_PCBA_SUBBOARD_H_
#define _PCBAOI_PCBA_SUBBOARD_H_

class PCBAOI_EXPORT pcba_subboard {

  QX_REGISTER_FRIEND_CLASS(pcba_subboard)

protected:
  QString m_subBoardId;
  QString m_nameEN;
  QString m_nameCN;
  QString m_description;
  double m_length;
  double m_width;
  int m_baseColorR;
  int m_baseColorG;
  int m_baseColorB;
  QString m_imageFilePath;
  QString m_strReserve;
  int m_inActive;

public:
  pcba_subboard();
  pcba_subboard(const QString &id);
  virtual ~pcba_subboard();

  QString getsubBoardId() const;
  QString getnameEN() const;
  QString getnameCN() const;
  QString getdescription() const;
  double getlength() const;
  double getwidth() const;
  int getbaseColorR() const;
  int getbaseColorG() const;
  int getbaseColorB() const;
  QString getimageFilePath() const;
  QString getstrReserve() const;
  int getinActive() const;

  void setsubBoardId(const QString &val);
  void setnameEN(const QString &val);
  void setnameCN(const QString &val);
  void setdescription(const QString &val);
  void setlength(const double &val);
  void setwidth(const double &val);
  void setbaseColorR(const int &val);
  void setbaseColorG(const int &val);
  void setbaseColorB(const int &val);
  void setimageFilePath(const QString &val);
  void setstrReserve(const QString &val);
  void setinActive(const int &val);

public:
  static QString column_subBoardId(bool key = false) {
    Q_UNUSED(key);
    return "subBoardId";
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
  static QString column_baseColorR(bool key = false) {
    Q_UNUSED(key);
    return "baseColorR";
  }
  static QString column_baseColorG(bool key = false) {
    Q_UNUSED(key);
    return "baseColorG";
  }
  static QString column_baseColorB(bool key = false) {
    Q_UNUSED(key);
    return "baseColorB";
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
    return "pcba_subboard";
  }
};

typedef std::shared_ptr<pcba_subboard> pcba_subboard_ptr;
typedef qx::QxCollection<QString, pcba_subboard_ptr> list_of_pcba_subboard;
typedef std::shared_ptr<list_of_pcba_subboard> list_of_pcba_subboard_ptr;

QX_REGISTER_PRIMARY_KEY(pcba_subboard, QString)
QX_REGISTER_COMPLEX_CLASS_NAME_HPP_PCBAOI(pcba_subboard,
                                          qx::trait::no_base_class_defined, 0,
                                          pcba_subboard)

#endif // _PCBAOI_PCBA_SUBBOARD_H_
