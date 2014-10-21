/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSLock;

@interface IMDInvocationForwarder : NSObject {

	NSMutableArray* _targets;
	NSLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * _targets;              //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSLock * _lock;                         //@synthesize lock=_lock - In the implementation block
-(void)dealloc;
-(bool)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(id)initWithTargets:(id)arg1 ;
-(id)_lock;
-(void)addTarget:(id)arg1 ;
-(id)_targets;
-(void)set_targets:(id)arg1 ;
-(void)set_lock:(id)arg1 ;
@end

