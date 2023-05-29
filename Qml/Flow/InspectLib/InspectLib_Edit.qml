import QtQuick 2.15
import TaoQuick 1.0

Item {
    id: item1
    width: 800
    height: 600

    Rectangle {
        id: rect_bg
        color: "#00ffffff"
        anchors.fill: parent

        Rectangle {
            id: rect_line
            height: 1
            color: "#090202"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_title.bottom
            anchors.topMargin: 0
            anchors.rightMargin: 0
            anchors.leftMargin: 0
        }

        Rectangle {
            id: rect_title
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            CusLabel {
                id: cusLabel
                text: "Inspect Edit"
                anchors.fill: parent
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.bottomMargin: 10
                anchors.topMargin: 10
                font.pixelSize: 20
            }
        }

        Rectangle {
            id: rectangle
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_line.bottom
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 0
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0

            Rectangle {
                id: rect_left
                width: item1.width*2/3
                color: "#00ffffff"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.leftMargin: 0
                anchors.bottomMargin: 0
                anchors.topMargin: 0

                Rectangle {
                    id: rect_content
                    color: "#00ffffff"
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.bottom: parent.bottom
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    anchors.bottomMargin: 10
                    anchors.topMargin: 10

                    Rectangle {
                        id: rect_info
                        height: 180
                        color: "#00ffffff"
                        anchors.left: parent.left
                        anchors.right: parent.right
                        anchors.top: parent.top
                        anchors.rightMargin: 0
                        anchors.leftMargin: 0
                        anchors.topMargin: 0

                        Rectangle {
                            id: rect_partnum
                            height: 60
                            color: "#00ffffff"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: parent.top
                            anchors.topMargin: 0
                            anchors.rightMargin: 0
                            anchors.leftMargin: 0

                            CusLabel {
                                id: lb_comp_partnum
                                text: "component part number:001122"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.top: parent.top
                                anchors.bottom: parent.bottom
                                anchors.rightMargin: 10
                                anchors.leftMargin: 10
                                anchors.bottomMargin: 10
                                anchors.topMargin: 10
                            }
                        }

                        Rectangle {
                            id: rect_name
                            height: 60
                            color: "#00ffffff"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: rect_partnum.bottom
                            anchors.leftMargin: 0
                            anchors.topMargin: 0
                            anchors.rightMargin: 0
                            CusLabel {
                                id: lb_comp_name
                                text: "component name:XXXXXX"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.top: parent.top
                                anchors.bottom: parent.bottom
                                anchors.leftMargin: 10
                                anchors.topMargin: 10
                                anchors.rightMargin: 10
                                anchors.bottomMargin: 10
                            }
                        }

                        Rectangle {
                            id: rect_insplib_name
                            width: 500
                            color: "#00ffffff"
                            anchors.left: parent.left
                            anchors.top: rect_name.bottom
                            anchors.bottom: parent.bottom
                            anchors.leftMargin: 0
                            anchors.bottomMargin: 0
                            anchors.topMargin: 0

                            CusLabel {
                                id: cusLabel1
                                width: 150
                                text: "inspectlib name:"
                                anchors.left: parent.left
                                anchors.top: parent.top
                                anchors.bottom: parent.bottom
                                anchors.leftMargin: 10
                                anchors.bottomMargin: 10
                                anchors.topMargin: 10
                            }

                            CusTextField {
                                id: text_insplib_name
                                anchors.left: cusLabel1.right
                                anchors.right: parent.right
                                anchors.top: parent.top
                                anchors.bottom: parent.bottom
                                anchors.bottomMargin: 10
                                anchors.topMargin: 10
                                anchors.rightMargin: 10
                                anchors.leftMargin: 10
                            }
                        }
                    }

                    Rectangle {
                        id: rect_defect
                        color: "#00ffffff"
                        anchors.left: parent.left
                        anchors.right: parent.right
                        anchors.top: rect_info.bottom
                        anchors.bottom: parent.bottom
                        anchors.rightMargin: 0
                        anchors.leftMargin: 0
                        anchors.bottomMargin: 0
                        anchors.topMargin: 10

                        Rectangle {
                            id: rect_def_info
                            width: 500
                            height: 60
                            color: "#00ffffff"
                            anchors.left: parent.left
                            anchors.top: parent.top
                            anchors.leftMargin: 0
                            anchors.topMargin: 0

                            CusLabel {
                                id: cusLabel2
                                width: 120
                                text: "defect item"
                                anchors.left: parent.left
                                anchors.top: parent.top
                                anchors.bottom: parent.bottom
                                anchors.leftMargin: 10
                                anchors.topMargin: 10
                                anchors.bottomMargin: 10
                            }

                            CusComboBox {
                                id: cusComboBox
                                anchors.left: cusLabel2.right
                                anchors.right: btn_defect_add.left
                                anchors.top: parent.top
                                anchors.bottom: parent.bottom
                                anchors.rightMargin: 10
                                anchors.leftMargin: 10
                                anchors.bottomMargin: 10
                                anchors.topMargin: 10
                            }

                            CusButton_Blue {
                                id: btn_defect_add
                                width: 120
                                text: "add defect"
                                anchors.right: parent.right
                                anchors.top: parent.top
                                anchors.bottom: parent.bottom
                                anchors.rightMargin: 10
                                anchors.bottomMargin: 10
                                anchors.topMargin: 10
                            }
                        }

                        Rectangle {
                            id: rect_def_table
                            color: "#00ffffff"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: rect_def_info.bottom
                            anchors.bottom: parent.bottom
                            anchors.bottomMargin: 10
                            anchors.leftMargin: 0
                            anchors.topMargin: 10
                            anchors.rightMargin: 0

                            CusTableView {
                                id: cusTableView
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.top: cusTableHeader.bottom
                                anchors.bottom: btn_program.top
                                anchors.bottomMargin: 10
                                anchors.topMargin: 0
                            }

                            CusTableHeader {
                                id: cusTableHeader
                                height: 60
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.top: parent.top
                                anchors.rightMargin: 0
                                anchors.leftMargin: 0
                                anchors.topMargin: 0
                            }

                            CusButton_Blue {
                                id: btn_program
                                width: 120
                                height: 40
                                text: "enter program"
                                anchors.left: parent.left
                                anchors.bottom: parent.bottom
                                anchors.leftMargin: 0
                                anchors.bottomMargin: 0

                                onClicked: {
                                    inspectLibStackView.push(inspect_program)
                                }
                            }

                            Component{
                                id:inspect_program
                                Inspect_Program{
                                    anchors.fill: parent
                                }
                            }
                        }
                    }
                }
            }

            Rectangle {
                id: rect_right
                x: 533
                y: 0
                color: "#00ffffff"
                anchors.left: rect_left.right
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.bottomMargin: 0
                anchors.topMargin: 0

                Image {
                    id: image
                    height: 300
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.left: parent.left
                    anchors.right: parent.right
                    source: "qrc:/images/component.png"
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    fillMode: Image.Stretch
                }
            }
        }
    }

}
