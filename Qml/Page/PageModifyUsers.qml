
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

//donot rename this entrance main.qml file, it will corrupt the project
Window {
    width: 500
    height: 500
    visible: true
    title: qsTr("修改-用户")
	property int angle: 0
	id:adduserwin

	property string userid: ""
	property string idinfo: ""
    property string accountinfo: ""
    property string lognameinfo: ""
	property string rightinfo: ""
	property string devnuminfo: ""
	property string remarkinfo: ""
	function setdata(id, account, logname, passwd, right, devnum, remark)
        {
        	userid = id;
        	accountinput.text = account;
			nameinput.text = logname;
			passwdinput.text = passwd
			console.log("right="+right);
			var aa = right.split("|");
			if (aa[0] == "1")
				adminrule.checked = true;
			if (aa[1] == "1")
				inspectorrule.checked = true;
			if (aa[2] == "1")
				programmerrule.checked = true;
			remarkinput.text = remark;

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
	
	CusLabel_Left {
            id: accountlabel
            x: 150; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("用户帐号") ;
        	font.pointSize: 10
        }

        Rectangle {
            
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 230
            CusTextInput {
            id: accountinput
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		CusLabel_Left {
            id: namelabel
            x: 150; y: 40
            width: 200
            height: 20
            focus: true
           text: qsTr("用户姓名") ;
        	font.pointSize: 10
        }

        Rectangle {
            
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 40
            anchors.left: parent.left; anchors.leftMargin: 230
            CusTextInput {
            id: nameinput
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		CusLabel_Left {
            id: passwdlabel
            x: 150; y: 70
            width: 200
            height: 20
            focus: true
           text: qsTr("密码") ;
        	font.pointSize: 10
        }

	 //确认按钮
        Rectangle {
            
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 70
            anchors.left: parent.left; anchors.leftMargin: 230
            CusTextInput {
            id: passwdinput
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		CusLabel_Left {
            id: input15
            x: 150; y: 110
            width: 200
            height: 20
            focus: true
           text: qsTr("权限") ;
        	font.pointSize: 10
        }

		
		
		CusCheckBox {
		  id:adminrule
		  	anchors.top: parent.top; anchors.topMargin: 100
            anchors.left: parent.left; anchors.leftMargin: 230
		  checked: false
		  text: qsTr("管理员")
		  
		}

	 	CusCheckBox {
		  id:inspectorrule
		  	anchors.top: parent.top; anchors.topMargin: 100
            anchors.left: parent.left; anchors.leftMargin: 310
		  checked: false
		  text: qsTr("检测员")
		  
		}

		CusCheckBox 
		{
		  id:programmerrule
		  	anchors.top: parent.top; anchors.topMargin: 100
            anchors.left: parent.left; anchors.leftMargin: 390
		  checked: false
		  text: qsTr("编程员")
		  
		}

		CusLabel_Left {
            id: input151
            x: 150; y: 140
            width: 200
            height: 20
            focus: true
           text: qsTr("设备编号") ;
        	font.pointSize: 10
        }
		
		QtObject {
							id: backend
							property string modifier
						}

		CusComboBox 
		{
			anchors.top: parent.top; anchors.topMargin: 140
			anchors.left: parent.left; anchors.leftMargin: 230
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

		CusLabel_Left {
            id: remarklabel
            x: 150; y: 200
            width: 200
            height: 20
            focus: true
           text: qsTr("备注") ;
        	font.pointSize: 10
        }

	 //确认按钮
        Rectangle {
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 200
            anchors.left: parent.left; anchors.leftMargin: 230
            CusTextInput {
            	id: remarkinput
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		MessageDialog {
        id:confirmDialog
        title: "返回框"
        text: "修改用户成功"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")
			angle = angle + 100
			//winadddevice.visible = false
			//adduserwin.visible = false
			adduserwin.close()
			
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
        text: "修改用户失败"        
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

		  //确认按钮
        Rectangle {
            id: confirmButtonRect87
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 240
            anchors.left: parent.left; anchors.leftMargin: 150

			CusButton_Red{
            id: findText
			 width: parent.width; height: 22
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
				

            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            	var ret = user.ModifyUser(userid, accountinput.text, nameinput.text, passwdinput.text, ruleinfo, backend.modifier, remarkinput.text)
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
		
        Rectangle {
            id: confirmButtonRect2511
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 240
            anchors.left: parent.left; anchors.leftMargin: 300
            CusButton_Red{
            id: findText111
			 width: parent.width; height: 22
            //Layout.margins:  qGrid.cellmargin
            text:qsTr("取消")
            onClicked:
            {
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            	//adduserwin.visible = false
            	adduserwin.close()
            	
            }
       	 }
 
            
        }
		
		Component.onCompleted: {
		console.log("loaddata");
		//var desc = device.getInstructList();
		var desc = device.getInstructList();
			
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

	
	onClosing: function(closeevent){
		   //CloseEvent的accepted设置为false就能忽略该事件
		   adduserwin.visible = false	   }
}

