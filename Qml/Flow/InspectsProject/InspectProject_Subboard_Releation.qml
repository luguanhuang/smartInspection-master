import QtQuick 2.9
import TaoQuick 1.0

Item {
    width: 480
    height: 600
    Rectangle {
        id: rectangle
        color: "#00ffffff"
        anchors.fill: parent

        Rectangle {
            id: rect_title
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            CusLabel {
                id: cusLabel
                width: 200
                height: 60
                text: "subboard releation"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.leftMargin: 10
                anchors.topMargin: 10
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
            anchors.bottomMargin: 0
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 10

            Rectangle {
                id: rect_id
                height: 60
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.topMargin: 0
                anchors.rightMargin: 0
                anchors.leftMargin: 0

                CusLabel {
                    id: lb_id
                    width: 120
                    height: 40
                    text: "subboard id"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_id
                    height: 40
                    anchors.left: lb_id.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.topMargin: 10
                    anchors.leftMargin: 10
                }
            }

            Rectangle {
                id: rect_serial
                height: 60
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_id.bottom
                CusLabel {
                    id: lb_serial
                    width: 120
                    height: 40
                    text: "serial id"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_serial
                    height: 40
                    anchors.left: lb_serial.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_x
                height: 60
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_serial.bottom
                CusLabel {
                    id: lb_id2
                    width: 120
                    height: 40
                    text: "x"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_x
                    height: 40
                    anchors.left: lb_id2.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_y
                height: 60
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_x.bottom
                CusLabel {
                    id: lb_id3
                    width: 120
                    height: 40
                    text: "x"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_y
                    height: 40
                    anchors.left: lb_id3.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_angle
                height: 60
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_y.bottom
                CusLabel {
                    id: lb_id4
                    width: 120
                    height: 40
                    text: "angle"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_angle
                    height: 40
                    anchors.left: lb_id4.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rect_image
                height: 60
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_angle.bottom
                CusLabel {
                    id: lb_id5
                    width: 120
                    height: 40
                    text: "image"
                    anchors.left: parent.left
                    anchors.top: parent.top
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusComboBox {
                    id: cmb_image
                    height: 40
                    anchors.left: lb_id5.right
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }

            Rectangle {
                id: rectangle1
                height: 60
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: rect_image.bottom
                anchors.topMargin: 10
                anchors.rightMargin: 0
                anchors.leftMargin: 0

                CusButton_Blue {
                    id: btn_cancel
                    width: 120
                    height: 40
                    text: "cancel"
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.topMargin: 10

                    onClicked: {
                        inspectsProjectStackView.pop()
                    }
                }

                CusButton_Blue {
                    id: btn_ok
                    width: 120
                    height: 40
                    text: "ok"
                    anchors.right: btn_cancel.left
                    anchors.top: parent.top
                    anchors.rightMargin: 10
                    anchors.topMargin: 10

                    onClicked: {
                        inspectsProjectStackView.pop()
                    }

                }
            }
        }
    }

}


