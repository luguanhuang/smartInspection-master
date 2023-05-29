
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12


import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"

//donot rename this entrance main.qml file, it will corrupt the project
Window {
    width: 700
    height: 480
    visible: true
    title: qsTr("administrator platform\ 管理员-工作平台")


    GridLayout{

        id:qGrid
//        rows: 3
        rowSpacing: 2
        columns: 3
        columnSpacing: 2
        anchors.fill: parent

        property var cellmargin:20

		
        CusButton_Red{
            id: btnDevMan
            Layout.margins: qGrid.cellmargin
            text:"instrument management\ 设备管理"
            onClicked:
            {
				stackView.push(qmlPath+"Page/PageInstrumentList.qml")
                //检测ux---
            }
        }

        CusButton_Red{
            id: btnOpLog
            Layout.margins:  qGrid.cellmargin
            text:"user activity log\ 操作日志"
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageActivityLog.qml")
            }
        }
        CusButton_Red{
            id: btnUserMan
            Layout.margins:  qGrid.cellmargin
            text:"user admin\用户管理"
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageUsersList.qml")
            }
        }
		
        CusButton_Red{
            id: btnModifyPWD
            Layout.margins:  qGrid.cellmargin
            text:"modify password\ 修改密码"
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageModifyPassword.qml")
            }
        }

		StackView{
            id: stackView
            focus: true
            anchors.fill: parent
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

