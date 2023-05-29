QT += quick

#qxormpath=
include($${PWD}/3rdparty/QxOrm_POC/QxOrm_POC.pri)


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    Src/plot/PlotItem.h \
    Src/plot/PlotRenderer.h \
    Src/stdafx.h

       
SOURCES += \
		Src/plot/PlotRenderer.cpp \
        Src/plot/PlotItem.cpp \
        Src/AppInfo.cpp \
        Src/DeviceAddTable/DeviceAddItem.cpp \
        Src/DeviceAddTable/DeviceAddModel.cpp \
		3rdparty/QxOrm_POC/common/functions.cpp \
		./Src/User/user.cpp \
		./Src/Device/device.cpp \
		./Src/HardwareConf/hardwareConf.cpp \
        main.cpp

RESOURCES += qml.qrc \
    resource/icons.qrc

#TRANSLATIONS += \
 #   smartInspection_zh_CN.ts modify by lgh
CONFIG += lrelease
CONFIG += embed_translations

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#include UI of TAO
#contains ( CONFIG, USE_VISION ){
#    message(With vision)
include($$PWD/3rdParty/TaoQuick/TaoQuick.pri)
include($$PWD/3rdParty/TaoCommon/TaoCommon.pri)
#}
#!exists($${TaoQuick_3RDPARTY_TREE}/TaoCommon/src/TaoCommon/TaoCommon.pri) {
#    error("3rdparty library TaoCommon missing, please update by command: git submodule update --init")
#}
#include(smartInspection.pri)



PRECOMPILED_HEADER = $$PWD/Src/stdafx.h

HEADERS += \
    $$PWD/Src/AppInfo.h \
    $$PWD/Src/DeviceAddTable/DeviceAddItem.h \
    $$PWD/Src/DeviceAddTable/DeviceAddModel.h \
    3rdparty/QxOrm_POC/common/functions.h \
    ./Src/User/user.h \
    ./Src/HardwareConf/hardwareConf.h \
    ./Src/Device/device.h

SOURCES += \
    $$PWD/Src/AppInfo.cpp \
    $$PWD/Src/DeviceAddTable/DeviceAddItem.cpp \
    $$PWD/Src/DeviceAddTable/DeviceAddModel.cpp \
#    $$PWD/Src/main.cpp

CONFIG(debug, debug|release) {
    #debug模式直接用本地qml文件,不要qrc资源文件。这样调试快一些。
    win32{
        path=$$system("cd")
        path ~=s,\\\\,/,g
    } else {
        path=$$system("pwd")
    }
    qmlPath = \"file:///$${path}/Qml/\"
    contentsPath = \"file:///$${path}/resource/Contents/\"
    imgPath = \"file:///$${path}/resource/Image/\"
    transDir=\"$${path}/resource/Trans/\"
#    DEFINES += qmlPath=\\\"file:///$$PWD/Qml/\\\"
#    DEFINES += contentsPath=\\\"file:///$$PWD/Contents/\\\"
#    DEFINES += imgPath=\\\"file:///$$PWD/Image/\\\"
    #DESTDIR += $$PWD/bin/debug
} else {
    #release模式用qrc、走资源文件。这样发布不会携带源码。
    RESOURCES += \
        $$PWD/Qml.qrc \
        $$PWD/resource/Image.qrc \
        $$PWD/resource/Contents.qrc

    qmlPath = \"qrc:/Qml/\"
    contentsPath = \"qrc:/resource/Contents/\"
    imgPath = \"qrc:/resource/Image/\"
    transDir= \":/resource/Trans/\"
#    DEFINES += qmlPath=\\\"qrc:/Qml/\\\"
#    DEFINES += contentsPath=\\\"qrc:/Contents/\\\"
#    DEFINES += imgPath=\\\"qrc:/Image/\\\"
     #DESTDIR += $$PWD/bin/release
}

DEFINES += QMAKE_GEN_TAOMACRO
!build_pass {
    headerContents = \
        "$${LITERAL_HASH}pragma once" \
        "$${LITERAL_HASH}define TaoQuickImport $${TaoQuickImport}" \
        "$${LITERAL_HASH}define TaoQuickImage $${TaoQuickImage}" \
        "$${LITERAL_HASH}define qmlPath $${qmlPath}" \
        "$${LITERAL_HASH}define contentsPath $${contentsPath}" \
        "$${LITERAL_HASH}define imgPath $${imgPath}" \
        "$${LITERAL_HASH}define transDir $${transDir}"

    write_file(taoMacro.h, headerContents)
}
#load(taoVersion)
#setTaoVersion()

# add 3rdparty log4qt use self lib ------there is problem for compiling now: kev, temporarialy excluded
#Log4Qt_POC_Path = $$PWD/3rdparty/Log4Qt_POC
#include($${PWD}/3rdParty/Log4Qt_POC/log4qt_poc.pri) //lgh
## add 3rdparty language manager------------there is problem for compiling now: kev, temporarialy excluded
#Translation_POC_Path = $$PWD/3rdparty/Translation_POC
include($${PWD}/3rdparty/Translation_POC/translation_poc.pri)
# add 3rdparty   orm db manager--
include($${PWD}/3rdparty/QxOrm_POC/QxOrm_POC.pri)
#message with vision is printed if only CONFIG+=USE_VISION is defined but $$PWD/src/vision.pri is allways included in the project, how can i conditionally include pri files?

#include 2 local---
#win32: LIBS += -LG:/dev/vsproject/smartPCBATest/x64/Debug -lSmartPCBAoiAlgorithms

#INCLUDEPATH += G:/dev/vsproject/smartPCBATest/SmartPCBAoiAlgorithms
#DEPENDPATH +=G:/dev/vsproject/smartPCBATest/SmartPCBAoiAlgorithms

#INCLUDEPATH += G:/dev/vsproject/smartPCBATest/SmartPCBAoiAlgorithms/algorithms
#DEPENDPATH += G:/dev/vsproject/smartPCBATest/SmartPCBAoiAlgorithms/algorithms
#INCLUDEPATH += G:/dev/vsproject/smartPCBATest/SmartPCBAoiAlgorithms/model
#DEPENDPATH += G:/dev/vsproject/smartPCBATest/SmartPCBAoiAlgorithms/model

INCLUDEPATH += $$PWD/3rdparty/QxOrm_POC

#adder by cxl (2022.8.16)
INCLUDEPATH += $$PWD/vendor/include

INCLUDEPATH += G:/dev/vsproject/wx3dprofilerStudio19/wx3dlibs/include/opencv45withcuda11.1
DEPENDPATH += G:/dev/vsproject/wx3dprofilerStudio19/wx3dlibs/include/opencv45withcuda11.1

#DISTFILES += \
#    3rdParty/algorithm/debug/opencv_world451d.lib
#win32: LIBS += -L$$PWD/3rdParty/algorithm/debug/ -lopencv_world451d

HEADERS += \
    Src/AppInfo.h \
    Src/DeviceAddTable/DeviceAddItem.h \
    Src/DeviceAddTable/DeviceAddModel.h \
    Src/stdafx.h
