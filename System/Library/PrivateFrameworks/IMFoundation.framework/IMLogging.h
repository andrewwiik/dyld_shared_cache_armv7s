/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMLogging : NSObject
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(bool)arg4 format:(id)arg5 arguments:(char*)arg6 ;
+(void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(bool)arg4 simpleLogString:(id)arg5 format:(id)arg6 arguments:(char*)arg7 ;
+(id)logFileDirectory;
+(bool)loggingEnabledForLevel:(int)arg1 ;
+(id)stringForDate;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(bool)arg4 format:(id)arg5 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(char*)arg5 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(bool)arg4 simpleLogString:(id)arg5 ;
+(id)timeFormatter;
+(void)enableConsoleLoggingForLevel:(int)arg1 ;
+(id)dateFormatter;
@end
