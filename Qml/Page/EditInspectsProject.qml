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
    property string devnuminfo: ""
    property string devnameinfo: "112"
    property string devicedescinfo: ""
	property string sninfo: ""
	property variant containerqml: null
    //    anchors.fill: parent
    Rectangle{
        id: rect_bg
        anchors.topMargin: 10
        color:"#00000000"
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
                id: rect_name
                width: 450
                height: 60
                color: "#00ffffff"
                CusLabel {
                    id: lb_name
                    width: 120
                    height: 40
                    text: qsTr("设备编号")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: devnum
                    width: 300
                    height: 40
                    anchors.left: lb_name.right
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignLeft
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                    text: 
                    	{
		                    return devnuminfo
                    	}
                    
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                id: rect_id2
                width: 450
                height: 60
                color: "#00ffffff"
                CusLabel {
                    id: lb_id2
                    width: 120
                    height: 40
                    text: qsTr("设备名称")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                CusTextField {
                    id: devname
                    width: 300
                    height: 40
                    anchors.left: lb_id2.right
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignLeft
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                    text: devnameinfo
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                id: rect_id5
                width: 450
                height: 240
                color: "#00ffffff"
                CusLabel {
                    id: lb_id5
                    width: 120
                    height: 40
                    text: qsTr("设备描述")
                    anchors.left: parent.left
                    anchors.top: parent.top
                    horizontalAlignment: Text.AlignRight
                    anchors.leftMargin: 10
                    anchors.topMargin: 10
                }

                TextField {
                    id: descinfo
                    x: 136
                    y: 23
                    width: 314
                    height: 217
                    horizontalAlignment: Text.AlignLeft
                    verticalAlignment: Text.AlignTop
                    wrapMode: Text.Wrap
                    selectByMouse: true
                    placeholderText: qsTr(devicedescinfo)

                }
//                Text {
//                    id: text_des
//                    width: 300
//                    height: 200
//                    anchors.left: lb_id5.right
//                    anchors.top: parent.top
//                    anchors.leftMargin: 10
//                    anchors.topMargin: 10

//                    verticalAlignment: TextInput.AlignTop
//                    horizontalAlignment: TextInput.AlignLeft
//                    leftPadding: 5 //QtQuick 2.13 间隔
//                    rightPadding: 5
//                    lineHeight: Text.ProportionalHeight //设置行间距
//                    wrapMode: Text.WordWrap //换行
//                    elide: Text.ElideRight //显示不完则隐藏
//                    //elide 省略模式 wrap 换行模式
//                    //contentWidth 手动设置字体显示的宽与高
//                }

                anchors.horizontalCenter: parent.horizontalCenter
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
            inspectsProjectStackView.pop()
            containerqml.clickedfunc1(200);//调用page1.qml中的函数，实现了传返回值。
            
            
            //winadddevice.visible = false
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
			//winadddevice.visible = false
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


			

            Rectangle {
                id: rect_id6
                width: 450
                height: 60
                color: "#00ffffff"

                CusButton_Blue {
                    id: btn_cad
                    text:qsTr("提交")
                    anchors.right: btn_cancel.left
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                    width: 100
                    height: 40

                    onClicked: {
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

				var tmpdata = ""
				if (descinfo.text == "")
				{
					tmpdata = sninfo + "|" + devnum.text + "|"+devname.text	
				}
            	else
					tmpdata = sninfo + "|" + devnum.text + "|"+devname.text+"|"+descinfo.text
				var ret = device.UpdateDevice(user.getUserId(), tmpdata);
				//var ret = device.AddDevice(user.getUserId(), devnum.text, devname.text, descinfo.text);
				if (ret == 0)
				{
					confirmDialog.open()
					
				}
				else
				{
					failureDialog.open()
				}
				//devnameinfo = devname.text
				//devicedescinfo = descinfo.text
            	//stackView.push(qmlPath+"Page/PageAddInstrument.qml")

				//modifydevice.close()

					
              
//                        inspectsProjectStackView.push(Qt.resolvedUrl("qrc:/Flow/InspectsProject/InspectProject_CAD.qml"))
                        //inspectsProjectStackView.push(cad)
                    }
                }

                /*Component{
                    id:cad
                    InspectProject_CAD{
                        anchors.fill: parent
                    }
                }*/

                CusButton_Blue {
                    id: btn_cancel
                    width: 120
                    height: 40
                    text:"Cancel"
                    anchors.right: btn_ok.left
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                    onClicked: {
                        inspectsProjectStackView.pop()
						//inspectsProjectStackView
                    }
                }

                CusButton_Blue {
                    id: btn_ok
                    width: 120
                    height: 40
                    text:"ok"
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.rightMargin: 10
                    onClicked: {
                        inspectsProjectStackView.pop()
                    }
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }

    CusLabel {
        id: lb_title
        height: 60
        text: "add inspect project"
        anchors.left: parent.left
        anchors.right: parent.right
        font.pointSize: 30
        anchors.leftMargin: 10
        anchors.rightMargin: 10
    }





}




