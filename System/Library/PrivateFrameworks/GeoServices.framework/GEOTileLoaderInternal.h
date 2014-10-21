/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileLoader.h>
#import <GeoServices/GEOTileServerProxyDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@protocol OS_dispatch_queue, GEOTileLoaderInternalDelegate;
@class GEOTileCache, NSObject, NSMutableSet, GEOTileServerProxy, NSMutableArray, GEOTileLoaderConfiguration;

@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver> {

	list<LoadItem, std::__1::allocator<LoadItem> >* _loadItems;
	mutex _lock;
	GEOTileCache* _cache;
	GEOTileCache* _expiringCache;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _timer;
	NSObject<OS_dispatch_queue>* _loadQ;
	NSMutableSet* _openers;
	SCD_Struct_GE12 _sortPoint;
	GEOTileServerProxy* _proxy;
	int _memoryHits;
	int _diskHits;
	int _networkHits;
	list<ShrinkCacheRequester, std::__1::allocator<ShrinkCacheRequester> >* _shrinkCacheRequesters;
	NSMutableArray* _tileDecoders;
	bool _networkActive;
	<GEOTileLoaderInternalDelegate>* _internalDelegate;
	NSObject<OS_dispatch_queue>* _internalDelegateQ;
	GEOTileLoaderConfiguration* _config;
	mutex _usageLock;
	unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData> > >* _usageData;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _usageTimer;
	bool _isUsageTimerScheduled;
	int _rollingBatchId;
	deque<ErrorInfo, std::__1::allocator<ErrorInfo> >* _recentErrors;

}
-(void)_timerFired;
-(void)dealloc;
-(id)init;
-(id)description;
-(id).cxx_construct;
-(void).cxx_destruct;
-(bool)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(void)clearAllCaches;
-(int)memoryHits;
-(int)diskHits;
-(int)networkHits;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/ id)arg3 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegateQ:(id)arg1 ;
-(id)internalDelegateQ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
-(void)_tileEditionChanged:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_cancel:(_list_iterator<LoadItem, void *>*)arg1 err:(id)arg2 ;
-(bool)_cancelIfNeeded:(_list_iterator<LoadItem, void *>*)arg1 ;
-(void)_updateNetworkActive;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned long long)arg5 callbackQ:(id)arg6 beginNetwork:(/*^block*/ id)arg7 callback:(/*^block*/ id)arg8 ;
-(void)_requestOnlineTiles;
-(void)_loadedTile:(id)arg1 forKey:(const GEOTileKey*)arg2 info:(id)arg3 ;
-(id)_findInCache:(const GEOTileKey*)arg1 ;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4 ;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3 ;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2 ;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2 ;
-(void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(void)_usageTimerFired;
-(void)_activeTileGroupChanged:(id)arg1 ;
-(id)proxy;
-(void)_localeChanged:(id)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setSortPoint:(const SCD_Struct_GE12*)arg1 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)registerTileDecoder:(id)arg1 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(/*^block*/ id)arg6 callback:(/*^block*/ id)arg7 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/ id)arg1 ;
@end

