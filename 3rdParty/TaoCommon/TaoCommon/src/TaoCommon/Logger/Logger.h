#pragma once
#include "TaoCommonGlobal.h"
#include <QString>
#include <QDebug>
namespace Logger {
#ifdef _DEBUG
#    define LOG_DEBUG qDebug() << __FILE__ << __LINE__
#    define LOG_INFO qInfo() << __FILE__ << __LINE__
#    define LOG_WARN qWarning() << __FILE__ << __LINE__
#    define LOG_CRIT qCritical() << __FILE__ << __LINE__
#else
#    define LOG_DEBUG qDebug()
#    define LOG_INFO qInfo()
#    define LOG_WARN qWarning()
#    define LOG_CRIT qCritical()
#endif
//kev: modified the compiler error:: warning: C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
//by: Edit->prefference->behavior-> encodeing to: UTF8, add BOM always  ;  then TaoCommon all errors solved.  Auc.9,2022

// 初始化Log存储。包括创建Log文件夹、删除超过最大数的log（仅初始化时删除，运行过程中不删除）。
// logPath 存储路径
// logMaxCount 最大数
// async 是否异步存储 默认异步存储。异步存储会缓存log，达到一定数量、或者软件退出时才写入文件。
void TAO_API initLog(const QString &logPath = QStringLiteral("Log"), int logMaxCount = 1024, bool async = true);
} // namespace Logger
