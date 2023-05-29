
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
    width: 1440
    height: 960
    visible: true
    title: qsTr("administrator platform\ 管理员-工作平台")
	color: "#242e42"
	Rectangle {
        id: rectangle
        //color: "#ffffff"
        anchors.fill: parent
		color: "#242e42"

        CusImage {
            id: cusImage
            anchors.fill: parent 
            //source: imgPath + "Window/bg.jpeg"
        }

        CusResizeBorder {
            id: resizeBorder
            visible: Qt.platform.os !== "windows"
            borderWidth: 4
            enabled: visible
            anchors.fill: parent
            control: view
        }

        AboutDialog {
            id: aboutDialog
        }

		 TitlePane{
            id:title
            width: parent.width
            height: 200
            //t_main:main_window
        }


		Item{
            id: content
            width: parent.width - resizeBorder.borderWidth * 2
            x: resizeBorder.borderWidth
            anchors {
            	//top: 300
                //var tmp = title.bottom-11
                top: title.bottom
                //top: 500
                bottom: parent.bottom
                bottomMargin: resizeBorder.borderWidth
            }
             LeftPane {
                id: leftPane
				
                objectName: "leftPane"
                property real targetW: parent.width * 0.15
                width: targetW
//                width : 20
                height: parent.height
                property bool isOpen: true
                x: isOpen ? 0 : -targetW - 4
                Behavior on x {
                    NumberAnimation { duration: 350}
                }
                onLoadHome: {
                    rightPane.source = rightPane.homeUrl
                }
                onLoadContent: {
                    rightPane.source = path
                }
            }


             Rectangle {
                width: 1
                anchors {
                    top: leftPane.top
                    bottom: leftPane.bottom
                    right: leftPane.right
                }
                //color: CusConfig.controlBorderColor
                color: "#ffffff"
            }
            ContentPane {
                id: rightPane
                objectName: "contentRect"
                anchors {
                    left: leftPane.right
                    right: parent.right
                    top: parent.top
                    bottom: parent.bottom
                }

				
            }


        }
		 
	}

   /* GridLayout{

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
    }*/


}

