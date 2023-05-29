
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import Qt.labs.qmlmodels 1.0


import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"

//donot rename this entrance main.qml file, it will corrupt the project
Window {
	id:seldetect
    width: 600
    height: 600
    visible: true
    title: qsTr("选择检测方案")
    property int angle: 0
	modality: Qt.ApplicationModal
	CusLabel_Left {
            id: useraccounttext
            x: 10; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("方案名称") ;
        	font.pointSize: 10
        }

        Rectangle 
        {
            id: useraccountinput
            width: 150; height: 24;
            radius: 4
			color: "lightgrey"
            //border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 80
            CusTextInput {
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		

	//确认按钮
        Rectangle {
            id: findRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 230
             CusButton_Red{
            id: findText
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("查找")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageUsersList.qml")
            }
       	 }
            
        }

	

	StackView{
            id: stackView
            focus: true
            anchors.fill: parent
        }

	Rectangle{
        id:header
        width: parent.width
        height: 30
		anchors.top: parent.top; anchors.topMargin: 50

        Row{
            spacing: 0

            Repeater{
                model: ["方案编号","方案名称"]

                Rectangle{
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 150;break;
                        case 1: w = 150;break;
                        case 2: w = 150;break;
                        case 3: w = 150;break;
						case 4: w = 150;break;
						case 5: w = 150;break;
						case 6: w = 150;break;
						case 7: w = 150;break;
                        }
                        return w
                    }
                    height: header.height
                    color: "#666666"
                    border.width: 1
                    border.color: "#848484"
                    Text {
                        text: modelData
                        anchors.centerIn: parent
                        font.pointSize: 12
                        color: "white"
                    }
                }
            }
        }
    }
    TableView{
        id:tableView
        width: parent.width
        anchors.top:header.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        clip: true
        boundsBehavior: Flickable.OvershootBounds


        ScrollBar.vertical: ScrollBar {
            anchors.right:parent.right
            anchors.rightMargin: 0
            visible: tableModel.rowCount > 9
            background: Rectangle{
                color:"#666666"
            }
            onActiveChanged: {
                active = true;
            }
            contentItem: Rectangle
            {
                implicitWidth  : 6
                implicitHeight : 30
                radius : 3
                color  : "#848484"
            }
        }

        model: TableModel {
            id:tableModel

            TableModelColumn{display: "方案编号"}
            TableModelColumn{display: "方案名称"}			
        }
        delegate:DelegateChooser{

            DelegateChoice{
                column: 0
                delegate: Rectangle{
                    //color: "#666666"
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"

                    Text {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "blue"
                    }
                }
            }
            DelegateChoice{
                column: 1
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"

                    Text {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "white"
                    }
                }
            }
			 
        }
    }

	Component.onCompleted: {
        // 连接信号至两个信号
        //findRect321.clicked.connect(sendToLiLei)
        //findRect321.clicked.connect(sendToHanMeimei)
            tableModel.appendRow({"方案编号":"1","方案名称":"00001"})
            tableModel.appendRow({"方案编号":"2","方案名称":"00001"})
            tableModel.appendRow({"方案编号":"3","方案名称":"00001"})
            tableModel.appendRow({"方案编号":"4","方案名称":"00001"})
            tableModel.appendRow({"方案编号":"5","方案名称":"00001"})
            tableModel.appendRow({"方案编号":"6","方案名称":"00001"})
    }

		 

	//确认按钮
        Rectangle {
            id: findRect321
			// 1.自定义信号，传递信息
			signal clickBtnOk()    

			//signal sendToLiLei()  // 自定义信号
		    //signal sendToHanMeimei()  // 自定义信号
    		//onSendToLiLei: console.log("Send to LiLei")  // 信号处理程序
	    	//onSendToHanMeimei: console.log("Send to HanMeimei")  // 信号处理程序
			
			property int number//要传的值
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 400
            anchors.left: parent.left; anchors.leftMargin: 30
             CusButton_Red{
            id: findText54
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("确认")
            onClicked:
            {
            	console.log("number="+findRect321.number);
				// 2.发送信号(名称 + 剩余天数)
            	//findRect321.clickBtnOk()
            	angle = angle + 100
				//input1123.visible = true
				//stackView.pop()
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            	seldetect.visible = false
            }

			//onClickBtnOk():
			//{
				//console.log("number=");
			//}
       	 }
            
        }

		//确认按钮
        Rectangle {
            id: findRect123
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 400
            anchors.left: parent.left; anchors.leftMargin: 180
             CusButton_Red{
            id: findText45
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("取消")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageUsersList.qml")
            }
       	 }
            
        }
	
}

