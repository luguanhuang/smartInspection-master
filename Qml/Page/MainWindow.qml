import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQml 2.15
import TaoQuick 1.0

import "../Pane"
import "../Dialog"

Item {
    id:main_window
    anchors.fill: parent
    visible: true

    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent


        CusImage {
            id: cusImage
            anchors.fill: parent 
            source: imgPath + "Window/bg.jpeg"
        }

        CusResizeBorder {
            id: resizeBorder
            visible: Qt.platform.os !== "windows"
            borderWidth: 4
            enabled: visible
            anchors.fill: parent
            control: view
        }

        AboutDialog {
            id: aboutDialog
        }

       /*ModifyPasswordDialog{
            id:modifyPasswordDialog
        }*/

        TitlePane{
            id:title
            width: parent.width
            height: 60
            //t_main:main_window
        }
       /*Item{
            id: content
            width: parent.width - resizeBorder.borderWidth * 2
            x: resizeBorder.borderWidth
            anchors {
                top: title.bottom
                bottom: parent.bottom
                bottomMargin: resizeBorder.borderWidth
            }
             LeftPane {
                id: leftPane
                objectName: "leftPane"
                property real targetW: parent.width * 0.15
                width: targetW
//                width : 20
                height: parent.height
                property bool isOpen: true
                x: isOpen ? 0 : -targetW - 4
                Behavior on x {
                    NumberAnimation { duration: 350}
                }
                onLoadHome: {
                    rightPane.source = rightPane.homeUrl
                }
                onLoadContent: {
                    rightPane.source = path
                }
            }


             Rectangle {
                width: 1
                anchors {
                    top: leftPane.top
                    bottom: leftPane.bottom
                    right: leftPane.right
                }
                color: CusConfig.controlBorderColor
            }
            ContentPane {
                id: rightPane
                objectName: "contentRect"
                anchors {
                    left: leftPane.right
                    right: parent.right
                    top: parent.top
                    bottom: parent.bottom
                }
            }


        }*/

        ClickShow {
            anchors.fill: parent
            anchors.margins: 10
        }
    }




}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.9}D{i:1}
}
##^##*/
