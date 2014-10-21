/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@class NSMutableDictionary, NSTimer, NSArray, UsageFeed;

@interface PLProcessNetworkLogger : PLLogger {

	NStatManagerRef statManagerRef;
	NSMutableDictionary* coalescedDictionary;
	NSMutableDictionary* processDictionary;
	NSMutableDictionary* interfaceNameDictionary;
	NSTimer* queryTimer;
	bool DEBUG_NSTAT;
	bool enableNetConnLogging;
	NSArray* netConnectProcesses;
	UsageFeed* feed;

}
-(void)dealloc;
-(id)init;
-(void)log;
-(void)removeSource:(id)arg1 ;
-(void)setupSource:(NStatSourceRef)arg1 ;
-(void)queryNetworkInfo:(id)arg1 ;
-(void)queryTriggerNotification:(id)arg1 ;
-(void)_setupAppUsage;
-(id)interfaceNameForIndex:(id)arg1 ;
-(void)logAppUsage:(bool)arg1 ;
-(void)insertSourceForProcess:(id)arg1 withSource:(id)arg2 ;
-(bool)processIsWhitelisted:(id)arg1 ;
-(id)sockaddrToNSString:(const sockaddr*)arg1 ;
-(id)stringFromTrafficClass:(unsigned)arg1 ;
-(void)coalesceSource:(id)arg1 ;
-(void)handleFlushSymptomsNotificationNotification:(id)arg1 ;
@end

