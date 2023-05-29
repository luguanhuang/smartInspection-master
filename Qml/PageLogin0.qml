
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import TaoQuick 1.0


//CusPopup{
//    width: 400
//    height: 300




//    CusButton {
//        text: "登录页面-登录按钮"
//        anchors.centerIn: parent
//        onClicked: myLoader.sourceComponent = mainPage // 切换显示主页面
//    }
//}


CusPopup {
    id: loginPage
    width: 400
    height: 300

    clip:true

    Button {
        text: "登录页面-登录按钮"
        anchors.centerIn: parent
        onClicked: {
            // 隐藏登录页面
            loginPage.visible = false // 不能销毁，否则下面的"主页面"也会跟随销毁，则后面
            // 点击"主页面-关闭按钮"，将无法销毁关闭"主页面"


            // 在主窗口（mainWin）上显示主页面
            var compMainPage = Qt.createComponent("qrc:/Qml/Page/PageSmartInspectionEntrance.qml")
            //.createObject(mainWin );
            .createObject(mainWin, {x:50, y:50, width:2000, height:2500});


           // loginPage.destroy()
        }
    }
}




//Item {
//    id: rootWindow
//    //width: 640
//    //height: 480

//    width: 540
//    height: 360

//    visible: true
// //   title: qsTr("Login Page")
//  //  color: "#7fbf35"

//    Button {
//           text: "登录页面-登录按钮"
//           anchors.centerIn: parent
//           onClicked: {
//               // 隐藏登录页面
//               loginPage.visible = false // 不能销毁，否则下面的"主页面"也会跟随销毁，则后面
//               // 点击"主页面-关闭按钮"，将无法销毁关闭"主页面"

//               // 在主窗口（mainWin）上显示主页面
//               var compMainPage = Qt.createComponent("PageSmartInspectionEntrance.qml")
//               .createObject(mainWin );
//               //.createObject(mainWin, {x:50, y:50, width:200, height:250});
//           }
//    }


//    property var loginUser: (function(username, password) {
//        //console.log(username + " - " + password)
//        //API.readJsonFile("db.json", rootWindow)

//        loginUsername.text = ""
//        loginPassword.text = ""

//        if(username==="mehmet" && password==="123")
//        {
//            message1.text = "Login successful"
//            message1.visible = true
//            stackView.push("qrc:/Qml/Page/PageSmartInspectionEntrance.qml")
//        }
//        else
//        {
//            message1.text = "Incorrect login!"
//            message1.visible = true
//        }

//    })

//            property var forgotPassword: (function() {
//                stackView.push("qrc:/forgotPassword.qml")
//            })

//        StackView{
//            id: stackView
//            focus: true
//            anchors.fill: parent
//        }


//        ColumnLayout {
//            width: parent.width
//            spacing: 15

//            Text {
//                id: text2
//                text: "Welcome to login page!"
//                color: "beige"
//                font { family:"Consolas" ; bold:true ; pointSize:20 }
//                anchors.horizontalCenter: parent.horizontalCenter
//                topPadding: 30
//                //anchors.centerIn: parent
//            }

//            TextField {
//                id: loginUsername
//                placeholderText: qsTr("Username")
//                Layout.preferredWidth: parent.width/1.5
//                Layout.alignment: Qt.AlignHCenter
//                color: "#0e0e0e"
//                font.pointSize: 14
//                font.family: "Consolas"
//                leftPadding: 30

//                background: Rectangle {
//                    radius: 20
//                    color: "beige"
//                }
//            }

//            TextField {
//                id: loginPassword
//                placeholderText: qsTr("Password")
//                Layout.preferredWidth: parent.width/1.5
//                Layout.alignment: Qt.AlignHCenter
//                color: "#0e0e0e"
//                font.pointSize: 14
//                font.family: "Consolas"
//                leftPadding: 30
//                echoMode: TextField.Password

//                background: Rectangle {
//                    radius: 20
//                    color: "beige"
//                }
//            }


//            Rectangle {
//                id: loginButton
//                width: 100
//                height: 40
//                color: "beige"
//                radius: 20
//                border.color: "#202020"
//                anchors.horizontalCenter: parent.horizontalCenter

//                Text {
//                    id: text3
//                    text: "Login"
//                    color: "#202020"
//                    font.family: "Consolas"
//                    font.pointSize: 14
//                    anchors.centerIn: parent
//                }

//                MouseArea {
//                    anchors.fill: parent
//                    onClicked: {
//                        loginUser(loginUsername.text, loginPassword.text)
//                    }
//                }
//            }



//            Text {
//                id: forgotpass
//                text: '<html><style type="text/css"></style><a href="http://google.com">Forgot password?</a></html>' //qsTr("Forgot password?")
//                linkColor: "#f0f0f0"
//                Layout.alignment: Qt.AlignHCenter
//                font.pointSize: 14
//                color: "#f0f0f0"
//                Layout.margins: 10
//                onLinkActivated: forgotPassword()
//            }

//            Text {
//                id: message1
//                text: ""
//                color: "gold"
//                font { family:"Consolas" ; pointSize:12 }
//                visible: false
//                anchors {
//                    top: forgotpass.bottom
//                    left: forgotpass.left
//                    topMargin: 15
//                }
//            }
//        }




//    }
