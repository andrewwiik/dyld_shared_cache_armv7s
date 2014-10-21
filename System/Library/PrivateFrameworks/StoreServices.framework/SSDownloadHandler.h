/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSArray;

@interface SSDownloadHandler : NSObject {

	SSXPCConnection* _controlConnection;
	<SSDownloadHandlerDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSArray* _downloadPhasesToIgnore;
	long long _handlerID;
	SSXPCConnection* _observerConnection;
	bool _sessionsNeedPowerAssertion;
	bool _sessionsShouldBlockOtherDownloads;

}

@property (assign) <SSDownloadHandlerDelegate> * delegate; 
@property (copy) NSArray * downloadPhasesToIgnore; 
@property (assign) bool sessionsNeedPowerAssertion; 
@property (assign) bool sessionsShouldBlockOtherDownloads; 
@property (readonly) long long handlerIdentifier; 
-(void)setDownloadPhasesToIgnore:(id)arg1 ;
-(void)setSessionsNeedPowerAssertion:(bool)arg1 ;
-(void)setSessionsShouldBlockOtherDownloads:(bool)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)_setValue:(id)arg1 forProperty:(const char*)arg2 ;
-(long long)handlerIdentifier;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_connectToDaemon;
-(void)_sendDisconnectMessage;
-(bool)_sendAuthenticationSessionWithMessage:(id)arg1 ;
-(bool)_sendSessionHandleWithMessage:(id)arg1 ;
-(bool)_sendSessionCancelWithMessage:(id)arg1 ;
-(bool)_sendSessionPauseWithMessage:(id)arg1 ;
-(id)_controlConnection;
-(id)_newSessionWithMessage:(id)arg1 ;
-(id)downloadPhasesToIgnore;
-(void)resetDisavowedSessions;
-(bool)sessionsNeedPowerAssertion;
-(bool)sessionsShouldBlockOtherDownloads;
@end

