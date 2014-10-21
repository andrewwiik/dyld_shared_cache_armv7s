/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebInspectorRemoteChannel, WebInspectorServerWebViewConnectionController, NSString, NSNumber;

@interface WebInspectorServerWebViewConnection : NSObject {

	WebInspectorRemoteChannel* _channel;
	WebInspectorServerWebViewConnectionController* _controller;
	NSString* _connectionIdentifier;
	NSString* _destination;
	NSNumber* _identifier;

}
-(void)dealloc;
-(id)identifier;
-(void)sendMessageToFrontend:(id)arg1 ;
-(void)clearChannel;
-(void)sendMessageToBackend:(id)arg1 ;
-(id)initWithController:(id)arg1 connectionIdentifier:(id)arg2 destination:(id)arg3 identifier:(id)arg4 ;
-(bool)setupChannel;
-(id)connectionIdentifier;
-(void)receivedData:(id)arg1 ;
-(void)receivedDidClose:(id)arg1 ;
@end

