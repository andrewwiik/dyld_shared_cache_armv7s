/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebInspectorXPCWrapperDelegate.h>
#import <WebKit/WebInspectorClientRegistryDelegate.h>

@class WebInspectorXPCWrapper, WebInspectorServerWebViewConnectionController;

@interface WebInspectorServer : NSObject <WebInspectorXPCWrapperDelegate, WebInspectorClientRegistryDelegate> {

	bool _isEnabled;
	bool _hasActiveDebugSession;
	int _notifyToken;
	WebInspectorXPCWrapper* _xpcConnection;
	WebInspectorServerWebViewConnectionController* _connectionController;

}
-(void)dealloc;
-(id)init;
-(bool)isEnabled;
-(void)start;
-(void)stop;
-(id)xpcConnection;
-(void)pushListing;
-(void)didRegisterClient:(WebInspectorClient*)arg1 ;
-(void)didUnregisterClient:(WebInspectorClient*)arg1 ;
-(void)setupXPCConnectionIfNeeded;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3 ;
-(void)xpcConnectionFailed:(id)arg1 ;
-(bool)hasActiveDebugSession;
-(void)setHasActiveDebugSession:(bool)arg1 ;
@end

