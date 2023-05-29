
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
   	visible: true
    width: 400
    height: 200
    title: qsTr("prompt\  提示")

		Rectangle {
        width: 200
        height: 80
        //color: "red"
 
        TextInput {
            id: input1
            x: 60; y: 68
            width: 300
            height: 20
            focus: true
            text: "confirm to delete the record? \确定要删除该数据吗？ "
        }

		 //确认按钮
        Rectangle {
            id: confirmButtonRect
            width: 100; height: 60;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 90
            anchors.left: parent.left; anchors.leftMargin: 90
            Text {
                id: confirmText
                width: parent.width; height: 22
                color: "#FFFFFF"
                font.pixelSize: 16
                font.family: "微软雅黑"
                anchors.centerIn: parent
                text: qsTr("确认")
                anchors.horizontalCenter: parent.horizontalCenter
                horizontalAlignment: Text.AlignHCenter
            }
 
            MouseArea {
                id: changePasswdConfirmMouse
                anchors.fill: parent;
                onClicked: {
                    var orgPasswd = inputOrgPasswd.text;
                    var newPasswd = inputNewPasswd.text;
                    var newPasswdAgain = inputPasswdAgain.text
                    console.log("changePasswdConfirmMouse=orgPasswd=" + orgPasswd + "=newPasswd=" + newPasswd + "=newPasswdAgain=" + newPasswdAgain)
 
                }
            }
        }

		 //确认按钮
        Rectangle {
            id: confirmButtonRect1
            width: 100; height: 60;
            color: "#FF5362"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: 90
            anchors.left: parent.left; anchors.leftMargin: 230
            Text {
                id: confirmText1
                width: parent.width; height: 22
                color: "#FFFFFF"
                font.pixelSize: 16
                font.family: "微软雅黑"
                anchors.centerIn: parent
                text: qsTr("取消")
                anchors.horizontalCenter: parent.horizontalCenter
                horizontalAlignment: Text.AlignHCenter
            }
 
            MouseArea {
                id: changePasswdConfirmMouse1
                anchors.fill: parent;
                onClicked: {
                    var orgPasswd = inputOrgPasswd.text;
                    var newPasswd = inputNewPasswd.text;
                    var newPasswdAgain = inputPasswdAgain.text
                    console.log("changePasswdConfirmMouse=orgPasswd=" + orgPasswd + "=newPasswd=" + newPasswd + "=newPasswdAgain=" + newPasswdAgain)
 
                }
            }
        }
     }
    
}

