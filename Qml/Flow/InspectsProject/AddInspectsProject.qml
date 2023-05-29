import QtQuick 2.9
import QtQuick.Controls 2.15
import TaoQuick 1.0
import QtQml 2.15

Item {
    id: item1

    //        CusLabel {
    //            text: qsTr("InspectsProject add")
    //            horizontalAlignment: Label.AlignHCenter
    //            verticalAlignment: Label.AlignVCenter
    //            wrapMode: Label.Wrap
    //            anchors.centerIn: parent
    //        }



    signal nextClicked;
    signal forwardClicked;
    width: 600
    height: 800
    //    anchors.fill: parent
    Rectangle{
        id: rect_bg
        anchors.topMargin: 10
        color:"#00000000"
        //        color: CusConfig.themeColor
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: lb_title.bottom
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.rightMargin: 10
        anchors.leftMargin: 10

        Column {
            id: column
            anchors.fill: parent
            spacing: 0



            Rectangle {
                id: rect_id
                width: 450
                height: 60
                color: "#00ffffff"

                anchors.horizontalCenter: parent.horizontalCenter

                CusLabel {
                    id: lb_id
                    width: 120
                    height: 40
                    text: qsTr("id")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.topMargin: 10
                    anchors.leftMargin: 10

                }

                CusTextField {
                    id: text_id
                    width: 300
                    height: 40
                    anchors.left: lb_id.right
                    anchors.top: parent.top

                    horizontalAlignment: Text.AlignLeft
                    anchors.topMargin: 10
                    anchors.leftMargin: 10
                }
            }

            Rectangle {
                id: rect_name
                width: 450
                height: 60
                color: "#00ffffff"
                CusLabel {
                    id: lb_name
                    width: 120
                    height: 40
                    text: qsTr("name")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_name
                    width: 300
                    height: 40
                    anchors.left: lb_name.right
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignLeft
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                id: rect_id2
                width: 450
                height: 60
                color: "#00ffffff"
                CusLabel {
                    id: lb_id2
                    width: 120
                    height: 40
                    text: qsTr("length")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_len
                    width: 300
                    height: 40
                    anchors.left: lb_id2.right
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignLeft
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                id: rect_id3
                width: 450
                height: 60
                color: "#00ffffff"
                CusLabel {
                    id: lb_id3
                    width: 120
                    height: 40
                    text: qsTr("width")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: text_width
                    width: 300
                    height: 40
                    anchors.left: lb_id3.right
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignLeft
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                id: rect_id4
                width: 450
                height: 60
                color: "#00ffffff"
                CusLabel {
                    id: lb_id4
                    width: 120
                    height: 40
                    text: qsTr("A/BArea")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }



                CusComboBox {
                    id: comb_area
                    width: 300
                    height: 40
                    anchors.left: lb_id4.right
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.leftMargin: 10
                    model:["A","B"]
                    displayText: qsTr(currentText)
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                id: rect_id5
                width: 450
                height: 240
                color: "#00ffffff"
                CusLabel {
                    id: lb_id5
                    width: 120
                    height: 40
                    text: qsTr("description")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                TextField {
                    id: textField
                    x: 136
                    y: 23
                    width: 314
                    height: 217
                    horizontalAlignment: Text.AlignLeft
                    verticalAlignment: Text.AlignTop
                    wrapMode: Text.Wrap
                    selectByMouse: true
                    placeholderText: qsTr("input description text")

                }
//                Text {
//                    id: text_des
//                    width: 300
//                    height: 200
//                    anchors.left: lb_id5.right
//                    anchors.top: parent.top
//                    anchors.leftMargin: 10
//                    anchors.topMargin: 10

//                    verticalAlignment: TextInput.AlignTop
//                    horizontalAlignment: TextInput.AlignLeft
//                    leftPadding: 5 //QtQuick 2.13 间隔
//                    rightPadding: 5
//                    lineHeight: Text.ProportionalHeight //设置行间距
//                    wrapMode: Text.WordWrap //换行
//                    elide: Text.ElideRight //显示不完则隐藏
//                    //elide 省略模式 wrap 换行模式
//                    //contentWidth 手动设置字体显示的宽与高
//                }

                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                id: rect_id6
                width: 450
                height: 60
                color: "#00ffffff"

                CusButton_Blue {
                    id: btn_cad
                    text:qsTr("Import CAD")
                    anchors.right: btn_cancel.left
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                    width: 100
                    height: 40

                    onClicked: {
//                        inspectsProjectStackView.push(Qt.resolvedUrl("qrc:/Flow/InspectsProject/InspectProject_CAD.qml"))
                        inspectsProjectStackView.push(cad)
                    }
                }

                Component{
                    id:cad
                    InspectProject_CAD{
                        anchors.fill: parent
                    }
                }

                CusButton_Blue {
                    id: btn_cancel
                    width: 120
                    height: 40
                    text:"Cancel"
                    anchors.right: btn_ok.left
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                    onClicked: {
                        inspectsProjectStackView.pop()
                    }
                }

                CusButton_Blue {
                    id: btn_ok
                    width: 120
                    height: 40
                    text:"ok"
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                    onClicked: {
                        inspectsProjectStackView.pop()
                    }
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }

    CusLabel {
        id: lb_title
        height: 60
        text: "设备-新增"
        anchors.left: parent.left
        anchors.right: parent.right
        font.pointSize: 30
        anchors.leftMargin: 10
        anchors.rightMargin: 10
    }





}




