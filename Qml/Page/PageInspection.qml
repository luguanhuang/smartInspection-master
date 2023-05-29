import QtQuick 2.9
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12
import TaoQuick 1.0



    CusPopup {


        GridLayout{
            columns: 3
        }

        ComboBox {
            editable: false

            textRole: "text"
            valueRole: "value"
            // When an item is selected, update the backend.
            onActivated: backend.modifier = currentValue
            // Set the initial currentIndex to the value stored in the backend.
            Component.onCompleted: currentIndex = indexOfValue(backend.modifier)


            model: ListModel {
                id: model
                ListElement { text: "Banana" }
                ListElement { text: "Apple" }
                ListElement { text: "Coconut" }
            }
            onAccepted: {
                if (find(editText) === -1)
                    model.append({text: editText})
            }
        }


//        Button {
//            text: "登录页面-登录按钮"
//            anchors.centerIn: parent




//            onClicked:
//            {
//                //检测ux---
//                //hide--
//                buttonPane.visible=true; // 不能销毁，否则下面的"主页面"也会跟随销毁，则后面 // 点击"主页面-关闭按钮"，将无法销毁关闭"主页面"

//                // 在主窗口（mainWin）上显示主页面
//               // var compMainPage = Qt.createComponent("qrc:/Qml/Page/PageInspection.qml") .createObject(mainPage, {x:50, y:50, width:200, height:250});
//                myLoader.setSource("qrc:/Qml/Page/PageSmartInspectionEntrance.qml");
//            }
//        }

    }



