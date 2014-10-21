/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSLock, NSHashTable;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy {

	NSObject<OS_dispatch_queue>* _connQueue;
	NSObject<OS_xpc_object>* _conn;
	NSLock* _connLock;
	int _suspendCount;
	unsigned long long _handleCounter;
	NSHashTable* _cancellingConnections;
	NSLock* _cancellingConnectionsLock;

}
-(void)dealloc;
-(id)init;
-(void)close;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned long long)arg3 client:(id)arg4 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)endPreloadSession;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)flushPendingWrites;
-(bool)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(void)_handleTile:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(void)_handleNetworkBegan:(id)arg1 ;
-(void)_handleEditionUpgrade:(id)arg1 ;
-(void)_handleEvent:(id)arg1 fromConnection:(id)arg2 ;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)open;
@end

