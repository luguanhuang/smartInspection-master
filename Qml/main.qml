import QtQuick 2.9
import QtQml 2.0
import QtQuick.Controls 2.2
import TaoQuick 1.0
import QtQuick.Window 2.2
import "./Page"
import "./Pane"
import "./Dialog"
//import Qt.labs.platform 1.1





Item {
    id: mainPage
    visible: true

//    width: 1920
//    height: 1080

// 1. Loader加载不同组件，实现切换页面的功能
    Loader{
        id:myLoader
        anchors.centerIn: parent // 弹出的界面都居中显示
    }

    Connections {
            target: myLoader.item
            onMessage: console.log(msg)
        }
    Connections{
            target: myLoader
            onLoaded:{
                console.log("Loaded");
                console.log(qsTr('Clicked on background. Text: "' + "-------" + '"'))
            }
        }

    //Component.onCompleted: myLoader.sourceComponent = loginPage // 一开始显示登录页面

////    // 2. 登录页面-Component
//    Component{
//        id:loginPage
//        PageLogin {
//            width: 300
//            height: 200
//            anchors.centerIn: parent
//        }
//    }

//    // 3.主页面-Component
//    Component{
//        id:mainPage
//        PageSmartInspectionEntrance {
//           // width: 500
//            //height: 350
//            anchors.centerIn: parent
//        }
//    }



    //    // 2. 登录页面-Component


            PageLogin {
                id:loginPage

                //width: 360
                width: 1000
    			height: 650
                //anchors.centerIn: parent
            }


        // 3.主页面-Component


            /*PageSmartInspectionEntrance {
                id:buttonPane
                visible:true
                anchors{
                     left:parent.left
                     top:parent.top-10
                }
                anchors.centerIn: parent

        }*/


}




//CusPopup {
//    id: loginPage
//    width: 400
//    height: 300

//    clip:true

//    Button {
//        text: "登录页面-登录按钮"
//        anchors.centerIn: parent
//        onClicked: {
//            // 隐藏登录页面
//            loginPage.visible = false // 不能销毁，否则下面的"主页面"也会跟随销毁，则后面
//            // 点击"主页面-关闭按钮"，将无法销毁关闭"主页面"


//            // 在主窗口（mainWin）上显示主页面
//            var compMainPage = Qt.createComponent("qrc:/Qml/Page/PageSmartInspectionEntrance.qml")
//            //.createObject(mainWin );
//            .createObject(mainWin, {x:50, y:50, width:2000, height:2500});


//           // loginPage.destroy()
//        }
//    }
//}

