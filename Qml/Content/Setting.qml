import QtQuick 2.15
import QtQuick.Controls 2.15
import TaoQuick 1.0

Item {
    id: componentManItem
    anchors.centerIn: parent
    CusLabel {
        text: qsTr("Setting management")
        horizontalAlignment: Label.AlignHCenter
        verticalAlignment: Label.AlignVCenter
        wrapMode: Label.Wrap
        anchors.centerIn: parent
    }
}
