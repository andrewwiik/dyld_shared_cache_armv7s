/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSInvocation;

@interface _UIActionWhenIdle : NSObject {

	NSInvocation* _invocation;

}

@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
+(id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)invoke;
-(bool)isValid;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(id)invocation;
-(id)initWithInvocation:(id)arg1 ;
-(void)addObserverToRunLoop;
-(void)setInvocation:(id)arg1 ;
@end

