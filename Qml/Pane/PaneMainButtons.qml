
import QtQuick 2.2
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Styles 1.4

import TaoQuick 1.0

Item {

    anchors{
        left:parent.left
        rightMargin:10;
        bottomMargin:40;
        leftMargin:10;
        topMargin:20;

        }



       GridLayout{

           id:qGrid

           columns: 3
           anchors{
               fill: parent
               left:parent.left
               right:parent.right
           }


           property int cellHmargin:80
           property int cellVmargin:100


           CusButton_Blue{
               id: btnInspection
               Layout.fillWidth: true
               Layout.fillHeight: true

               Layout.leftMargin:  qGrid.cellHmargin
               Layout.rightMargin: qGrid.cellHmargin
               Layout.topMargin: qGrid.cellVmargin
               Layout.bottomMargin: qGrid.cellVmargin


               property string tooltip: qsTr("inspection");
               hoverEnabled: true

               ToolTip.delay: 250
               ToolTip.timeout: 5000
               ToolTip.visible: hovered && tooltip.length
               ToolTip.text: tooltip


               text: "start inspection"  //"开始检测"
               onClicked:
               {
                   //检测ux---
                   //hide--
                   buttonPane.visible=false; // 不能销毁，否则下面的"主页面"也会跟随销毁，则后面 // 点击"主页面-关闭按钮"，将无法销毁关闭"主页面"

                   // 在主窗口（mainWin）上显示主页面
                  // var compMainPage = Qt.createComponent("qrc:/Qml/Page/PageInspection.qml") .createObject(mainPage, {x:50, y:50, width:200, height:250});

                   myLoader.setSource("qrc:/Qml/Page/PageInspection.qml");
               }
           }

           CusButton_Blue{
               id: btnMachineParam
               Layout.fillWidth: true
               Layout.fillHeight: true

               Layout.leftMargin:  qGrid.cellHmargin
               Layout.rightMargin: qGrid.cellHmargin
               Layout.topMargin: qGrid.cellVmargin
               Layout.bottomMargin: qGrid.cellVmargin

               text:"hardware settings"  //"光学参数设置"
               onClicked:
               {

               }
           }
           CusButton_Blue{
               id: btnImageGrabbing
               Layout.fillWidth: true
               Layout.fillHeight: true

               Layout.leftMargin:  qGrid.cellHmargin
               Layout.rightMargin: qGrid.cellHmargin
               Layout.topMargin: qGrid.cellVmargin
               Layout.bottomMargin: qGrid.cellVmargin

               text:"grabbing image"//"采集图像"
               onClicked:
               {

               }
           }
           CusButton_Blue{
               id: btnReportBrowse
               Layout.fillWidth: true
               Layout.fillHeight: true

               Layout.leftMargin:  qGrid.cellHmargin
               Layout.rightMargin: qGrid.cellHmargin
               Layout.topMargin: qGrid.cellVmargin
               Layout.bottomMargin: qGrid.cellVmargin

               text:"inspection report"  //"检测报告"
               onClicked:
               {

               }
           }
           CusButton_Blue{
               id: btnModifyPWD
               Layout.fillWidth: true
               Layout.fillHeight: true

               Layout.leftMargin:  qGrid.cellHmargin
               Layout.rightMargin: qGrid.cellHmargin
               Layout.topMargin: qGrid.cellVmargin
               Layout.bottomMargin: qGrid.cellVmargin

               text:"modi password"  //"修改密码"
               onClicked:
               {

               }
           }



    }
}
