import QtQuick 2.2
import QtQuick.Controls 2.2
import TaoQuick 1.0
//import QtGraphicalEffects 1.0
import "../CombineControl"

Popup {
    id: root
    width: 680
    height: 460
    modal: true
    closePolicy:Popup.NoAutoClose
    background: Item {
        width: root.width
        height: root.height
        Rectangle {
            id: back
            anchors {
                fill: parent
                margins: 4
            }
            radius: 4
            color: CusConfig.themeColor

            MoveArea {
                anchors.fill: parent
                control: root
                onMove: {
                    root.x += xOffset
                    root.y += yOffset
                }
            }

            CusLabel{
                anchors.centerIn: parent
                text: qsTr("System introduce")
                font.pixelSize: 26
            }

            CusButton_Blue {
                id: closeBtn
                text: qsTr("Close")
                width: 80
                height: 40
                radius: 8
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 4
                onClicked: {
                    root.close()
                }
            }
        }
    }
    function show() {
        x = (parent.width - width) / 2
        y = (parent.height - height) / 2
        open()
    }
}

