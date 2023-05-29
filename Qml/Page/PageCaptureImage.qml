
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import Qt.labs.qmlmodels 1.0

//import QtQuick.Dialogs 1.2
import Qt.labs.platform 1.1

////对话框  如果用上面这个  将不能使用filemode 比如保存对话框

import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"

//donot rename this entrance main.qml file, it will corrupt the project
ApplicationWindow {
    width: 800
    height: 800
    visible: true
    title: qsTr("采集图象")

	   Image {
        id: source
        anchors.fill: parent
        fillMode: Image.PreserveAspectFit
        visible: false
        asynchronous: true
        onStatusChanged: {
            if(Image.Ready == status) {
                console.log("image loaded")
                //mask.recalc()
            }
        }
    }



	//确认按钮
        Rectangle {
            id: findRect21
            width: 30; height: 30;

            radius: 4
            anchors.top: parent.top; anchors.topMargin: 60
            anchors.left: parent.left; anchors.leftMargin: 500

				CusImage {
			   id: bgImg12			   	
			   source: imgPath + "Window/about_gray.png"
			    width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
			   //opacity: 0.1
		   }						             
        }

		//确认按钮
        Rectangle {
            id: findRect2112
            width: 30; height: 30;

            radius: 4
            anchors.top: parent.top; anchors.topMargin: 60
            anchors.left: parent.left; anchors.leftMargin: 530

				CusImage {
			   id: bgImg12123		   	
			   source: imgPath + "Window/settings_gray.png"
			    width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
			   //opacity: 0.1
		   }						             
        }

	 FileDialog {
        id: fileDialog
        title: "文件打开."
        nameFilters: ["Image Files (*.jpg *.png *.gif)"]
        onAccepted: {
         console.log("选中的文件有:")
            for (var i in files) {
                console.log(files[i])
					bgImg.source = files[i]
            }
            //bgImg.source = fileDialog.fileUrl
        }
    }

	
	 FileDialog {
        id: saveDialog
        title: "文件保存."
        //fileMode: FileDialog.SaveFile
		
        //folder: shortcuts.desktop
        //selectExisting: true
        //selectFolder: false
        //selectMultiple: false
        

        //nameFilters: ["json文件 (*.json)"]
        //nameFilters: ["Image Files (*.jpg *.png *.gif)"]
        fileMode: FileDialog.SaveFile
        onAccepted: {
            //bgImg.source = fileUrl
        }
    }

	//确认按钮
        Rectangle {
            id: findRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 50
             CusButton_Red{
            id: findText
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("采集图象")
            onClicked:
            {
            	 
            	/*var component = Qt.createComponent(qmlPath+"Page/PageUsersList.qml");    	
		    	if (component.status === Component.Ready) {
		    		var object = component.createObject(iotMainPage, {x:100, y:50,width:400, height:320})
		            // 4.使用connect连接信号槽
		    		object.clickBtnOk.connect(recvName2Date);
		    	}*/
            	//stackView.push(qmlPath+"Page/PageUsersList.qml", {name:"张三",containerqml:findRect})
            }
       	 }

		
			 
 
           
        }

	//确认按钮
        Rectangle {
            id: addUserRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 200

			 CusButton_Red{
            id: addUserText
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("载入图象")
            onClicked:
            {
            	
				fileDialog.open()
            	//stackView.push(qmlPath+"Page/PageOpenDialog.qml")
            }
       	 }			
        }

	//确认按钮
        Rectangle {
            id: addUserRect11223
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 350

			 CusButton_Red{
            id: addUserText121
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("2D预览")
            onClicked:
            {
            	
				fileDialog.open()
            	//stackView.push(qmlPath+"Page/PageOpenDialog.qml")
            }
       	 }			
        }

	//确认按钮
        Rectangle {
            id: addUserRect01
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 500

			 CusButton_Red{
            id: addUserText02
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("2D预览")
            onClicked:
            {
            	
				fileDialog.open()
            	//stackView.push(qmlPath+"Page/PageOpenDialog.qml")
            }
       	 }			
        }

	//确认按钮
        Rectangle {
            id: chgPasswdRect
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 500

			 CusButton_Red{
            id: chgPasswdText
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("3D预览")
            onClicked:
            {
            	saveDialog.open()
            	//stackView.push(qmlPath+"Page/PageModifyPassword.qml")
            }
       	 }
        }

		//确认按钮
        Rectangle {
            id: chgPasswdRect112
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 10
            anchors.left: parent.left; anchors.leftMargin: 650

			 CusButton_Red{
            id: chgPasswdText123
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("保存")
            onClicked:
            {
            	saveDialog.open()
            	//stackView.push(qmlPath+"Page/PageModifyPassword.qml")
            }
       	 }
        }

		
		
		CusImage {
		 width: 700; height: 600;
			   id: bgImg
			   	 anchors.top: parent.top; anchors.topMargin: 0
            anchors.left: parent.left; anchors.leftMargin: 0
			   //source: imgPath + "Effect/Girls/girl1.jpeg"
			   anchors.centerIn: parent

			   //opacity: 0.1
		   }

		
		 StackView{
		id: stackView
		focus: true
		anchors.fill: parent
		}

		//确认按钮
        Rectangle {
            id: findRect897
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 750
            anchors.left: parent.left; anchors.leftMargin: 600
             CusButton_Red{
            id: findText54
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("3d旋转示例")
            onClicked:
            {
            	 stackView.push(qmlPath+"Page/Page3Drotation.qml")
            	/*var component = Qt.createComponent(qmlPath+"Page/PageUsersList.qml");    	
		    	if (component.status === Component.Ready) {
		    		var object = component.createObject(iotMainPage, {x:100, y:50,width:400, height:320})
		            // 4.使用connect连接信号槽
		    		object.clickBtnOk.connect(recvName2Date);
		    	}*/
            	//stackView.push(qmlPath+"Page/PageUsersList.qml", {name:"张三",containerqml:findRect})
            }
       	 }

		
			 
 
           
        }
		
}

