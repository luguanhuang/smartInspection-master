/*
Navicat MySQL Data Transfer

Source Server         : AOI-connect
Source Server Version : 80027
Source Host           : localhost:3306
Source Database       : aoipcb

Target Server Type    : MYSQL
Target Server Version : 80027
File Encoding         : 65001

Date: 2022-08-11 20:04:34
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `pcba_algorithm`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_algorithm`;
CREATE TABLE `pcba_algorithm` (
  `algorithmId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `nameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nType` int NOT NULL DEFAULT '1' COMMENT '1:2D; 2:3D.',
  `nLightSource` int DEFAULT '1',
  `description` varchar(200) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT '0' COMMENT '1: valid;  0:invalid',
  PRIMARY KEY (`algorithmId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_algorithm
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_algorithm4defect`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_algorithm4defect`;
CREATE TABLE `pcba_algorithm4defect` (
  `id` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `algorithmId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `defectId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  PRIMARY KEY (`id`),
  KEY `algorithm4defect2algorithm` (`algorithmId`),
  KEY `algorithm4defect2defect` (`defectId`),
  CONSTRAINT `algorithm4defect2algorithm` FOREIGN KEY (`algorithmId`) REFERENCES `pcba_algorithm` (`algorithmId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `algorithm4defect2defect` FOREIGN KEY (`defectId`) REFERENCES `pcba_defect` (`defectId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_algorithm4defect
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_algorithmconfig`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_algorithmconfig`;
CREATE TABLE `pcba_algorithmconfig` (
  `algorithmConfigId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `algorithmId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `serial` smallint NOT NULL COMMENT 'The serial number of one algorithmConfigId in one algorithmId.',
  `nameEN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `dataType` int NOT NULL DEFAULT '1' COMMENT '1:int;2:float',
  `dataArraySize` int NOT NULL DEFAULT '1' COMMENT '1:single;>1:array',
  `defaultValue00` float(15,3) DEFAULT NULL,
  `defaultValue01` float(15,3) DEFAULT NULL,
  `defaultValue02` float(15,3) DEFAULT NULL,
  `defaultValue03` float(15,3) DEFAULT NULL,
  `defaultValue04` float(15,3) DEFAULT NULL,
  `defaultValue05` float(15,3) DEFAULT NULL,
  `defaultValue06` float(15,3) DEFAULT NULL,
  `defaultValue07` float(15,3) DEFAULT NULL,
  `defaultValue08` float(15,3) DEFAULT NULL,
  `defaultValue09` float(15,3) DEFAULT NULL,
  `defaultValue10` float(15,3) DEFAULT NULL,
  `defaultValue11` float(15,3) DEFAULT NULL,
  `defaultValue12` float(15,3) DEFAULT NULL,
  `defaultValue13` float(15,3) DEFAULT NULL,
  `defaultValue14` float(15,3) DEFAULT NULL,
  `defaultValue15` float(15,3) DEFAULT NULL,
  `defaultValue16` float(15,3) DEFAULT NULL,
  `defaultValue17` float(15,3) DEFAULT NULL,
  `defaultValue18` float(15,3) DEFAULT NULL,
  `defaultValue19` float(15,3) DEFAULT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT '0' COMMENT '1: valid;  0:invalid',
  PRIMARY KEY (`algorithmConfigId`),
  KEY `algorithmconfig2algorithm` (`algorithmId`),
  CONSTRAINT `algorithmconfig2algorithm` FOREIGN KEY (`algorithmId`) REFERENCES `pcba_algorithm` (`algorithmId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_algorithmconfig
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_algorithmconfigvalue`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_algorithmconfigvalue`;
CREATE TABLE `pcba_algorithmconfigvalue` (
  `id` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `inspectLibItemId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `serial` smallint NOT NULL COMMENT 'The serial number of one algorithmConfigId in one algorithmId.',
  `value00` float(15,3) NOT NULL DEFAULT '0.000' COMMENT 'data value',
  `value01` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value02` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value03` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value04` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value05` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value06` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value07` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value08` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value09` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value10` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value11` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value12` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value13` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value14` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value15` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value16` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value17` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value18` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  `value19` float(15,3) DEFAULT '0.000' COMMENT 'data value',
  PRIMARY KEY (`id`),
  KEY `algorithmconfigvalue2inspectlib` (`inspectLibItemId`),
  CONSTRAINT `algorithmconfigvalue2inspectlib` FOREIGN KEY (`inspectLibItemId`) REFERENCES `pcba_inspectlib` (`inspectLibItemId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_algorithmconfigvalue
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_cad2component`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_cad2component`;
CREATE TABLE `pcba_cad2component` (
  `id` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `cadFileId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT '0',
  `materialId` varchar(100) COLLATE utf8mb4_general_ci DEFAULT '0' COMMENT 'in cad file',
  `serial` int DEFAULT NULL COMMENT 'The serial number of one materialId in one cadFile.',
  `componentId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT '0' COMMENT 'fk, pcba_Component.componentId',
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inactive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`id`),
  KEY `cad2component2wholeboard` (`cadFileId`),
  KEY `cad2component2component` (`componentId`),
  CONSTRAINT `cad2component2component` FOREIGN KEY (`componentId`) REFERENCES `pcba_component` (`componentId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `cad2component2wholeboard` FOREIGN KEY (`cadFileId`) REFERENCES `pcba_wholeboard` (`cadFileId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_cad2component
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_component`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_component`;
CREATE TABLE `pcba_component` (
  `componentId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `componentTypeId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT '0' COMMENT 'FK',
  `nameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `length` float(15,3) DEFAULT '0.000',
  `width` float(15,3) DEFAULT '0.000',
  `height` float(15,3) DEFAULT '0.000',
  `ocr` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'ocr text on component.',
  `xOcrStart` float(15,3) DEFAULT '0.000',
  `yOcrStart` float(15,3) DEFAULT '0.000',
  `fOcrLength` float(15,3) DEFAULT '0.000',
  `fOcrWidth` float(15,3) DEFAULT NULL,
  `bSMD` tinyint DEFAULT '0',
  `pinCount` int DEFAULT '0',
  `imageFilePath` varchar(300) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`componentId`),
  KEY `component2componentType` (`componentTypeId`),
  CONSTRAINT `component2componentType` FOREIGN KEY (`componentTypeId`) REFERENCES `pcba_componenttype` (`componentTypeId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_component
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_componenttype`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_componenttype`;
CREATE TABLE `pcba_componenttype` (
  `componentTypeId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL COMMENT 'UUID, in hexadecimal.',
  `nameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strReserve` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT NULL COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`componentTypeId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_componenttype
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_defect`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_defect`;
CREATE TABLE `pcba_defect` (
  `defectId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `parentDefectId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'NULL means none.',
  `brotherDefectId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'NULL means none.',
  `defectNameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `defectNameCN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `description` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`defectId`),
  KEY `defect3parent` (`parentDefectId`),
  KEY `defect3brother` (`brotherDefectId`),
  CONSTRAINT `defect3brother` FOREIGN KEY (`brotherDefectId`) REFERENCES `pcba_defect` (`defectId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `defect3parent` FOREIGN KEY (`parentDefectId`) REFERENCES `pcba_defect` (`defectId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci COMMENT='wx3dexpert   system settings';

-- ----------------------------
-- Records of pcba_defect
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_device`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_device`;
CREATE TABLE `pcba_device` (
  `deviceId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `devicename` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `devicecode` varchar(30) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `description` varchar(200) COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'description',
  `strVersion` varchar(20) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strManufacturer` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strDistributor` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strLocationCity` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strOwner` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strRsaEncHardInfo` varchar(1024) COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'encription code',
  `strRsaDecCode` varchar(1024) COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'decription code',
  `strReserve` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inactive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  `axisXPositiveLimit` bigint DEFAULT NULL,
  `axisXNegativeLimit` bigint DEFAULT NULL,
  `axisXPulse2LenRatio` float(15,3) DEFAULT NULL,
  `axisYPositiveLimit` bigint DEFAULT NULL,
  `axisYNegativeLimit` bigint DEFAULT NULL,
  `axisYPulse2LenRatio` float(15,3) DEFAULT NULL,
  `axisZPositiveLimit` bigint DEFAULT NULL,
  `axisZNegativeLimit` bigint DEFAULT NULL,
  `axisZPulse2LenRatio` float(15,3) DEFAULT NULL,
  `defaultSetAxisId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `cameraMainModelId` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `cameraMainImageCols` int DEFAULT NULL,
  `cameraMainImageRows` int DEFAULT NULL,
  `cameraSide1ModelId` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `cameraSide1ImageCols` int DEFAULT NULL,
  `cameraSide1ImageRows` int DEFAULT NULL,
  `cameraSide2ModelId` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `cameraSide2ImageCols` int DEFAULT NULL,
  `cameraSide2ImageRows` int DEFAULT NULL,
  `cameraSide3ModelId` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `cameraSide3ImageCols` int DEFAULT NULL,
  `cameraSide3ImageRows` int DEFAULT NULL,
  `cameraSide4ModelId` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `cameraSide4ImageCols` int DEFAULT NULL,
  `cameraSide4ImageRows` int DEFAULT NULL,
  `defaultSetCameraId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `lightControl1Serial` tinyint DEFAULT NULL COMMENT 'lightControl1''s serial number.',
  `lightControl2Serial` tinyint DEFAULT NULL COMMENT 'lightControl2''s serial number.',
  `lightControl3Serial` tinyint DEFAULT NULL COMMENT 'lightControl3''s serial number.',
  `lightControl4Serial` tinyint DEFAULT NULL COMMENT 'lightControl4''s serial number.',
  `light1Max` int DEFAULT NULL,
  `light1Min` int DEFAULT NULL,
  `light2Max` int DEFAULT NULL,
  `light2Min` int DEFAULT NULL,
  `light3Max` int DEFAULT NULL,
  `light3Min` int DEFAULT NULL,
  `light4Max` int DEFAULT NULL,
  `light4Min` int DEFAULT NULL,
  `light5Max` int DEFAULT NULL,
  `light5Min` int DEFAULT NULL,
  `light6Max` int DEFAULT NULL,
  `light6Min` int DEFAULT NULL,
  `light7Max` int DEFAULT NULL,
  `light7Min` int DEFAULT NULL,
  `light8Max` int DEFAULT NULL,
  `light8Min` int DEFAULT NULL,
  `defaultSetLigthId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT NULL,
  PRIMARY KEY (`deviceId`),
  UNIQUE KEY `device3devicecode` (`devicecode`) USING BTREE,
  KEY `device2setaxis` (`defaultSetAxisId`),
  KEY `device2setcamera` (`defaultSetCameraId`),
  KEY `device2setlight` (`defaultSetLigthId`),
  CONSTRAINT `device2setaxis` FOREIGN KEY (`defaultSetAxisId`) REFERENCES `pcba_setaxis` (`setAxisId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `device2setcamera` FOREIGN KEY (`defaultSetCameraId`) REFERENCES `pcba_setcamera` (`setCameraId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `device2setlight` FOREIGN KEY (`defaultSetLigthId`) REFERENCES `pcba_setlight` (`setLightId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci COMMENT='wx3dexpert   system settings';

-- ----------------------------
-- Records of pcba_device
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_inspectlib`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_inspectlib`;
CREATE TABLE `pcba_inspectlib` (
  `inspectLibItemId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `componentId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `defectId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `algorithmId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  PRIMARY KEY (`inspectLibItemId`),
  KEY `inspectlib2component` (`componentId`),
  KEY `inspectlib2defect` (`defectId`),
  KEY `inspectlib2algorithm` (`algorithmId`),
  CONSTRAINT `inspectlib2algorithm` FOREIGN KEY (`algorithmId`) REFERENCES `pcba_algorithm` (`algorithmId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectlib2component` FOREIGN KEY (`componentId`) REFERENCES `pcba_component` (`componentId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectlib2defect` FOREIGN KEY (`defectId`) REFERENCES `pcba_defect` (`defectId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_inspectlib
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_inspectresult`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_inspectresult`;
CREATE TABLE `pcba_inspectresult` (
  `inspectResultId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `uniqueBoardIdentifier` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inspectSchemeId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL DEFAULT '0' COMMENT 'fk',
  `inspectTime` datetime DEFAULT NULL,
  `inspectorId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL DEFAULT '0',
  `deviceId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL DEFAULT '0',
  `nResult` int DEFAULT '1' COMMENT '1:ok;2:NG(not good)',
  `repair` int DEFAULT '1',
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inactive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`inspectResultId`),
  KEY `inspectresult2user` (`inspectorId`),
  KEY `inspectresult2device` (`deviceId`),
  KEY `inspectresult2inspectscheme` (`inspectSchemeId`),
  CONSTRAINT `inspectresult2device` FOREIGN KEY (`deviceId`) REFERENCES `pcba_device` (`deviceId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectresult2inspectscheme` FOREIGN KEY (`inspectSchemeId`) REFERENCES `pcba_inspectscheme` (`inspectSchemeId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectresult2user` FOREIGN KEY (`inspectorId`) REFERENCES `pcba_user` (`userId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci COMMENT='wx3dexpert   system settings';

-- ----------------------------
-- Records of pcba_inspectresult
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_inspectresultdetail`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_inspectresultdetail`;
CREATE TABLE `pcba_inspectresultdetail` (
  `inspectResultDetailId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `inspectResultId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `subBoardSerial` tinyint NOT NULL COMMENT 'The serial number of subBoard on wholeBoard.',
  `subProgramItemId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `result` tinyint NOT NULL,
  `repair` tinyint DEFAULT NULL,
  PRIMARY KEY (`inspectResultDetailId`),
  KEY `inspectresultdetail2inspectresult` (`inspectResultId`),
  KEY `inspectresultdetail2subprogramitem` (`subProgramItemId`),
  CONSTRAINT `inspectresultdetail2inspectresult` FOREIGN KEY (`inspectResultId`) REFERENCES `pcba_inspectresult` (`inspectResultId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectresultdetail2subprogramitem` FOREIGN KEY (`subProgramItemId`) REFERENCES `pcba_subprogramitem` (`subProgramItemId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_inspectresultdetail
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_inspectscheme`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_inspectscheme`;
CREATE TABLE `pcba_inspectscheme` (
  `inspectSchemeId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `nameEN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `createTime` datetime DEFAULT NULL,
  `creatorId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `wholeBoardId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `subProgramId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `setLightId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `setCameraId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `setAxisId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  PRIMARY KEY (`inspectSchemeId`),
  KEY `inspectscheme2wholeboard` (`wholeBoardId`),
  KEY `inspectscheme2subprogram` (`subProgramId`),
  KEY `inspectscheme2setlight` (`setLightId`),
  KEY `inspectscheme2setcamera` (`setCameraId`),
  KEY `inspectscheme2setaxis` (`setAxisId`),
  KEY `inspectscheme2user` (`creatorId`),
  CONSTRAINT `inspectscheme2setaxis` FOREIGN KEY (`setAxisId`) REFERENCES `pcba_setaxis` (`setAxisId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectscheme2setcamera` FOREIGN KEY (`setCameraId`) REFERENCES `pcba_setcamera` (`setCameraId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectscheme2setlight` FOREIGN KEY (`setLightId`) REFERENCES `pcba_setlight` (`setLightId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectscheme2subprogram` FOREIGN KEY (`subProgramId`) REFERENCES `pcba_subprogram` (`subProgramId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectscheme2user` FOREIGN KEY (`creatorId`) REFERENCES `pcba_user` (`userId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `inspectscheme2wholeboard` FOREIGN KEY (`wholeBoardId`) REFERENCES `pcba_wholeboard` (`wholeBoardId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_inspectscheme
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_pinoncomponent`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_pinoncomponent`;
CREATE TABLE `pcba_pinoncomponent` (
  `pinId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `componentId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `pinTypeId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT '0' COMMENT 'FK',
  `pinSerial` int DEFAULT '1' COMMENT 'base on 1',
  `xStart` float(15,3) DEFAULT '0.000' COMMENT 'start position',
  `yStart` float(15,3) DEFAULT '0.000',
  `rotation` float(15,3) DEFAULT '0.000' COMMENT '0, 90, 270',
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`pinId`),
  KEY `pinoncomponent2component` (`componentId`),
  KEY `pinoncomponent2pintype` (`pinTypeId`),
  CONSTRAINT `pinoncomponent2component` FOREIGN KEY (`componentId`) REFERENCES `pcba_component` (`componentId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `pinoncomponent2pintype` FOREIGN KEY (`pinTypeId`) REFERENCES `pcba_pintype` (`pinTypeId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_pinoncomponent
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_pintype`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_pintype`;
CREATE TABLE `pcba_pintype` (
  `pinTypeId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL COMMENT 'UUID, in hexadecimal.',
  `nameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'name in English.',
  `nameCN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'name in Chinese.',
  `width` float DEFAULT NULL,
  `length1` float DEFAULT NULL COMMENT 'length of shoulder',
  `length2` float DEFAULT NULL COMMENT 'length of slope',
  `length3` float DEFAULT NULL COMMENT 'length of toe.',
  `strReserve` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT NULL COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`pinTypeId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_pintype
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_setaxis`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_setaxis`;
CREATE TABLE `pcba_setaxis` (
  `setAxisId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `axisNo` tinyint NOT NULL DEFAULT '1' COMMENT '1-X; 2-Y; 3-Z.',
  `movePositionStep` int DEFAULT NULL,
  `moveSpeedSpeed` float(15,3) NOT NULL,
  `moveSpeedAcc` float(15,3) DEFAULT NULL,
  `moveSpeedDcc` float(15,3) DEFAULT NULL,
  `moveSpeedSmoothTime` float(15,3) DEFAULT NULL,
  `homeMode` tinyint DEFAULT NULL,
  PRIMARY KEY (`setAxisId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_setaxis
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_setcamera`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_setcamera`;
CREATE TABLE `pcba_setcamera` (
  `setCameraId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `cameraSerial` tinyint NOT NULL COMMENT '0-main;1-side1;2-side2;3-side3;4-side4.',
  `exposeTime` bigint NOT NULL COMMENT 'expose time in microseconds.',
  PRIMARY KEY (`setCameraId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_setcamera
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_setlight`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_setlight`;
CREATE TABLE `pcba_setlight` (
  `setLightId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `lightSerial` tinyint DEFAULT NULL COMMENT 'light serial number.',
  `brightness` int DEFAULT NULL,
  PRIMARY KEY (`setLightId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_setlight
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_subboard`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_subboard`;
CREATE TABLE `pcba_subboard` (
  `subBoardId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `nameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `description` varchar(200) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `length` float(15,3) DEFAULT NULL,
  `width` float(15,3) DEFAULT NULL,
  `baseColorR` smallint DEFAULT '0' COMMENT '??????????????',
  `baseColorG` smallint DEFAULT '255' COMMENT '??????????????',
  `baseColorB` smallint DEFAULT '0' COMMENT '???????�??',
  `imageFilePath` varchar(300) COLLATE utf8mb4_general_ci NOT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`subBoardId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci COMMENT='wx3dexpert   system settings';

-- ----------------------------
-- Records of pcba_subboard
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_subboardlayout`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_subboardlayout`;
CREATE TABLE `pcba_subboardlayout` (
  `layoutId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `subBoardId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL DEFAULT '0' COMMENT 'FK',
  `positionId` int NOT NULL COMMENT 'The serial number of one compoent on one subBoard.',
  `componentId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL DEFAULT '0' COMMENT 'FK',
  `x` float(15,3) DEFAULT '0.000',
  `y` float(15,3) DEFAULT NULL,
  `rotation` float(15,3) DEFAULT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inactive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`layoutId`),
  KEY `subboardlayout2subboard` (`subBoardId`),
  KEY `subboardlayout2component` (`componentId`),
  CONSTRAINT `subboardlayout2component` FOREIGN KEY (`componentId`) REFERENCES `pcba_component` (`componentId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `subboardlayout2subboard` FOREIGN KEY (`subBoardId`) REFERENCES `pcba_subboard` (`subBoardId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci COMMENT='wx3dexpert   system settings';

-- ----------------------------
-- Records of pcba_subboardlayout
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_subprogram`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_subprogram`;
CREATE TABLE `pcba_subprogram` (
  `subProgramId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `nameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `subBoardId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `creatorId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL COMMENT 'creator''s userId',
  `createTime` datetime NOT NULL,
  `bFinished` tinyint NOT NULL DEFAULT '0' COMMENT '0-unfinished; 1-finished.',
  `finishTime` datetime NOT NULL,
  `description` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  PRIMARY KEY (`subProgramId`),
  KEY `subprogram2subboard` (`subBoardId`),
  KEY `subprogram2user` (`creatorId`),
  CONSTRAINT `subprogram2subboard` FOREIGN KEY (`subBoardId`) REFERENCES `pcba_subboard` (`subBoardId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `subprogram2user` FOREIGN KEY (`creatorId`) REFERENCES `pcba_user` (`userId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_subprogram
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_subprogramitem`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_subprogramitem`;
CREATE TABLE `pcba_subprogramitem` (
  `subProgramItemId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `subProgramId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `serial` int NOT NULL COMMENT 'The serial number of one subProgramItem for one layoutId, increased from 1. Because defectId may has different priority,  so inspectLibItemId may has different priority, one subProgramItemId represents one inspectLibItemId for one layoutId in one subProgram, so there must need one field to represent the priority of one subProgramItemId, serial is the field.',
  `layoutId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `inspectLibItemId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  PRIMARY KEY (`subProgramItemId`),
  KEY `subprogramitem2subprogram` (`subProgramId`),
  KEY `subprogramitem2layout` (`layoutId`),
  KEY `subprogramitem2inspectlib` (`inspectLibItemId`),
  CONSTRAINT `subprogramitem2inspectlib` FOREIGN KEY (`inspectLibItemId`) REFERENCES `pcba_inspectlib` (`inspectLibItemId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `subprogramitem2layout` FOREIGN KEY (`layoutId`) REFERENCES `pcba_subboardlayout` (`layoutId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `subprogramitem2subprogram` FOREIGN KEY (`subProgramId`) REFERENCES `pcba_subprogram` (`subProgramId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_subprogramitem
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_user`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_user`;
CREATE TABLE `pcba_user` (
  `userId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `inspect` tinyint NOT NULL DEFAULT '0' COMMENT '0:no right to inspect; 1:able to run inspection',
  `program` tinyint NOT NULL DEFAULT '0' COMMENT '0:no right to program; 1:able to program',
  `admin` tinyint NOT NULL DEFAULT '0' COMMENT '0:no right to admin1:able to admin users',
  `deviceId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT '0' COMMENT 'if 0: able to operate any devices; >1:able to operate the single device',
  `logName` varchar(20) COLLATE utf8mb4_general_ci NOT NULL,
  `logPassword` varchar(16) COLLATE utf8mb4_general_ci NOT NULL,
  `workId` varchar(20) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `name` varchar(20) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `phone` varchar(20) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `department` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inactive` tinyint DEFAULT '0' COMMENT '1: valid;  0:invalid',
  PRIMARY KEY (`userId`),
  UNIQUE KEY `user3logname` (`logName`) USING BTREE,
  KEY `user2device` (`deviceId`),
  CONSTRAINT `user2device` FOREIGN KEY (`deviceId`) REFERENCES `pcba_device` (`deviceId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_user
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_useroperate`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_useroperate`;
CREATE TABLE `pcba_useroperate` (
  `operateId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `userId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL DEFAULT '0' COMMENT 'FK',
  `operateType` int NOT NULL COMMENT '1:login;2:logout;3:inspection;4:maintanance;5:programming',
  `deviceId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL DEFAULT '0' COMMENT 'FK',
  `operateTime` datetime NOT NULL,
  `description` varchar(200) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inactive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`operateId`),
  KEY `useroperate2user` (`userId`),
  KEY `useroperate2device` (`deviceId`),
  CONSTRAINT `useroperate2device` FOREIGN KEY (`deviceId`) REFERENCES `pcba_device` (`deviceId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `useroperate2user` FOREIGN KEY (`userId`) REFERENCES `pcba_user` (`userId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_useroperate
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_wholeboard`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_wholeboard`;
CREATE TABLE `pcba_wholeboard` (
  `wholeBoardId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `cadFileId` varchar(36) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'UUID of one cad file created by application.',
  `cadFilePath` varchar(300) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `imageFilePath` varchar(300) COLLATE utf8mb4_general_ci NOT NULL,
  `side` tinyint DEFAULT '1' COMMENT '1:A;2:B',
  `nameEN` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `nameCN` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `description` varchar(200) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `length` float(15,3) NOT NULL,
  `width` float(15,3) NOT NULL,
  `nSubBoardCount` tinyint DEFAULT NULL COMMENT 'redundant field',
  `subBoardId` varchar(36) COLLATE utf8mb4_general_ci DEFAULT NULL COMMENT 'redundant field',
  `strReserve` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT '0' COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`wholeBoardId`),
  KEY `cadFileId` (`cadFileId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_wholeboard
-- ----------------------------

-- ----------------------------
-- Table structure for `pcba_wholeboardpattern`
-- ----------------------------
DROP TABLE IF EXISTS `pcba_wholeboardpattern`;
CREATE TABLE `pcba_wholeboardpattern` (
  `id` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `wholeBoardId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `subBoardId` varchar(36) COLLATE utf8mb4_general_ci NOT NULL,
  `serial` tinyint NOT NULL DEFAULT '1' COMMENT 'based on 1.',
  `x` float(15,3) NOT NULL,
  `y` float(15,3) NOT NULL,
  `rotation` float(15,3) NOT NULL,
  `bHorizontalMirror` tinyint NOT NULL,
  `bVerticalMirror` tinyint NOT NULL,
  `strReserve` varchar(100) COLLATE utf8mb4_general_ci DEFAULT NULL,
  `inActive` tinyint DEFAULT NULL COMMENT '1: valid;  0: invalid',
  PRIMARY KEY (`id`),
  KEY `wholeboardpattern2wholeboard` (`wholeBoardId`),
  KEY `wholeboardpattern2subboard` (`subBoardId`),
  CONSTRAINT `wholeboardpattern2subboard` FOREIGN KEY (`subBoardId`) REFERENCES `pcba_subboard` (`subBoardId`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `wholeboardpattern2wholeboard` FOREIGN KEY (`wholeBoardId`) REFERENCES `pcba_wholeboard` (`wholeBoardId`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of pcba_wholeboardpattern
-- ----------------------------
