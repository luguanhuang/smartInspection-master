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
            anchors.leftMargin: 10
            anchors.rightMargin: 10

            CusLabel {
                id: cusLabel
                text: "InspectXXX_DefectXXX_Program"
                anchors.fill: parent
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                font.pixelSize: 30
            }
        }

        Rectangle {
            id: rect_line
            height: 1
            color: "#0f0000"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_title.bottom
            anchors.topMargin: 10
            anchors.rightMargin: 0
            anchors.leftMargin: 0
        }

        Rectangle {
            id: rect_content
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_line.bottom
            anchors.bottom: parent.bottom
            anchors.rightMargin: 10
            anchors.leftMargin: 10
            anchors.bottomMargin: 10
            anchors.topMargin: 10

            Rectangle {
                id: rect_cont_left
                x: 0
                color: "#00ffffff"
                border.color: "#0a0101"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.bottomMargin: 0
                width: parent.width/3

                Rectangle {
                    id: rectangle
                    height: 350
                    color: "#00ffffff"
                    border.color: "#0f0202"
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: 0
                    anchors.rightMargin: 0
                    anchors.leftMargin: 0

                    Column {
                        id: column
                        anchors.fill: parent
                        spacing: 10

                        CusLabel {
                            id: lb_inspect
                            height: 40
                            text: "inspect lib info"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.rightMargin: 10
                            anchors.leftMargin: 10
                        }

                        CusLabel {
                            id: lb_inspect1
                            height: 40
                            text: "component id：XXXXXX"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.leftMargin: 10
                            anchors.rightMargin: 10
                        }

                        CusLabel {
                            id: lb_inspect2
                            height: 40
                            text: "position x"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.leftMargin: 10
                            anchors.rightMargin: 10
                        }

                        CusLabel {
                            id: lb_inspect3
                            height: 40
                            text: "x：100"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.leftMargin: 10
                            anchors.rightMargin: 10
                        }

                        CusLabel {
                            id: lb_inspect4
                            height: 40
                            text: "y:100"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.leftMargin: 10
                            anchors.rightMargin: 10
                        }

                        CusLabel {
                            id: lb_inspect5
                            height: 40
                            text: "inspect lib name：XXXX"
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.leftMargin: 10
                            anchors.rightMargin: 10
                        }

                        CusButton_Blue {
                            id: cusButton_Blue
                            width: 120
                            height: 40
                            text: "save"
                            anchors.left: parent.left
                            anchors.leftMargin: 10
                        }
                    }
                }

            }

            Rectangle {
                id: rect_cont_right
                x: 0
                color: "#00ffffff"
                border.color: "#00ffffff"
                anchors.left: rect_cont_left.right
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.leftMargin: 10
                anchors.topMargin: 0
                anchors.rightMargin: 0
                anchors.bottomMargin: 0

                Image {
                    id: image
                    height: parent.height/2
                    width: height
                    source: "qrc:/images/defect.png"
                    anchors.horizontalCenter: parent.horizontalCenter
                    fillMode: Image.PreserveAspectFit

                }

                Rectangle {
                    id: rect_param
                    color: "#00ffffff"
                    border.color: "#000000"
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: image.bottom
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 10
                    anchors.rightMargin: 10
                    anchors.leftMargin: 10
                    anchors.topMargin: 10

                    Rectangle {
                        id: rect_param1
                        width: parent.width/4
                        color: "#00ffffff"
                        border.color: "#00000000"

                        anchors.left: parent.left
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                        anchors.leftMargin: 0

                        Column {
                            id: column1
                            height: 140
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: parent.top
                            anchors.rightMargin: 10
                            anchors.leftMargin: 10
                            spacing: 5

                            CusLabel {
                                id: cusLabel1
                                height: 40
                                text: "bright"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.rightMargin: 0
                                anchors.leftMargin: 0
                            }

                            Rectangle {
                                id: rectangle1
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.rightMargin: 0
                                anchors.leftMargin: 0

                                CusLabel {
                                    id: cusLabel2
                                    width: 80
                                    text: "bright max"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.topMargin: 0
                                    anchors.leftMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField
                                    anchors.left: cusLabel2.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.rightMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.bottomMargin: 0
                                    anchors.topMargin: 0
                                }
                            }

                            Rectangle {
                                id: rectangle2
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel3
                                    width: 80
                                    text: "bright min"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField1
                                    anchors.left: cusLabel3.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.rightMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.bottomMargin: 0
                                    anchors.topMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }
                        }

                        Image {
                            id: image1
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: column1.bottom
                            anchors.bottom: parent.bottom
                            source: "qrc:/images/bright.png"
                            anchors.rightMargin: 10
                            anchors.leftMargin: 10
                            anchors.bottomMargin: 10
                            anchors.topMargin: 10
                            fillMode: Image.PreserveAspectFit
                        }
                    }

                    Rectangle {
                        id: rect_param2
                        width: parent.width/4
                        color: "#00ffffff"
                        border.color: "#00000000"
                        anchors.left: rect_param1.right
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                        anchors.leftMargin: 0

                        Column {
                            id: column2
                            height: 140
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: parent.top
                            anchors.rightMargin: 10
                            anchors.leftMargin: 10
                            CusLabel {
                                id: cusLabel4
                                height: 40
                                text: "color"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle3
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel5
                                    width: 80
                                    text: "red max"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField2
                                    anchors.left: cusLabel5.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle4
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel6
                                    width: 80
                                    text: "red min"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.leftMargin: 0
                                    anchors.bottomMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField3
                                    anchors.left: cusLabel6.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle5
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel7
                                    width: 80
                                    text: "blue max"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.leftMargin: 0
                                    anchors.bottomMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField4
                                    anchors.left: cusLabel7.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle6
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel8
                                    width: 80
                                    text: "blue min"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField5
                                    anchors.left: cusLabel8.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle7
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel9
                                    width: 80
                                    text: "green max"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.leftMargin: 0
                                    anchors.bottomMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField6
                                    anchors.left: cusLabel9.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle8
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel10
                                    width: 80
                                    text: "green min"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField7
                                    anchors.left: cusLabel10.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }
                            spacing: 5
                        }
                    }

                    Rectangle {
                        id: rect_param3
                        width: parent.width/4

                        color: "#00ffffff"
                        border.color: "#00000000"
                        anchors.left: rect_param2.right
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.leftMargin: 0
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0

                        Image {
                            id: image2
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: parent.top
                            anchors.bottom: parent.bottom
                            source: "qrc:/images/color_set.png"
                            anchors.rightMargin: 0
                            anchors.leftMargin: 0
                            fillMode: Image.PreserveAspectFit
                            anchors.bottomMargin: 0
                            anchors.topMargin: 0
                        }
                    }

                    Rectangle {
                        id: rect_param4
                        width: parent.width/4
                        color: "#00ffffff"
                        border.color: "#00060101"
                        anchors.left: rect_param3.right
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.leftMargin: 0
                        anchors.topMargin: 0
                        anchors.bottomMargin: 0

                        Column {
                            id: column3
                            height: 140
                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: parent.top
                            anchors.rightMargin: 10
                            anchors.leftMargin: 10
                            CusLabel {
                                id: cusLabel11
                                height: 40
                                text: "param"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle9
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel12
                                    width: 80
                                    text: "% max"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField8
                                    anchors.left: cusLabel12.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }

                            Rectangle {
                                id: rectangle10
                                height: 40
                                color: "#00ffffff"
                                anchors.left: parent.left
                                anchors.right: parent.right
                                CusLabel {
                                    id: cusLabel13
                                    width: 80
                                    text: "% min"
                                    anchors.left: parent.left
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.leftMargin: 0
                                    anchors.bottomMargin: 0
                                    anchors.topMargin: 0
                                }

                                CusTextField {
                                    id: cusTextField9
                                    anchors.left: cusLabel13.right
                                    anchors.right: parent.right
                                    anchors.top: parent.top
                                    anchors.bottom: parent.bottom
                                    anchors.bottomMargin: 0
                                    anchors.leftMargin: 10
                                    anchors.topMargin: 0
                                    anchors.rightMargin: 0
                                }
                                anchors.leftMargin: 0
                                anchors.rightMargin: 0
                            }
                            spacing: 5
                        }
                    }

                }
            }
        }
    }


}
