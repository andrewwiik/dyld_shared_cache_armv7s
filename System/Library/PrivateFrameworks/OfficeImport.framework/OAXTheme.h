/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTheme : NSObject
+(void)readObjectDefaults:(xmlNode*)arg1 theme:(id)arg2 drawingState:(id)arg3 ;
+(void)readDefaultProperties:(xmlNode*)arg1 fallback:(xmlNode*)arg2 defaultProperties:(id)arg3 drawingState:(id)arg4 ;
+(void)readObjectDefaultsFromParent:(xmlNode*)arg1 defaultsName:(const char*)arg2 toObjectDefaults:(id)arg3 drawingState:(id)arg4 ;
+(xmlNode*)childNamed:(const char*)arg1 inParent:(xmlNode*)arg2 fallbackParent:(xmlNode*)arg3 ;
+(void)readFromPackagePart:(id)arg1 toTheme:(id)arg2 state:(id)arg3 ;
@end

