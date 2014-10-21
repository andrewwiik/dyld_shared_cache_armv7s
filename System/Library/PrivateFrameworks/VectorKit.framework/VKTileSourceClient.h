/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKTileSourceClient <NSObject>
@required
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1;
-(void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
-(void)invalidateTilesFromTileSource:(id)arg1;
-(bool)tileSourceMayUseNetwork:(id)arg1;
-(void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const VKTileKey*)arg3;
-(void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const VKTileKey*)arg2;
-(void)tileSource:(id)arg1 didFailToLoadTileForKey:(const VKTileKey*)arg2 error:(id)arg3;
-(void)tileSource:(id)arg1 invalidateKey:(const VKTileKey*)arg2;
-(void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
-(bool)tileSource:(id)arg1 keyIsNeeded:(const VKTileKey*)arg2;
-(void)tileSource:(id)arg1 dirtyTilesWithinRect:(const VKEdgeInsets*)arg2 level:(long long)arg3;
-(void)dirtyTilesFromTileSource:(id)arg1;
@end

