import QtQuick 2.12
import QtQuick.Controls 2.12
import TaoQuick 1.0

CusButton_Image {
    width: 40
    height: 40

    property var mainwindow
    btnImgUrl: (hovered|| pressed ? imgPath + "Window/user_white.png" : imgPath + "Window/user_gray.png")
    tipText: qsTr("user")
    onClicked: {
        userBox.show()
    }
    CusPopup {
        id: userBox

        barColor: CusConfig.controlColor
        backgroundWidth: 270
        backgroundHeight: 180
        borderColor: CusConfig.controlBorderColor
        contentItem: Rectangle {
            anchors.fill: parent
            color: "#00ffffff"
            Column{
//                anchors.fill: parent
                anchors.centerIn: parent
                spacing: 5
                Row{
                    spacing: 5
                    height: 40

                    CusLabel{
                        height: 40

                        text: qsTr("userName:")
                        font.pixelSize: 14

                    }
                    CusLabel{
                        height: 40

                        text:qsTr("program")
                        font.pixelSize: 20
                    }
                }
                Column{

//                    padding: 10
                    spacing: 10
                    CusButton_Blue{
                        height: 40
                        width: 120
                        text: qsTr("Modify Password")
                        onClicked: {
                            modifyPasswordDialog.showParentCenter()
                        }

                    }

                    CusButton_Blue{
                        height: 40
                        width: 120
                        text: qsTr("Logout")
                        onClicked: {
                        
                            /*var component = Qt.createComponent("qrc:/Page/SplashScreen.qml")
                            if(component.status === Component.Ready)
                            {
                                userBox.hide()
                                var win = component.createObject(view)
                                view.islogin = true
                                view.setViewSize(360,560)
                                view.moveToCenter()
                                win.visible = true
                                mainwindow.visible = false
                            }*/
                        }

                    }
                }

            }




        }

    }
}
