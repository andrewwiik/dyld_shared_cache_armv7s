/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogLoggerSupport/PLTelephonyConnectedLogger.h>

@interface PLSleepWakeLogger : PLTelephonyConnectedLogger {

	unsigned rootDomainConnect;
	unsigned pmNotifier;
	IONotificationPortRef systemPowerPortRef;

}

@property (assign,nonatomic) unsigned rootDomainConnect; 
-(void)dealloc;
-(void)log;
-(id)initWithConnection:(id)arg1 ;
-(id)wakeReason;
-(id)stringForData:(id)arg1 ;
-(id)basebandWakeLogStringWithDecodedReason:(id)arg1 ;
-(id)_dateFromTimeval:(timeval)arg1 ;
-(bool)isBasebandWakeup:(id)arg1 ;
-(void)handleBasebandWake:(id)arg1 ;
-(id)eurekaBasebandWakeLogStringWithDecodedReason:(id)arg1 ;
-(id)iceBasebandWakeLogStringWithDecodedReason:(id)arg1 ;
-(void)systemPoweredOn;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
@end

