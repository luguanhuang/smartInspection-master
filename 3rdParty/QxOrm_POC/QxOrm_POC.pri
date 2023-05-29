include($${PWD}/QxOrm/QxOrm.pri)

DEFINES += _BUILDING_PCBAOI

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/QxOrm/lib/ -lQxOrm
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/QxOrm/lib/ -lQxOrmd

INCLUDEPATH += $$PWD/QxOrm/include
INCLUDEPATH += $$PWD/Precompiled
INCLUDEPATH += $$PWD/common
DEPENDPATH += $$PWD/QxOrm/include

!contains(DEFINES, _QX_NO_PRECOMPILED_HEADER) {
PRECOMPILED_HEADER += $$PWD/Precompiled/precompiled.h

} # !contains(DEFINES, _QX_NO_PRECOMPILED_HEADER)

HEADERS += \
    $$PWD/DBEntities/pcba_algorithm.gen.h \
    $$PWD/DBEntities/pcba_algorithm4defect.gen.h \
    $$PWD/DBEntities/pcba_algorithmconfig.gen.h \
    $$PWD/DBEntities/pcba_algorithmconfigvalue.gen.h \
    $$PWD/DBEntities/pcba_cad2component.gen.h \
    $$PWD/DBEntities/pcba_component.gen.h \
    $$PWD/DBEntities/pcba_componenttype.gen.h \
    $$PWD/DBEntities/pcba_defect.gen.h \
    $$PWD/DBEntities/pcba_device.gen.h \
    $$PWD/DBEntities/pcba_inspectlib.gen.h \
    $$PWD/DBEntities/pcba_inspectresult.gen.h \
    $$PWD/DBEntities/pcba_inspectresultdetail.gen.h \
    $$PWD/DBEntities/pcba_inspectscheme.gen.h \
    $$PWD/DBEntities/pcba_pinoncomponent.gen.h \
    $$PWD/DBEntities/pcba_pintype.gen.h \
    $$PWD/DBEntities/pcba_setaxis.gen.h \
    $$PWD/DBEntities/pcba_setcamera.gen.h \
    $$PWD/DBEntities/pcba_setlight.gen.h \
    $$PWD/DBEntities/pcba_subboard.gen.h \
    $$PWD/DBEntities/pcba_subboardlayout.gen.h \
    $$PWD/DBEntities/pcba_subprogram.gen.h \
    $$PWD/DBEntities/pcba_subprogramitem.gen.h \
    $$PWD/DBEntities/pcba_user.gen.h \
    $$PWD/DBEntities/pcba_useroperate.gen.h \
    $$PWD/DBEntities/pcba_wholeboard.gen.h \
    $$PWD/DBEntities/pcba_wholeboardpattern.gen.h \
    $$PWD/DBEntities/pcbaoi_all_include.gen.h \
    $$PWD/Precompiled/export.h

SOURCES += \
    $$PWD/DBEntities/pcba_algorithm.gen.cpp \
    $$PWD/DBEntities/pcba_algorithm4defect.gen.cpp \
    $$PWD/DBEntities/pcba_algorithmconfig.gen.cpp \
    $$PWD/DBEntities/pcba_algorithmconfigvalue.gen.cpp \
    $$PWD/DBEntities/pcba_cad2component.gen.cpp \
    $$PWD/DBEntities/pcba_component.gen.cpp \
    $$PWD/DBEntities/pcba_componenttype.gen.cpp \
    $$PWD/DBEntities/pcba_defect.gen.cpp \
    $$PWD/DBEntities/pcba_device.gen.cpp \
    $$PWD/DBEntities/pcba_inspectlib.gen.cpp \
    $$PWD/DBEntities/pcba_inspectresult.gen.cpp \
    $$PWD/DBEntities/pcba_inspectresultdetail.gen.cpp \
    $$PWD/DBEntities/pcba_inspectscheme.gen.cpp \
    $$PWD/DBEntities/pcba_pinoncomponent.gen.cpp \
    $$PWD/DBEntities/pcba_pintype.gen.cpp \
    $$PWD/DBEntities/pcba_setaxis.gen.cpp \
    $$PWD/DBEntities/pcba_setcamera.gen.cpp \
    $$PWD/DBEntities/pcba_setlight.gen.cpp \
    $$PWD/DBEntities/pcba_subboard.gen.cpp \
    $$PWD/DBEntities/pcba_subboardlayout.gen.cpp \
    $$PWD/DBEntities/pcba_subprogram.gen.cpp \
    $$PWD/DBEntities/pcba_subprogramitem.gen.cpp \
    $$PWD/DBEntities/pcba_user.gen.cpp \
    $$PWD/DBEntities/pcba_useroperate.gen.cpp \
    $$PWD/DBEntities/pcba_wholeboard.gen.cpp \
    $$PWD/DBEntities/pcba_wholeboardpattern.gen.cpp



