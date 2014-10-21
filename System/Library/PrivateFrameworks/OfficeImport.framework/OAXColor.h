/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXColor : NSObject
+(id)readScRgbColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSRgbColorFromXmlNode:(xmlNode*)arg1 attribute:(const char*)arg2 ;
+(id)readHslColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSystemColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSchemeColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromXmlNode:(xmlNode*)arg1 ;
+(id)presetColorEnumMap;
+(id)systemColorEnumMap;
+(id)schemeColorEnumMap;
+(id)readColorFromNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromAttribute:(id)arg1 ;
+(id)readSystemColorFromAttribute:(id)arg1 ;
+(id)readColorFromParentXmlNode:(xmlNode*)arg1 ;
@end

