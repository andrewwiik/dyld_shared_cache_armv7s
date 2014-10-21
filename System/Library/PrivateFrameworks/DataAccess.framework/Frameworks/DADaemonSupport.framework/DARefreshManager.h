/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DARefreshManager : NSObject
+(id)sharedManager;
-(void)_performBlockOnRefreshManagerThread:(/*^block*/ id)arg1 ;
-(void)registerDelegate:(id)arg1 ;
-(void)unregisterDelegate:(id)arg1 ;
-(void)registerTopic:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(void)_unregisterTopicLocked:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(void)unregisterTopic:(id)arg1 forDelegate:(id)arg2 inEnvironment:(id)arg3 ;
-(void)delegateDidCompleteRefresh:(id)arg1 ;
-(void)retryRefreshForDelegate:(id)arg1 withCollections:(id)arg2 after:(double)arg3 originalRefreshReason:(int)arg4 ;
-(id)pushTokenForEnvironment:(id)arg1 ;
@end

