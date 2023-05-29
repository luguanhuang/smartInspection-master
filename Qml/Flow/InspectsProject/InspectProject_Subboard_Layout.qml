import QtQuick 2.9
import TaoQuick 1.0

Item {
    width: 800
    height: 600

    Rectangle {
        id: rectangle
        color: "#00ffffff"
        anchors.fill: parent

        Rectangle {
            id: rect_top
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            CusLabel {
                id: lb_title
                width: 300
                height: 60
                text: "Layout of subboard"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.topMargin: 10
                anchors.leftMargin: 10
                font.pixelSize: 20
            }

            CusButton_Blue {
                id: btn_return
                width: 120
                height: 40
                text: "return"
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.topMargin: 10
                anchors.rightMargin: 10
                onClicked: {
                    inspectsProjectStackView.pop()
                }
            }
        }

        Rectangle {
            id: rect_title
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_top.bottom
            anchors.topMargin: 10
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            CusLabel {
                id: cusLabel
                width: 120
                height: 40
                text: "whole board id"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.leftMargin: 10
                anchors.topMargin: 10
            }

            CusTextField {
                id: text_name
                width: 200
                height: 40
                anchors.left: cusLabel.right
                anchors.top: parent.top
                anchors.topMargin: 10
                anchors.leftMargin: 10
            }

            CusButton_Blue {
                id: btn_new
                width: 120
                height: 40
                text: "new"
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.topMargin: 10
                anchors.rightMargin: 10

                onClicked: {
                    inspectsProjectStackView.push(subboard_releation)
                }
            }

            Component{
                id:subboard_releation
                InspectProject_Subboard_Releation{
                    anchors.centerIn: parent
                }
            }
        }

        Rectangle {
            id: rect_tb
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_title.bottom
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 10

            CusListView {
                id: cusListView
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.topMargin: 10
                anchors.bottomMargin: 10
                anchors.rightMargin: 10
                anchors.leftMargin: 10
            }
        }
    }

}
