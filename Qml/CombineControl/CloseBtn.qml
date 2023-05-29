import QtQuick 2.2

import TaoQuick 1.0

CusButton_Image {
    implicitWidth: 24
    implicitHeight: 24
    tipText: qsTr("Close")
    btnImgUrl: imgPath + (hovered || pressed ? "Window/close_white.png" : "Window/close_gray.png")
}
