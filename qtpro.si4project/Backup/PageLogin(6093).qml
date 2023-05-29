
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"

Window {
   //id: splashScreen

    visible: true
    //width: 540
    //height: 360
    width: 360
    height: 650
	color: "#242e42"

    id:loginwin
    property var loginUser: (function(username, password) {
        console.log(username + " -  " + backend.modifier+"  ")
		var ret = user.JudgeInput(username, password, backend.modifier)

        if(0 ==ret)
        {
            message1.text = "Login successful"
            message1.visible = true
			user.setLoginName(username);
			console.log("nickname="+user.getNickname());
            //CLview.close()
            if (backend.modifier == Qt.NoModifier)
            {
            	
				/* var component = Qt.createComponent(qmlPath+"Page/MainWindow.qml")
				if(component.status === Component.Ready)
				{
					console.log("create mainwindow succeed")
                    var win = component.createObject(CLview)
                    //view.islogin = false
                    CLview.setViewSize(1440,960)
                    CLview.moveToCenter()
//					  view.iMax = true
                    //visible = false
				}
				else{
					console.log("create mainwindow failure")
				}*/
				
				stackView.push(qmlPath+"Page/PageAdminPlatform.qml")
            		
            }
            	
            else
            	stackView.push(qmlPath+"Page/PageInspectorPlatform.qml")

			loginwin.close();
            //stackView.push(qmlPath+"Page/PageSmartInspectionEntrance.qml")
           stackView.pop()
           
            //stackView.replace( rootWindow,qmlPath+"Page/PageSmartInspectionEntrance.qml")

        }
        else
        {
            message1.text = "Incorrect login!"
            message1.visible = true
        }

    })

            property var forgotPassword: (function() {
                stackView.push("qrc:/forgotPassword.qml")
            })

        StackView{
            id: stackView
            focus: true
            anchors.fill: parent
        }




          /*Rectangle {
            id: loginimga
            height: 200
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: title.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 10

            Image {
                id: imagea
                anchors.fill: parent
                source: imgPath + "Window/login_back.png"
                anchors.bottomMargin: 8
                fillMode: Image.PreserveAspectFit
            }
        }*/

       Rectangle {
            id: loginimg
            height: 650
            width: 600
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
                source: imgPath + "Window/login.png"
                //anchors.bottomMargin: 8
                //fillMode: Image.PreserveAspectFit
                sourceSize: Qt.size(600, 650)                
				smooth: true
            }
        }

		
        Rectangle {
            id: rect_tips111

            height: 100
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: loginimg.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: -800
            anchors.topMargin: -750

            Label {
                id: label222
                x: 0
                y:150
                opacity: 1
                color: "#ffffff"
                text: qsTr("3DAOI检测系统")
                anchors.top: parent.top
                anchors.topMargin: -30
                font.family: "Segoe UI"
                font.pointSize: 16
                anchors.leftMargin: -600
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }

		Rectangle {
            id: rect_tips22

            height: 30
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: loginimg.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: -710
            anchors.topMargin: -480

            Label {
                id: label22
                x: 0
                y:150
                opacity: 1
                color: "#ffffff"
                text: qsTr("3DAOI自动光学检测系统")
                anchors.top: parent.top
                anchors.topMargin: -30
                font.family: "Segoe UI"
                font.pointSize: 16
                anchors.leftMargin: -550
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }

		Rectangle {
            id: rect_tips33

            height: 30
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: loginimg.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: -550
            anchors.topMargin: -450

            Label {
                id: label33
                x: 0
                y:150
                opacity: 1
                color: "#ffffff"
                text: qsTr("3daoi automatic optical inspection system")
                anchors.top: parent.top
                anchors.topMargin: -30
                font.family: "Segoe UI"
                font.pointSize: 16
                anchors.leftMargin: -600
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }

        Rectangle {
            id: rect_tips

            height: 100
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: loginimg.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 580
            anchors.topMargin: -700

            Label {
                id: label
                x: 0
                y:150
                opacity: 1
                color: "#ffffff"
                text: qsTr("用户登录 / USER LOGIN")
                anchors.top: parent.top
                anchors.topMargin: -30
                font.family: "Segoe UI"
                font.pointSize: 16
                anchors.leftMargin: 80
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }

        Rectangle {
            id: rect_data
            x: 600
            y: 345
            width: 360
            height: 300
            color: "#242e42"
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 0

           

			CusLabel {
				color: "#ffffff"
                id: cusLabel
                width: 120
                height: 20
                text: "账号"
                anchors.left: parent.left
                anchors.top: parent.top
                anchors.leftMargin: 80
                anchors.topMargin: -150
            }

            CusTextField {
            //color: "#242e42"
				
            //textColor: "black"
                id: cus_tf_username
                height: 30
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                placeholderText: qsTr("user")
                anchors.topMargin: -120
                anchors.rightMargin: 50
                anchors.leftMargin: 80
                onTextChanged: {
                    cusLable_warn.visible = false
                }
            }

			
			CusLabel {
							color: "#ffffff"
							id: cusLabel1
							width: 120
							height: 20
							text: "密码"
							anchors.left: parent.left
							anchors.top: parent.top
							anchors.leftMargin: 80
							anchors.topMargin: -80
						}

            CusTextField {
            color: "#242e42"
                id: cus_tf_passwd
                height: 30
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: cus_tf_username.bottom
                anchors.topMargin: 40
                placeholderText: qsTr("password")
                anchors.rightMargin: 50
                anchors.leftMargin: 80
                echoMode: TextInput.Password
//                TextInput.passwordCharacter: "*"
                onTextChanged: {
                    cusLable_warn.visible = false
                }

            }

			CusLabel {
							color: "#ffffff"
							id: cusLabel2
							width: 120
							height: 20
							text: "权限"
							anchors.left: parent.left
							anchors.top: parent.top
							anchors.leftMargin: 80
							anchors.topMargin: 0
						}

			CusComboBox 
		{
		
			 height: 30
			 	 anchors.topMargin: 120
			//anchors.top: parent.top; anchors.topMargin: 140
			//anchors.left: parent.left; anchors.leftMargin: 150
			 anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: cus_tf_username.bottom
                anchors.rightMargin: 50
                anchors.leftMargin: 80
			//model: ["admin", "inspector"]
			//width: 120
			// displayText: qsTr(currentText) + trans.transString
			textRole: "text"
			valueRole: "value"
			onActivated: backend.modifier = currentValue
			Component.onCompleted: currentIndex = indexOfValue(backend.modifier)

			model: [{ value: 0, text: qsTr("admin") },
            { value: 1, text: qsTr("inspector") },
            { value: 2, text: qsTr("programmer") }
           // { value: Qt.ControlModifier, text: qsTr("Control") }
        	]
       }

			 CusButton_Blue{
                id:btnLogin22
                //x:80
                width: 220
                height: 30
                text: qsTr("Sign in")

				anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top


                anchors.rightMargin: 50
                anchors.leftMargin: 80
				
                //anchors.top: cusLable_warn.bottom
                anchors.topMargin: 110
                font.pointSize: 10
                //anchors.rightMargin: 20
                //anchors.leftMargin: 140
				
                font.family: CusConfig.fontFamily
                
                onClicked: loginUser(cus_tf_username.text, cus_tf_passwd.text)

            }

			Text {
                id: message1
				anchors.top: parent.top; anchors.topMargin: 260
            	anchors.left: parent.left; anchors.leftMargin: 120
                text: ""
                //color: "gold"
                font { family:"Consolas" ; pointSize:12 }
                visible: false
                anchors {
                    top: forgotpass.bottom
                    left: forgotpass.left
                    topMargin: 15
                }
            }

            CusLabel {
                id: cusLable_warn
                height: visible?40:0
                //color: "#fb0a0a"
                text: qsTr("* user or password error")
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: cus_tf_passwd.bottom
                anchors.rightMargin: 30
                anchors.leftMargin: 30
                anchors.topMargin: 10
                visible: false
            }
        }

    
		  
		

		
			QtObject {
					id: backend
					property int modifier
				}
		
		
		//可能是qmltype信息不全，有M16警告，这里屏蔽下
			//@disable-check M16
            onClosing: function(closeevent){
				console.log("close");
				 CLview.close()
				//CloseEvent的accepted设置为false就能忽略该事件
				//closeevent.accepted = false
            }
		//Component.onCompleted: {
		//
			//   CLview.close()
			 
		   //}

    }




