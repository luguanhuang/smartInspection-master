import QtQuick 2.15
import TaoQuick 1.0
import Qt.labs.platform 1.1

Item {
    id: item1
    width: 800
    height: 600

    Rectangle {
        id: rect_bg
        color: "#ffffff"
        anchors.fill: parent

        Rectangle {
            id: rect_img
            height: 80
            color: "#ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            Image {
                id: image
                anchors.fill: parent
                source: "qrc:/images/subboard_mark_navigate.png"
                fillMode: Image.Stretch
            }
        }

        Rectangle {
            id: rectangle
            height: 60
            color: "#ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_img.bottom
            anchors.topMargin: 10
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            CusButton_Blue {
                id: btn_back
                width: 120
                height: 40
                text: "back"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.topMargin: 10
                anchors.leftMargin: 10
                onClicked: {
                    inspectsProjectStackView.pop()
                }
            }

            CusButton_Blue {
                id: btn_open_image
                width: 120
                height: 40
                text: "open image"
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.topMargin: 10
                anchors.rightMargin: 10
                onClicked: {
                    folderDialog.open()
                }
            }

            FolderDialog {
                   id: folderDialog
                   folder: StandardPaths.standardLocations(StandardPaths.PicturesLocation)[0] //默认打开Pictures文件夹
                   onAccepted: {
                      console.log(folderDialog.currentFolder)
                       inspectsProjectStackView.push(cad_layout)
                   }
            }

            Component{
                id:cad_layout
                InspectProject_CAD_Layout{
                    anchors.fill: parent
                }
            }


        }

        Rectangle {
            id: rect_content
            color: "#ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rectangle.bottom
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 0
            anchors.topMargin: 0
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            Rectangle {
                id: rect_left
                width: 400
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
                    anchors.topMargin: 0
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
            }

            Rectangle {
                id: rect_right
                color: "#ffffff"
                anchors.left: rect_left.right
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.leftMargin: 10
                anchors.rightMargin: 10
                anchors.bottomMargin: 10
                anchors.topMargin: 10

                Image {
                    id: image1
                    anchors.fill: parent
                    source: "qrc:/images/subboard_mark.png"
                    fillMode: Image.PreserveAspectFit
                }
            }
        }
    }

}
