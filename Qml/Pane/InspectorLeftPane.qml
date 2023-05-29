import QtQml 2.0
import QtQuick 2.9
import QtQuick.Controls 2.2
import TaoQuick 1.0
import "../CombineControl"

Item {
    id: leftPaneItem
    signal loadContent(string path)
    signal loadHome
	

    InspectorContentModel {
        id: demoModel
    }
    Rectangle {
    color: "#ffffff"
        id: home
        //width: parent.width
        //height: CusConfig.fixedHeight
        //color: listView.currentIndex === -1 ? CusConfig.controlBorderColor_pressed : "transparent"
        opacity: 0.8
        anchors {
            top: parent.top
            topMargin: 4
        }
        
    }
    CusListView {

        id: listView
        objectName: "contentListView"
        model: demoModel
        width: parent.width
        anchors {
            //top: home.bottom
            top: parent.top
            topMargin: 4
            bottom: parent.bottom
        }
        currentIndex: -1
        noDataText: qsTr("No Data")

        section.property: "group"
        section.delegate: Item {
            width: listView.width
            height: CusConfig.fixedHeight
            ExpandBtn {
                id: sectionBtn
                text: qsTr(section)
                anchors {
                    left: parent.left
                }
                width: parent.width
                onClicked: {
                    isOpened = !isOpened
					console.log("22222");
                    demoModel.updateSection(section, isOpened)
                }
            }
        }

        delegate: Rectangle {
            color: "#242e42"
            width: listView.width
            height: visible ? CusConfig.fixedHeight +20: 0
            visible: model.visible && model.groupOpen
           // color: ListView.isCurrentItem ? CusConfig.controlBorderColor_pressed : "transparent"
            opacity: 0.8
            CusTextButton {
                id: btn
                anchors {
                    left: parent.left
                    leftMargin: 20
                }
                width: parent.width
                text: qsTr(model.name)
                backgroundColor: "transparent"
                borderColor: "transparent"
                onClicked: {
                    listView.currentIndex = index
                    loadContent(model.source)
                }
                contentItem: Item {
                    width: btn.width
                    height: btn.height
                    BasicText {
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignLeft
                        text: btn.text
                        //color: btn.textColor
                        color: "#ffffff"
                    }
                }
            }
        }
		
    }
}

