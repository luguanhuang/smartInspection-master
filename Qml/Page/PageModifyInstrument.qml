
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
    title: qsTr("修改-设备")
    property string devnuminfo: ""
    property string devnameinfo: ""
    property string devicedescinfo: ""
	property string sninfo: ""
	id: modifydevice
	function setdata(devicenum, devicename, devicedesc, sn)
        {
        	devnum.text = devicenum;
			devname.text = devicename;
			devdesc.text = devicedesc
			sninfo = sn
		}
		Rectangle {
        width: 200
        height: 80
        //color: "red"
		
        Text {
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
            TextInput {
            	id:devnum
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		 Text {
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
            
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 63+30
            anchors.left: parent.left; anchors.leftMargin: 230
            TextInput {
            	id:devname
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }
     }

	 Text {
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
					id:devdesc
	                anchors.margins: 2
	                font.pointSize: 15
	                focus: true
				   }
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
		
		  //确认按钮
        Rectangle {
            id: confirmButtonRect111
            width: 100; height: 48;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 233
            anchors.left: parent.left; anchors.leftMargin: 150
            CusButton_Red{
            id: confirmBtn222
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

				if (devdesc.text == "")
				{
					devnuminfo = sninfo + "|" + devnum.text + "|"+devname.text	
				}
            	else
					devnuminfo = sninfo + "|" + devnum.text + "|"+devname.text+"|"+devdesc.text
				devnameinfo = devname.text
				devicedescinfo = devdesc.text
            	//stackView.push(qmlPath+"Page/PageAddInstrument.qml")

				modifydevice.close()
				//id_mesDialog.open()
            }
       	 }
        }
		
		 //确认按钮
        Rectangle {
            id: confirmButtonRect222
            width: 100; height: 48;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 233
            anchors.left: parent.left; anchors.leftMargin: 300
           CusButton_Red{
            id: confirmBtn333
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("取消")
            onClicked:
            {
            	//stackView.push(qmlPath+"Page/PageAddInstrument.qml")
            	modifydevice.close()
				//id_mesDialog.open()
            }
       	 }
        }	  

		Component.onCompleted: {
       //console.log("name="+name);
    }
    
}

