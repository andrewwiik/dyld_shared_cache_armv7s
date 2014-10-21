/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSString;

@interface PLConfigLogger : PLLogger

@property (nonatomic,readonly) NSString * crashReporterKey; 
@property (nonatomic,readonly) NSString * bootArgs; 
@property (nonatomic,readonly) long long autolockTime; 
@property (nonatomic,readonly) double backlightLevel; 
@property (nonatomic,readonly) bool noWatchdogs; 
@property (nonatomic,readonly) bool disableCABlanking; 
-(double)backlightLevel;
-(void)log;
-(id)osType;
-(id)crashReporterKey;
-(id)bootArgs;
-(long long)autolockTime;
-(id)basebandFirmware;
-(bool)noWatchdogs;
-(bool)disableCABlanking;
@end
