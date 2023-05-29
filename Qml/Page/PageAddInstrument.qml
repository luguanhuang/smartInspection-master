
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
   	visible: true
    width: 500
    height: 300
    title: qsTr("新增-设备")
    property int angle: 0
    id: winadddevice

		Rectangle {
        width: 200
        height: 80
        //color: "red"
		
        CusLabel_Left {
            id: input1
            x: 160; y: 68
            width: 300
            height: 20
            focus: true
           text: qsTr("设备编号") ;
        	font.pointSize: 10
        }

		

		 //确认按钮
        Rectangle {
            id: confirmButtonRect
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 63
            anchors.left: parent.left; anchors.leftMargin: 230
            CusTextInput {
            	id: devnum
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		 CusLabel_Left {
            id: input2
            x: 160; y: 68+30
            width: 300
            height: 20
            focus: true
           text: qsTr("设备名称") ;
        	font.pointSize: 10
        }

		 //确认按钮
        Rectangle {
            id: confirmButtonRect2
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 63+30
            anchors.left: parent.left; anchors.leftMargin: 230
            CusTextInput {
            	id: devname
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }
     }

	 CusLabel_Left {
            id: input3
            x: 160; y: 68+30*2
            width: 300
            height: 20
            focus: true
           text: qsTr("设备描述") ;
        	font.pointSize: 10
        }

		 //确认按钮
        Rectangle 
        {
            id: confirmButtonRect3
            width: 150; height: 100;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 63+30*2
            anchors.left: parent.left; anchors.leftMargin: 230
            
			ScrollView 
			{
				   id: view
				   anchors.fill: parent
	             TextArea {
					id: descinfo
	                anchors.margins: 2
	                font.pointSize: 15
	                focus: true
				   }
			}
        }



		MessageDialog {
        id:confirmDialog
        title: "返回框"
        text: "添加设备成功"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")
			angle = angle + 100
			winadddevice.visible = false
			//winadddevice.close()
			
		}
       
    }

		MessageDialog {
        id:failureDialog
        title: "返回框"
        text: "添加设备失败"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")
			angle = angle + 100
			winadddevice.visible = false
			//winadddevice.close()
			
		}
       
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
        id:id_mesDialog
        title: "确认框"
        icon: StandardIcon.Question
        text: "你确认需要新增设备吗"
        standardButtons:  StandardButton.No | StandardButton.Yes

        Component.onCompleted: visible = false

        onYes: 
        {
        	console.log("YES1")
			
        }
        
        onNo: console.log("NO")
        onRejected: console.log("Close")
    }
		 
        Rectangle {
            id: confirmButtonRect21
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 233
            anchors.left: parent.left; anchors.leftMargin: 160

			 CusButton_Red{
            id: confirmBtn21
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("提交")
            onClicked:
            {
            	//stackView.push(qmlPath+"Page/PageAddInstrument.qml")
				if (devnum.text == "")
				{
					paramerrorDialog.text = "设备编号不能为空";
					paramerrorDialog.open()	
            		return;	
				}

				if (devname.text == "")
				{
					paramerrorDialog.text = "设备名称不能为空";
					paramerrorDialog.open()	
            		return;	
				}
				
            	var ret = device.AddDevice(user.getUserId(), devnum.text, devname.text, descinfo.text);
				if (ret == 0)
				{
					confirmDialog.open()
					
				}
				else
				{
					failureDialog.open()
				}
				//id_mesDialog.open()
            }
       	 }			
        }

		
		
		 //确认按钮
        Rectangle {
            id: cancelRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 233
            anchors.left: parent.left; anchors.leftMargin: 305

			CusButton_Red{
            id: cancelBtn
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("取消")
            onClicked:
            {
            	winadddevice.close()
            	//stackView.push(qmlPath+"Page/PageAddInstrument.qml")
            }
       	 }
			
        }	  
		   
    
}

