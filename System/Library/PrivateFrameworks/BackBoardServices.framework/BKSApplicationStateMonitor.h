/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, BKSSignal, NSArray;

@interface BKSApplicationStateMonitor : NSObject {

	NSObject<OS_xpc_object>* _connection;
	BKSSignal* _invalidationSignal;
	/*^block*/ id _handler;
	unsigned _interestedStates;
	NSArray* _interestedBundleIDs;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _messageHandlingQueue;
	NSObject<OS_xpc_object>* _serverEndpoint;

}

@property (nonatomic,@dynamic,copy) id handler; 
@property (assign,nonatomic,@dynamic) unsigned interestedStates; 
@property (nonatomic,@dynamic,copy) NSArray * interestedBundleIDs; 
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(unsigned)applicationStateForApplication:(id)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)_connection;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
-(void)queue_registerWithServer;
-(id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned)arg3 ;
-(void)setInterestedBundleIDs:(id)arg1 ;
-(void)setInterestedStates:(unsigned)arg1 ;
-(void)queue_invalidate;
-(void)queue_setHandler:(/*^block*/ id)arg1 ;
-(void)queue_setInterestedBundleIDs:(id)arg1 ;
-(void)queue_setInterestedStates:(unsigned)arg1 ;
-(unsigned)interestedStates;
-(void)updateInterestedBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(id)interestedBundleIDs;
-(void)queue_updateInterestedStates;
-(void)queue_updateInterestedStates:(bool)arg1 ;
-(void)queue_reregister;
-(void)queue_connectionWasInvalidated;
-(void)queue_handleMessage:(id)arg1 ;
-(void)updateInterestedBundleIDs:(id)arg1 ;
-(void)updateInterestedStates:(unsigned)arg1 ;
-(void)applicationInfoForApplication:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(unsigned)mostElevatedApplicationStateForPID:(int)arg1 ;
-(bool)isApplicationBeingDebugged:(id)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2 ;
-(void)applicationInfoForPID:(int)arg1 completion:(/*^block*/ id)arg2 ;
@end

