import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3


import TaoQuick 1.0
import "./Page"
import "./Pane"
import "./Dialog"

//donot rename this entrance main.qml file, it will corrupt the project
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("smartPCB  检测工作台")


    CusButton_Blue{
        width:200
        height:100

    }


    GridLayout{

        id:qGrid
//        rows: 3
        rowSpacing: 2
        columns: 3
        columnSpacing: 2
        anchors.fill: parent

        property var cellmargin:20


        Button{
            id: btnInspection
            Layout.margins: qGrid.cellmargin
            text:"开始检测"
            onClicked:
            {
                //检测ux---
            }
        }

        Button{
            id: btnMachineParam
            Layout.margins:  qGrid.cellmargin
            text:"光学参数设置"
            onClicked:
            {

            }
        }
        Button{
            id: btnImageGrabbing
            Layout.margins:  qGrid.cellmargin
            text:"采集图像"
            onClicked:
            {

            }
        }
        Button{
            id: btnReportBrowse
            Layout.margins:  qGrid.cellmargin
            text:"检测报告"
            onClicked:
            {

            }
        }
        Button{
            id: btnModifyPWD
            Layout.margins:  qGrid.cellmargin
            text:"修改密码"
            onClicked:
            {

            }
        }


//        Text { property var rowStart:5
//            Layout.row:rowStart

//            text: "Three"; font.bold: true; }
//            Text { property var columnSpan:2
//                Layout.columnSpan: columnSpan
//                text: "words";  color: "red" }


//            Text { text: "in"; font.underline: true }

//            Text { text: "a"; font.pixelSize: 20 }
//            Text { text: "row"; font.strikeout: true }
    }


}
