/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       log4qt_poc.h
 * @brief      系统日志库，基于log4qt的基础上进行封装，使日志操作起来更容易
 *             使用方式：
 *             //注册该机制后qml中调用console函数,qDebug()函数后会使用QMLMessageHandler回调函数返回
               1.qInstallMessageHandler(loggerPOC->QMLMessageHandler);
               注册该函数后日志库可以将console.log,console.debug,console.error 捕获存放于数据库中
               2.可以通过外部文件定义日志库答应格式，也可以采用默认的日志库方式
               3.加载头文件后调用 loggerPOCFatal ，loggerPOCError，loggerPOCWarn，loggerPOCInfo，loggerPOCDebug，loggerPOCTrace
               配合翻译库可以动态切换中英文日志

 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/12
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#ifndef LOG4QT_POC_H
#define LOG4QT_POC_H

#include <QMutex>
#include <QObject>

#include "log4qt/logger.h"



#define loggerPOC Log4Qt_POC::instance()

#define loggerPOCFatal(...) \
    for (bool enabled = logger()->isEnabledFor(Log4Qt::Level::FATAL_INT); enabled; enabled = false) \
        Log4Qt::MessageLogger(logger(), Log4Qt::Level::FATAL_INT, __FILE__, __LINE__, Q_FUNC_INFO).log(__VA_ARGS__)
#define loggerPOCError(...) \
    for (bool enabled = logger()->isEnabledFor(Log4Qt::Level::ERROR_INT); enabled; enabled = false) \
        Log4Qt::MessageLogger(logger(), Log4Qt::Level::ERROR_INT, __FILE__, __LINE__, Q_FUNC_INFO).log(__VA_ARGS__)
#define loggerPOCWarn(...) \
    for (bool enabled = logger()->isEnabledFor(Log4Qt::Level::WARN_INT); enabled; enabled = false) \
        Log4Qt::MessageLogger(logger(), Log4Qt::Level::WARN_INT, __FILE__, __LINE__, Q_FUNC_INFO).log(__VA_ARGS__)
#define loggerPOCInfo(...) \
    for (bool enabled = logger()->isEnabledFor(Log4Qt::Level::INFO_INT); enabled; enabled = false) \
        Log4Qt::MessageLogger(logger(), Log4Qt::Level::INFO_INT, __FILE__, __LINE__, Q_FUNC_INFO).log(__VA_ARGS__)
#define loggerPOCDebug(...) \
    for (bool enabled = logger()->isEnabledFor(Log4Qt::Level::DEBUG_INT); enabled; enabled = false) \
        Log4Qt::MessageLogger(logger(), Log4Qt::Level::DEBUG_INT, __FILE__, __LINE__, Q_FUNC_INFO).log(__VA_ARGS__)
#define loggerPOCTrace(...) \
    for (bool enabled = logger()->isEnabledFor(Log4Qt::Level::TRACE_INT); enabled; enabled = false) \
        Log4Qt::MessageLogger(logger(), Log4Qt::Level::TRACE_INT, __FILE__, __LINE__, Q_FUNC_INFO).log(__VA_ARGS__)

LOG4QT_DECLARE_STATIC_LOGGER(logger, Log4Qt_POC)

class Log4Qt_POC : public QObject
{
    Q_OBJECT
public:
    explicit Log4Qt_POC(QObject *parent = nullptr);

signals:

public slots:
    static Log4Qt_POC * instance();
    static void QMLMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);

public slots:
    void init(QString configFilePath = NULL);
    void release();


public slots:

    Q_INVOKABLE void trace(QString msg);
    Q_INVOKABLE void debug(QString msg);
    Q_INVOKABLE void info(QString msg);
    Q_INVOKABLE void warn(QString msg);
    Q_INVOKABLE void error(QString msg);
    Q_INVOKABLE void fatal(QString msg);



private:
    static Log4Qt_POC *_pInstance;
    static QMutex _mutex;
    static QString _configFilePath;



};

#endif // LOG4QT_POC_H
