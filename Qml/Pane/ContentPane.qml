import QtQml 2.15
import QtQuick 2.15
import QtQuick.Controls 2.15
import TaoQuick 1.0

// 用来加载界面使用
Loader {
    id: rootLoader
    property string homeUrl: "qrc:/Qml/Page/Home.qml"

    source: homeUrl
    clip: true
}
