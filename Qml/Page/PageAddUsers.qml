import QtQuick 2.9
import QtQuick.Controls 2.15
import TaoQuick 1.0
import QtQml 2.15
import QtQuick.Dialogs 1.2

Item {
    id: item1

    //        CusLabel {
    //            text: qsTr("InspectsProject add")
    //            horizontalAlignment: Label.AlignHCenter
    //            verticalAlignment: Label.AlignVCenter
    //            wrapMode: Label.Wrap
    //            anchors.centerIn: parent
    //        }



    signal nextClicked;
    signal forwardClicked;
    width: 600
    height: 800
    property int angle: 0
	property variant containerqml: null
    //    anchors.fill: parent
    Rectangle{
        id: rect_bg
        anchors.topMargin: 10
        //color:"#2f3b52"
        color: "#2f3b52"
        //        color: CusConfig.themeColor
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: lb_title.bottom
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.rightMargin: 10
        anchors.leftMargin: 10

        Column {
            id: column
            anchors.fill: parent
            spacing: 0

            Rectangle {
            
                id: rect_id5
                width: 450
                height: 400
                //color: "#ffffff"
                color: "#2f3b52"

				 CusLabel {
                    id: namelabel
                    width: 120
                    height: 40
                    text: qsTr("用户姓名")
                    color: "#ffffff"
                    x: 136
                    y: 60
                    horizontalAlignment: Text.AlignLeft
                    //anchors.left: parent.left
                    //anchors.top: parent.top
                    //horizontalAlignment: Text.AlignRight
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                }

				CusTextField {
                    id: nameinput
                    width: 300
                    height: 40
                    color: "#20293c"

					x: 136
                    y: 110
                    horizontalAlignment: Text.AlignLeft
                    //anchors.left: parent.left
                    //anchors.top: parent.top
                    //horizontalAlignment: Text.AlignRight
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                }

				 CusLabel {
                    id: accountlabel
                    width: 120
                    height: 40
                    text: qsTr("用户帐号")
                    color: "#ffffff"
                    x: 136
                    y: 150
                    horizontalAlignment: Text.AlignLeft
                    //anchors.left: parent.left
                    //anchors.top: parent.top
                    //horizontalAlignment: Text.AlignRight
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                }

				CusTextField {
                    id: accountinput
                    width: 300
                    height: 40
                    color: "#20293c"
                   // anchors.left: lb_id2.right
                    //anchors.top: parent.top
                    horizontalAlignment: Text.AlignLeft
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                    x: 136
                    y: 190
                }

				CusLabel {
                    id: passwdlabel
                    width: 120
                    height: 230
                    text: qsTr("密码")
                    color: "#ffffff"
                    x: 136
                    y: 140
                    horizontalAlignment: Text.AlignLeft
                    //anchors.left: parent.left
                    //anchors.top: parent.top
                    //horizontalAlignment: Text.AlignRight
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                }

				CusTextField {
                    id: passwdinput
                    width: 300
                    height: 40
                    color: "#20293c"
                   // anchors.left: lb_id2.right
                    //anchors.top: parent.top
                    horizontalAlignment: Text.AlignLeft
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                    x: 136
                    y: 270
                }

				CusLabel {
                    id: input15
                    width: 120
                    height: 230
                    text: qsTr("权限")
                    color: "#ffffff"
                    x: 136
                    y: 220
                    horizontalAlignment: Text.AlignLeft
                    //anchors.left: parent.left
                    //anchors.top: parent.top
                    //horizontalAlignment: Text.AlignRight
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                }

				CusCheckBox {
				  id:adminrule
				  	x: 136
                    y: 350
				  	//anchors.top: parent.top; anchors.topMargin: 100
		            //anchors.left: parent.left; anchors.leftMargin: 230
				  checked: false
				  text: qsTr("管理员")
				  
				}

	 	CusCheckBox {
		  id:inspectorrule
		  	x: 136+80
            y: 350
		  	//anchors.top: parent.top; anchors.topMargin: 100
            //anchors.left: parent.left; anchors.leftMargin: 310
		  checked: false
		  text: qsTr("检测员")
		  
		}

		CusCheckBox 
		{
		  id:programmerrule
		  x: 136+80*2
          y: 350
		  	//anchors.top: parent.top; anchors.topMargin: 100
            //anchors.left: parent.left; anchors.leftMargin: 390
		  checked: false
		  text: qsTr("编程员")
		  
		}

		 CusLabel {
                    id: input151
                    width: 120
                    height: 40
                    text: qsTr("设备编号")
                    color: "#ffffff"
                    x: 136
                    y: 390
                    horizontalAlignment: Text.AlignLeft
                    //anchors.left: parent.left
                    //anchors.top: parent.top
                    //horizontalAlignment: Text.AlignRight
                    //anchors.leftMargin: 10
                    //anchors.topMargin: 10
                }

		
		
		QtObject {
							id: backend
							property string modifier
						}

		CusComboBox 
		{
		 x: 136
                    y: 430
			//anchors.top: parent.top; anchors.topMargin: 140
			//anchors.left: parent.left; anchors.leftMargin: 430
			//model: ["admin", "inspector"]
			width: 120
			// displayText: qsTr(currentText) + trans.transString
			textRole: "text"
			valueRole: "value"
			onActivated: backend.modifier = currentValue
			//Component.onCompleted: currentIndex = indexOfValue(backend.modifier)
			Component.onCompleted: 
			{
				
	            currentIndex = indexOfValue(backend.modifier)
        	}

			//model: [{ value: Qt.NoModifier, text: qsTr("设备001") },
            //{ value: Qt.ShiftModifier, text: qsTr("设备002") }
           // { value: Qt.ControlModifier, text: qsTr("Control") }
        	//]
        	model:ListModel{    //定义这个接口来动态添加下拉内容
            id:lmd
        	}
        	// model: ["First", "Second", "Third"]
       }

                CusLabel {
                    id: lb_id5
                    width: 120
                    height: 40
                    x: 136
                    y: 470
                    text: qsTr("备注")
                    color: "#ffffff"
                    horizontalAlignment: Text.AlignLeft
                    //anchors.left: parent.left
                    //anchors.top: parent.top
                    //horizontalAlignment: Text.AlignRight
                   // anchors.leftMargin: 10
                   // anchors.topMargin: 10
                }

                TextField {
                    id: remarkinput
                    x: 136
                    y: 510
                    width: 314
                    height: 117
                    horizontalAlignment: Text.AlignLeft
                    verticalAlignment: Text.AlignTop
                    wrapMode: Text.Wrap
                    selectByMouse: true
                    color: "#20293c"
                    placeholderText: qsTr("input description text")

                }

				MessageDialog {
        id:confirmDialog
        title: "返回框"
        text: "添加用户成功"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			//console.log("clicked button *********")
			//angle = angle + 100
			console.log("clicked button *********")
            angle = angle + 100
            inspectsProjectStackView.pop()
            containerqml.clickedfunc(200);//调用page1.qml中的函数，实现了传返回值。
            
			//winadddevice.visible = false
			//adduserwin.visible = false
			//adduserwin.close()
			
		}
        /*onYes: 
        {
        	console.log("YES1")
			device.AddDevice(devnum.text, devname.text, descinfo.text);
        }
        
        onNo: console.log("NO")
        onRejected: console.log("Close")*/
    }

			
				MessageDialog {
						id:failureDialog
						title: "返回框"
						text: "添加用户失败"		  
						icon: StandardIcon.Information;
						standardButtons:StandardButton.Ok;
				
						Component.onCompleted: visible = false
						
						onButtonClicked: 
						{
							console.log("clicked button *********")
							//angle = angle + 100
							//winadddevice.visible = false
							//adduserwin.visible = false
							//adduserwin.close()
							
						}
						/*onYes: 
						{
							console.log("YES1")
							device.AddDevice(devnum.text, devname.text, descinfo.text);
						}
						
						onNo: console.log("NO")
						onRejected: console.log("Close")*/
					}
				

				MessageDialog {
        id:paramerrorDialog
        title: "提示"
        text: "添加用户失败"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")
			//angle = angle + 100
			//winadddevice.visible = false
			//adduserwin.visible = false
			//adduserwin.close()
			
		}
        /*onYes: 
        {
        	console.log("YES1")
			device.AddDevice(devnum.text, devname.text, descinfo.text);
        }
        
        onNo: console.log("NO")
        onRejected: console.log("Close")*/
    }

			Rectangle {
            id: confirmButtonRect87
            width: 100
            height: 40
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 640
            anchors.left: parent.left; anchors.leftMargin: 340

			CusButton_Blue{
            id: findText
			 width: parent.width; height: 40
            //Layout.margins:  qGrid.cellmargin
            text:qsTr("提交")
            onClicked:
            {
            	var ruleinfo = String(adminrule.checked) + "," + String(inspectorrule.checked) + "," + String(programmerrule.checked)
            	if (accountinput.text == "")
            	{
            		paramerrorDialog.text = "用户账号不能为空";
					paramerrorDialog.open()	
            		return;	
            	}

				if (nameinput.text == "")
            	{
            		paramerrorDialog.text = "姓名不能为空";
					paramerrorDialog.open()	
            		return;	
            	}

				if (passwdinput.text == "")
            	{
            		paramerrorDialog.text = "密码不能为空";
					paramerrorDialog.open()	
            		return;	
            	}

				if (ruleinfo == "false,false,false")
            	{
            		paramerrorDialog.text = "请至少选择一个管理员权限";
					paramerrorDialog.open()	
            		return;	
            	}

				if (paramerrorDialog.text = backend.modifier == "")
				{
            		paramerrorDialog.text = "请至少选择一个设备";
					paramerrorDialog.open()	
            		return;	
            	}
				
            	var ruleinfo = String(adminrule.checked) + "," + String(inspectorrule.checked) + "," + String(programmerrule.checked)
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            	var ret = user.AddUser(accountinput.text, nameinput.text, passwdinput.text, ruleinfo, backend.modifier, remarkinput.text)
            	if (ret == 0)
				{
					confirmDialog.open()
					
				}
				else
				{
					failureDialog.open()	
				}
            }
       	 }
			
            
        }
				 //确认按钮
        /*Rectangle {
            id: confirmButtonRect2511
            width: 100
            height: 40
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 640
            anchors.left: parent.left; anchors.leftMargin: 300
            CusButton_Blue{
            id: findText111
			 width: parent.width; height: 40
            //Layout.margins:  qGrid.cellmargin
            text:qsTr("取消")
            onClicked:
            {
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            	//adduserwin.visible = false
            	inspectsProjectStackView.pop()
            	
            }
       	 }
 
            
        }*/

			Label {
				  id: btn_cancel
				x: 250
                    y: 640
                    width: 100
                    height: 40
				  opacity: 1
				  color: "#ffffff"
				  text: qsTr("取消")
//                  anchors.top: parent.top
  //                anchors.topMargin: -300
				  font.family: "Segoe UI"
				  font.pointSize: 16
				  anchors.leftMargin: 500
					   MouseArea {
			        anchors.fill: parent
						cursorShape: Qt.PointingHandCursor;
			        onClicked: {
			        	inspectsProjectStackView.pop()
			        	console.log("Image ");
						
						//inspectsProjectStackView.push(newInspectProject, {angle:"100",containerqml:addDeviceBtn})
			            // do what you want here
			        }
			    }
				  //anchors.horizontalCenter: parent.horizontalCenter
			  }

		Component.onCompleted: {
		console.log("loaddata");
		//var desc = device.getInstructList();
		var desc = device.getInstructList("admin");
			
				 var objinfo = JSON.parse(desc); 
				 
				var str = "";
				var idx = 0;
				while (1)
				{
					str = "device" + String(idx);
					
					if (typeof(objinfo[str]) == "undefined")
						break;
					idx++;
					var obj = {}
					obj.value = objinfo[str].id;
					obj.text = objinfo[str].devicename;
					lmd.append(obj);
					//lmd.append(objinfo[str].devicename)        
					//tableModel.appendRow({"sn":String(idx),"instrumentno":objinfo[str].devicecode,"instrumentname":objinfo[str].devicename,"description":objinfo[str].desc,"operator":"","novisible":objinfo[str].id})
					console.log("devicename="+objinfo[str].devicename);
					
				}	
	
      
    }

				

				
				
				

                anchors.horizontalCenter: parent.horizontalCenter
            }

			
		

		

		

        }
    }

    CusLabel {
        id: lb_title
        height: 60
        color: "#ffffff"
        text: "用户-新增"
        anchors.left: parent.left
        anchors.right: parent.right
        font.pointSize: 30
        anchors.leftMargin: 10
        anchors.rightMargin: 10
    }





}





