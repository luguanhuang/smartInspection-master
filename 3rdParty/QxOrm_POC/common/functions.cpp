#include "functions.h"

QString Functions::getUUidStr() {
  QUuid uuid = QUuid::createUuid();
  // toUpper() 将小写字母变为大写
  // clang-format off
  QString strUUId = uuid.toString().remove("{").remove("}").remove("-").toUpper();
  // clang-format on
  return strUUId;
}
