import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import Qt.labs.qmlmodels 1.0

import QtQuick.Dialogs 1.2

import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"


Item {

//    anchors.fill: parent
    signal nextClicked;

	property int offset: 190
	CusLabel_Left {
            id: input1
            x: 10; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("用户帐号") ;
        	font.pointSize: 10
        }

        Rectangle {
            
            width: 120; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 80
            CusTextField_Search {
                id: accountinfo

                width: 120
                anchors.left: cusLabel1.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.leftMargin: 10
                anchors.bottomMargin: 0
                anchors.topMargin: 0
            }
        }

		CusLabel_Left {
            id: input2
            x: 210; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("操作类型") ;
        	font.pointSize: 10
        }

		

        Rectangle {
            id: confirmButtonRect125
            width: 120; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 280
            CusTextInput {
            	id: operatortype
                width: 120
                anchors.left: cusLabel1.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.leftMargin: 10
                anchors.bottomMargin: 0
                anchors.topMargin: 0
            }
        }

		
		CusLabel_Left {
					id: input31
					x: 420; y: 10
					width: 200
					height: 20
					focus: true
				   text: qsTr("设备编号") ;
					font.pointSize: 10
				}
		
				
				Rectangle {
					
					width: 120; height: 24;
					radius: 4
						color: "lightgrey"
					border.color: "grey"
					anchors.top: parent.top; anchors.topMargin: 10
					anchors.left: parent.left; anchors.leftMargin: 490
					CusTextInput {
                        id: devicenum
						 width: 120
		                anchors.left: cusLabel1.right
		                anchors.top: parent.top
		                anchors.bottom: parent.bottom
		                anchors.leftMargin: 10
		                anchors.bottomMargin: 0
		                anchors.topMargin: 0
					}
				}

				PageLogTimeBegin
				{
					id:pageLogTimeBegin
						visible:true
				}

				PageLogTimeEnd
				{
					id:timeselectorend
						visible:true
				}

		CusLabel_Left {
					id: input4
					x: 650; y: 10
					width: 200
					height: 20
					focus: true
				   text: qsTr("操作时间起") ;
					font.pointSize: 10
				}
		
				

		CusLabel_Left {
					id: input5
					x: 920; y: 10
					width: 200
					height: 20
					focus: true
				   text: qsTr("止") ;
					font.pointSize: 10
				}
		

        Rectangle {
            id: confirmButtonRect
            width: 80; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 1140

			 CusButton_Blue{
            id: findText1123
			 width: parent.width; height: 30
            Layout.margins:  qGrid.cellmargin
            text:qsTr("查找")
            onClicked:
            {
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")


                var desc = user.getLogList(accountinfo.text, devicenum.text, operatortype.text, timeselectorbegin.seltime, timeselectorend.seltime);

		 		var objinfo = JSON.parse(desc); 
		 		tableModel.clear()
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "user" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					
					var devnum=""
					if (typeof(objinfo[str].devnum) != "undefined")
						devnum=objinfo[str].devnum;

					var account=""
					if (typeof(objinfo[str].account) != "undefined")
						account=objinfo[str].account;

					var name=""
					if (typeof(objinfo[str].name) != "undefined")
						name=objinfo[str].name;
					
					tableModel.appendRow({"序号":String(idx),"用户帐号":account,"用户姓名":name,"设备编号":devnum,"操作类型":objinfo[str].type, "操作时间":objinfo[str].time})
					//console.log("desc11="+objinfo[str].desc);
					
				}
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
        width: parent.width-550
        height: 30
		anchors.top: parent.top; anchors.topMargin: 50

        Row{
            spacing: 0

            Repeater{
                model: ["序号","用户帐号","用户姓名","设备编号", "操作类型", "操作时间"]

                Rectangle{
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 100;break;
                        case 1: w = 100;break;
                        case 2: w = 100;break;
                        case 3: w = 150;break;
						case 4: w = 100;break;
						case 5: w = 150;break;
                        }
                        return w
                    }
                    height: header.height
                    //color: "#666666"
                    color: "#2f3b52"
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
        width: parent.width-500
        anchors.top:header.bottom
        anchors.left: parent.left
//        anchors.right: parent.right
        anchors.bottom: parent.bottom
        clip: true
        boundsBehavior: Flickable.OvershootBounds


        ScrollBar.vertical: ScrollBar {
            anchors.right:parent.right
            anchors.rightMargin: 0
            visible: tableModel.rowCount > 9
            background: Rectangle{

            }
            onActiveChanged: {
                active = true;
            }
            contentItem: Rectangle
            {
                implicitWidth  : 6
                implicitHeight : 30
                radius : 3

            }
        }

        model: TableModel {
            id:tableModel

            TableModelColumn{display: "序号"}
            TableModelColumn{display: "用户帐号"}
            TableModelColumn{display: "用户姓名"}
			TableModelColumn{display: "设备编号"}
			TableModelColumn{display: "操作类型"}
			TableModelColumn{display: "操作时间"}
			

			
        }
        delegate:DelegateChooser{

            DelegateChoice{
                column: 0
                delegate: Rectangle{

                    implicitWidth: 100
                    implicitHeight: 32
                    border.width: 1

					color: "#2f3b52"
                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12

                    }
                }
            }
            DelegateChoice{
                column: 1
                delegate: Rectangle{

                    implicitWidth: 100
                    implicitHeight: 32
                    border.width: 1
					color: "#2f3b52"

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12

                    }
                }
            }
            DelegateChoice{
                column: 2
                delegate: Rectangle{

                    implicitWidth: 100
                    implicitHeight: 32
                    border.width: 1
					color: "#2f3b52"
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
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                    clip: true
					color: "#2f3b52"
                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                    }
                }
            }

			  DelegateChoice{
                column: 4
                delegate: Rectangle{
                    implicitWidth: 100
                    implicitHeight: 32
                    border.width: 1
                    clip: true
					color: "#2f3b52"
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
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                    clip: true
					color: "#2f3b52"
                    CusLabel {
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
    	var desc = user.getLogList();
		
		 var objinfo = JSON.parse(desc); 
		 
		var str = "";
		var idx = 0;
		while (1)
		{
			str = "user" + String(idx);
			
			if (typeof(objinfo[str]) == "undefined")
				break;
			idx++;
			
			var devnum=""
			if (typeof(objinfo[str].devnum) != "undefined")
				devnum=objinfo[str].devnum;

			var account=""
			if (typeof(objinfo[str].account) != "undefined")
				account=objinfo[str].account;

			var name=""
			if (typeof(objinfo[str].name) != "undefined")
				name=objinfo[str].name;
			
			tableModel.appendRow({"序号":String(idx),"用户帐号":account,"用户姓名":name,"设备编号":devnum,"操作类型":objinfo[str].type, "操作时间":objinfo[str].time})
			
		}
    }
}



