import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import Qt.labs.qmlmodels 1.0


import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"

//donot rename this entrance main.qml file, it will corrupt the project
Window {
    width: 800
    height: 600
    visible: true
    title: qsTr("检测pcb")
	property var component;

// 3.定义接收槽函数
	    function recvName2Date(strName, strDate){
	        console.log(strName + " 11 " + strDate);
	        //textName.text = String("距离%1还有").arg(strName)
	        //textDate.text = strDate
	    }

		function finishCreation() 
		{
		    if (component.status === Component.Ready) {
		        var image = component.createObject(root);
		        if (image === null) 
				{
		            console.log("Error creating button");
		        }
				else
				{
					console.log("succeed21");
					//input1123.visible = true
					  // 4.使用connect连接信号槽
                    //image.clickBtnOk.connect(recvName2Date);
					console.log("succeed 111");
				}
		    } else if (component.status === Component.Error) {
		        console.log("Error loading component:", component.errorString());
		    }
		}

	

	CusLabel_Left {
            id: input1
            x: 10; y: 10
            width: 200
            height: 20
            focus: true
           text: qsTr("指定检测方案") ;
        	font.pointSize: 10
        }

	 //确认按钮
        Rectangle {
            id: confirmButtonRect123
            width: 150; height: 24;
            radius: 4
				color: "lightgrey"
            border.color: "grey"
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 100
            CusTextInput {
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 15
                focus: true
            }
        }

		

		PageSelDetectSulution
		{
		id: newWindow
		angle: 0
        onAngleChanged: 
        	{
        		if (0 == angle)	
					input19.visible = true;
				else
					input19.visible = false;

				if (0 == angle)	
				{
					input124.visible = false;
					input81.visible = false;
				}	
				else
				{
					input124.visible = true;
					input81.visible = true;
				}
					
				
				console.log(newWindow.angle)
        	}
       	
        visible:false
		//newWindow.findRect321.onClickBtnOk:console.log("Send to HanMeimei1")
			
		
		//angle: 100
		//onAngleChanged: console.log(newWindow.angle)
		}

	//确认按钮
        Rectangle  {
            id: root
            width: 80; height: 30;
           // color: "#FF5362"
            //radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 260

			
			
			 CusButton_Red{
            id: findText1123
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("选择")
            onClicked:
            {
            	newWindow.angle=0
            	newWindow.show();
            	
            /*    component = Qt.createComponent(qmlPath+"Page/PageSelDetectSulution.qml");
				if (component.status === Component.Ready || component.status === Component.Error) 
				{
       				//finishCreation();
	       				if (component.status === Component.Ready) {
			        var image = component.createObject(root);
			        if (image === null) 
					{
			            console.log("Error creating button");
			        }
					else
					{
						console.log("succeed");
						//input1123.visible = true
						  // 4.使用connect连接信号槽
	                    image.clickBtnOk.connect(recvName2Date);
						console.log("succeed after");
					}
					   } else if (component.status === Component.Error) {
				        console.log("Error loading component:", component.errorString());
				    }
    			}
				else 
				{
        			//component.statusChanged.connect(finishCreation);
    			}*/
				//console.log(component.status)
				//console.log("Error 11 loading component:", component.errorString());
            	//stackView.push(qmlPath+"Page/PageSelDetectSulution.qml")
				console.log("return")
            	//PageDetectPcb.open()
            }
       	 }
			
           
        }

	CusLabel {
            id: input19
            x: 260; y: 100
            width: 1200
            height: 200
            focus: true
           text: 
           
	        qsTr("2022-07-05 12：12：45：  张三   start \r\n2022-07-05 12：12：45：  张三   start\n2022-07-05 12：12：45：  张三   start\n2022-07-05 12：12：45：  张三   start\n。。。。 ") ;
        	font.pointSize: 10
				visible:
				{
					if (0 == angle)	
						return true
					else false
				}
				
        }

		CusLabel {
            id: input124
            x: 160; y: 100
            width: 1200
            height: 100
            focus: true
           text: 
           
	        qsTr("检测状态") ;
        	font.pointSize: 10
				visible:
				{
					
					return false
					
				}
				
        }

		CusLabel {
            id: input81
            x: 260; y: 200
            width: 1200
            height: 100
            focus: true
           text: 
           
	        qsTr("PCB检测运行中...") ;
        	font.pointSize: 10
				visible:
				{
					
					return false
					
				}
				
        }
       
	StackView{
            id: stackView
            focus: true
            anchors.fill: parent
        }

	
   		//确认按钮
        Rectangle {
            id: confirmButtonRect11
            width: 80; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 300
            anchors.left: parent.left; anchors.leftMargin: 100

			 CusButton_Red{
            id: findText11
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("开始检测")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageSelDetectSulution.qml")
            }
       	 }
			
           
        }

		//确认按钮
        Rectangle {
            id: confirmButtonRect22
            width: 80; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 300
            anchors.left: parent.left; anchors.leftMargin: 300

			 CusButton_Red{
            id: findText22
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("停止检测")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageSelDetectSulution.qml")
            }
       	 }
			
           
        }

		//确认按钮
        Rectangle {
            id: confirmButtonRect33
             width: 80; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 300
            anchors.left: parent.left; anchors.leftMargin: 500

			 CusButton_Red{
            id: findText33
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("暂停检测")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageSelDetectSulution.qml")
            }
       	 }
			
           
        }

		//确认按钮
        Rectangle {
            id: confirmButtonRect21
             width: 130; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 300
            anchors.left: parent.left; anchors.leftMargin: 680

			 CusButton_Red{
            id: findText35
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("载入图像-显示")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageSelDetectSulution.qml")
            }
       	 }
			
           
        }
		
	CusLabel_Left {
            id: input1123
            x: 100; y: 400
            width: 1000
            height: 20
            focus: true
           text: qsTr("本次已生成检测报告 		123 	份,		OK	 120   份				NG	3	份") ;
        	font.pointSize: 10
        }

		//确认按钮
        Rectangle {
            id: confirmButtonRect44
             width: 80; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 500
            anchors.left: parent.left; anchors.leftMargin: 100

			 CusButton_Red{
            id: findText44
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("返回")
            onClicked:
            {
            	stackView.push(qmlPath+"Page/PageSelDetectSulution.qml")
            }
       	 }
			
           
        }
	
   
}



