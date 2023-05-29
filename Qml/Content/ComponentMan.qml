import QtQuick 2.15
import QtQuick.Controls 2.15
import TaoQuick 1.0

import "../Flow"
import "../Flow/ComponentLib"

Item {
    id: componentManItem
    anchors.centerIn: parent
    FlowContentPane{
        anchors.fill: parent
        id:componentLibStackView
        initialItem: componentlib
    }

    Component{
        id:componentlib
        ComponentTable{
            anchors.fill: parent
        }
    }
}
