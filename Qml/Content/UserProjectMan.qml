import QtQuick 2.15
import QtQuick.Controls 2.15
import TaoQuick 1.0

//import "../Flow"
//import "../Flow/InspectsProject"
import "../../Qml/Page"
import "../Page"
Item {
    id: componentManItem
//    anchors.fill: parent

//    Rectangle{
//        id:repeaterRect
//        width: 200
//        height: 500
//        Repeater{
//            model:["test1","test2","test3"]
//            delegate: Button{
//                y:index * 50
//                width: 100
//                height: 50
//                text:modelData
//            }
//        }
//    }



//    Rectangle{
//        anchors.left: repeaterRect.right
//        width: 200
//        color: "red"
//        height: 200
//    }


    FlowContentPane{
        anchors.fill: parent
        id:inspectsProjectStackView
        initialItem: Qt.resolvedUrl("qrc:/Qml/Page/PageUserProjectTables.qml")
    }

//    Component{
//        id:inspectProjectComp

//        InspectsProjectTables{
//            id:inspectProjectPage
////            anchors.fill: parent
//        }
//    }

//    Component{
//        id:addInspectsProjectComp
//        AddInspectsProject{
//            id:addInspectsProjectPage
//            anchors.centerIn: parent

//            onNextClicked: {
//                inspectsProjectStackView.push(inspectProjectComp)
//            }
//            onForwardClicked: {
//                inspectsProjectStackView.push(inspectProjectComp)
//            }
//        }
//    }





//    CusLabel {
//        text: qsTr("InspectsProject management")
//        horizontalAlignment: Label.AlignHCenter
//        verticalAlignment: Label.AlignVCenter
//        wrapMode: Label.Wrap
//        anchors.centerIn: parent
//    }


}
