/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebInspectorServerWebViewConnection;

@interface WebInspectorRemoteChannel : NSObject {

	WebInspectorServerWebViewConnection* _remote;
	WebInspectorClient* _local;

}
+(id)createChannelForPageId:(unsigned)arg1 connection:(id)arg2 ;
-(void)sendMessageToFrontend:(id)arg1 ;
-(void)closeFromLocalSide;
-(id)initWithRemote:(id)arg1 local:(WebInspectorClient*)arg2 ;
-(void)closeFromRemoteSide;
-(void)sendMessageToBackend:(id)arg1 ;
@end

