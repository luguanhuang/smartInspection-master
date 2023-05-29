#include "AppInfo.h"
#include <QQmlContext>
#include <QSysInfo>
#include "Ver-u8.h"
AppInfo::AppInfo(QObject *parent) : QObject(parent)
{
    m_appName = VER_PRODUCTNAME_STR;
    m_appVersion =  ("1.0.09");//TaoVer;
    m_latestVersion = ("1.0.09"); //TaoVer;
    m_buildDateTime = ("20220809"); //TaoDATETIME;
    m_buildRevision =("1.0.09"); //TaoREVISIONSTR;
    m_copyRight = VER_LEGALCOPYRIGHT_STR;
    m_descript = QString::fromLocal8Bit(VER_FILEDESCRIPTION_STR);
    m_compilerVendor =QString("%1(%2 %3)").arg("smart PCB ").arg("3D AOI").arg("检测工作台");
    //QString("%1(%2 %3)").arg("Qt2.15").arg("QtQuickQml").arg("MsStudio2019x64");
    //QString("%1(%2 %3)").arg(QT_VERSION_STR).arg(CXX_COMPILER_ID).arg(QSysInfo::buildCpuArchitecture());
}

void AppInfo::beforeUiReady(QQmlContext *ctx)
{
    ctx->setContextProperty("appInfo", this);
}

void AppInfo::afterUiReady()
{

//    auto json = QJsonDocument(*this).toJson(QJsonDocument::Indented);
//    json.replace("\\n\\r","\\\n");
//    qWarning() << json;

}


AppInfo::~AppInfo()
{

}
