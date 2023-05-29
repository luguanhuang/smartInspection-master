import QtQuick 2.15
import QtQuick.Controls 2.15
import TaoQuick 1.0

import "../Flow"
import "../Flow/InspectLib"

Item {
    id: inspectLibManItem
    anchors.centerIn: parent

    FlowContentPane{
        anchors.fill: parent
        id:inspectLibStackView
        initialItem: inspectlib
    }

    Component{
        id:inspectlib
        InspectLib_Table{
            anchors.fill: parent
        }
    }
}
