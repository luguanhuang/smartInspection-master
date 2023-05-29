
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
Window {
    width: 1000
    height: 800
    visible: true
    property int tabHeight: 44
    title: qsTr("硬件参数设置")

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
            anchors.top: parent.top; anchors.topMargin: 20
            anchors.left: parent.left; anchors.leftMargin: 50
             CusButton_Red{
            id: findText
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("效果预览")
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

		Rectangle{
		width: 440; height: 300;
		 anchors.top: parent.top; anchors.topMargin: 80
	            anchors.left: parent.left; anchors.leftMargin: 40
			CusImage {
			 
				   id: bgImg
				   	width: 440; height: 300;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
		width: 110; height: 100;
		 anchors.top: parent.top; anchors.topMargin: 380
	            anchors.left: parent.left; anchors.leftMargin: 40
			CusImage {
			 
				   id: bgImg11
				   	width: 110; height: 100;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
		width: 110; height: 100;
		 anchors.top: parent.top; anchors.topMargin: 380
	            anchors.left: parent.left; anchors.leftMargin: 140
			CusImage {
			 
				   id: bgImg1141
				   	width: 110; height: 100;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
		width: 110; height: 100;
		 anchors.top: parent.top; anchors.topMargin: 380
	            anchors.left: parent.left; anchors.leftMargin: 240
			CusImage {
			 
				   id: bgImg161
				   	width: 110; height: 100;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
		width: 110; height: 100;
		 anchors.top: parent.top; anchors.topMargin: 380
	            anchors.left: parent.left; anchors.leftMargin: 340
			CusImage {
			 
				   id: bgImg111
				   	width: 110; height: 100;
				   	
				   source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
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
            anchors.left: parent.left; anchors.leftMargin: 100
             CusButton_Red{
            id: findText54
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("返回")
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

		//确认按钮
        Rectangle {
            id: findRect812
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 750
            anchors.left: parent.left; anchors.leftMargin: 650
             CusButton_Red{
            id: findText21
			 width: parent.width; height: 22
            Layout.margins:  qGrid.cellmargin
            text:qsTr("保存")
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

		Rectangle {
        x: 550
        y: 80
        width: 500
        height: 600
        border.color: "gray"
        border.width: 1
        color: "#f7f7f7"

       
            CusRoundTabButton {
                id: leftBtn
                width: 50
                height: tabHeight
                color: "#2d7d9a"
                CusImage {
                    anchors {
                        left: parent.left
                        leftMargin: 10
                        verticalCenter: parent.verticalCenter
                    }
                    source: imgPath + "logo/milk_32.png"
                }
                property bool isZero: tabListView.currentIndex === 0
                onIsZeroChanged: {
                    updateRadius()
                }
                updateRadius:function() {
                    if(tabListView.currentIndex === 0)
                    {
                        radius = roundRadius
                        rightBottomRound = true
                    } else {
                        rightBottomRound = false
                        radius = 0
                    }
                }
            }
            ListView {
                id: tabListView
                x: leftBtn.width
                width: parent.width - leftBtn.width
                height: tabHeight
                orientation: Qt.Horizontal
                model: 10
                interactive: false
                delegate: Item {
                    width: 140
                    height: tabHeight
                    CusRoundTabButton {
                        id: tabBtn
                        color: {
                            if (tabBtn.isSelected || tabBtn.pressed) {
                                return "#f7f7f7"
                            } else if (tabBtn.hovered) {
                                return "#7bacbf"
                            } else {
                                return "#69a2b7"
                            }
                        }
                        anchors.fill: parent
                        isFirst: index === 0
                        isLast: index === tabListView.count - 1
                        tabIndex: index
                        currentTabIndex: tabListView.currentIndex
                      
                        onClick: {
                         
                            tabListView.currentIndex = tabIndex
                        }
                        CusImage {
                            anchors {
                                left: parent.left
                                leftMargin: 10
                                verticalCenter: parent.verticalCenter
                            }
                            source: imgPath + "logo/milk_32.png"
                        }
                        Label {
                            color: "#3e3e3e"
								
                            text: 
                            	{
                            		if (0 == index)
	                            		return "光源"
	                            	else if (1 == index)
										return "相机"
									else
										return "轴"
                            	}
                            anchors.centerIn: parent
                        }


						CusLabel_Left {
			            id: input1234
			            x: 10; y: 60
			            width: 200
			            height: 20
			            focus: true
			           text: qsTr("同轴光") ;
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
			        	font.pointSize: 10
			        }

						 //确认按钮
					Rectangle {
						id: confirmButtonRect132
						width: 150; height: 24;
						radius: 4
							color: "lightgrey"
						border.color: "grey"
						anchors.top: parent.top; anchors.topMargin: 60
						anchors.left: parent.left; anchors.leftMargin: 80
						CusTextInput {
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
							anchors.fill: parent
							anchors.margins: 2
							font.pointSize: 15
							focus: true
						}

						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
					}

					CusLabel_Left {
			            id: input122
			            x: 10; y: 100
			            width: 200
			            height: 20
			            focus: true
			           text: qsTr("象同轴光") ;
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
			        	font.pointSize: 10
			        }

						 //确认按钮
					Rectangle {
						id: confirmButtonRect122
						width: 150; height: 24;
						radius: 4
							color: "lightgrey"
						border.color: "grey"
						anchors.top: parent.top; anchors.topMargin: 100
						anchors.left: parent.left; anchors.leftMargin: 80
						CusTextInput {
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
							anchors.fill: parent
							anchors.margins: 2
							font.pointSize: 15
							focus: true
						}

						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
					}

					CusLabel_Left {
			            id: input123
			            x: 10; y: 140
			            width: 200
			            height: 20
			            focus: true
			           text: qsTr("垂直白光") ;
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
			        	font.pointSize: 10
			        }

						 //确认按钮
					Rectangle {
						id: confirmButtonRect123
						width: 150; height: 24;
						radius: 4
							color: "lightgrey"
						border.color: "grey"
						anchors.top: parent.top; anchors.topMargin: 140
						anchors.left: parent.left; anchors.leftMargin: 80
						CusTextInput {
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
							anchors.fill: parent
							anchors.margins: 2
							font.pointSize: 15
							focus: true
						}

						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
					}

					CusLabel_Left {
			            id: input124
			            x: 10; y: 180
			            width: 200
			            height: 20
			            focus: true
			           text: qsTr("垂直白光") ;
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
			        	font.pointSize: 10
			        }

						 //确认按钮
					Rectangle {
						id: confirmButtonRect124
						width: 150; height: 24;
						radius: 4
							color: "lightgrey"
						border.color: "grey"
						anchors.top: parent.top; anchors.topMargin: 180
						anchors.left: parent.left; anchors.leftMargin: 80
						CusTextInput {
						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
							anchors.fill: parent
							anchors.margins: 2
							font.pointSize: 15
							focus: true
						}

						visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}
					}

						//确认按钮
				        Rectangle {
				            id: confirmButtonRect
				            width: 80; height: 48;
				            color: "#FF5362"
				            radius: 4
				            anchors.top: parent.top; anchors.topMargin: 400
				            anchors.left: parent.left; anchors.leftMargin: 20
				            visible:
							{
                            		if (0 == index)
	                            		return true
	                            	else if (1 == index)
										return false
									else
										return false
                            	}

							CusButton_Red{
				            id: findText
							 width: parent.width; height: 22
				            Layout.margins:  qGrid.cellmargin
				            text:qsTr("确认")
				            onClicked:
				            {
				            	stackView.push(qmlPath+"Page/PageUsersList.qml")
				            }
				       	 }
							
				        }
						
                    }
                }
            }

            Rectangle {
                width: parent.width
                height: 1
                anchors.bottom: parent.bottom
                color: "gray"
            }
        }
    
		
}

