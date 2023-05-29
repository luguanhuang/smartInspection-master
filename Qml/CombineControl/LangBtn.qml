import QtQuick 2.2
import QtQuick.Controls 2.2
import TaoQuick 1.0
//import CPPTranslate 1.0

CusButton_Image {
    btnImgUrl: (hovered|| pressed ? imgPath + "Window/lang_white.png" : imgPath + "Window/lang_gray.png")
    tipText: qsTr("Language")
    onClicked: {
        pop.show()

    }

    ListModel{
        id:languageModel
        ListElement{
            name:qsTr("中文")
        }
        ListElement{
            name:qsTr("English")
        }

    }

    CusPopup {
        id: pop
        barColor: CusConfig.controlColor
        backgroundWidth: 100
        backgroundHeight: langListView.contentHeight > 500 ? 500 : langListView.contentHeight + 2
        contentItem: ListView {
            id: langListView
            anchors.fill: parent
            anchors.margins: 2
            model: languageModel
            interactive: false
            clip: true
            delegate: Item {
                width: langListView.width
                height: 36
                CusButton {
                    id: dBtn
                    anchors {
                        fill: parent
                        margins: 4
                    }
                    text: name
                    backgroundColor: cpplanguageController.currentLanguage === index ? CusConfig.controlColor_pressed : (hovered || pressed ? CusConfig.controlColor_hovered : pop.barColor)
                    textColor: CusConfig.textColor
                    borderWidth: 0
                    radius: 4
                    onClicked: {
                        console.log(cpplanguageController.currentLanguage)
                        console.log(index)
                        if(index ===0)
                        {
                            cpplanguageController.loadLanguage(LanguageManager.Chinese);

                        }
                        else
                        {
                            cpplanguageController.loadLanguage(LanguageManager.English);
                        }

//                        cpplanguageController.loadLanguage(LanguageManager.English);

//                        trans.setCurrentLang(modelData)
                    }
                }
            }
        }
    }
}
