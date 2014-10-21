/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogLoggerSupport/PLTelephonyConnectedLogger.h>

@interface PLBasebandLogger : PLTelephonyConnectedLogger {

	IONotificationPortRef ioNotifyPort;
	unsigned notificationRef;
	unsigned baseband_service;

}
+(id)logger;
+(id)createWithConnection:(id)arg1 ;
-(void)dealloc;
-(void)log;
-(id)initWithConnection:(id)arg1 ;
-(void)logBasebandConfig;
-(void)logBasebandState:(id)arg1 ;
@end

