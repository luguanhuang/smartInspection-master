import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Dialogs 1.3
import TaoQuick 1.0

Item {

//    width: 800
//    height: 600

    Rectangle {
        id: rectangle
        color: "#00ffffff"
        anchors.fill: parent

        Rectangle {
            id: rect_img
            height: 100
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            Image {
                id: image
                height: 100
                anchors.left: parent.left
                anchors.right: parent.right
                source: "qrc:/images/importCAD.png"
                anchors.leftMargin: 0
                anchors.rightMargin: 0
                fillMode: Image.Stretch
            }
        }

        Rectangle {
            id: rect_ope
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_img.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 10

            CusButton_Blue {
                id: btn_openfile
                width: 160
                height: 40
                text: "open file"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 10
                onClicked: {
                    fd_cad.open()
                }

            }


            FileDialog {
                id: fd_cad
                title: qsTr("Please choose cad file")
                nameFilters: ["CAD Files(*.txt)"]
                folder: shortcuts.home
                onAccepted: {
                    console.log("You chose: " + fd_cad.fileUrls)
                    close()
//                    Qt.quit()
                }
                onRejected: {
                    console.log("Canceled")
                    close()
//                    Qt.quit()
                }
//                Component.onCompleted: visible = true
            }


            CusButton_Blue {
                id: btn_board
                width: 160
                height: 40
                text: "modify subboard"
                anchors.left: btn_openfile.right
                anchors.top: parent.top
                anchors.leftMargin: 10
                anchors.topMargin: 20
            }

            CusLabel {
                id: lb
                width: 80
                height: 40
                text: "unit"
                horizontalAlignment: Qt.AlignRight
                anchors.left: btn_board.right
                anchors.top: parent.top
                anchors.leftMargin: 10
                anchors.topMargin: 20
            }

            CusComboBox {
                id: comb_unit
                width: 100
                height: 40
                anchors.left: lb.right
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 10
                model:["cm","mm","μm"]
                displayText: currentText
            }

            CusCheckBox {
                id: cb_match
                height: 40
                text: "auto match inspectlib"
                anchors.left: comb_unit.right
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 20
            }
        }

        Rectangle {
            id: rect_lb
            height: 100
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_ope.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 20

            CusLabel {
                id: cusLabel
                text:"cad导入规则：
排列关系：列的顺序x,y,角度，料号，位号
列与列的分隔符：两个空格
行与行间的换行：一个回车"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.topMargin: 0
                anchors.rightMargin: 0
                anchors.leftMargin: 10
            }
        }

        Rectangle {
            id: rect_tb
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_lb.bottom
            anchors.bottom: rect_btn.top
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.bottomMargin: 20
            anchors.topMargin: 20

            CusLabel {
                id: lb_info
                height: 40
                text: "表格前两行，中间就是mark，后面两行统计总的导入记录数量"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.rightMargin: 10
                anchors.leftMargin: 10
            }

//            CusTableHeader {
//                id: cusHeader
//                y: 40
//                width: parent.width
//                height: 30
////                dataObj: deviceAddModel
//    //            headerNames: deviceAddModel.headerRoles
//                headerNames: ["x","y","angle","id","position"]
////                headerRoles: deviceAddModel.headerRoles
//                widthList: cusView.widthList
//                xList: cusView.xList
//                property real avalidWidth
//                updateWidthList: function() {
//                    avalidWidth = width - CusTableConstant.column0Width
//                    widthList = [CusTableConstant.column0Width, avalidWidth * 0.33,avalidWidth * 0.33,avalidWidth * 0.34]
//                }
//            }

            CusListView {
                id: cusListView
                height: 80
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: lb_info.bottom
                anchors.rightMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 10
            }
        }

        Rectangle {
            id: rect_btn
            height: 80
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.bottomMargin: 20

            CusButton_Blue {
                id: btn_ok
                width: 120
                height: 40
                text: "ok"
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.rightMargin: 10
                anchors.topMargin: 20
                onClicked: {
                    inspectsProjectStackView.push(Qt.resolvedUrl("qrc:/Flow/InspectsProject/InspectsProjectTables.qml"))
                }


            }

            CusButton_Blue {
                id: btn_cancel
                width: 120
                height: 40
                text: "cancel"
                anchors.left: btn_openfile.right
                anchors.right: btn_ok.left
                anchors.top: parent.top
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.topMargin: 20
                onClicked: {
                    inspectsProjectStackView.pop()
                }
            }
        }

    }



}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
