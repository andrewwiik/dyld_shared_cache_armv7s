/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRouteMapMatchingDataSource.h>

@class VKAttributedRoute, NSSet;

@interface VKRouteLine : NSObject <VKRouteMapMatchingDataSource> {

	bool _curve;
	bool _matchToRoads;
	bool _hasNewRoadMatches;
	VKEdgeInsets _bounds;
	SCD_Struct_VK42 _inverseMatrix;
	VKAttributedRoute* _overlay;
	double _boundsUnitsPerMeter;
	double _metersPerPoint;
	double _boundsInWorldUnit;
	double _simplificationEpsilonPoints;
	double _viewUnitsPerPoint;
	vector<vk::RouteLineSection, vk_allocator<vk::RouteLineSection> >* _sections;
	RouteLineSection* _userLocationSection;
	PolylineCoordinate _userLocationIndex;
	Vec2Imp<float> _userLocation;
	double _lastUserLocationMatchTimestamp;
	double _lastTrafficTimeStamp;
	NSSet* _retainedTiles;

}

@property (assign,nonatomic) VKAttributedRoute * overlay;                     //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,readonly) bool needsUpdate; 
@property (assign,nonatomic) double simplificationEpsilonPoints;              //@synthesize simplificationEpsilonPoints=_simplificationEpsilonPoints - In the implementation block
@property (nonatomic,readonly) VKEdgeInsets bounds;                           //@synthesize bounds=_bounds - In the implementation block
@property (assign) bool hasNewRoadMatches;                                    //@synthesize hasNewRoadMatches=_hasNewRoadMatches - In the implementation block
-(void)dealloc;
-(VKEdgeInsets)bounds;
-(id).cxx_construct;
-(id)overlay;
-(void)setOverlay:(id)arg1 ;
-(void).cxx_destruct;
-(void)forEachMapMatchingSection:(/*^block*/ id)arg1 ;
-(void)setSimplificationEpsilonPoints:(double)arg1 ;
-(bool)needsUpdate;
-(bool)buildRouteLineForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 containerModel:(id)arg4 viewUnitsPerPoint:(double)arg5 force:(bool)arg6 curve:(bool)arg7 ;
-(void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2 ;
-(void)createMeshIfNecessary:(int)arg1 ;
-(void)forEachSection:(/*^block*/ id)arg1 ;
-(void)splitRouteLineAtAnnotation:(id)arg1 ;
-(void)drawDebugMarkersWithContext:(id)arg1 ;
-(void)setHasNewRoadMatches:(bool)arg1 ;
-(void)_updateBounds:(id)arg1 ;
-(void)_updateTilesCovered:(id)arg1 ;
-(bool)isTrafficUpToDate;
-(bool)hasNewRoadMatches;
-(bool)isTrafficUptoDate:(double)arg1 ;
-(double)simplificationEpsilonPoints;
@end

