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

  

    Item {
        id: mainItem
        anchors.fill: parent

		//确认按钮
        Rectangle {
            id: addDeviceRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 640

			   Row {
            id: row
			x:150
            width: 400
            //anchors.left: menuBtn.right
            anchors.top: parent.top
            //anchors.bottom: parent.bottom
            spacing: 40
            anchors.leftMargin: 400
            anchors.bottomMargin: 0
            anchors.topMargin: -10


            Image {
            	
                id: image
				x: 500
                width: 50
                height: 50
//                anchors.margins: 5
				anchors.leftMargin: 400
				anchors.topMargin: -10
               // anchors.verticalCenter: parent.verticalCenter
//                anchors.top: parent.top
//                anchors.bottom: parent.bottom
                source: imgPath + "Window/devadd.png"
                sourceSize: Qt.size(50, 50)
                function clickedfunc(temp)
			{
			
			console.log("testttt "+temp);


    			tableModel.clear();
                var desc = device.getInstructList(user.getLoginName());
			
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "device" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
					//console.log("desc11="+objinfo[str].desc);
					
				}		
			//label.text= temp
			　//stackView.pop();//返回到本页
			}
                  MouseArea {
		        anchors.fill: parent
		        onClicked: {
		        	
		        	console.log("Image ");
					inspectsProjectStackView.push(newInspectProject, {angle:"100",containerqml:addDeviceBtn})
		            // do what you want here
		        }
		    }
//                anchors.bottomMargin: 0
//                anchors.topMargin: 0
               // fillMode: Image.PreserveAspectFit
            }



           /* Text {
                id: text1
                color: "#ffffff"
                text: qsTr("3DPCBAOI_Program")
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 28
            }*/
        }

			 CusButton_Blue{
            id: addDeviceBtn
				 width: 100
                height: 40
//			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("新增设备")

			function clickedfunc(temp)
			{
			
			console.log("testttt "+temp);


    			tableModel.clear();
                var desc = device.getInstructList(user.getLoginName());
			
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "device" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
					//console.log("desc11="+objinfo[str].desc);
					
				}		
			//label.text= temp
			　//stackView.pop();//返回到本页
			}
			
            onClicked:
            {
            	
				 onClicked: {
                    inspectsProjectStackView.push(newInspectProject, {angle:"100",containerqml:addDeviceBtn})
                }
            	//stackView.push(qmlPath+"Page/PageAddInstrument.qml")
            }
       	 }
			
            
        }

		 Component{
                id:newInspectProject
                AddInspectsProject{
                    anchors.centerIn: parent
					 Component.onDestruction: 
					{
	               
	               console.log("Destruction Beginning!")
	              }
                }
            }

	Component{
                id:editInspectProject
                EditInspectsProject{
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
                model: ["序号","设备编号","设备名称","设备描述","操作"]

                Rectangle{
                	
                    width: {
                        var w = 0
                        switch(index){
                        case 0: w = 50;break;
                        case 1: w = 250;break;
                        case 2: w = 150;break;
                        case 3: w = 150;break;
						case 4: w = 150;break;
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
            visible: true
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

		PageAddInstrument
		{
		id: newWindow1
		angle: 0
        onAngleChanged: 
    	{
    		console.log("111 adddevice="+angle);
    		if (angle > 0)	
    		{
    			console.log("angle="+angle);
    			tableModel.clear();
                var desc = device.getInstructList(user.getLoginName());
			
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "device" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
					//console.log("desc11="+objinfo[str].desc);
					
				}		
    		}
    	}
       	
        visible:false
		//newWindow.findRect321.onClickBtnOk:console.log("Send to HanMeimei1")
			
		
		//angle: 100
		//onAngleChanged: console.log(newWindow.angle)
		}

		MessageDialog {
        id:conDialog
        title: "返回框"
        text: "修改设备成功"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")
			angle = angle + 100
			//winadddevice.visible = false
			//winadddevice.close()
			
		}
        /*onYes: 
        {
        	console.log("YES1")
			device.AddDevice(devnum.text, devname.text, descinfo.text);
        }
        
        onNo: console.log("NO")
        onRejected: console.log("Close")*/
    }

		StackView{
            id: inspectsProjectStackView
            focus: true
            anchors.fill: parent
        }

		MessageDialog {
        id:failureDialog
        title: "返回框"
        text: "修改设备失败"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")
			angle = angle + 100
			//winadddevice.visible = false
			//winadddevice.close()
			
		}
        /*onYes: 
        {
        	console.log("YES1")
			device.AddDevice(devnum.text, devname.text, descinfo.text);
        }
        
        onNo: console.log("NO")
        onRejected: console.log("Close")*/
    }

		PageModifyInstrument
		{
		id: modifyWindow
		onDevnuminfoChanged: 
    	{
    		console.log("111 onDevnuminfoChanged devnuminfo="+modifyWindow.devnuminfo);
			var ret = device.UpdateDevice(user.getUserId(), modifyWindow.devnuminfo);
			if (ret == 0)
			{
				conDialog.open()
				modifyWindow.hide()
				tableModel.clear();
                var desc = device.getInstructList(user.getLoginName());
			
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "device" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
					//console.log("desc11="+objinfo[str].desc);
					
				}		
			}
			else
			{
				failureDialog.open()					
			}
    	}
       
        visible:false
		//newWindow.findRect321.onClickBtnOk:console.log("Send to HanMeimei1")
			
		
		//angle: 100
		//onAngleChanged: console.log(newWindow.angle)
		}

        model: TableModel {
            id:tableModel

            TableModelColumn{display: "sn"}
            TableModelColumn{display: "instrumentno"}
            TableModelColumn{display: "instrumentname"}
            TableModelColumn{display: "description"}
			TableModelColumn{display: "operator"}
			TableModelColumn{display: "novisible"}			
        }
        delegate:DelegateChooser{

            DelegateChoice{
                column: 0
                delegate: Rectangle{
                	color: "#2f3b52"
                   // color: "#666666"
                    implicitWidth: 50
                    implicitHeight: 32
                    border.width: 1
                    //border.color: "#848484"

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
                    color: "#2f3b52"
                    implicitWidth: 250
                    implicitHeight: 32
                    border.width: 1
                    //border.color: "#848484"

                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "white"
                    }
                }
            }
            DelegateChoice{
                column: 2
                delegate: Rectangle{
                	color: "#2f3b52"
                    //color: "#666666"
                    implicitWidth: 150
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
                	color: "#2f3b52"
                   // color: "#666666"
                    implicitWidth: 150
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
                column: 4
                delegate: Rectangle{
                	color: "#2f3b52"
                    //color: "#666666"
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"

                   CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        //color: "white"
                    }


					Text {
					 anchors.top: parent.top; anchors.topMargin: 10
						anchors.left: parent.left; anchors.leftMargin: 40
					id: modifyins
            //anchors.centerIn: parent
            text: '<html></style><a href="http://www.baidu.com">修改</a></html>'
            function clickedfunc1(temp)
				{
				
				console.log("testttt "+temp);


	    			tableModel.clear();
	                var desc = device.getInstructList(user.getLoginName());
				
					 var objinfo = JSON.parse(desc); 
					 
					var str = "";
					var idx = 0;
					while (1)
					{
						str = "device" + String(idx);
						
						if (typeof(objinfo[str]) == "undefined")
							break;
						idx++;
						tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
						//console.log("desc11="+objinfo[str].desc);
						
					}		
				//label.text= temp
				　//stackView.pop();//返回到本页
				}
            MouseArea {
               anchors.fill: parent;
               hoverEnabled: true;
               cursorShape:
                   (containsMouse? Qt.PointingHandCursor: Qt.ArrowCursor);

				
				   
               onClicked: 
               	{
               		 
               		//modifyWindow.devicenum.text = "111"
               		modifyWindow.setdata(tableModel.rows[row].instrumentno, tableModel.rows[row].instrumentname,
               			tableModel.rows[row].description, tableModel.rows[row].novisible)
               		console.log("instrumentname: " + tableModel.rows[row].instrumentname)
               		//modifyWindow.show()
               		inspectsProjectStackView.push(editInspectProject, {"devnuminfo":tableModel.rows[row].instrumentno,
               			devnameinfo:tableModel.rows[row].instrumentname,
               			devicedescinfo:tableModel.rows[row].description,
               			sninfo:tableModel.rows[row].novisible,
               			containerqml:modifyins})
               		//stackView.push(Qt.resolvedUrl("PageModifyInstrument.qml"),{name:"张三"})
               	}
			   	
           }
        }

				MessageDialog {
        id:id_mesDialog
        title: "确认框"
        icon: StandardIcon.Question
        text: "你确认要删除设备吗"
        standardButtons:  StandardButton.No | StandardButton.Yes

        Component.onCompleted: visible = false

        onYes: 
        {
        	//QModelIndexList selected = tableView.selectionModel()->selectedIndexes();
        	console.log("row11="+tableModel.rows[row].instrumentno);
			console.log("novisible="+tableModel.rows[row].novisible);
        	console.log("row="+tableView.rowCount);
			//Qt.openUrlExternally("http://www22.baidu.com")
			device.DelDevice(user.getUserId(), tableModel.rows[row].novisible)
			tableModel.clear();
            var desc = device.getInstructList(user.getLoginName());
		
			 var objinfo = JSON.parse(desc); 
			 
			var str = "";
			var idx = 0;
			while (1)
			{
				str = "device" + String(idx);
				
				if (typeof(objinfo[str]) == "undefined")
					break;
				idx++;
				tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
				//console.log("desc11="+objinfo[str].desc);
				
			}
        }
        
        onNo: console.log("NO")
        onRejected: console.log("Close")
    }

					Text {
            //anchors.centerIn: parent
				anchors.top: parent.top; anchors.topMargin: 10
						anchors.left: parent.left; anchors.leftMargin: 90
            text: '<html></style><a href="http://www.baidu11.com">删除</a></html>'
            MouseArea {
               anchors.fill: parent;
               hoverEnabled: true;
               cursorShape:
                   (containsMouse? Qt.PointingHandCursor: Qt.ArrowCursor);
               onClicked: 
               	{
               		id_mesDialog.open()
               			
               	}
			   
           }
        }
					
					/*CusButton_Red{
                        width: 70
                        height: 25
                        anchors.centerIn: parent
                        text: "modify"
                       
                        background: Rectangle{
                            radius: 4
                            color: "cyan"
                        }

                        onClicked: {
                            console.log("btn clicked row:",row)
							stackView.push(qmlPath+"Page/PageModifyInstrument.qml")
                        }
                    }*/
                }
            }	

			 DelegateChoice{
                column: 5
                delegate: Rectangle{
                   // color: "#666666"
                    implicitWidth: 150
                    implicitHeight: 32
                    border.width: 1
                   // border.color: "#848484"
                    clip: true
					visible:false
                    CusLabel {
                        text: display
                        anchors.centerIn: parent
                        font.pointSize: 12
                        visible:false
                        //color: "white"
                    }
                }
            }
        }
    }

	 StackView{
            id: stackView
            focus: true
            anchors.fill: parent
        }

	/*InspectsProjectStackView{
            id: inspectsProjectStackView
            focus: true
            anchors.fill: parent
        }*/

    Component.onCompleted: {

        var desc = device.getInstructList(user.getLoginName());
		
		 var objinfo = JSON.parse(desc); 
		 
		var str = "";
		var idx = 0;
		while (1)
		{
			str = "device" + String(idx);
			
			if (typeof(objinfo[str]) == "undefined")
				break;
			idx++;
			tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
			//console.log("desc11="+objinfo[str].desc);
			
		}
	
       /* tableModel.appendRow({"sn":"rtwet34634654","instrumentno":"11","instrumentname":"111","description":"w0000065628743342144312","modify":"","delete":""})
        tableModel.appendRow({"sn":"rtwet34634654","instrumentno":"22","instrumentname":"222","description":"w0000065628743342144312","modify":"","delete":""})
        tableModel.appendRow({"sn":"rtwet34634654","instrumentno":"33","instrumentname":"333","description":"w0000065628743342144312","modify":"","delete":""})
        tableModel.appendRow({"sn":"rtwet34634654","instrumentno":"44","instrumentname":"444","description":"w0000065628743342144312","modify":"","delete":""})
        tableModel.appendRow({"sn":"rtwet34634654","instrumentno":"55","instrumentname":"555","description":"w0000065628743342144312","modify":"","delete":""})
        tableModel.appendRow({"sn":"rtwet34634654","instrumentno":"66","instrumentname":"666","description":"w0000065628743342144312","modify":"","delete":""})*/
    }

	
	//可能是qmltype信息不全，有M16警告，这里屏蔽下
	   //@disable-check M16
	   /*
	   onClosing: function(closeevent){
		   //CloseEvent的accepted设置为false就能忽略该事件
		   closeevent.accepted = false
	   }*/
    }
}




