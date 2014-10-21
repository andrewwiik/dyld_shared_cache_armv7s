/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCConnection, MSTimerGate;

@interface MSClientSidePauseContext : NSObject {

	NSString* _UUID;
	NSObject<OS_dispatch_queue>* _timerQueue;
	NSXPCConnection* _server;
	MSTimerGate* _gate;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * timerQueue;              //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * server;                              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) MSTimerGate * gate;                                    //@synthesize gate=_gate - In the implementation block
-(id)server;
-(void)resume;
-(void).cxx_destruct;
-(void)setServer:(id)arg1 ;
-(id)initWithServer:(id)arg1 ;
-(id)gate;
-(void)setGate:(id)arg1 ;
-(id)timerQueue;
-(void)timerQueueTimerFired;
-(void)timerQueuePing;
-(void)setTimerQueue:(id)arg1 ;
@end

