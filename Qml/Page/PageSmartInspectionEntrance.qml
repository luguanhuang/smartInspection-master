import QtQuick 2.9
import QtQml 2.0
import QtQuick.Controls 2.2
import TaoQuick 1.0

import "../Pane"
import "../Dialog"
//import Qt.labs.platform 1.1

CusBackground {
    id: mainPage
    width: 1920
    height: 1080

    CusImage {
        id: bgImg
        source: imgPath + "Window/flower.jpg"
        anchors.centerIn: parent
        width: parent.width
        height: parent.height
        opacity: 0.1
    }

    //Windows use native event for frameless
    //Other platform use CusResizeBorder
    CusResizeBorder {
        id: resizeBorder
        visible: Qt.platform.os !== "windows"
        borderWidth: 4
        enabled: visible
        //anchors.fill: rootBackground
        control: view
    }
    AboutDialog {
        id: aboutDialog
        visible:false
    }
    SettingsDialog {
        id: settingDialog
        visible:false
     }

    TitlePane {
        id: title

        width: parent.width
        height: 60

        anchors{
            left:parent.left
            top: parent.top
        }

    }



    Item { //content region---
        id: content
        width: parent.width - resizeBorder.borderWidth * 2
        x: resizeBorder.borderWidth
        anchors {
            top: title.bottom
            bottom: parent.bottom
            bottomMargin: resizeBorder.borderWidth
        }
        CusFPS {
            anchors {
                right: parent.right
                top: parent.top
                rightMargin: 5
            }
        }



        PaneMainButtons{
            anchors
            {

                //verticalCenter: parent.verticalCenter
                left: parent.left
                leftMargin:30
                top:parent.top
                right: parent.right
                bottom: parent.bottom
            }

//            width:500
//            height:300
        }

        //wizard pane on right---
        RightPane {
            id: rightPane
            objectName: "contentRect"
            anchors {
//                left: leftPos  //leftPane.right
//                left: leftPane.right
//                leftMargin: 40
//                right: parent.right
//                top: parent.top
//                bottom: parent.bottom
                left: parent.left// leftPane.right
                leftMargin: 40
                right: parent.right
                top: parent.top
                bottom: parent.bottom
            }
        }
    }


    ClickShow {
        anchors.fill: parent
        anchors.margins: 10
    }


}



//Rectangle {
//    id: mainPage
//    color: "#498ff8"
//    radius: 8

//    Button {
//        text: "主页面-关闭按钮"
//        anchors.centerIn: parent
//        onClicked: {
//            // 销毁关闭主页面
//          //  mainPage.destroy()
//        }
//    }
//}
