
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import Qt.labs.qmlmodels 1.0


import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"

Window {
    width: 1400
    height: 600
    visible: true
    title: qsTr("检测结果")

	CusLabel_Left {
            id: input1
            x: 10; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("检测员") ;
        	font.pointSize: 10
        }

		CusComboBox 
		{
			 anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 80
			//model: ["admin", "inspector"]
			width: 120
			// displayText: qsTr(currentText) + trans.transString
			textRole: "text"
			valueRole: "value"
			onActivated: backend.modifier = currentValue
			Component.onCompleted: currentIndex = indexOfValue(backend.modifier)

			model: [{ value: Qt.NoModifier, text: qsTr("全部") },
            { value: Qt.ShiftModifier, text: qsTr("inspector") }
           // { value: Qt.ControlModifier, text: qsTr("Control") }
        	]
       }

		CusLabel_Left {
            id: input2
            x: 240; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("检测设备") ;
        	font.pointSize: 10
        }

		CusComboBox 
		{
			 anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 310
			width: 120

			textRole: "text"
			valueRole: "value"
			onActivated: backend.modifier = currentValue
			Component.onCompleted: currentIndex = indexOfValue(backend.modifier)

			model: [{ value: Qt.NoModifier, text: qsTr("全部") },
            { value: Qt.ShiftModifier, text: qsTr("inspector") }
           // { value: Qt.ControlModifier, text: qsTr("Control") }
        	]
       }

		
		/*CusLabel_Left {
					id: input31
					x: 480; y: 10
					width: 200
					height: 20
					focus: true
				   text: qsTr("设备编号") ;
					font.pointSize: 10
				}
		
				
			 //确认按钮
				Rectangle {
					id: confirmButtonRect1211
					width: 150; height: 24;
					radius: 4
						color: "lightgrey"
					border.color: "grey"
					anchors.top: parent.top; anchors.topMargin: 10
					anchors.left: parent.left; anchors.leftMargin: 550
					CusTextInput {
						anchors.fill: parent
						anchors.margins: 2
						font.pointSize: 15
						focus: true
					}
				}*/

		CusLabel_Left {
					id: input4
					//x: 710; y: 10
					x: 480; y: 10
					width: 200
					height: 20
					focus: true
				   text: qsTr("操作时间起") ;
					font.pointSize: 10
				}
		
				
			 //确认按钮
				Rectangle {
					id: confirmButtonRect14
					width: 150; height: 24;
					radius: 4
						color: "lightgrey"
					border.color: "grey"
					anchors.top: parent.top; anchors.topMargin: 10
					anchors.left: parent.left; anchors.leftMargin: 550
					CusTextInput {
						anchors.fill: parent
						anchors.margins: 2
						font.pointSize: 15
						focus: true
					}
				}

		CusLabel_Left {
					id: input5
					x: 720; y: 10
					width: 200
					height: 20
					focus: true
				   text: qsTr("止") ;
					font.pointSize: 10
				}
		
				
			 //确认按钮
				Rectangle {
					id: confirmButtonRect155
					width: 150; height: 24;
					radius: 4
						color: "lightgrey"
					border.color: "grey"
					anchors.top: parent.top; anchors.topMargin: 10
					anchors.left: parent.left; anchors.leftMargin: 760
					CusTextInput {
						anchors.fill: parent
						anchors.margins: 2
						font.pointSize: 15
						focus: true
					}
				}

	CusLabel_Left {
            id: input21
            x: 920; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("机检结果") ;
        	font.pointSize: 10
        }

	CusComboBox 
		{
			 anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 990
			//model: ["admin", "inspector"]
			width: 120
			// displayText: qsTr(currentText) + trans.transString
			textRole: "text"
			valueRole: "value"
			onActivated: backend.modifier = currentValue
			Component.onCompleted: currentIndex = indexOfValue(backend.modifier)

			model: [{ value: Qt.NoModifier, text: qsTr("全部") },
            { value: Qt.ShiftModifier, text: qsTr("inspector") }
           // { value: Qt.ControlModifier, text: qsTr("Control") }
        	]
       }	


	CusLabel_Left {
            id: input12122
            x: 10; y: 60
            width: 200
            height: 20
            focus: true
           text: qsTr("人工复检结果") ;
        	font.pointSize: 10
        }

		CusComboBox 
		{
			 anchors.top: parent.top; anchors.topMargin: 60
            anchors.left: parent.left; anchors.leftMargin: 100
			//model: ["admin", "inspector"]
			width: 120
			// displayText: qsTr(currentText) + trans.transString
			textRole: "text"
			valueRole: "value"
			onActivated: backend.modifier = currentValue
			Component.onCompleted: currentIndex = indexOfValue(backend.modifier)

			model: [{ value: Qt.NoModifier, text: qsTr("全部") },
            { value: Qt.ShiftModifier, text: qsTr("inspector") }
           // { value: Qt.ControlModifier, text: qsTr("Control") }
        	]
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
                model: ["序号","报告id","板子编号","检测方案", "检测员", "检测设备", "检测时间", "机检结果", "人工复检结果", "操作"]

                Rectangle{
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 120;break;
                        case 1: w = 120;break;
                        case 2: w = 120;break;
                        case 3: w = 120;break;
						case 4: w = 120;break;
						case 5: w = 120;break;
						case 6: w = 120;break;
						case 7: w = 120;break;
						case 8: w = 120;break;
						case 9: w = 240;break;
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

            TableModelColumn{display: "序号"}
            TableModelColumn{display: "报告id"}
            TableModelColumn{display: "板子编号"}
			TableModelColumn{display: "检测方案"}
			TableModelColumn{display: "检测员"}
			TableModelColumn{display: "检测设备"}

			TableModelColumn{display: "检测时间"}
			TableModelColumn{display: "机检结果"}
			TableModelColumn{display: "人工复检结果"}
			TableModelColumn{display: "操作"}
	
			
        }
        delegate:DelegateChooser{

            DelegateChoice{
                column: 0
                delegate: Rectangle{
                    //color: "#666666"
                    implicitWidth: 120
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
                    implicitWidth: 120
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
                   // color: "#666666"
                    implicitWidth: 120
                    implicitHeight: 32
                    border.width: 1
                    //border.color: "#848484"
                    clip: true

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "white"
                    }
                }
            }
             DelegateChoice{
                column: 3
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 120
                    implicitHeight: 32
                    border.width: 1
                    //border.color: "#848484"
                    clip: true

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                       // color: "white"
                    }
                }
            }

			  DelegateChoice{
                column: 4
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 120
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"
                    clip: true

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "white"
                    }
                }
            }

			   DelegateChoice{
                column: 5
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 120
                    implicitHeight: 32
                    border.width: 1
                    //border.color: "#848484"
                    clip: true

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "white"
                    }
                }
            }

			    DelegateChoice{
                column: 6
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 120
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"
                    clip: true

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                       // color: "white"
                    }
                }
            }

				 DelegateChoice{
                column: 7
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 120
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"
                    clip: true

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                       // color: "white"
                    }
                }
            }

			 DelegateChoice{
                column: 8
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 120
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"
                    clip: true

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                       // color: "white"
                    }
                }
            }

			 DelegateChoice{
                column: 9
                delegate: Rectangle{
                    color: "#666666"
                    implicitWidth: 240
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"

                   CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "white"
                    }

					Button{
                        width: 70
                        height: 25
                        anchors.top: parent.top; anchors.topMargin: 10
						anchors.left: parent.left; anchors.leftMargin: 40
                        //anchors.centerIn: parent
                        text: "详情"
                       
                        background: Rectangle{
                            radius: 4
                            //color: "cyan"
                        }

                        onClicked: {
                            console.log("btn clicked row:",row)
							stackView.push(qmlPath+"Page/PageDetectResultDetail.qml")
                        }
                    }

					Button{
                        width: 70
                        height: 25
                        anchors.top: parent.top; anchors.topMargin: 10
						anchors.left: parent.left; anchors.leftMargin: 130
                        //anchors.centerIn: parent
                        text: "统计"
                       
                        background: Rectangle{
                            radius: 4
                            //color: "cyan"
                        }

                        onClicked: {
                            console.log("btn clicked row:",row)
							stackView.push(qmlPath+"Page/PageDetectResultStatics.qml")
                        }
                    }
                }
            }
			 
        }
    }

    Component.onCompleted: {
        tableModel.appendRow({"序号":"1","报告id":"00001","板子编号":"xx","检测方案":"00001","检测员":"启动","检测设备":"2022-7-7 12:31","检测时间":"2022-7-7 12:31","机检结果":"2022-7-7 12:31","人工复检结果":"2022-7-7 12:31","操作":true})
        tableModel.appendRow({"序号":"2","报告id":"00001","板子编号":"xx","检测方案":"00001","检测员":"启动","检测设备":"2022-7-7 12:31","检测时间":"2022-7-7 12:31","机检结果":"2022-7-7 12:31","人工复检结果":"2022-7-7 12:31","操作":true})
        tableModel.appendRow({"序号":"3","报告id":"00001","板子编号":"xx","检测方案":"00001","检测员":"启动","检测设备":"2022-7-7 12:31","检测时间":"2022-7-7 12:31","机检结果":"2022-7-7 12:31","人工复检结果":"2022-7-7 12:31","操作":true})
        tableModel.appendRow({"序号":"4","报告id":"00001","板子编号":"xx","检测方案":"00001","检测员":"导入cad","检测设备":"2022-7-7 12:31","检测时间":"2022-7-7 12:31","机检结果":"2022-7-7 12:31","人工复检结果":"2022-7-7 12:31","操作":true})
        tableModel.appendRow({"序号":"5","报告id":"00001","板子编号":"xx","检测方案":"00001","检测员":"导入cad","检测设备":"2022-7-7 12:31","检测时间":"2022-7-7 12:31","机检结果":"2022-7-7 12:31","人工复检结果":"2022-7-7 12:31","操作":true})
        tableModel.appendRow({"序号":"6","报告id":"00001","板子编号":"xx","检测方案":"00001","检测员":"导入cad","检测设备":"2022-7-7 12:31","检测时间":"2022-7-7 12:31","机检结果":"2022-7-7 12:31","人工复检结果":"2022-7-7 12:31","操作":true})
    }


	//确认按钮
        Rectangle {
            id: findRect1111
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 400
            anchors.left: parent.left; anchors.leftMargin: 180
             CusButton_Red{
            id: findText45
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("返回")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageDetectResultDetail.qml")
            }
       	 }
        	}
}


