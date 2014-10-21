/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSTimer, NSObject;

@interface DADMain : DADisableableObject {

	NSTimer* _delayedShutdownTimer;
	bool* _runLoopStoppedRef;
	NSObject<OS_dispatch_queue>* _aggdStatsQueue;
	NSObject<OS_dispatch_source>* _aggdStatsSource;

}
+(id)sharedMain;
-(void)dealloc;
-(id)init;
-(void)disable;
-(void)addToOperationsQueueDisabledCheckAndGoBlock:(/*^block*/ id)arg1 wrappedBlock:(/*^block*/ id)arg2 ;
-(void)shutdownDAD;
-(void)_shutdownDaemonIfNoAccountsExistInTimeInterval:(int)arg1 ;
-(void)_shutdownDaemonCheckingForAccounts:(bool)arg1 ;
-(void)delayedShutdownTimerFired:(id)arg1 ;
-(void)addSignalHandler;
-(void)addLanguageChangeHandler;
-(void)_shutdownNotification:(id)arg1 ;
-(void)shutdownDaemonIfNoAccountsExist;
-(void)waitForSystemAvailability;
-(void)setRunLoopStoppedRef:(bool*)arg1 ;
-(void)_configureAggdLogging;
@end

