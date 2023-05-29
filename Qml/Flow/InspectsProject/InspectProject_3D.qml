import QtQuick 2.9
import TaoQuick 1.0

Item {
    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent

        Rectangle {
            id: rect_title
            height: 60
            color: "#ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0

            CusButton_Blue {
                id: cusButton_Blue
                width: 120
                height: 40
                text: "back"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.leftMargin: 10
                anchors.topMargin: 10
                onClicked: {
                    inspectsProjectStackView.pop()
                }
            }
        }

        Image {
            id: image_3D
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_title.bottom
            anchors.bottom: parent.bottom
            source: "qrc:/images/3D.png"
            anchors.rightMargin: 10
            anchors.leftMargin: 10
            anchors.bottomMargin: 10
            anchors.topMargin: 10
            fillMode: Image.PreserveAspectFit
        }
    }

}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}D{i:2}D{i:4}D{i:1}
}
##^##*/
