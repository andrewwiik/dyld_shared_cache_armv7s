/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSBaseXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BKSApplicationDataStoreRepositoryClient : BKSBaseXPCClient {

	NSMutableDictionary* _prefetchedKeyCounts;
	NSMutableDictionary* _prefetchedKeyValues;
	NSMutableDictionary* _pendingChangesToPrefetchedKeys;
	NSObject<OS_dispatch_queue>* _prefetchedDataQueue;

}
-(id)initWithEndpoint:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)queue_handleMessage:(id)arg1 ;
-(void)availableDataStores:(/*^block*/ id)arg1 ;
-(void)synchronizeWithCompletion:(/*^block*/ id)arg1 ;
-(void)addPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(bool)_prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/ id)arg3 checkPrefetch:(bool)arg4 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/ id)arg3 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_sendPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)fireCompletion:(/*^block*/ id)arg1 error:(id)arg2 ;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/ id)arg2 withReplyHandler:(/*^block*/ id)arg3 waitForReply:(bool)arg4 ;
-(void)fireCompletion:(/*^block*/ id)arg1 arrayResults:(id)arg2 error:(id)arg3 ;
-(void)fireCompletion:(/*^block*/ id)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3 ;
-(void)_setChangeInFlight:(bool)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3 ;
-(void)_handleValueChanged:(id)arg1 ;
-(void)_handleStoreInvalidated:(id)arg1 ;
-(bool)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2 ;
-(id)clientCallbackQueue;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)queue_connectionWasCreated;
-(id)_allPrefetchedChangesInFlightForApplication:(id)arg1 ;
@end

