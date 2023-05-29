import QtQuick 2.15
import TaoQuick 1.0

Item {
    width: 800
    height: 800
    Rectangle {
        id: rectangle
        color: "#00ffffff"
        border.color: "#0c0303"
        anchors.fill: parent
        layer.enabled: true

        Rectangle {
            id: rectangle1
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
                text: "Component Edit"
                anchors.fill: parent
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                font.pixelSize: 30
            }
        }

        Rectangle {
            id: rectangle2
            height: 1
            color: "#090000"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rectangle1.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
        }

        Rectangle {
            id: rect_content
            color: "#00ffffff"
            border.color: "#0c0101"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rectangle2.bottom
            anchors.bottom: parent.bottom
            anchors.rightMargin: 10
            anchors.leftMargin: 10
            anchors.bottomMargin: 10
            anchors.topMargin: 10

            Column {
                id: column
                anchors.fill: parent
                anchors.topMargin: 10
                spacing: 10

                Row {
                    id: row
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.rightMargin: 0
                    anchors.leftMargin: 0
                    spacing: 10

                    CusLabel {
                        id: cusLabel1
                        width: 150
                        text: "id"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                }

                Row {
                    id: row1
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel2
                        width: 150
                        text: "name"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField1
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row2
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel3
                        width: 150
                        text: "type of component"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField2
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row3
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel4
                        width: 150
                        text: "length"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField3
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row4
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel5
                        width: 150
                        text: "width"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField4
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row5
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel6
                        width: 150
                        text: "height"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField5
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row6
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel7
                        width: 150
                        text: "ocr"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField6
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row7
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel8
                        width: 150
                        text: "ocr-x"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField7
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row8
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel9
                        width: 150
                        text: "ocr-y"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField8
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row9
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel10
                        width: 150
                        text: "ispaster"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField9
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row10
                    height: 120
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel11
                        width: 150
                        text: "image"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    Image {
                        id: image
                        width: 400
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        source: "qrc:/images/component.png"
                        anchors.bottomMargin: 20
                        anchors.topMargin: 0
                        fillMode: Image.PreserveAspectFit
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row11
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    CusLabel {
                        id: cusLabel12
                        width: 150
                        text: "description"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        horizontalAlignment: Text.AlignRight
                        verticalAlignment: Text.AlignVCenter
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }

                    CusTextField {
                        id: cusTextField11
                        width: 200
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                    }
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0
                }

                Row {
                    id: row12
                    height: 40
                    anchors.left: parent.left
                    anchors.right: parent.right
                    spacing: 10
                    anchors.leftMargin: 0
                    anchors.rightMargin: 0

                    CusButton_Blue {
                        id: btn_ok
                        width: 120
                        height: 40
                        text: "OK"
                        onClicked: {
                            componentLibStackView.pop()
                        }
                    }

                    CusButton_Blue {
                        id: btn_cancel
                        width: 120
                        text: "Cancel"
                        anchors.top: parent.top
                        anchors.bottom: parent.bottom
                        anchors.bottomMargin: 0
                        anchors.topMargin: 0
                        onClicked: {
                            componentLibStackView.pop()
                        }
                    }
                }
            }
        }
    }

}


