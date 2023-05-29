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

	CusLabel_Left {
            id: useraccounttext
            x: 10; y: 10
            color: "#ffffff"
            width: 200
            height: 20
            focus: true
           text: qsTr("用户帐号") ;
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
            	id:accountinput
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		CusLabel_Left {
            id: logintimetext
			color: "#ffffff"
            x: 280; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("登录时间") ;
        	font.pointSize: 10
        }

        Rectangle {
            id: logintimeinput
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 350
            CusTextInput {
                id:curlogintime
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }


        Rectangle {
            id: findRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 550
             CusButton_Blue{
            id: findText
			 width: parent.width; height: 30
            Layout.margins:  qGrid.cellmargin
            text:qsTr("查找")
            onClicked:
            {

				tableModel.clear();
                var desc = user.getUsrList(accountinput.text, curlogintime.text);
		
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;

				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "user" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					var aa = objinfo[str].right.split("|");
					var right = "";
					if (aa[0] == "1")
						right += "管理员|"
					if (aa[1] == "1")
						right += "检测员|"
					if (aa[2] == "1")
						right += "编程员|"
					var status = "禁用"
					if (objinfo[str].inactive == "0")
						status = "启用"
					var devnum=""
					if (typeof(objinfo[str].devnum) != "undefined")
						devnum=objinfo[str].devnum;
					var logintime=""
					if (typeof(objinfo[str].logintime) != "undefined")
						logintime=objinfo[str].logintime;
					tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":logintime,"用户状态":status, "操作":"","novisible":objinfo[str].id,"loginpasswd":objinfo[str].loginpasswd,"right":objinfo[str].right, "remark":objinfo[str].remark})
			
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            	}
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            }
       	 }
            
 
            
        }

		PageAddUsers
		{
			id: usernewWindow
			angle: 0
	        onAngleChanged: 
	    	{
	    		if (angle <= 0)	
					return;
				tableModel.clear();
	    		var desc = user.getUsrList();
		
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "user" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					var aa = objinfo[str].right.split("|");
					var right = "";
					if (aa[0] == "1")
						right += "管理员|"
					if (aa[1] == "1")
						right += "检测员|"
					if (aa[2] == "1")
						right += "编程员|"
					var status = "禁用"
					if (objinfo[str].inactive == "0")
						status = "启用"
					var devnum=""
					if (typeof(objinfo[str].devnum) != "undefined")
						devnum=objinfo[str].devnum;
                    var logintime=""
					if (typeof(objinfo[str].logintime) != "undefined")
						logintime=objinfo[str].logintime;
					tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":logintime,"用户状态":status, "操作":"","novisible":objinfo[str].id,"loginpasswd":objinfo[str].loginpasswd,"right":objinfo[str].right, "remark":objinfo[str].remark})		
					//console.log("desc11="+objinfo[str].desc);
					
				}
	    	}
	       	
	        visible:false				
		}

		PageModifyUsers
		{
			id: modifyuserWindow
			angle: 0
	        onAngleChanged: 
	    	{
	    		if (angle <= 0)	
					return;
				tableModel.clear();
	    		var desc = user.getUsrList();
		
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "user" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					var aa = objinfo[str].right.split("|");
					var right = "";
					if (aa[0] == "1")
						right += "管理员|"
					if (aa[1] == "1")
						right += "检测员|"
					if (aa[2] == "1")
						right += "编程员|"
					var status = "禁用"
					if (objinfo[str].inactive == "0")
						status = "启用"
					var devnum=""
					if (typeof(objinfo[str].devnum) != "undefined")
						devnum=objinfo[str].devnum;
					var logintime=""
					if (typeof(objinfo[str].logintime) != "undefined")
						logintime=objinfo[str].logintime;
					tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":logintime,"用户状态":status, "操作":"","novisible":objinfo[str].id,"loginpasswd":objinfo[str].loginpasswd,"right":objinfo[str].right, "remark":objinfo[str].remark})
					
				}
	    	}
	       	
	        visible:false			
		}

		
				 /*Label {
				  id: addUserText
				//x: 1100
                  //  y: 10
                  anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 1100
                    width: 100
                    height: 40
				  opacity: 1
				  color: "#2f3b52"
				  text: qsTr("新增用户")
//                  anchors.top: parent.top
  //                anchors.topMargin: -300
				  font.family: "Segoe UI"
				  font.pointSize: 16
				  //anchors.leftMargin: 500

				function clickedfunc(temp)
				{
	    			tableModel.clear();

					var desc = user.getUsrList();
			
			 		var objinfo = JSON.parse(desc); 
			 
					var str = "";
					var idx = 0;
					while (1)
					{
						str = "user" + String(idx);
						
						if (typeof(objinfo[str]) == "undefined")
							break;
						idx++;
						var aa = objinfo[str].right.split("|");
						var right = "";
						if (aa[0] == "1")
							right += "管理员|"
						if (aa[1] == "1")
							right += "检测员|"
						if (aa[2] == "1")
							right += "编程员|"
						var status = "禁用"
						if (objinfo[str].inactive == "0")
							status = "启用"
						var devnum=""
						if (typeof(objinfo[str].devnum) != "undefined")
							devnum=objinfo[str].devnum;
						var logintime=""
								if (typeof(objinfo[str].logintime) != "undefined")
									logintime=objinfo[str].logintime;
						tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":logintime,"用户状态":status, "操作":"","novisible":objinfo[str].id,"loginpasswd":objinfo[str].loginpasswd,"right":objinfo[str].right, "remark":objinfo[str].remark})		
					}
					
	                		
				//label.text= temp
				　//stackView.pop();//返回到本页
				}
				  
					   MouseArea {
			        anchors.fill: parent
						cursorShape: Qt.PointingHandCursor;
			        onClicked: {
			        	inspectsProjectStackView.pop()
			        	console.log("Image ");
						inspectsProjectStackView.push(newUserProject, {angle:"100",containerqml:addUserText})
						//inspectsProjectStackView.push(newInspectProject, {angle:"100",containerqml:addDeviceBtn})
			            // do what you want here
			        }
			    }
				  //anchors.horizontalCenter: parent.horizontalCenter
			  }*/

       /* Rectangle {
            id: addUserRect
            width: 100; height: 30;
            //color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 1100*/
			//color: "#2f3b52"
			 Label{
            id: addUserText
				 width: 100
                    height: 40
			 //width: parent.width; height: 30
			 anchors.top: parent.top; anchors.topMargin: 20
            anchors.left: parent.left; anchors.leftMargin: 1100
            //Layout.margins:  qGrid.cellmargin
            text:qsTr("新增用户")
			 color: "#ffffff"
			 function clickedfunc(temp)
			{
			
			console.log("testttt "+temp);


    			tableModel.clear();

				var desc = user.getUsrList();
		
		 var objinfo = JSON.parse(desc); 
		 
		var str = "";
		var idx = 0;
		while (1)
		{
			str = "user" + String(idx);
			
			if (typeof(objinfo[str]) == "undefined")
				break;
			idx++;
			var aa = objinfo[str].right.split("|");
			var right = "";
			if (aa[0] == "1")
				right += "管理员|"
			if (aa[1] == "1")
				right += "检测员|"
			if (aa[2] == "1")
				right += "编程员|"
			var status = "禁用"
			if (objinfo[str].inactive == "0")
				status = "启用"
			var devnum=""
			if (typeof(objinfo[str].devnum) != "undefined")
				devnum=objinfo[str].devnum;
			var logintime=""
					if (typeof(objinfo[str].logintime) != "undefined")
						logintime=objinfo[str].logintime;
			tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":logintime,"用户状态":status, "操作":"","novisible":objinfo[str].id,"loginpasswd":objinfo[str].loginpasswd,"right":objinfo[str].right, "remark":objinfo[str].remark})		
		}
				
                		
			//label.text= temp
			　//stackView.pop();//返回到本页
			}

			  MouseArea {
			        anchors.fill: parent
						cursorShape: Qt.PointingHandCursor;
			        onClicked: {
			        	//inspectsProjectStackView.pop()
			        	//console.log("Image ");
						inspectsProjectStackView.push(newUserProject, {angle:"100",containerqml:addUserText})
						//inspectsProjectStackView.push(newInspectProject, {angle:"100",containerqml:addDeviceBtn})
			            // do what you want here
			        }
			    }
			
            /*onClicked:
            {
            inspectsProjectStackView.push(newUserProject, {angle:"100",containerqml:addUserText})
            	//usernewWindow.angle=0
				//usernewWindow.show();
            	
            	
            }*/
       	 }			
        //}

        /*Rectangle {
            id: chgPasswdRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 1100

			 CusButton_Red{
            id: chgPasswdText
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("修改密码")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageModifyPassword.qml")
            }
       	 }
        }*/

	StackView{
            id: stackView
            focus: true
            anchors.fill: parent
        }

		Component{
                id:newUserProject
                PageAddUsers{
                    anchors.centerIn: parent
					 Component.onDestruction: 
					{
	               
	               console.log("Destruction Beginning!")
	              }
                }
            }

	Rectangle{
        id:header
        width: parent.width
        height: 30
		anchors.top: parent.top; anchors.topMargin: 50

        Row{
            spacing: 0

            Repeater{
                model: ["序号","用户帐号","用户姓名","权限", "设备编号", "最后登录时间", "状态", "操作"]

                Rectangle{
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 50;break;
                        case 1: w = 100;break;
                        case 2: w = 100;break;
                        case 3: w = 200;break;
						case 4: w = 100;break;
						case 5: w = 180;break;
						case 6: w = 70;break;
						case 7: w = 150;break;
                        }
                        return w
                    }
                    height: header.height
                    color: "#2f3b52"
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

            TableModelColumn{display: "序号"}
            TableModelColumn{display: "用户帐号"}
            TableModelColumn{display: "用户姓名"}
            TableModelColumn{display: "权限"}
			TableModelColumn{display: "设备编号"}
			TableModelColumn{display: "最后一次登录时间"}
			TableModelColumn{display: "用户状态"}
			TableModelColumn{display: "操作"}

			
        }
        delegate:DelegateChooser{

            DelegateChoice{
                column: 0
                delegate: Rectangle{
                    //color: "#666666"
                    implicitWidth: 50
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"
                    color: "#2f3b52"

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
                    implicitWidth: 100
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"
                    color: "#2f3b52"

                    Text {
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
                    border.color: "#848484"
                    color: "#2f3b52"
                    clip: true

                    Text {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                    }
                }
            }
             DelegateChoice{
                column: 3
                delegate: Rectangle{
                    implicitWidth: 200
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"
                    color: "#2f3b52"
                    clip: true

                    Text {
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
                    border.color: "#848484"
                    color: "#2f3b52"
                    clip: true

                    Text {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                    }
                }
            }

			   DelegateChoice{
                column: 5
                delegate: Rectangle{
                    implicitWidth: 180
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"
                    color: "#2f3b52"
                    clip: true

                    Text {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                    }
                }
            }

			    DelegateChoice{
                column: 6
                delegate: Rectangle{
                    implicitWidth: 70
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"
                    color: "#2f3b52"
                    clip: true

                    Text {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                    }
                }
            }

			 DelegateChoice{
                column: 7
                delegate: Rectangle{
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                    border.color: "#848484"
                    color: "#2f3b52"

                   Text {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                    }

					CusSwitch {
						id:switchinfo
						 anchors.top: parent.top; anchors.topMargin: 0
							anchors.left: parent.left; anchors.leftMargin: 10
							checked: 
								{
									console.log("用户状态: "+tableModel.rows[row].用户状态)		
									if (tableModel.rows[row].用户状态 == "启用")
										return true;
									else
										return false;										
								}
							
							onClicked: 
			               	{
			               		console.log("instrumentname: "+switchinfo.checked)
								if (switchinfo.checked == true)
									user.chgUserStatus(tableModel.rows[row].novisible, 0);
								else
									user.chgUserStatus(tableModel.rows[row].novisible, 1);
								tableModel.clear()
								var desc = user.getUsrList();
		
								 var objinfo = JSON.parse(desc); 
								 
								var str = "";
								var idx = 0;
								while (1)
								{
									str = "user" + String(idx);
									
									if (typeof(objinfo[str]) == "undefined")
										break;
									idx++;
									var aa = objinfo[str].right.split("|");
									var right = "";
									if (aa[0] == "1")
										right += "管理员|"
									if (aa[1] == "1")
										right += "检测员|"
									if (aa[2] == "1")
										right += "编程员|"
									var status = "禁用"
									if (objinfo[str].inactive == "0")
										status = "启用"
									var devnum=""
									if (typeof(objinfo[str].devnum) != "undefined")
										devnum=objinfo[str].devnum;
									var logintime=""
									if (typeof(objinfo[str].logintime) != "undefined")
										logintime=objinfo[str].logintime;
									tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":logintime,"用户状态":status, "操作":"","novisible":objinfo[str].id,"loginpasswd":objinfo[str].loginpasswd,"right":objinfo[str].right, "remark":objinfo[str].remark})
									//tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":"2022-7-7 12:31","用户状态":status, "操作":"","novisible":objinfo[str].id})
									
								}
			               		
			               	}
	        		}

						Text {
							anchors.top: parent.top; anchors.topMargin: 10
									anchors.left: parent.left; anchors.leftMargin: 90
			            text: '<html></style><a href="http://www.baidu.com">修改</a></html>'
			            MouseArea {
			               anchors.fill: parent;
			               hoverEnabled: true;
			               cursorShape:
			                   (containsMouse? Qt.PointingHandCursor: Qt.ArrowCursor);
							
			               onClicked: 
			               	{			               		 
			               		modifyuserWindow.setdata(tableModel.rows[row].novisible, tableModel.rows[row].用户帐号, tableModel.rows[row].用户姓名,
			               			tableModel.rows[row].loginpasswd, tableModel.rows[row].right, tableModel.rows[row].devnum,
			               			tableModel.rows[row].remark)
			               		console.log("instrumentname: " + tableModel.rows[row].instrumentname)
                                modifyuserWindow.show()
			               	}
						   	
			           }
			        }
                }
            }
			 
        }
    }

    Component.onCompleted: {

		
		var desc = user.getUsrList();
		
		 var objinfo = JSON.parse(desc); 
		 
		var str = "";
		var idx = 0;
		while (1)
		{
			str = "user" + String(idx);
			
			if (typeof(objinfo[str]) == "undefined")
				break;
			idx++;
			var aa = objinfo[str].right.split("|");
			var right = "";
			if (aa[0] == "1")
				right += "管理员|"
			if (aa[1] == "1")
				right += "检测员|"
			if (aa[2] == "1")
				right += "编程员|"
			var status = "禁用"
			if (objinfo[str].inactive == "0")
				status = "启用"
			var devnum=""
			if (typeof(objinfo[str].devnum) != "undefined")
				devnum=objinfo[str].devnum;
			var logintime=""
					if (typeof(objinfo[str].logintime) != "undefined")
						logintime=objinfo[str].logintime;
			tableModel.appendRow({"序号":String(idx),"用户帐号":objinfo[str].accountname,"用户姓名":objinfo[str].loginname,"权限":right,"设备编号":devnum, "最后一次登录时间":logintime,"用户状态":status, "操作":"","novisible":objinfo[str].id,"loginpasswd":objinfo[str].loginpasswd,"right":objinfo[str].right, "remark":objinfo[str].remark})		
		}
    }
}



