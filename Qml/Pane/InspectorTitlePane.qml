import QtQuick 2.15
import QtQuick.Controls 2.15
import TaoQuick 1.0
import QtQml 2.15
import "../CombineControl"

Item {
    height: 260

    property var t_main
    signal menuBtnClicked

  

    Rectangle {
        id: rectangle
		color: "#242e42"
        //color: CusConfig.themeColor
        anchors.fill: parent

        /*CusButton_Image {
            id:menuBtn
            btnImgUrl: imgPath + "Window/menu.png"
            objectName: "menuBtn"
            anchors {
                left: parent.left
                leftMargin: 10
            }
            anchors.verticalCenter: parent.verticalCenter
            width: 32
            height: 32
            onClicked: {
                leftPane.isOpen = !leftPane.isOpen
            }
        }*/


		Rectangle {
			  id: rect_tips111
		
			  height: 100
			  color: "#00ffffff"
			  anchors.top: parent.top
            anchors.bottom: parent.bottom

            anchors.leftMargin: 500
            anchors.bottomMargin: 0
            anchors.topMargin: -150
		
			  Label {
				  id: label222
				  x: 30
				  y:150
				  opacity: 1
				  color: "#ffffff"
				  text: qsTr("3DAOI检测系统")
//                  anchors.top: parent.top
  //                anchors.topMargin: -300
				  font.family: "Segoe UI"
				  font.pointSize: 16
				  anchors.leftMargin: 500
				  //anchors.horizontalCenter: parent.horizontalCenter
			  }
		  }


        Row {
            id: row
			x:30
            width: 400
            //anchors.left: menuBtn.right
            anchors.top: parent.top
            //anchors.bottom: parent.bottom
            spacing: 40
            anchors.leftMargin: 500
            anchors.bottomMargin: 0
            anchors.topMargin: 40

			 /*Rectangle {
            id: loginimg
            height: 100
            width: 100
            //color: "#00ffffff"
            //anchors.left: parent.left
            //anchors.right: parent.right
            //anchors.top: title.bottom
            //anchors.rightMargin: 0
            //anchors.leftMargin: -500
            //anchors.topMargin: -40

            Image {
                id: image
                anchors.fill: parent
                source: imgPath + "Window/avatar.png"
                //anchors.bottomMargin: 8
                //fillMode: Image.PreserveAspectFit
                sourceSize: Qt.size(100, 100)                
				smooth: true
            }
        }*/

            Image {
            	
                id: image
				x: 50
                width: 80
                height: 80
//                anchors.margins: 5
				anchors.leftMargin: 300
				anchors.topMargin: -40
               // anchors.verticalCenter: parent.verticalCenter
//                anchors.top: parent.top
//                anchors.bottom: parent.bottom
                source: imgPath + "Window/avatar.png"
                sourceSize: Qt.size(80, 80)     
//                anchors.bottomMargin: 0
//                anchors.topMargin: 0
               // fillMode: Image.PreserveAspectFit
            }

			Rectangle {
			  id: rect_tips221
		
			  height: 100
			  color: "#00ffffff"
			  anchors.top: parent.top
            anchors.bottom: parent.bottom

            anchors.leftMargin: 480
            anchors.bottomMargin: 0
            anchors.topMargin: -60
		
			  Label {
				  id: labelaf
				  x: 10
				  y:150
				  opacity: 1
				  color: "#ffffff"
				  text: qsTr("检测员")
//                  anchors.top: parent.top
  //                anchors.topMargin: -300
				  font.family: "Segoe UI"
				  font.pointSize: 16
				  anchors.leftMargin: 500
				  //anchors.horizontalCenter: parent.horizontalCenter
			  }
		  }

			Rectangle {
			  id: rect_tips2xb
		
			  height: 100
			  color: "#00ffffff"
			  anchors.top: parent.top
            anchors.bottom: parent.bottom

            anchors.leftMargin: 480
            anchors.bottomMargin: 0
            anchors.topMargin: -30
		
			  Label {
				  id: labeldd
				  x: 10
				  y:150
				  opacity: 1
				  color: "#ffffff"
				  text: qsTr(user.getNickname())
//                  anchors.top: parent.top
  //                anchors.topMargin: -300
				  font.family: "Segoe UI"
				  font.pointSize: 16
				  anchors.leftMargin: 500
				  //anchors.horizontalCenter: parent.horizontalCenter
			  }
		  }

			Rectangle {
			  id: rect_tips2xb11
		
			  height: 100
			  color: "#00ffffff"
			  anchors.top: parent.top
            anchors.bottom: parent.bottom

            anchors.leftMargin: 900
            anchors.bottomMargin: 0
//            anchors.topMargin: -225
			anchors.topMargin: -195
		
			  Label {
				  id: labeldd22
				  x: 1300
				  y:150
				  opacity: 1
				  color: "#266fb8"
				  text: qsTr("退出")
//                  anchors.top: parent.top
  //                anchors.topMargin: -300
				  font.family: "Segoe UI"
				  font.pointSize: 16
				  anchors.leftMargin: 500
					   MouseArea {
			        anchors.fill: parent
						cursorShape: Qt.PointingHandCursor;
			        onClicked: {
			        	CLview.close()
			        	console.log("Image ");
						
						//inspectsProjectStackView.push(newInspectProject, {angle:"100",containerqml:addDeviceBtn})
			            // do what you want here
			        }
			    }
				  //anchors.horizontalCenter: parent.horizontalCenter
			  }
		  }

           /* Text {
                id: text1
                color: "#ffffff"
                text: qsTr("3DPCBAOI_Program")
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 28
            }*/
        }
        /*Row {
            id: controlButtons
            objectName: "controlButtonsRow"
            height: 100
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: parent.right
            anchors.rightMargin: 20
            spacing: 20


            /*CusButton_Image {
                width: 24
                height: 24
                btnImgUrl: imgPath + (hovered || pressed ? "Window/minimal_white.png" : "Window/minimal_gray.png")
                //btnImgUrl: (hovered || pressed ? "qrc:/images/minimal_white.png" : "qrc:/images/minimal_gray.png")
                tipText: qsTr("minimal")
                onClicked: {
                    view.showMinimized()
                }
            }
            CusButton_Image {
                width: 24
                height: 24
                visible: !view.isMax
                btnImgUrl: imgPath + (hovered || pressed ? "Window/max_white.png" : "Window/max_gray.png")
                //btnImgUrl: (hovered || pressed ? "qrc:/images/max_white.png" : "qrc:/images/max_gray.png")
                tipText: qsTr("maximize")
                onClicked: {
                    view.showMaximized()
                }
            }
            CusButton_Image {
                width: 24
                height: 24
                visible: view.isMax
                btnImgUrl: (hovered || pressed ? imgPath+"Window/normal_white.png" : imgPath+"Window/normal_gray.png")
                tipText: qsTr("normal")
                onClicked: {
                    view.showNormal()
//                    view.setViewSize(1440,960)
//                    view.moveToCenter();
//                    view.setIsMax(false)

                }
            }
            CusButton_Image {
                implicitWidth: 24
                implicitHeight: 24
                tipText: qsTr("Close")
                btnImgUrl: (hovered || pressed ? imgPath+"Window/close_white.png" : imgPath+"Window/close_gray.png")
                onClicked: {
                    view.close()
                }
            }
        }*/
        /*Rectangle {
            id: splitLine
            height: parent.height * 0.4 *5
            width: 1
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: controlButtons.left
            anchors.rightMargin: 10
            color: CusConfig.splitLineColor
        }
        Row {
            id: toolRow

            height: 100
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: splitLine.left
            anchors.rightMargin: 20
            spacing: 20
            UserBtn {
                width: 24
                height: 24
                anchors.verticalCenter: parent.verticalCenter
                objectName: "userBtn"
                mainwindow: t_main
            }
            /*LangBtn {
                width: 24
                height: 24
                anchors.verticalCenter: parent.verticalCenter
                objectName: "langBtn"
            }*/
//            CusButton_Image {
//                width: 24
//                height: 24
//                anchors.verticalCenter: parent.verticalCenter
//                tipText: qsTr("Settings")
//                btnImgUrl: (hovered || pressed ? "qrc:/images/settings_white.png" : "qrc:/images/settings_gray.png")
//                onClicked: {
//                    settingDialog.showScreenCenter()

//                }
//            }
            /*CusButton_Image {
                width: 24
                height: 24
                anchors.verticalCenter: parent.verticalCenter
                tipText: qsTr("About")
                btnImgUrl: (hovered || pressed ? imgPath+"Window/about_white.png" : imgPath+"Window/about_gray.png")
                onClicked: {
                    aboutDialog.show()
                }
            }
        }*/
        property alias blankItem: blankItem
        Item {
            id: blankItem
            objectName: "blankItem"
            anchors {
                left: row.left
                leftMargin: 4
                //right: toolRow.left
                top: parent.top
                topMargin: 4
                bottom: parent.bottom
            }
            Component.onCompleted: {
                view.setTitleItem(blankItem)
            }
        }
    }

}



