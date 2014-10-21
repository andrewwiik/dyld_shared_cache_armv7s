/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSObject, NSMapTable;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {

	NSMutableDictionary* _listeners;
	NSMutableDictionary* _idStatusCache;
	NSMutableDictionary* _transactionIDToBlockMap;
	NSString* _rerouteService;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	NSObject<OS_dispatch_queue>* _queue;
	NSString* _serviceToken;
	NSMapTable* _delegateToInfo;
	NSMutableDictionary* _listenerIDToServicesMap;
	id _delegateContext;

}
-(id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(/*^block*/ id)arg3 failBlock:(/*^block*/ id)arg4 waitForReply:(bool)arg5 ;
-(void)_disconnectFromQueryService;
-(void)_requestCacheForService:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(bool)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(void)addListenerID:(id)arg1 forService:(id)arg2 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)daemonDisconnected;
-(void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(bool)arg4 error:(id)arg5 ;
-(void)_callDelegatesWithBlock:(/*^block*/ id)arg1 ;
-(void)___oldDealloc;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_cacheForService:(id)arg1 ;
-(void)_purgeIDStatusCache;
-(void)_purgeIDStatusCacheAfter:(double)arg1 ;
-(id)_reroutedPrototypeService:(id)arg1 ;
-(id)_cachedStatusForDestination:(id)arg1 service:(id)arg2 ;
-(void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2 ;
-(id)_delegateMapForListenerID:(id)arg1 service:(id)arg2 ;
-(void)_callDelegatesWithBlock:(/*^block*/ id)arg1 delegateMap:(id)arg2 ;
-(bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2 ;
-(void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(bool)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(bool)arg4 queue:(id)arg5 completionBlock:(/*^block*/ id)arg6 ;
-(bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)initWithDelegateContext:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 ;
-(bool)_warmupQueryCacheForService:(id)arg1 ;
-(bool)_flushQueryCacheForService:(id)arg1 ;
-(void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 ;
-(bool)_hasCacheForService:(id)arg1 ;
-(long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
@end
