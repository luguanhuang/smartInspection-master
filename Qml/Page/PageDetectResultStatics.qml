
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
    title: qsTr("检测结果统计")

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
            x: 10; y: 40
            width: 200
            height: 20
            focus: true
           text: qsTr("检测方案编号") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input8
            x: 110; y: 40
            width: 200
            height: 20
            focus: true
           text: qsTr("001123") ;
        	font.pointSize: 10
        }

		
		CusLabel_Left {
					id: input121
					x: 180; y: 40
					width: 200
					height: 20
					focus: true
				   text: qsTr("检测方案名称") ;
					font.pointSize: 10
				}
		
				CusLabel_Left {
					id: input65
					x: 270; y: 40
					width: 200
					height: 20
					focus: true
				   text: qsTr("xxxxxxxxxxxx") ;
					font.pointSize: 10
				}

		CusLabel_Left {
            id: input9314
            x: 360; y: 40
            width: 200
            height: 20
            focus: true
           text: qsTr("机检结果") ;
        	font.pointSize: 10
        }

		CusLabel_Left {
            id: input10
            x: 430; y: 40
            width: 200
            height: 20
            focus: true
           text: qsTr("NG") ;
        	font.pointSize: 10
        }

			CusLabel_Left {
            id: input120
            x: 480; y: 40
            width: 200
            height: 20
            focus: true
           text: qsTr("人工复检结果") ;
        	font.pointSize: 10
        }

	CusLabel_Left {
            id: input11
            x: 10; y: 70
            width: 200
            height: 20
            focus: true
           text: qsTr("人工复检结果") ;
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
                model: ["子板编号","机检结果", "人工复检结果"]

                Rectangle{
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 150;break;
                        case 1: w = 150;break;
                        case 2: w = 150;break;
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

            TableModelColumn{display: "子板编号"}
            TableModelColumn{display: "机检结果"}
			TableModelColumn{display: "人工复检结果"}
            
	
			
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

			  DelegateChoice{
                column: 2
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
            id: input143
            x: 10; y: 330
            width: 200
            height: 20
            focus: true
           text: qsTr("子板数量合计") ;
        	font.pointSize: 10
        }

	CusLabel_Left {
            id: input921
            x: 110; y: 330
            width: 200
            height: 20
            focus: true
           text: qsTr("2") ;
        	font.pointSize: 10
        }
		

    Component.onCompleted: {

		 tableModel.appendRow({"子板编号":"1","机检结果":"00001","人工复检结果":"00001"})
        tableModel.appendRow({"子板编号":"2","机检结果":"00001","人工复检结果":"00001"})
        tableModel.appendRow({"子板编号":"3","机检结果":"00001","人工复检结果":"00001"})
        tableModel.appendRow({"子板编号":"4","机检结果":"00001","人工复检结果":"00001"})
        
	
        
    }

	
	
}


