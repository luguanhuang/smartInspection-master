QT += core xml network concurrent sql

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/Log4Qt/libs/release/ -llog4qt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/Log4Qt/libs/debug/ -llog4qt

INCLUDEPATH += $$PWD/Log4Qt/src
DEPENDPATH += $$PWD/Log4Qt/src

HEADERS += \
    $${PWD}/log4qt_poc.h \

SOURCES += \
        $${PWD}/log4qt_poc.cpp \

