/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, BKSSignal, NSString;

@interface BKSBaseXPCClient : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_xpc_object>* _connection;
	BKSSignal* _invalidationSignal;
	NSObject<OS_xpc_object>* _serverEndpoint;
	NSString* _serviceName;

}
-(id)initWithEndpoint:(id)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(void)queue_invalidate;
-(void)queue_reregister;
-(void)queue_connectionWasInvalidated;
-(void)queue_handleMessage:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(id)_errorFromMessageIfAny:(id)arg1 ;
-(void)_sendMessage:(/*^block*/ id)arg1 withReplyHandler:(/*^block*/ id)arg2 waitForReply:(bool)arg3 waitDuration:(double)arg4 ;
-(void)queue_connectionWasCreated;
-(id)_notifyTokenName;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(void)queue_registerWithServerIfNecessary;
-(void)reconnectIfNecessary;
-(bool)_isServerRegistered;
-(id)initWithServiceName:(id)arg1 ;
@end

