/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIQueueingServiceWebViewControllerProxyDelegate;
@class NSMutableArray;

@interface _UIQueueingServiceWebViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	id _serviceViewControllerProxy;
	<_UIQueueingServiceWebViewControllerProxyDelegate>* _delegate;

}

@property (nonatomic,retain) id serviceViewControllerProxy;                                              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
@property (assign,nonatomic) <_UIQueueingServiceWebViewControllerProxyDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)serviceViewControllerProxy;
-(void)setServiceViewControllerProxy:(id)arg1 ;
@end

