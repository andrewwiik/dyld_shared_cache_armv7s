/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebPolicyDecisionListener.h>

@class WebPolicyDecisionListenerPrivate;

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {

	WebPolicyDecisionListenerPrivate* _private;

}
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(void)download;
-(void)dealloc;
-(void)ignore;
-(void)use;
-(void)_invalidate;
-(id)_initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_usePolicy:(int)arg1 ;
@end

