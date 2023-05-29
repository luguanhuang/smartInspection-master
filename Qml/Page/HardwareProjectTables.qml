import QtQuick 2.15
//import QtQuick.Controls 2.15
import QtQuick.Controls 1.4

import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import Qt.labs.qmlmodels 1.0

import QtQuick.Dialogs 1.2

//import QtQuick.Dialogs 1.2
import Qt.labs.platform 1.1

import QtQuick.Controls.Styles 1.4

import QtQuick.Dialogs 1.2

import TaoQuick 1.0
	import QtQuick.Shapes 1.11



import TaoQuick 1.0
import "../Page"
import "../Pane"
import "../Dialog"


Item {

//    anchors.fill: parent
    signal nextClicked;

  

    Item {
        id: root
        anchors.fill: parent

		 width: 230
    height: 480

Rectangle
{
	id:viewInfo
    width: 400
    height:700
	x:10
	y:50
	
    property var context
    property int redvalue:0
    property int coaxialvalue:0
	property int greenvalue:0
	property int bluevalue:0
	property int horizontalvalue:0
	
	//property int context=0
	//property int context=0
	//property int context=0
	//property int context=0
	
	TabView {
    id: frame	
    anchors.fill: parent
    //anchors.margins: 4

	onCurrentIndexChanged: //when you choose different tabs by clicking, this slot function is called automatically.
    { //console.log("onCurrentIndexChanged!!!!!") 
        if(currentIndex==0)
        { 
        
        	viewInfo.width = 400
			imagefill.visible = true
		image1.visible = true
		image2.visible = true
		image3.visible = true
		image4.visible = true
//		savebtn.visible = true
            console.log("onCurrentIndexChanged!!currentindex=0!!!") 
        } 
        else if(currentIndex==1)
        { 
        	
		imagefill.visible = true
		image1.visible = true
		image2.visible = true
		image3.visible = true
		image4.visible = true
//		savebtn.visible = false
        	viewInfo.width = 400
            console.log("onCurrentIndexChanged!!currentindex=1!!!") 
        } 		
        else if(currentIndex==2)
        { 
        	
		imagefill.visible = false
		image1.visible = false
		image2.visible = false
		image3.visible = false
		image4.visible = false
            console.log("onCurrentIndexChanged!!currentindex=2!!!") 
			viewInfo.width = 1000
        } 
    } 
	
    Tab 
	{
		title: "光源" 
		x:60
		y:0
		Column
			{
			 anchors.centerIn: parent
	        spacing: 20
			width: 400
		CusLabel_Left {
            id: input2
            x: 10; y: 16
            width: 40
            height: 20
            focus: true
            color: "#ffffff"
            font.pixelSize: 11
           text: qsTr("同轴光") ;
        	font.pointSize: 10
        }			 					

		 Binding 
		 {
        	target: m_Slider
        	property: "value"
        	value: CoaxialLight.value
    	}
		
		Slider
	    {
	    	id: m_Slider
	        width: 360
	        height: 10
	        x:0
			y:0
	        //x: (parent.width - width)/2
	        //y: (parent.height - height)/2
	         maximumValue: 100
	        value: 0
	        stepSize: 1
	        orientation: Qt.Horizontal  //滑块水平放置
	        onValueChanged:
	        {
	            //console.log("Coaxial light = "+value)
	            viewInfo.coaxialvalue = value
				hardwareconf.SlideMove(0, value);
	        }

	        style: SliderStyle
	        {
	            handle: Rectangle

	            {
	                anchors.centerIn: parent;
	                color:control.pressed ? "white":"lightgray";
	                border.color: "gray";
	                border.width: 2;
	                width: 32;
	                height: 24;
	                radius: 12;
	                Text{

	                    anchors.centerIn: parent;
	                    text: control.value;
	                    color: "red";
	                }

	            }
	            groove:Rectangle
	            {
	                implicitHeight:8
	                color:"gray"
	                radius:8
	            }
	        }

	    }

		CusLabel_Left {
            id: input3
            x: 10; y: 43
            width: 40
            height: 20
            focus: true
            color: "#ffffff"
            font.pixelSize: 11
           text: qsTr("红光") ;
        	font.pointSize: 10
        }

		Binding 
		 {
        	target: redlight
        	property: "value"
        	value: RedLight.value
    	}

		Slider
	    {
	        width: 360
	        height: 10
	        id:redlight
	        x:0
			y:63
	        //x: (parent.width - width)/2
	        //y: (parent.height - height)/2
	         maximumValue: 100
	        value: 0
	        stepSize: 1
	        orientation: Qt.Horizontal  //滑块水平放置
	        onValueChanged:
	        {
	            //console.log("Red light = "+value)
	            viewInfo.redvalue = value
				hardwareconf.SlideMove(1, value);
	        }

	        style: SliderStyle
	        {
	            handle: Rectangle

	            {
	                anchors.centerIn: parent;
	                color:control.pressed ? "white":"lightgray";
	                border.color: "gray";
	                border.width: 2;
	                width: 32;
	                height: 24;
	                radius: 12;
	                Text{

	                    anchors.centerIn: parent;
	                    text: control.value;
	                    color: "red";
	                }

	            }
	            groove:Rectangle
	            {
	                implicitHeight:8
	                color:"gray"
	                radius:8
	            }
	        }

	    }

		CusLabel_Left {
            id: input5
            x: 10; y: 73
            width: 40
            height: 20
            focus: true
            color: "#ffffff"
            font.pixelSize: 11
           text: qsTr("绿光") ;
        	font.pointSize: 10
        }

		Binding 
		 {
        	target: greenlight
        	property: "value"
        	value: GreenLight.value
    	}

		Slider
	    {
	    	id:greenlight
	        width: 360
	        height: 10
	        x:0
			y:93
	        //x: (parent.width - width)/2
	        //y: (parent.height - height)/2
	         maximumValue: 100
	        value: 0
	        stepSize: 1
	        orientation: Qt.Horizontal  //滑块水平放置
	        onValueChanged:
	        {
	            //console.log(value)
	            viewInfo.greenvalue = value
				hardwareconf.SlideMove(2, value);
	        }

	        style: SliderStyle
	        {
	            handle: Rectangle

	            {
	                anchors.centerIn: parent;
	                color:control.pressed ? "white":"lightgray";
	                border.color: "gray";
	                border.width: 2;
	                width: 32;
	                height: 24;
	                radius: 12;
	                Text{

	                    anchors.centerIn: parent;
	                    text: control.value;
	                    color: "red";
	                }

	            }
	            groove:Rectangle
	            {
	                implicitHeight:8
	                color:"gray"
	                radius:8
	            }
	        }

	    }

		
		CusLabel_Left {
					id: input6
					x: 10; y: 113
					width: 40
					height: 20
					focus: true
					color: "#ffffff"
					font.pixelSize: 11
				   text: qsTr("蓝光") ;
					font.pointSize: 10
				}

		Binding 
		 {
        	target: bluelight
        	property: "value"
        	value: BlueLight.value
    	}

		Slider
	    {
	    	id:bluelight
	        width: 360
	        height: 10
	        x:0
			y:133
	        //x: (parent.width - width)/2
	        //y: (parent.height - height)/2
	         maximumValue: 100
	        value: 0
	        stepSize: 1
	        orientation: Qt.Horizontal  //滑块水平放置
	        onValueChanged:
	        {
	            //console.log(value)
	            viewInfo.bluevalue = value
				hardwareconf.SlideMove(3, value);
	        }

	        style: SliderStyle
	        {
	            handle: Rectangle

	            {
	                anchors.centerIn: parent;
	                color:control.pressed ? "white":"lightgray";
	                border.color: "gray";
	                border.width: 2;
	                width: 32;
	                height: 24;
	                radius: 12;
	                Text{

	                    anchors.centerIn: parent;
	                    text: control.value;
	                    color: "red";
	                }

	            }
	            groove:Rectangle
	            {
	                implicitHeight:8
	                color:"gray"
	                radius:8
	            }
	        }

	    }

		CusLabel_Left {
					id: input7
					x: 10; y: 153
					width: 80
					height: 20
					focus: true
					color: "#ffffff"
					font.pixelSize: 11
				   text: qsTr("水平日光") ;
					font.pointSize: 10
				}

		
		Binding 
			 {
				target: horizontallight
				property: "value"
				value: HorizontalLight.value
			}

		Slider
	    {
	    	id: horizontallight
	        width: 360
	        height: 10
	        x:0
			y:173
	        //x: (parent.width - width)/2
	        //y: (parent.height - height)/2
	         maximumValue: 100
	        value: 0
	        stepSize: 1
	        orientation: Qt.Horizontal  //滑块水平放置
	        onValueChanged:
	        {
				viewInfo.horizontalvalue = value
				hardwareconf.SlideMove(4, value);
	        }

	        style: SliderStyle
	        {
	            handle: Rectangle

	            {
	                anchors.centerIn: parent;
	                color:control.pressed ? "white":"lightgray";
	                border.color: "gray";
	                border.width: 2;
	                width: 32;
	                height: 24;
	                radius: 12;
	                Text{

	                    anchors.centerIn: parent;
	                    text: control.value;
	                    color: "red";
	                }

	            }
	            groove:Rectangle
	            {
	                implicitHeight:8
	                color:"gray"
	                radius:8
	            }
	        }

	    }

		 /*Text {
            id: rowsliderStat
            text: qsTr("同轴光")
            font.pixelSize: 11
            color: "green"
        }*/
	}		
}
    Tab 
    { 
		title: "相机" 
		x:60
		y:0
		Column
			{
			 anchors.centerIn: parent
	        spacing: 20

		CusLabel_Left {
            id: input22
            x: 10; y: 20
            width: 100
            height: 20
            focus: true
            color: "#ffffff"
            font.pixelSize: 15
           text: qsTr("相机编号") ;
        	font.pointSize: 10
        }			 	

		QtObject {
					id: backend
					property int modifier
				}
		
		 CusComboBox {
                id: comb_unit
                width: 200
                height: 40
                anchors.left: input22.right
                anchors.top: parent.top
                anchors.topMargin: 20
                anchors.leftMargin: 10
                //textRole: "text"
                //valueRole: "value"
                //model:["cm","mm","μm"]
                textRole: "text"
			valueRole: "value"
			onActivated: backend.modifier = currentValue
			Component.onCompleted: currentIndex = indexOfValue(backend.modifier)

			model: [{ value: 0, text: qsTr("相机1") },
            { value: 1, text: qsTr("相机2") },
            { value: 2, text: qsTr("相机3") }
           // { value: Qt.ControlModifier, text: qsTr("Control") }
        	]
                //displayText: currentText
            }

		CusLabel_Left {
            id: input31
            x: 10; y: 80
            width: 100
            height: 20
            focus: true
            color: "#ffffff"
            font.pixelSize: 15
           text: qsTr("曝光值") ;
        	font.pointSize: 10
        }

		 CusTextField {
            //color: "#242e42"
				
            //textColor: "black"
                id: cus_tf_username11
                height: 30
                width: 200
                 x: 110; y: 80
	            
	            //height: 20
                placeholderText: qsTr("")
                //anchors.topMargin: -120
                //anchors.rightMargin: 50
                //anchors.leftMargin: 80
                onTextChanged: {
                    //cusLable_warn.visible = false
                }
            }

		 //确认按钮
        Rectangle {
            id: savebtn
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4

			anchors.top: parent.top; anchors.topMargin: 200
            anchors.left: parent.left; anchors.leftMargin: 130
             CusButton_Red{
            id: findText21
			 width: parent.width; height: 22
            //Layout.margins:  qGrid.cellmargin
            text:qsTr("保存")
            onClicked:
            {
            	 stackView.push(qmlPath+"Page/Page3Drotation.qml")
            	
            }
       	 }			  
        }
		 
		
			}
	}
    Tab 
	{
		title: "轴"

		Rectangle{
  width: 800
  height:800
  color:"#2f3b52"

	CusLabel_Left {
            id: input111
            x: 450; y: 70
            width: 200
            height: 150
            focus: true
            color: "#ffffff"
            font.pixelSize: 30
           text: qsTr("相机控制") ;

        }
	

	CusLabel_Left {
            id: input112
            x: 650; y: 70
            width: 200
            height: 150
            focus: true
            color: "#ffffff"
            font.pixelSize: 30
           text: qsTr("运动控制") ;

        }
  
Canvas{
 anchors.fill:parent
	height: 200
    width: 200
    property  var context1;
onPaint:{
     var context = getContext("2d");

	// the triangle
	context.beginPath();
	context.moveTo(700, 200);
	context.lineTo(670, 250);
	context.lineTo(730, 250);
	context.fillStyle = "#FFCC00";
	context.fill();

	context.closePath();   



	context1 = getContext("2d");

	// the triangle
	context1.beginPath();
	context1.moveTo(600, 300);
	context1.lineTo(630, 270);
	context1.lineTo(630, 330);
	//context1.closePath();   


	// the fill color
	context1.fillStyle = "#FFCC00";
	context1.fill();
	context1.closePath();  

	var context2 = getContext("2d");

	// the triangle
	context2.beginPath();
	context2.moveTo(800, 300);
	context2.lineTo(770, 270);
	context2.lineTo(770, 330);
	//context1.closePath();   


	// the fill color
	context2.fillStyle = "#FFCC00";
	context2.fill();
	context2.closePath();  


	var context3 = getContext("2d");

	// the triangle
	context3.beginPath();
	
	context3.moveTo(680, 370);
	context3.lineTo(740, 370);
	context3.lineTo(710, 420);
	//context1.closePath();   


	// the fill color
	context3.fillStyle = "#FFCC00";
	context3.fill();
	context3.closePath();  

	var context4 = getContext("2d");
	context4.beginPath();
	context4.moveTo(500, 200);
	context4.lineTo(470, 250);
	context4.lineTo(530, 250);
	context4.fillStyle = "#FFCC00";
	context4.fill();

	context4.closePath();   

	var context5 = getContext("2d");

	// the triangle
	context5.beginPath();

	context5.moveTo(490, 370);
	context5.lineTo(550, 370);
	context5.lineTo(520, 420);
	//context1.closePath();   


	// the fill color
	context5.fillStyle = "#FFCC00";
	context5.fill();
	context5.closePath();  

}
/*
	 MouseArea {
        width: 150
        height: 150
        hoverEnabled: true
        cursorShape: Qt.OpenHandCursor
        Rectangle { anchors.fill: parent; color: "red"; }
        onPositionChanged: console.log("position", mouse.x, mouse.y)
        onContainsMouseChanged: console.log("containsMouse", containsMouse)
    }*/
    MouseArea {
        x: 470
        y: 200
        width: 60
        height: 50
        cursorShape: Qt.PointingHandCursor;
      //  anchors.fill: parent
		onClicked: 
		{
            //var myColor = ctx.getImageData(mouseX, mouseY, 1, 1)
            console.log("onClicked1 x="+mouseX+" y="+mouseY)
            hardwareconf.ProcUpMsg();
        }
        //hoverEnabled: false
       // Rectangle { anchors.fill: parent; color: "green"; }
        //onPressed: console.log("Ahoj!")
    }

	 MouseArea {
        x: 490
        y: 370
        width: 60
        height: 50
        cursorShape: Qt.PointingHandCursor;
//        anchors.fill: parent
		onClicked: 
		{
            //var myColor = ctx.getImageData(mouseX, mouseY, 1, 1)
            console.log("onClicked2 x="+mouseX+" y="+mouseY)
            hardwareconf.ProcDownMsg();
        }
        //hoverEnabled: false
       // Rectangle { anchors.fill: parent; color: "green"; }
        //onPressed: console.log("Ahoj!")
    }
    
	MouseArea {
        x: 600
        y: 270
        width: 30
        height: 60
        cursorShape: Qt.PointingHandCursor;
        //anchors.fill: parent
		onClicked: 
		{
            //var myColor = ctx.getImageData(mouseX, mouseY, 1, 1)
            console.log("onClicked3 x="+mouseX+" y="+mouseY)
            hardwareconf.ProcLeftMsg();
        }
        //hoverEnabled: false
       // Rectangle { anchors.fill: parent; color: "green"; }
        //onPressed: console.log("Ahoj!")
    }

	MouseArea {
        x: 670
        y: 200
        width: 60
        height: 50
        cursorShape: Qt.PointingHandCursor;
        //anchors.fill: parent
		onClicked: 
		{
            //var myColor = ctx.getImageData(mouseX, mouseY, 1, 1)
            console.log("onClicked4 x="+mouseX+" y="+mouseY)
            hardwareconf.ProcFrontMsg();
        }
        //hoverEnabled: false
       // Rectangle { anchors.fill: parent; color: "green"; }
        //onPressed: console.log("Ahoj!")
    }

	MouseArea {
        x: 770
        y: 270
        width: 30
        height: 30
        cursorShape: Qt.PointingHandCursor;
        //anchors.fill: parent
		onClicked: 
		{
            //var myColor = ctx.getImageData(mouseX, mouseY, 1, 1)
            console.log("onClicked5 x="+mouseX+" y="+mouseY)
            hardwareconf.ProcRightMsg();
        }
        //hoverEnabled: false
       // Rectangle { anchors.fill: parent; color: "green"; }
        //onPressed: console.log("Ahoj!")
    }

	MouseArea {
        x: 680
        y: 370
        width: 60
        height: 50
        cursorShape: Qt.PointingHandCursor;
        //anchors.fill: parent
		onClicked: 
		{
            //var myColor = ctx.getImageData(mouseX, mouseY, 1, 1)
            console.log("onClicked6 x="+mouseX+" y="+mouseY)
            hardwareconf.ProcBackMsg();
        }
        //hoverEnabled: false
       // Rectangle { anchors.fill: parent; color: "green"; }
        //onPressed: console.log("Ahoj!")
    }
	
	
	

	/*MouseArea{
		width: 150
        height: 150
            anchors.fill: parent
				//cursorShape: Qt.PointingHandCursor;	
			onPositionChanged: {
                   console.log("onPositionChanged x="+mouseX+" y="+mouseY)
                }

			 onPressed: {
                    console.log("onPressed x="+mouseX+" y="+mouseY)
                }
				
            onClicked: {
                //var myColor = ctx.getImageData(mouseX, mouseY, 1, 1)
                console.log("onClicked x="+mouseX+" y="+mouseY)
                if (y >= 200 && y < 250 && x >= 470 && x <= 530)
                {
                	
                }
            }
        }*/

}		
}
/*Canvas {
    id: canvasId
    property color triangleColor: "#474747"
    //width: parent.width; 
	//height: parent.height
    contextType: "2d"
    
    width: 40; 
	height: 30
 
    onPaint: {
        context.lineWidth = 0
        context.strokeStyle = "#00000000"
        context.fillStyle = triangleColor
        context.beginPath();
        context.moveTo(0, 0)
        context.lineTo(0, canvasId.height);
        context.lineTo(canvasId.width, canvasId.height/2);
        context.closePath();
        context.fill()
        context.stroke();
    }
}*/
	}

    style: TabViewStyle {
        frameOverlap: 1
        tab: Rectangle {
            color: styleData.selected ? "steelblue" :"lightsteelblue"
            border.color:  "steelblue"
            implicitWidth: Math.max(text.width + 4, 80)
            implicitHeight: 20
            radius: 2
            Text {
                id: text
                anchors.centerIn: parent
                text: styleData.title
                color: styleData.selected ? "white" : "black"
            }
        }
        frame: Rectangle { color: "#2f3b52" }
    }
}
}
		//确认按钮
        Rectangle {
            id: addDeviceRect
            width: 100; height: 0;
            color: "#242e42"
            radius: 4
            anchors.top: parent.top; anchors.topMargin: -2
            anchors.left: parent.left; anchors.leftMargin: 640

			Image {
        id: source
        anchors.fill: parent
        fillMode: Image.PreserveAspectFit
        visible: false
        asynchronous: true
        onStatusChanged: {
            if(Image.Ready == status) {
                console.log("image loaded")
                //mask.recalc()
            }
        }
    }

		Rectangle{
		color: "#2f3b52"
		id:imagefill
		width: 700; height: 450;
		 anchors.top: parent.top; anchors.topMargin: 50
	            anchors.left: parent.left; anchors.leftMargin: -210
			CusImage {
			 
				   id: bgImg
				   	width: 700; height: 300;
				   	
				   //source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
		id:image1
		color: "#2f3b52"
		width: 170; height: 110;
		 anchors.top: parent.top; anchors.topMargin: 520
	            anchors.left: parent.left; anchors.leftMargin: -210
			CusImage {
			 
				   id: bgImg11
				   	width: 170; height: 110;
				   	
				   //source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
		id:image2
		color: "#2f3b52"
		width: 170; height: 110;
		 anchors.top: parent.top; anchors.topMargin: 520
	            anchors.left: parent.left; anchors.leftMargin: -35
			CusImage {
			 
				   id: bgImg1141
				   	width: 170; height: 110;
				   	
				  // source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
				id:image3
		color: "#2f3b52"
		width: 170; height: 110;
		 anchors.top: parent.top; anchors.topMargin: 520
	            anchors.left: parent.left; anchors.leftMargin: 140
			CusImage {
			 
				   id: bgImg161
				   	width: 170; height: 110;
				   	
				  // source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}

		Rectangle{
		id:image4
		color: "#2f3b52"
		width: 170; height: 110;
		 anchors.top: parent.top; anchors.topMargin: 520
	            anchors.left: parent.left; anchors.leftMargin: 315
			CusImage {
			 
				   id: bgImg111
				   	width: 170; height: 110;
				   	
				   //source: imgPath + "Effect/Girls/girl1.jpeg"
				   anchors.centerIn: parent

				   //opacity: 0.1
			   }
		}	
		

		 StackView{
		id: stackView
		focus: true
		anchors.fill: parent
		}

		MessageDialog {
        id:confirmDialog
        title: "返回框"
        text: "添加设备成功"        
		icon: StandardIcon.Information;
        standardButtons:StandardButton.Ok;

        Component.onCompleted: visible = false
		
		onButtonClicked: 
		{
			console.log("clicked button *********")
            //angle = angle + 100
            //inspectsProjectStackView.pop()
            //containerqml.clickedfunc(200);//调用page1.qml中的函数，实现了传返回值。
            
            
            //winadddevice.visible = false
			//winadddevice.close()
			
		}
       
    }

		 //确认按钮
        Rectangle {
            id: findRect812
            width: 100; height: 30;
            color: "#FF5362"
            radius: 4
          

			anchors.top: parent.top; anchors.topMargin: 720
            anchors.left: parent.left; anchors.leftMargin: 330
             CusButton_Blue{
            id: findText21
			 width: parent.width; height: 30
            //Layout.margins:  qGrid.cellmargin
            text:qsTr("保存")
            onClicked:
            {
            	console.log("redvalue="+viewInfo.redvalue);
				console.log("coaxialvalue="+viewInfo.coaxialvalue);
				console.log("greenvalue="+viewInfo.greenvalue);
				console.log("bluevalue="+viewInfo.bluevalue);
				console.log("horizontalvalue="+viewInfo.horizontalvalue);
				var str = "red|coaxial|green|blue|horizontal";
				var val = String(viewInfo.redvalue) + "|"+String(viewInfo.coaxialvalue)+ "|"+String(viewInfo.greenvalue) 
					+ "|"+String(viewInfo.bluevalue)+ "|"+String(viewInfo.horizontalvalue);
				
                var ret = hardwareconf.SetLightValue(str, val, 0);
				if (0 == ret)
				{
					confirmDialog.text = "修改光源信息成功"
				//	confirmDialog.open()
				}
				else
				{
					confirmDialog.text = "修改光源信息失败"
				}

				confirmDialog.open()
            	 //stackView.push(qmlPath+"Page/Page3Drotation.qml")
            	/*var component = Qt.createComponent(qmlPath+"Page/PageUsersList.qml");    	
		    	if (component.status === Component.Ready) {
		    		var object = component.createObject(iotMainPage, {x:100, y:50,width:400, height:320})
		            // 4.使用connect连接信号槽
		    		object.clickBtnOk.connect(recvName2Date);
		    	}*/
            	//stackView.push(qmlPath+"Page/PageUsersList.qml", {name:"张三",containerqml:findRect})
            }
       	 }			  
        }
			            
    }


    Component.onCompleted: {		
		var hardlist = hardwareconf.getHardwareList();
		console.log("hardlist="+hardlist);
		var objinfo = JSON.parse(hardlist); 				 
		var str = "";
		var idx = 0;
		while (1)
		{
			str = "setlight" + String(idx);		
			if (typeof(objinfo[str]) == "undefined")
				break;
			idx++;
			var aa = objinfo[str].id;
			if (aa == "blue")
				BlueLight.value=objinfo[str].light
			else if (aa == "coaxial")
				CoaxialLight.value=objinfo[str].light
			else if (aa == "green")
				GreenLight.value=objinfo[str].light
			else if (aa == "horizontal")
				HorizontalLight.value=objinfo[str].light
			else if (aa == "red")
				RedLight.value=objinfo[str].light
			
		}
   }

	
	//可能是qmltype信息不全，有M16警告，这里屏蔽下
	   //@disable-check M16
	   /*
	   onClosing: function(closeevent){
		   //CloseEvent的accepted设置为false就能忽略该事件
		   closeevent.accepted = false
	   }*/
    }

	CusLabel {
        id: lb_title
        height: 60
        color: "#ffffff"
        text: "效果预览"
        anchors.left: parent.left
        anchors.right: parent.right
        font.pointSize: 40
        anchors.leftMargin: 10
        anchors.rightMargin: 10
    }
}



