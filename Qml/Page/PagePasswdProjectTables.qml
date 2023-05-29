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

	id:chgpasswdwnd
	Rectangle {
		color: "#2f3b52"
        id: changePasswordRect
        anchors.fill: parent
        //color: "#373250";
        MouseArea {
            id: tempMouse
            anchors.fill: parent;
            onClicked: {
                console.log("tempMouse====================================")
            }
        }



		CusLabel_Left {
            id: accountlabel11
            x: 80; y: 100
            width: 200
            height: 20
            focus: true
           text: qsTr("新密码") ;
        	//font.pointSize: 10
        }

		//确认按钮
        Rectangle {
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 120
            anchors.left: parent.left; anchors.leftMargin: 80
            CusTextInput {
            	id: inputNewPasswd
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }
		
        //请输入新密码
       /* CusTextField {
            id: inputNewPasswd
            anchors.top: parent.top; anchors.topMargin: 120
            anchors.left: parent.left; anchors.leftMargin: 160;
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 12;
            font.family: "微软雅黑"
            color: "grey"
            //cursorVisible: true;
            //border.color: "grey"
            selectByMouse: true //是否可以选择文本
            selectionColor: "#999999"//选中背景颜色
            //placeholderText: qsTr("请输入新密码")
            echoMode: TextInput.Password //密码模式
            width: 280; height: 40;
            background: Rectangle {
                border.width: 0; border.color: "red"
                radius: 4; color: "#FFFFFF";
                opacity: 0.05
                implicitHeight: 40; implicitWidth: 280
            }
        }*/

		CusLabel_Left {
            id: accountlabel1122
            x: 80; y: 155
            width: 200
            height: 20
            focus: true
           text: qsTr("确认密码") ;
        	font.pointSize: 10
        }

		//确认按钮
        Rectangle {
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 180
            anchors.left: parent.left; anchors.leftMargin: 80
            CusTextInput {
            	id: inputPasswdAgain
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }
		
        //请输入新密码
       /* CusTextField {
            id: inputPasswdAgain
            anchors.top: parent.top; anchors.topMargin:180
            anchors.left: parent.left; anchors.leftMargin: 170
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 12;
			//border.color: "grey"
            font.family: "微软雅黑"
            color: "grey"
            //cursorVisible: true;
            selectByMouse: true //是否可以选择文本
            selectionColor: "#999999"//选中背景颜色
            //placeholderText: qsTr("请再次输入新密码")//占位文字
            echoMode: TextInput.Password //密码模式
            width: 280; height: 40
            background: Rectangle {
                border.width: 0; border.color: "red"
                radius: 4; color: "#FFFFFF";
                opacity: 0.05
                implicitHeight: 40; implicitWidth: 280
            }
        }*/

		MessageDialog {
        id:confirmDialog
        title: "提示"
        text: "新密码和确认密码不相同  请重新数据"        
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
			//
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
        id:passwdconfirmDialog
        title: "确认"
        text: "修改密码成功"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")


			chgpasswdwnd.close()
			//
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

		MessageDialog {
        id:passwdFailureDialog
        title: "确认"
        text: "修改密码失败"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")


			chgpasswdwnd.close()
			//
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
            id: confirmButtonRect
            width: 120; height: 38;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 263
            anchors.left: parent.left; anchors.leftMargin: 110

			CusButton_Blue{
            id: findText
			 width: parent.width; height: 38
            Layout.margins:  qGrid.cellmargin
            text:qsTr("确认")
            onClicked:
            {


			
            	var id = user.getUserId();
				console.log("id="+id);
				console.log("inputNewPasswd="+inputNewPasswd.text);
				console.log("inputPasswdAgain="+inputPasswdAgain.text);
				if (inputNewPasswd.text != inputPasswdAgain.text)
					confirmDialog.open()
				else
				{
					var ret= user.chgUserPasswd(id, inputNewPasswd.text);
					if (ret == 0)
						passwdconfirmDialog.open();
					else
						passwdFailureDialog.open();
					
				}
            	//stackView.push(qmlPath+"Page/PageUsersList.qml")
            }
       	 }
			
        }
 
        function initChangePasswordUI()
        {
            inputOrgPasswd.text = "";
            inputNewPasswd.text = "";
            inputPasswdAgain.text = "";
        }
 
    }	

	 CusLabel {
        id: lb_title
        height: 60
        color: "#ffffff"
        text: "修改密码"
        anchors.left: parent.left
        anchors.right: parent.right
        font.pointSize: 30
        anchors.leftMargin: 10
        anchors.rightMargin: 10
    }
	
}



