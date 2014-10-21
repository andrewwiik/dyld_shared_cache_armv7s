/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRTCPConnectionStreamDelegate.h>

@protocol OS_dispatch_queue, TRTCPConnectionDelegate, OS_dispatch_source;
@class NSObject, TRTCPConnectionStream, NSString, NSArray;

@interface TRTCPConnection : NSObject <TRTCPConnectionStreamDelegate> {

	NSObject<OS_dispatch_queue>* _accessQueue;
	bool _closed;
	TRTCPConnectionStream* _connectionStream;
	<TRTCPConnectionDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	NSString* _deviceIdentifier;
	NSObject<OS_dispatch_source>* _keepAliveTimer;
	NSArray* _relevantPacketEventClasses;
	int _uniqueID;

}

@property (nonatomic,readonly) <TRTCPConnectionDelegate> * delegate; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * delegateQueue; 
@property (nonatomic,readonly) int uniqueID;                                             //@synthesize uniqueID=_uniqueID - In the implementation block
-(id)delegateQueue;
-(void)dealloc;
-(id)delegate;
-(void)close;
-(void).cxx_destruct;
-(int)uniqueID;
-(void)connectionStreamDidClose:(id)arg1 ;
-(void)sendPacketEvent:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2 ;
-(void)_performNextRead;
-(void)_handleReceivedPacketEvent:(id)arg1 ;
-(void)setDelegate:(id)arg1 delegateQueue:(id)arg2 ;
@end

