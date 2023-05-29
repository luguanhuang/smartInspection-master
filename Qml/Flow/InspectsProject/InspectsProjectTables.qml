import QtQuick 2.9
import QtQuick.Controls 2.2
import TaoQuick 1.0
import QtQml 2.15


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

	Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent


        CusImage {
            id: cusImage
            anchors.fill: parent 
            source: imgPath + "Window/bg.jpeg"
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
            height: 60
            //t_main:main_window
        }


		Item{
            id: content
            width: parent.width - resizeBorder.borderWidth * 2
            x: resizeBorder.borderWidth
            anchors {
                top: title.bottom
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
                color: CusConfig.controlBorderColor
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



/*Item {

//    anchors.fill: parent
    signal nextClicked;

    Component.onCompleted: {
        //deviceAddModel.initData()
    }

    Item {
        id: mainItem
        anchors.fill: parent

        Rectangle {
            id: rect_btn
            height: 60
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.leftMargin: 0
            anchors.rightMargin: 0

            CusButton_Blue{
                id:btn_next
                x: 540
                y: 0
                text:qsTr("Next")
                width: 100
                height: 40
                anchors.top: parent.top
                anchors.rightMargin: 10
                anchors.topMargin: 10
                anchors.right: parent.right

                onClicked: {
                    inspectsProjectStackView.push(cad_relation)
                }

            }

            Component{
                id:cad_relation
                InspectProject_CAD_Relation{
                    anchors.fill: parent
                }
            }
        }

        Rectangle {
            id: rect_tb_title
            height: 60
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_btn.bottom
            anchors.topMargin: 20
            anchors.rightMargin: 0
            anchors.leftMargin: 0

            CusButton_Blue {
                id: btn_new
                x: 540
                y: 0
                width: 100
                height: 40
                text: qsTr("new")
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.rightMargin: 10
                anchors.topMargin: 10
                onClicked: {
                    inspectsProjectStackView.push(newInspectProject)
                }
            }

            Component{
                id:newInspectProject
                AddInspectsProject{
                    anchors.centerIn: parent
                }
            }

            CusLabel {
                id: cusLabel
                width: 120
                height: 40
                text: "boader name"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.leftMargin: 10
                anchors.topMargin: 10
            }

            CusTextField_Search {
                id: text_seach
                width: 300
                height: 40
                anchors.left: cusLabel.right
                anchors.top: parent.top
                anchors.leftMargin: 10
                anchors.topMargin: 10
            }
        }

        Rectangle {
            id: rect_tb
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: rect_tb_title.bottom
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10
            anchors.topMargin: 10
            anchors.rightMargin: 10
            anchors.leftMargin: 10

            CusTableHeader {
                id: cusHeader
                y: 50
                width: parent.width
                height: 30
                dataObj: deviceAddModel
                headerNames: deviceAddModel.headerRoles
                headerRoles: deviceAddModel.headerRoles
                widthList: cusView.widthList
                xList: cusView.xList
                property real avalidWidth
                x: 0
                updateWidthList: function() {
                    widthList = [width * 0.143,width *0.143,
                                 width * 0.143,width * 0.143,width * 0.143,width *0.143,
                                 width * 0.143]
                }
            }

            CusTableView {
                id: cusView
                x: 0
                y: 80
                width: parent.width
                height: parent.height - y - 40
                model: deviceAddModel
                onPressed: {
                    doPress(mouseX, mouseY)
                }
                onRightPressed: {
                    var index = indexAt(mouseX, mouseY + contentY)
                    if (index < 0 || index >= count) {
                        return
                    }
                    tableMenu.popup(mouseX, mouseY)
                }
                onReleased: {

                    doRelease()
                }
                onPositionChanged: {
                    doPositionChanged(mouseX, mouseY)
                }
                onDoubleClicked: {
                    var index = indexAt(mouseX, mouseY + contentY)
                    if (index < 0 || index >= count) {
                        return
                    }
                    if (cusHeader.xList[1] <= mouseX
                            && mouseX <= cusHeader.xList[2]) {

                        editInput.x = cusHeader.xList[1]
                        editInput.y = cusView.y + (parseInt(mouseY / CusConfig.fixedHeight)) * CusConfig.fixedHeight
                        editInput.width = cusHeader.widthList[1]
                        editInput.height = CusConfig.fixedHeight
                        editInput.index = index
                        var dataObj = deviceAddModel.data(index)
                        editInput.text = dataObj[deviceAddModel.headerRoles[0]]
                        editInput.visible = true
                        editInput.focus = true
                    }
                }
                Menu {

                    id: tableMenu
                    MenuItem {
                        text: qsTr("copy row")
                        onTriggered: {
                            var mouseX = tableMenu.x
                            var mouseY = tableMenu.y
                            var index = cusView.indexAt(mouseX, mouseY + cusView.contentY)
                            if (index < 0 || index >= cusView.count) {
                                return
                            }
                            deviceAddModel.insertBeforeRow(index)
//                            if (cusHeader.xList[1] <= mouseX && mouseX <= cusHeader.xList[2]) {
//                                editInput.x = cusHeader.xList[1]
//                                editInput.y = cusView.y + (parseInt(mouseY / CusConfig.fixedHeight)) * CusConfig.fixedHeight
//                                editInput.width = cusHeader.widthList[1]
//                                editInput.height = CusConfig.fixedHeight
//                                editInput.index = index
//                                var dataObj = deviceAddModel.data(index)
//                                editInput.text = dataObj[deviceAddModel.headerRoles[0]]
//                                editInput.visible = true
//                                editInput.focus = true
//                            }
                        }
                    }
                    MenuItem {
                        text: qsTr("edit row")
                        onTriggered: {
                            var mouseX = tableMenu.x
                            var mouseY = tableMenu.y
                            var index = cusView.indexAt(mouseX, mouseY + cusView.contentY)
                            if (index < 0 || index >= cusView.count) {
                                return
                            }
//                            deviceAddModel.insertBeforeRow(index)
                            inspectsProjectStackView.push(edit_inspectproject)

                        }
                    }

                    Component{
                        id:edit_inspectproject
                        AddInspectsProject
                        {
                            //在这里可以传参数
                            anchors.centerIn: parent
                        }
                    }

                    MenuItem {
                        text: qsTr("Remov row")
                        onTriggered: {
                            var mouseX = tableMenu.x
                            var mouseY = tableMenu.y
                            var index = cusView.indexAt(mouseX, mouseY + cusView.contentY)
                            if (index < 0 || index >= cusView.count) {
                                return
                            }
                            deviceAddModel.removeRow(index)
                        }
                    }
                    MenuItem {
                        text: qsTr("releate subboard")
                        onTriggered: {
                            var mouseX = tableMenu.x
                            var mouseY = tableMenu.y
                            var index = cusView.indexAt(mouseX, mouseY + cusView.contentY)
                            if (index < 0 || index >= cusView.count) {
                                return
                            }
//                            deviceAddModel.removeRow(index)
                            inspectsProjectStackView.push(subboard_layout)
                        }
                    }

                    Component{
                        id:subboard_layout
                        InspectProject_Subboard_Layout{

                            anchors.centerIn: parent

                        }
                    }
                }
                delegate: CusTableRow {
                    width: cusView.width
                    roles: cusView.model.headerRoles
                    dataObj: model.display
                    widthList: cusHeader.widthList
                    xList: cusHeader.xList
                    onCheckedChanged: {
                        deviceAddModel.check(index, checked)
                    }

                }
            }
        }
    }
}*/


