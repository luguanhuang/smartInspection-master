import QtQuick 2.15
import TaoQuick 1.0

Item {
    width: 800
    height: 600

    Rectangle {
        id: rect_bg
        color: "#00ffffff"
        anchors.fill: parent

        Rectangle {
            id: rect_title
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.topMargin: 10
            anchors.rightMargin: 10
            anchors.leftMargin: 10

            CusLabel {
                id: cusLabel
                text: "InspectLib Management"
                anchors.fill: parent
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                font.pixelSize: 20
            }
        }

        Rectangle {
            id: rect_content
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_title.bottom
            anchors.bottom: parent.bottom
            anchors.rightMargin: 10
            anchors.leftMargin: 10
            anchors.bottomMargin: 10
            anchors.topMargin: 10

            Rectangle {
                id: rect_info
                height: 40
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.topMargin: 10

                CusLabel {
                    id: cusLabel1
                    width: 120
                    text: "inspectlib name"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.bottom: parent.bottom
                    anchors.leftMargin: 0
                    anchors.bottomMargin: 0
                    anchors.topMargin: 0
                }

                CusTextField_Search {
                    id: cusTextField_Search
                    width: 300
                    anchors.left: cusLabel1.right
                    anchors.top: parent.top
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 0
                    anchors.topMargin: 0
                    anchors.leftMargin: 10
                }
            }

            Rectangle {
                id: rect_table
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_info.bottom
                anchors.bottom: parent.bottom
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.bottomMargin: 10
                anchors.topMargin: 10

                CusTableHeader {
                    id: tb_header
                    height: 60
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: 0
                    anchors.rightMargin: 0
                    anchors.leftMargin: 0
                }

                CusTableView {
                    id: tb_view
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: tb_header.bottom
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
                    text: "edit select line"
                    anchors.left: parent.left
                    anchors.bottom: parent.bottom
                    anchors.leftMargin: 0
                    anchors.bottomMargin: 0
                    onClicked: {
                        inspectLibStackView.push(inspectLib_Edit)
                    }
                }
                Component{
                    id:inspectLib_Edit
                    InspectLib_Edit{
                        anchors.fill: parent
                    }
                }
            }

        }
    }

}
