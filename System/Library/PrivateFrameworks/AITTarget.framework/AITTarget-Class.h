/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AITTarget/AITTarget-Structs.h>
#import <AITTarget/AITXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, AITXPCConnection, NSObject, NSMutableArray, NSString;

@interface AITTarget : NSObject <AITXPCConnectionDelegate> {

	int _notifyToken;
	NSMutableDictionary* _observerRecords;
	AITXPCConnection* _xpcConnection;
	NSObject<OS_dispatch_queue>* _clientQueue;
	double _startTime;
	NSMutableArray* _queuedProbes;
	NSObject<OS_dispatch_queue>* _rpcDispatchQueue;
	NSString* _rpcSelectorPrefix;
	id _rpcTarget;
	NSObject<OS_dispatch_source>* _watchdogSource;

}

@property (nonatomic,retain) id rpcTarget; 
@property (nonatomic,copy) NSString * rpcSelectorPrefix; 
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * rpcDispatchQueue; 
+(id)allocWithZone:(NSZone)arg1 ;
+(id)sharedTarget;
-(oneway void)release;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(id)arg3 block:(/*^block*/ id)arg4 ;
-(bool)_probeIsEnabled:(id)arg1 ;
-(void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2 ;
-(void)_probeBarrier:(/*^block*/ id)arg1 ;
-(bool)_appIsWhitelisted;
-(void)_flushQueuedProbes;
-(void)_setupXPCConnectionIfNeeded;
-(id)_rpcTarget;
-(void)_sendAckForToken:(id)arg1 success:(bool)arg2 returnValue:(id)arg3 details:(id)arg4 ;
-(void)removeObserver:(id)arg1 forMessage:(id)arg2 ;
-(void)setRpcTarget:(id)arg1 ;
-(id)rpcTarget;
-(void)setRpcSelectorPrefix:(id)arg1 ;
-(id)rpcSelectorPrefix;
-(void)setRpcDispatchQueue:(id)arg1 ;
-(id)rpcDispatchQueue;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3 ;
-(void)xpcConnectionFailed:(id)arg1 ;
-(void)xpcConnectionUnhandledMessage:(id)arg1 ;
@end
