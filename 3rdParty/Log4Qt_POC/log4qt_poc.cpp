/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       log4qt_poc.cpp
 * @brief      XXXX Function
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/12
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#include "log4qt_poc.h"

#include <QCoreApplication>
#include <QTextCodec>
#include "log4qt/basicconfigurator.h"
#include "log4qt/log4qt.h"
#include "log4qt/propertyconfigurator.h"
#include "log4qt/loggerrepository.h"
#include "log4qt/consoleappender.h"
#include "log4qt/ttcclayout.h"
#include "log4qt/patternlayout.h"
#include "log4qt/logmanager.h"
#include "log4qt/fileappender.h"
#include "log4qt/rollingfileappender.h"


Log4Qt_POC * Log4Qt_POC::_pInstance = 0;

QMutex Log4Qt_POC::_mutex;
QString Log4Qt_POC::_configFilePath;

Log4Qt_POC::Log4Qt_POC(QObject *parent) : QObject(parent)
{
    Log4Qt::BasicConfigurator::configure();
}
Log4Qt_POC *Log4Qt_POC::instance()
{
    if(!_pInstance)
    {
        QMutexLocker mutexLocker(&_mutex);
        if(!_pInstance)
        {
            Log4Qt_POC *pInstance = new Log4Qt_POC();
            _pInstance = pInstance;
        }
    }
    return _pInstance;
}

void Log4Qt_POC::QMLMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    // construct a msg
//        QString sFilename = context.file;
//        QString sFunction = context.function;
//        int nLineNo       = context.line;

//        QString s = QString("[QML:File-'%1' Function-'%2' Line-'%3' Msg-'%4']").arg(sFilename).arg(sFunction).arg(nLineNo).arg(msg);
        switch (type) {
           case QtDebugMsg:

                Log4Qt::MessageLogger(logger(), Log4Qt::Level::DEBUG_INT,  context.file, context.line, context.function).log(msg);
//                loggerPOC->debug(s);
               break;
           case QtWarningMsg:
            Log4Qt::MessageLogger(logger(), Log4Qt::Level::WARN_INT,  context.file, context.line, context.function).log(msg);
//            loggerPOC->warn(s);
               break;
           case QtFatalMsg:
//            loggerPOC->fatal(s);
                Log4Qt::MessageLogger(logger(), Log4Qt::Level::FATAL_INT, context.file, context.line, context.function).log(msg);
               break;
           case QtInfoMsg:
                Log4Qt::MessageLogger(logger(), Log4Qt::Level::INFO_INT, context.file, context.line, context.function).log(msg);
//                loggerPOC->info(s);
                break;
           default :
                Log4Qt::MessageLogger(logger(), Log4Qt::Level::ERROR_INT, context.file, context.line, context.function).log(msg);
//                loggerPOC->error(s);
               break;
        }
}


void Log4Qt_POC::init(QString configFilePath)
{
    if(configFilePath.isNull())
    {
        //手动设置日志工具
//        Log4Qt::TTCCLayout *layout = new Log4Qt::TTCCLayout();
//        layout->setDateFormat(Log4Qt::TTCCLayout::ISO8601);
//        layout->setThreadPrinting(true);
//        layout->setCategoryPrefixing(true);
//        layout->setContextPrinting(true);
//        layout->activateOptions();


//        // 创建ConsoleAppender
//        Log4Qt::RollingFileAppender *appender = new Log4Qt::RollingFileAppender;
//        // 设置输出目的地为应用程序所在目录下的logFile.log
//        QString logFilePath = QCoreApplication::applicationDirPath()+"/log/debug.log";
//        appender->setFile(logFilePath);
//        // 设置日志为追加方式写入输出文件
//        appender->setAppendFile(true);
//        // 设置备份文件的最大数量为10个
//        appender->setMaxBackupIndex(10);
//        // 设置输出文件的最大值为1KB
//        appender->setMaxFileSize("8192KB");
//        appender->setLayout(layout);
//        // 设置编码
//        appender->setEncoding(QTextCodec::codecForName("UTF-8"));
//        appender->setImmediateFlush(true);
//        // 设置阈值级别为INFO
//        appender->setThreshold(Log4Qt::Level::DEBUG_INT);
//        // 激活选项
//        appender->activateOptions();
        /// Debug Layout Appender
        Log4Qt::PatternLayout *debugLayout = new Log4Qt::PatternLayout();
        debugLayout->setConversionPattern("[%d{yyyy-MM-dd HH:mm:ss.zzz}][%p][%t][%c][%l]:%m%n");
        debugLayout->activateOptions();
        // 创建ConsoleAppender
        Log4Qt::RollingFileAppender *debugAppender = new Log4Qt::RollingFileAppender;
        // 设置输出目的地为应用程序所在目录下的logFile.log
        QString debugLogFilePath = QCoreApplication::applicationDirPath()+"/log/debug.log";
        debugAppender->setFile(debugLogFilePath);
        // 设置日志为追加方式写入输出文件
        debugAppender->setAppendFile(true);
        // 设置备份文件的最大数量为10个
        debugAppender->setMaxBackupIndex(100);
        // 设置输出文件的最大值为1KB
        debugAppender->setMaxFileSize("8192KB");
        debugAppender->setLayout(debugLayout);
        // 设置编码
//        debugAppender->setEncoding(QTextCodec::codecForName("UTF-8"));
        debugAppender->setImmediateFlush(true);
        // 设置阈值级别为Debug
        debugAppender->setThreshold(Log4Qt::Level::DEBUG_INT);
        // 激活选项
        debugAppender->activateOptions();

        /// Info Layout Appender
        Log4Qt::PatternLayout *infoLayout = new Log4Qt::PatternLayout();
        infoLayout->setConversionPattern("[%d{yyyy-MM-dd HH:mm:ss.zzz}][%p][%t][%c][%l]:%m%n");
        infoLayout->activateOptions();

        // RollingFileAppender
        Log4Qt::RollingFileAppender *infoAppender = new Log4Qt::RollingFileAppender;
        // 设置输出目的地为应用程序所在目录
        QString infoIogFilePath = QCoreApplication::applicationDirPath()+"/log/info.log";
        infoAppender->setFile(infoIogFilePath);
        // 设置日志为追加方式写入输出文件
        infoAppender->setAppendFile(true);
        // 设置备份文件的最大数量为10个
        infoAppender->setMaxBackupIndex(100);
        // 设置输出文件的最大值为1KB
        infoAppender->setMaxFileSize("8192KB");
        infoAppender->setLayout(infoLayout);
        // 设置编码
//        infoAppender->setEncoding(QTextCodec::codecForName("UTF-8"));
        infoAppender->setImmediateFlush(true);
        // 设置阈值级别为INFO
        infoAppender->setThreshold(Log4Qt::Level::INFO_INT);
        // 激活选项
        infoAppender->activateOptions();

        /// Error Layout Appender
        Log4Qt::PatternLayout *errorLayout = new Log4Qt::PatternLayout();
        errorLayout->setConversionPattern("[%d{yyyy-MM-dd HH:mm:ss.zzz}][%p][%t][%c][%l]:%m%n");
        errorLayout->activateOptions();

        // 创建RollingFileAppender
        Log4Qt::RollingFileAppender *errorAppender = new Log4Qt::RollingFileAppender;
        // 设置输出目的地为应用程序所在目录下的logFile.log
        QString errorLogFilePath = QCoreApplication::applicationDirPath()+"/log/error.log";
        errorAppender->setFile(errorLogFilePath);
        // 设置日志为追加方式写入输出文件
        errorAppender->setAppendFile(true);
        // 设置备份文件的最大数量为10个
        errorAppender->setMaxBackupIndex(100);
        // 设置输出文件的最大值为1KB
        errorAppender->setMaxFileSize("8192KB");
        errorAppender->setLayout(errorLayout);
        // 设置编码
//        errorAppender->setEncoding(QTextCodec::codecForName("UTF-8"));
        errorAppender->setImmediateFlush(true);
        // 设置阈值级别为error
        errorAppender->setThreshold(Log4Qt::Level::ERROR_INT);
        // 激活选项
        errorAppender->activateOptions();

        logger()->addAppender(debugAppender);
        logger()->addAppender(infoAppender);
        logger()->addAppender(errorAppender);
    }

    else
    {
        _configFilePath = configFilePath;
         Log4Qt::PropertyConfigurator::configure(_configFilePath);
    }

}

void Log4Qt_POC::trace(QString msg)
{
    loggerPOCTrace(msg);

}

void Log4Qt_POC::debug(QString msg)
{
    loggerPOCDebug(msg);
}

void Log4Qt_POC::info(QString msg)
{
    loggerPOCInfo(msg);
}

void Log4Qt_POC::warn(QString msg)
{
    loggerPOCWarn(msg);
}

void Log4Qt_POC::error(QString msg)
{
    loggerPOCError(msg);

}

void Log4Qt_POC::fatal(QString msg)
{
    loggerPOCFatal(msg);

}

void Log4Qt_POC::release()
{
//    logger()->removeAllAppenders();
//    logger()->loggerRepository()->shutdown();
    auto logger = Log4Qt::Logger::rootLogger();
    logger->removeAllAppenders();
    logger->loggerRepository()->shutdown();
}

