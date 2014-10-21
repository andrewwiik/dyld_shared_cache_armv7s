/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlay.h>

@class NSString;

@interface MKTileOverlay : NSObject <MKOverlay> {

	NSString* _URLTemplate;
	CGSize _tileSize;
	bool _geometryFlipped;
	long long _minimumZ;
	long long _maximumZ;
	bool _canReplaceMapContent;
	unsigned _providerID;

}

@property (assign) CGSize tileSize;                                         //@synthesize tileSize=_tileSize - In the implementation block
@property (getter=isGeometryFlipped) bool geometryFlipped;                  //@synthesize geometryFlipped=_geometryFlipped - In the implementation block
@property (assign) long long minimumZ;                                      //@synthesize minimumZ=_minimumZ - In the implementation block
@property (assign) long long maximumZ;                                      //@synthesize maximumZ=_maximumZ - In the implementation block
@property (readonly) NSString * URLTemplate;                                //@synthesize URLTemplate=_URLTemplate - In the implementation block
@property (assign,nonatomic) bool canReplaceMapContent;                     //@synthesize canReplaceMapContent=_canReplaceMapContent - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
-(SCD_Struct_MK2)boundingMapRect;
-(bool)canReplaceMapContent;
-(id)initWithURLTemplate:(id)arg1 ;
-(void)_assignProviderID;
-(id)URLForTilePath:(SCD_Struct_MK20)arg1 ;
-(GEOTileKey)_keyForPath:(SCD_Struct_MK20)arg1 ;
-(int)_zoomLevelForScale:(double)arg1 ;
-(long long)minimumZ;
-(long long)maximumZ;
-(void)loadTileAtPath:(SCD_Struct_MK20)arg1 result:(/*^block*/ id)arg2 ;
-(void)_loadTile:(id)arg1 result:(/*^block*/ id)arg2 ;
-(id)_tilesInMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 contentScale:(double)arg3 ;
-(void)_flushCaches;
-(id)URLTemplate;
-(void)setMinimumZ:(long long)arg1 ;
-(void)setMaximumZ:(long long)arg1 ;
-(void)setCanReplaceMapContent:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTileSize:(CGSize)arg1 ;
-(id).cxx_construct;
-(CGSize)tileSize;
-(void).cxx_destruct;
-(bool)isGeometryFlipped;
-(void)setGeometryFlipped:(bool)arg1 ;
-(SCD_Struct_MK1)coordinate;
@end
