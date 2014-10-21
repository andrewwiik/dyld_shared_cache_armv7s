/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@class VKTileSource, NSMutableArray, NSArray;

@interface VKOverlayTileSource : VKTileSource {

	VKTileSource* _tileSourceToMatch;
	NSMutableArray* _overlays;

}

@property (nonatomic,readonly) NSArray * overlays;              //@synthesize overlays=_overlays - In the implementation block
-(void)dealloc;
-(long long)tileSize;
-(long long)minimumZoomLevel;
-(long long)maximumZoomLevel;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(bool)minimumZoomLevelBoundsCamera;
-(bool)maximumZoomLevelBoundsCamera;
-(void)matchTilesFromSource:(id)arg1 ;
-(long long)minimumDownloadZoomLevel;
-(void)fetchTileForKey:(const VKTileKey*)arg1 ;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(bool)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(long long)maximumDownloadZoomLevel;
-(long long)zEquivalenceClass;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(VKTileKey)nativeKeyForRenderKey:(const VKTileKey*)arg1 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(VKTileKey)sourceKeyForDownloadKey:(const GEOTileKey*)arg1 ;
-(void)_overlayBoundingMapRegionChanged:(id)arg1 ;
@end

