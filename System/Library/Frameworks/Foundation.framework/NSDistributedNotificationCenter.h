/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSNotificationCenter.h>

@interface NSDistributedNotificationCenter : NSNotificationCenter
+(id)notificationCenterForType:(id)arg1 ;
+(id)defaultCenter;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(/*^block*/ id)arg5 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 options:(unsigned long long)arg4 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(bool)arg4 ;
-(bool)suspended;
-(id)init;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(void)postNotification:(id)arg1 ;
-(void)setSuspended:(bool)arg1 ;
@end

