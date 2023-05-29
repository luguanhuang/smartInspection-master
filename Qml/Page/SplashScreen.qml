import QtQuick 2.12
import QtQuick.Controls 2.12
//import QtQuick.Window 2.15
//import QtGraphicalEffects 1.15
//import QtQuick.Timeline 1.0
import TaoQuick 1.0

Item {
    id: splashScreen
    anchors.fill: parent
    visible: true

    // Internal Functions
    QtObject{
        id: internal

        function checkLogin(username, password){
            if(username === "1" && password === "1"){
                //var qmlPath1 = "file:///E:/smartpcbprogram/smartpcbprogram/utils/TaoQuick_POC/qml"
                //使用C++ modelItem中的数据进行判断用户名和密码的正确性
                //var component = Qt.createComponent(qmlPath1+"/Page/MainWindow.qml")
                
                console.log("component.status="+component.status);
				console.log("Component.Ready="+Component.Ready);
				console.log("Component.Error="+Component.Error);
				console.log("Component.errorString="+Component.errorString);
				
                if(component.status === Component.Ready)
                {
                    var win = component.createObject(view)
                    view.islogin = false
                    view.setViewSize(1440,960)
                    view.moveToCenter()
//                    view.iMax = true
                    visible = false
                }
                else{
                    console.log("create mainwindow failure11")
                }


            }
            else{
                cusLable_warn.visible = true
            }
        }
    }

    Component.onCompleted: {
        view.setViewSize(360,560)
    }

    Rectangle {
        id: bg
        color: "#015cf2"
        radius: 10
        anchors.fill: parent
        z: 1

        property alias blankItem: blankItem

        Rectangle {
            id: title
            x: 0
            y: 0
            width: 360
            height: 58
            color: "#00ffffff"

            CusButton_Blue {
                id: btnClose
                x: 315
                y: 15
                width: 30
                height: 30
                opacity: 1
                text: "X"
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.topMargin: 5
                anchors.rightMargin: 5
                font.pointSize: 10
                onClicked: view.close()
            }

            Item {
                id: blankItem
                x: 4
                y: 4
                anchors.rightMargin: 10
                objectName: "blankItem"
                anchors {
                    left: parent.left
                    leftMargin: 0
                    right: btnClose.left
                    top: parent.top
                    topMargin: 0
                    bottom: parent.bottom
                }
                Component.onCompleted: {
                    view.setTitleItem(blankItem)
                }
            }
        }

        Rectangle {
            id: loginimg
            height: 200
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: title.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 10

            Image {
                id: image
                anchors.fill: parent
                source: "qrc:/images/login_back.png"
                anchors.bottomMargin: 8
                fillMode: Image.PreserveAspectFit
            }
        }

        Rectangle {
            id: rect_tips
            height: 68
            color: "#00ffffff"
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: loginimg.bottom
            anchors.rightMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 10

            Label {
                id: label
                x: 100
                opacity: 1
                color: "#ffffff"
                text: qsTr("programer to login")
                anchors.top: parent.top
                anchors.topMargin: 0
                font.family: "Segoe UI"
                font.pointSize: 16
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Label {
                id: label1
                x: 55
                opacity: 1
                color: "#ffffff"
                text: qsTr("use user&passwd")
                anchors.top: label.bottom
                anchors.topMargin: 10
                anchors.horizontalCenterOffset: 0
                font.family: "Segoe UI"
                anchors.horizontalCenter: parent.horizontalCenter
                font.pointSize: 10
            }
        }

        Rectangle {
            id: rect_data
            x: 0
            y: 345
            width: 360
            height: 215
            color: "#00ffffff"
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 0

            CusButton_Blue{
                id:btnLogin
                x:30
                width: 300
                height: 40
                text: qsTr("Sign in")
                anchors.top: cusLable_warn.bottom
                anchors.topMargin: 10
                font.pointSize: 10
                font.family: CusConfig.fontFamily
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: internal.checkLogin(cus_tf_username.text, cus_tf_passwd.text)

            }

            CusTextField {
                id: cus_tf_username
                height: 40
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                placeholderText: qsTr("user")
                anchors.topMargin: 3
                anchors.rightMargin: 30
                anchors.leftMargin: 30
                onTextChanged: {
                    cusLable_warn.visible = false
                }
            }

            CusTextField {
                id: cus_tf_passwd
                height: 40
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: cus_tf_username.bottom
                anchors.topMargin: 20
                placeholderText: qsTr("password")
                anchors.rightMargin: 30
                anchors.leftMargin: 30
                echoMode: TextInput.Password
//                TextInput.passwordCharacter: "*"
                onTextChanged: {
                    cusLable_warn.visible = false
                }

            }

            CusLabel {
                id: cusLable_warn
                height: visible?40:0
                color: "#fb0a0a"
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

    }

    ClickShow{
        id:click_show
        anchors.fill: parent
    }


}

