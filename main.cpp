//#include <QGuiApplication>
//#include <QQmlApplicationEngine>

//#include <QLocale>
//#include <QTranslator>

//int main(int argc, char *argv[])
//{
//#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//#endif
//    QGuiApplication app(argc, argv);

//    QTranslator translator;
//    const QStringList uiLanguages = QLocale::system().uiLanguages();
//    for (const QString &locale : uiLanguages) {
//        const QString baseName = "smartInspection_" + QLocale(locale).name();
//        if (translator.load(":/i18n/" + baseName)) {
//            app.installTranslator(&translator);
//            break;
//        }
//    }

//    QQmlApplicationEngine engine;
//    //taoquick resources path---
//#ifdef TaoQuickImportPath
//    engine.addImportPath(TaoQuickImportPath);
//#endif

//    const QUrl url(QStringLiteral("qrc:/Qml/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

//    return app.exec();
//}




#include "./Src/AppInfo.h"
#include "./Src/DeviceAddTable/DeviceAddModel.h"
#include "Frameless/TaoFrameLessView.h"
#include "Logger/Logger.h"
#include "QuickTool/QuickTool.h"
#include "Trans/Trans.h"
#include <QDir>
#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQuickItem>
#include <QUrl>

#include "Src\plot\PlotItem.h"//added by cxl
#include "Precompiled/precompiled.h"
#include "common/functions.h"

//#include "3rdparty/Log4Qt_POC/log4qt_poc.h"
#include "3rdparty/Translation_POC/languagemanager.hpp"

#include "DBEntities/pcba_algorithm.gen.h"
#include "DBEntities/pcba_algorithm4defect.gen.h"
#include "./Src/DeviceAddTable/DeviceAddModel.h"

#include "./Src/User/user.h"
#include "./Src/Device/device.h"
#include "./Src/Device/device.h"

#include "./Src/HardwareConf/hardwareConf.h"



//#include "3rdparty/Log4Qt_POC/log4qt_poc.h"
#include "3rdparty/Translation_POC/languagemanager.hpp"

#include "QxOrm_Impl.h"

#ifdef QMAKE_GEN_TAOMACRO
    #include "taoMacro.h"
#endif
#include "3rdparty/Translation_POC/languagemanager.hpp"


void InitDB() {

  qx::QxSqlDatabase::getSingleton()->setDriverName("QMYSQL");
  qx::QxSqlDatabase::getSingleton()->setDatabaseName("smartpcb");
  qx::QxSqlDatabase::getSingleton()->setHostName("localhost");
  qx::QxSqlDatabase::getSingleton()->setUserName("root");
  qx::QxSqlDatabase::getSingleton()->setPassword("123456");
  qx::QxSqlDatabase::getSingleton()->setPort(3306);
}





#if 0
void InitLogger()
{
    //注册该机制后qml中调用console函数,qDebug()函数后会使用QMLMessageHandler回调函数返回
    qInstallMessageHandler(loggerPOC->QMLMessageHandler);

    QString configFileName = QGuiApplication::applicationDirPath() + "/log4qt.conf";
    if(QFile::exists(configFileName))
    {
        loggerPOC->init(configFileName);
    }
    else
    {
        loggerPOC->init();
    }

    loggerPOCDebug("Debug logs...");
    loggerPOCInfo("info logs...");
    loggerPOCError("error logs...");
   // console.debug("log from qml GUI");
}

void DBInsert() {
  pcba_algorithm_ptr m_pcb_alg_ptr;
  m_pcb_alg_ptr.reset(new pcba_algorithm());
  m_pcb_alg_ptr->setalgorithmId(Functions::getUUidStr());
  m_pcb_alg_ptr->setnameCN("Test");
  m_pcb_alg_ptr->setnType(1);
	
  QSqlError daoError;
  daoError = qx::dao::insert(m_pcb_alg_ptr);


  pcba_algorithmconfig_ptr m_pcb_algconf_ptr;
  m_pcb_algconf_ptr.reset(new pcba_algorithmconfig());
  m_pcb_algconf_ptr->setalgorithmConfigId(Functions::getUUidStr());
  m_pcb_algconf_ptr->setalgorithmId(m_pcb_alg_ptr);
  m_pcb_algconf_ptr->setserial(1);
  m_pcb_algconf_ptr->setdataType(10);
  m_pcb_algconf_ptr->setdataArraySize(10);
  daoError = qx::dao::insert(m_pcb_algconf_ptr);
}

void DBUpdate() {
  QSqlError daoError;
  list_of_pcba_algorithm m_list_pcba_alg;
  daoError = qx::dao::fetch_all(m_list_pcba_alg);
  if (m_list_pcba_alg.size() > 0) {
    m_list_pcba_alg.getByIndex(0)->setnameCN("翘起"); //修改实体对象中的值
    daoError = qx::dao::update(m_list_pcba_alg); //将实体对象更新到数据库中
  }
}
void DBDel() {
  QSqlError daoError;
  list_of_pcba_algorithm m_list_pcba_alg;
  daoError = qx::dao::fetch_all(m_list_pcba_alg);
  if (m_list_pcba_alg.size() > 0) {
    daoError = qx::dao::delete_by_id(m_list_pcba_alg.getFirst());
  }
}
void DBQuery() {

  list_of_pcba_algorithm m_list_pcba_alg;
  qx::dao::fetch_all(m_list_pcba_alg);
  for (int i = 0; i < m_list_pcba_alg.count(); i++) {
    pcba_algorithm_ptr tmp = m_list_pcba_alg.getByIndex(i);
    qDebug() << tmp->getalgorithmId();
  }
}
#endif

static void prepareApp()
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
#    if (QT_VERSION >= QT_VERSION_CHECK(5, 14, 0))
    QGuiApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);
#    endif
#endif
    QCoreApplication::setOrganizationName("博士");
    QCoreApplication::setOrganizationDomain("https://www.goptics.com");
    QCoreApplication::setApplicationName("smart Inspection");
}


LanguageManager *initLanguageManage(QQmlEngine *engine) {
  qmlRegisterUncreatableType<LanguageManager>(
      "CPPTranslate", 1, 0, "LanguageManager", "不能创建LanguageManager对象");
  auto languageController = LanguageManager::instance(engine);

  const QStringList uiLanguages =
      QLocale::system().uiLanguages(); //获取当前系统支持的语言
  for (const QString &locale : uiLanguages) {
    if (locale == "zh-CN") {
      languageController->loadLanguage(LanguageManager::Chinese);
      break;
    } else {
      languageController->loadLanguage(LanguageManager::English);
      break;
    }
  }
  return languageController;
}


int main(int argc, char **argv)
{
    prepareApp();
    QGuiApplication app(argc, argv);
    const auto appPath = QDir::cleanPath(app.applicationDirPath());
    qWarning() << "appPath" << appPath;

    //Trans trans;
    //AppInfo appInfo;
    QuickTool quickTool;

    TaoFrameLessView view;
   // view.setMinimumSize({ 800, 600 });
    //view.resize(1920, 1080);
    view.setMinimumSize({ 0, 0 });
    view.resize(0, 0);

    auto langController = initLanguageManage(view.engine());
    view.rootContext()->setContextProperty("cpplanguageController",
                                           langController);


    //trans.beforeUiReady(view.rootContext(), transDir);
    //appInfo.beforeUiReady(view.rootContext());
	//InitLogger();
    //loggerPOCInfo(QStringLiteral("app start %1"), "smartpcbInspection");

    view.engine()->addImportPath(qmlPath);
#ifdef TaoQuickImport
    view.engine()->addImportPath(TaoQuickImport);
    qWarning() << "TaoQuickImportPath " << TaoQuickImport;
#endif

#ifdef TaoQuickImage
    view.rootContext()->setContextProperty("taoQuickImagePath", TaoQuickImage);
#endif

#ifdef TAODEBUG
    view.rootContext()->setContextProperty("isDebug", true);
#else
    view.rootContext()->setContextProperty("isDebug", QVariant(false));
#endif


#if QT_VERSION > QT_VERSION_CHECK(5, 10, 0)
    view.rootContext()->setContextProperty("hasShape", true);
#else
    view.rootContext()->setContextProperty("hasShape", false);
#endif

    view.rootContext()->setContextProperty("qmlPath", qmlPath);
    view.rootContext()->setContextProperty("imgPath", imgPath);
    view.rootContext()->setContextProperty("contentsPath", contentsPath);
    view.rootContext()->setContextProperty("appPath", appPath);
    view.rootContext()->setContextProperty("view", &view);
    view.rootContext()->setContextProperty("quickTool", &quickTool);

    //DeviceAddModel model; ///---

    //view.rootContext()->setContextProperty("deviceAddModel", &model);
    const QUrl url(qmlPath + QStringLiteral("main.qml"));

    //added by cxl
    qmlRegisterType<PlotItem>("test", 1, 0, "PlotItem");

    //const QUrl url(QStringLiteral("qrc:/Qml/Page/PageLogin.qml"));


//    QObject::connect(&view, &QQuickView::statusChanged, &view, [&](QQuickView::Status status) {
//        if (status == QQuickView::Status::Ready) {
//            trans.afterUiReady();
//            appInfo.afterUiReady();
//            quickTool.setRootObjet(view.rootObject());
//        }
//    });
    //qml call 'Qt.quit()' will emit engine::quit, here should call qApp->quit
    QObject::connect(view.engine(), &QQmlEngine::quit, qApp, &QCoreApplication::quit);
    //qml clear content before quit
    QObject::connect(qApp, &QGuiApplication::aboutToQuit, qApp, [&view](){view.setSource({});});

    view.engine()->rootContext()->setContextProperty("CLview",&view);
	//view.engine()->rootContext()->setContextProperty("CLogin",new CLogin());
	CUser user;
	view.engine()->rootContext()->setContextProperty("user", &user);
	CDevice device;
	view.engine()->rootContext()->setContextProperty("device", &device);

	CHardwareConf hardwareconf;
	view.engine()->rootContext()->setContextProperty("hardwareconf", &hardwareconf);

	
	Object HorizontalLight;
	view.engine()->rootContext()->setContextProperty("HorizontalLight", &HorizontalLight);

	Object RedLight;
	view.engine()->rootContext()->setContextProperty("RedLight", &RedLight);

	Object GreenLight;
	view.engine()->rootContext()->setContextProperty("GreenLight", &GreenLight);

	Object BlueLight;
	view.engine()->rootContext()->setContextProperty("BlueLight", &BlueLight);

	Object CoaxialLight;
	view.engine()->rootContext()->setContextProperty("CoaxialLight", &CoaxialLight);

    view.setSource(url);
    view.moveToScreenCenter();
	// 数据库初始化，已经对应表的增删查改
	  InitDB();
	  //DBInsert();
	 // DBQuery();
	 // DBUpdate();
    view.show();
	//view.hide();
    return app.exec();
}

