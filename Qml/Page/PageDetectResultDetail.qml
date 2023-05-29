
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
    width: 900
    height: 800
    visible: true
    title: qsTr("检测结果详情")

	CusLabel_Left {
            id: input1
            x: 10; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("检测员") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input2
            x: 80; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("张三") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input3
            x: 150; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("检测时间") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input4
            x: 220; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("2022-02-09  17:12:23") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input5
            x: 400; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("原厂板子编号") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input6
            x: 500; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("000223") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input7
            x: 580; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("检测方案名称") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input8
            x: 680; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("xxxxxxxxxxxx") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input9
            x: 780; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("机检结果") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input10
            x: 850; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("NG") ;
        	font.pointSize: 10
        }

	CusLabel_Left {
            id: input11
            x: 10; y: 70
            width: 200
            height: 20
            focus: true
           text: qsTr("不良元件列表") ;
        	font.pointSize: 10
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
		anchors.top: parent.top; anchors.topMargin: 100

        Row{
            spacing: 0

            Repeater{
                model: ["元件编号","采用检测库"]

                Rectangle{
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 150;break;
                        case 1: w = 150;break;
                       
                        }
                        return w
                    }
                    height: header.height
                    color: "#666666"
                    border.width: 1
                    border.color: "#848484"
                    CusLabel {
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
                //color:"#666666"
            }
            onActiveChanged: {
                active = true;
            }
            contentItem: Rectangle
            {
                implicitWidth  : 6
                implicitHeight : 30
                radius : 3
                //color  : "#848484"
            }
        }

        model: TableModel {
            id:tableModel

            TableModelColumn{display: "元件编号"}
            TableModelColumn{display: "采用检测库"}
            
	
			
        }
        delegate:DelegateChooser{

            DelegateChoice{
                column: 0
                delegate: Rectangle{
                    //color: "#666666"
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"

                    CusLabel {
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
                    //color: "#666666"
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                    //border.color: "#848484"

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                       // color: "white"
                    }
                }
            }			 
        }
    }

	CusLabel_Left {
            id: input14
            x: 10; y: 330
            width: 200
            height: 20
            focus: true
           text: qsTr("不良元件的缺陷列表") ;
        	font.pointSize: 10
        }


			Rectangle{
        id:header1
        width: parent.width
        height: 30
		anchors.top: parent.top; anchors.topMargin: 350

        Row{
            spacing: 0

            Repeater{
                model: ["缺陷"]

                Rectangle{
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 150;break;
                       
                        }
                        return w
                    }
                    height: header1.height
                    color: "#666666"
                    border.width: 1
                    border.color: "#848484"
                    CusLabel {
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
        id:tableView1
        width: parent.width
        anchors.top:header1.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        clip: true
        boundsBehavior: Flickable.OvershootBounds


        ScrollBar.vertical: ScrollBar {
            anchors.right:parent.right
            anchors.rightMargin: 0
            visible: tableModel1.rowCount > 9
            background: Rectangle{
                //color:"#666666"
            }
            onActiveChanged: {
                active = true;
            }
            contentItem: Rectangle
            {
                implicitWidth  : 6
                implicitHeight : 30
                radius : 3
                //color  : "#848484"
            }
        }

        model: TableModel {
            id:tableModel1

            TableModelColumn{display: "缺陷"}
            
            
	
			
        }
        delegate:DelegateChooser{

            DelegateChoice{
                column: 0
                delegate: Rectangle{
                    //color: "#666666"
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "blue"
                    }
                }
            }
            			 
        }
    }

    Component.onCompleted: {

		 tableModel.appendRow({"元件编号":"1","采用检测库":"00001"})
        tableModel.appendRow({"元件编号":"2","采用检测库":"00001"})
        tableModel.appendRow({"元件编号":"3","采用检测库":"00001"})
        tableModel.appendRow({"元件编号":"4","采用检测库":"00001"})
        tableModel.appendRow({"元件编号":"5","采用检测库":"00001"})
        tableModel.appendRow({"元件编号":"6","采用检测库":"00001"})
	
        tableModel1.appendRow({"缺陷":"1"})
        tableModel1.appendRow({"缺陷":"2"})
        tableModel1.appendRow({"缺陷":"3"})
        tableModel1.appendRow({"缺陷":"4"})
        tableModel1.appendRow({"缺陷":"5"})
        tableModel1.appendRow({"缺陷":"6"})
    }

	CusLabel_Left {
            id: input91
            x: 350; y: 70
            width: 200
            height: 20
            focus: true
           text: qsTr("该元件在子板图上的NG图") ;
        	font.pointSize: 10
        }
	Rectangle{
		width: 220; height: 200;
		 anchors.top: parent.top; anchors.topMargin: 100
	            anchors.left: parent.left; anchors.leftMargin: 350
			CusImage {
			 
				   id: bgImg
				   	width: 220; height: 200;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		CusLabel_Left {
            id: input95
            x: 580; y: 70
            width: 200
            height: 20
            focus: true
           text: qsTr("元件在子板图上的正常图") ;
        	font.pointSize: 10
        }
		Rectangle{
		width: 220; height: 200;
		 anchors.top: parent.top; anchors.topMargin: 100
	            anchors.left: parent.left; anchors.leftMargin: 580
			CusImage {
			 
				   id: bgImg17
				   	width: 220; height: 200;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		CusLabel_Left {
            id: input92
            x: 350; y: 320
            width: 200
            height: 20
            focus: true
           text: qsTr("元件在子板图上的正常图") ;
        	font.pointSize: 10
        }
		Rectangle{
		width: 220; height: 200;
		 anchors.top: parent.top; anchors.topMargin: 350
	            anchors.left: parent.left; anchors.leftMargin: 350
			CusImage {
			 
				   id: bgImg12
				   	width: 220; height: 200;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		CusLabel_Left {
            id: input93
            x: 580; y: 320
            width: 200
            height: 20
            focus: true
           text: qsTr("元件在子板图上的正常图") ;
        	font.pointSize: 10
        }
		Rectangle{
		width: 220; height: 200;
		 anchors.top: parent.top; anchors.topMargin: 350
	            anchors.left: parent.left; anchors.leftMargin: 580
			CusImage {
			 
				   id: bgImg13
				   	width: 220; height: 200;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}
	
}


