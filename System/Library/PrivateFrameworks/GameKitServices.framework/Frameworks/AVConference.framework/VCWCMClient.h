/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, WCMClientDelegate;
@class NSObject;

@interface VCWCMClient : NSObject {

	NSObject<OS_xpc_object>* connection;
	NSObject<OS_dispatch_queue>* connectionQueue;
	<WCMClientDelegate>* wcmClientDelegate;

}

@property (readonly) NSObject<OS_xpc_object> * connection; 
@property (readonly) NSObject<OS_dispatch_queue> * connectionQueue; 
@property (nonatomic,retain) <WCMClientDelegate> * wcmClientDelegate; 
-(void)dealloc;
-(id)init;
-(id)connection;
-(void)setWcmClientDelegate:(id)arg1 ;
-(void)startWCMClient;
-(void)stopWCMClient;
-(id)connectionQueue;
-(id)wcmClientDelegate;
@end

