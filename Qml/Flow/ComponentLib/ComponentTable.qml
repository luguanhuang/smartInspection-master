import QtQuick 2.15
import TaoQuick 1.0

Item {
    width: 800
    height: 600

    Rectangle {
        id: rectangle
        color: "#00ffffff"
        anchors.fill: parent

        Rectangle {
            id: rectangle1
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 10
            anchors.leftMargin: 10
            anchors.topMargin: 10

            CusLabel {
                id: cusLabel
                text: "Component Management"
                anchors.fill: parent
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                font.pixelSize: 30
            }
        }

        Rectangle {
            id: rectangle2
            height: 1
            color: "#00ffffff"
            border.color: "#0a0101"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rectangle1.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
        }

        Rectangle {
            id: rectangle3
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rectangle2.bottom
            anchors.bottom: parent.bottom
            anchors.rightMargin: 10
            anchors.leftMargin: 10
            anchors.bottomMargin: 10
            anchors.topMargin: 10

            Rectangle {
                id: rect_title
                height: 40
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0

                CusLabel {
                    id: cusLabel1
                    width: 150
                    text: "component name"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.bottom: parent.bottom
                    anchors.leftMargin: 0
                    anchors.bottomMargin: 0
                    anchors.topMargin: 0
                }

                CusTextField_Search {
                    id: cusTextField_Search
                    width: 200
                    anchors.left: cusLabel1.right
                    anchors.top: parent.top
                    anchors.bottom: parent.bottom
                    anchors.leftMargin: 10
                    anchors.bottomMargin: 0
                    anchors.topMargin: 0
                }
            }

            Rectangle {
                id: rect_tb
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_title.bottom
                anchors.bottom: parent.bottom
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.bottomMargin: 0
                anchors.topMargin: 10

                CusTableHeader {
                    id: cusTableHeader
                    height: 60
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: 0
                    anchors.rightMargin: 0
                    anchors.leftMargin: 0
                }

                CusTableView {
                    id: cusTableView
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: cusTableHeader.bottom
                    anchors.bottom: btn_edit.top
                    anchors.rightMargin: 0
                    anchors.leftMargin: 0
                    anchors.bottomMargin: 10
                    anchors.topMargin: 0
                }

                CusButton_Blue {
                    id: btn_edit
                    width: 120
                    height: 40
                    text: "edit"
                    anchors.left: parent.left
                    anchors.bottom: parent.bottom
                    anchors.leftMargin: 0
                    anchors.bottomMargin: 0

                    onClicked: {
                        componentLibStackView.push(component_edit)
                    }
                }
                Component{
                    id:component_edit
                    ComponentEdit{
                        anchors.fill: parent
                    }
                }


            }
        }
    }

}
