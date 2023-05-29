import QtQuick 2.15
import TaoQuick 1.0

Item {
    id: item1
    width: 800
    height: 600

    Rectangle {
        id: rect_content
        color: "#ffffff"
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0
        anchors.topMargin: 0
        anchors.rightMargin: 0
        anchors.leftMargin: 0

        Rectangle {
            id: rect_left
            width: 300
            color: "#ffffff"
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10
            anchors.topMargin: 10
            anchors.leftMargin: 10

            Rectangle {
                id: rect_id
                height: 60
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.topMargin: 10
                anchors.rightMargin: 0
                anchors.leftMargin: 0

                CusLabel {
                    id: lb_id
                    width: 120
                    height: 40
                    text: "inspect id"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 0
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_id
                    height: 40
                    anchors.left: lb_id.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 0
                    anchors.leftMargin: 10
                }
            }

            Rectangle {
                id: rect_id1
                height: 60
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_id.bottom
                CusLabel {
                    id: lb_id1
                    width: 120
                    height: 40
                    text: "inspect name"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 0
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_id1
                    height: 40
                    anchors.left: lb_id1.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 0
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_id2
                height: 60
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_id1.bottom
                CusLabel {
                    id: lb_id2
                    width: 120
                    height: 40
                    text: "board width"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 0
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_id2
                    height: 40
                    anchors.left: lb_id2.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 0
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_id3
                height: 60
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_id2.bottom
                CusLabel {
                    id: lb_id3
                    width: 120
                    height: 40
                    text: "subboard num"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 0
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_id3
                    height: 40
                    anchors.left: lb_id3.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 0
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_id4
                height: 60
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_id3.bottom
                CusLabel {
                    id: lb_id4
                    width: 120
                    height: 40
                    text: "descript"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 0
                    anchors.topMargin: 10
                }

                Text {
                    id: text_descript
                    height: 160
                    text: qsTr("Text")
                    anchors.left: lb_id4.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    font.pixelSize: 12
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_btns
                height: 60
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_id4.bottom
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10

                CusButton_Blue {
                    id: cusButton_Blue
                    width: 200
                    height: 40
                    text: "save inspect project"
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                }
            }
        }

        Rectangle {
            id: rect_image
            color: "#ffffff"
            anchors.left: rect_left.right
            anchors.right: rect_right_top.left
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.leftMargin: 10
            anchors.rightMargin: 10
            anchors.bottomMargin: 10
            anchors.topMargin: 10

            Image {
                id: image1
                anchors.fill: parent
                source: "qrc:/images/match_lib.png"
                fillMode: Image.PreserveAspectFit
            }
        }

        Rectangle {
            id: rect_right_top
            width: 200
            color: "#ffffff"
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.topMargin: 0
            anchors.bottomMargin: 0
            anchors.rightMargin: 0

            Component{
                id:inspect_3d
                InspectProject_3D{
                    anchors.centerIn: parent
                }
            }

            CusLabel {
                id: lb
                height: 40
                text: "not match inspectlib"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: btn_3D.bottom
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.topMargin: 10
            }

            CusListView {
                id: tb_match_component
                height: 300
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: lb.bottom
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.topMargin: 10
            }

            CusLabel {
                id: lb1
                height: 40
                text: "match inspectlib"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: tb_match_component.bottom
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.topMargin: 10
            }

            CusListView {
                id: tb_not_match_component
                height: 300
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: lb1.bottom
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.topMargin: 10
            }
        }
    }

}
