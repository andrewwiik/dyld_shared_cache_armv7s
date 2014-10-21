/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/LabelManagerDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>
#import <VectorKit/VKMapModeObserver.h>

@protocol VKLabelModelDelegate;
@class NSArray, VKStylesheet;

@interface VKLabelModel : VKModelObject <LabelManagerDelegate, GEOResourceManifestTileGroupObserver, VKMapLayer, VKStylesheetObserver, VKMapModeObserver> {

	bool _debugSkipLabels;
	<VKLabelModelDelegate>* _delegate;
	bool _drawLabels;
	/*^block*/ id _observerIsReadyHook;
	shared_ptr<vk::LabelManager>* _labelManager;
	int _layoutStamp;
	vector<std::__1::shared_ptr<vk::InfoMapTile>, vk_allocator<std::__1::shared_ptr<vk::InfoMapTile> > >* _currentTiles;
	bool _inRealistic;
	bool _shouldModifyLabelsOnRoutes;

}

@property (assign,nonatomic) <VKLabelModelDelegate> * delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool drawLabels;                                           //@synthesize drawLabels=_drawLabels - In the implementation block
@property (assign,nonatomic) bool localizeLabels; 
@property (assign,nonatomic) long long labelScaleFactor; 
@property (assign,nonatomic) bool labelMarkerSelectionEnabled; 
@property (nonatomic,readonly) shared_ptr<vk::LabelManager>* labelManager;              //@synthesize labelManager=_labelManager - In the implementation block
@property (assign,nonatomic) long long shieldSize; 
@property (assign,nonatomic) long long navigationShieldSize; 
@property (assign,nonatomic) long long shieldIdiom; 
@property (assign,nonatomic) bool showsPointsOfInterest; 
@property (assign,nonatomic) bool shouldModifyLabelsOnRoutes;                           //@synthesize shouldModifyLabelsOnRoutes=_shouldModifyLabelsOnRoutes - In the implementation block
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
+(bool)reloadOnStylesheetChange;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id).cxx_construct;
-(void)setContentScale:(double)arg1 ;
-(void).cxx_destruct;
-(unsigned long long)mapLayerPosition;
-(bool)labelMarkerSelectionEnabled;
-(void)setLabelMarkerSelectionEnabled:(bool)arg1 ;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
-(void)setTrafficEnabled:(bool)arg1 ;
-(bool)localizeLabels;
-(void)setLocalizeLabels:(bool)arg1 ;
-(long long)labelScaleFactor;
-(void)setLabelScaleFactor:(long long)arg1 ;
-(void)clearScene;
-(long long)shieldSize;
-(void)setShieldSize:(long long)arg1 ;
-(long long)navigationShieldSize;
-(void)setNavigationShieldSize:(long long)arg1 ;
-(long long)shieldIdiom;
-(void)setShieldIdiom:(long long)arg1 ;
-(bool)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(bool)arg1 ;
-(PolylineCoordinate)routeUserOffset;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(id)externalTrafficIncidents;
-(void)setExternalTrafficIncidents:(id)arg1 ;
-(void)deselectLabelMarker;
-(void)setMapType:(long long)arg1 ;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(bool)arg2 ;
-(void)selectLabelMarker:(id)arg1 ;
-(id)selectedLabelMarker;
-(id)labelMarkers;
-(void)setCurrentLocationText:(id)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)setNavigationPuckSize:(float)arg1 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(shared_ptr<vk::LabelManager>*)labelManager;
-(void)setDrawLabels:(bool)arg1 ;
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(long long)arg1 withReadinessBlock:(/*^block*/ id)arg2 ;
-(void)stylesheetDidChange;
-(void)setVectorType:(long long)arg1 ;
-(void)setLabelMode:(int)arg1 ;
-(void)stylesheetWillTransition:(long long)arg1 ;
-(void)stylesheetDoneChanging;
-(id)initWithPurpose:(unsigned long long)arg1 ;
-(void)setShouldModifyLabelsOnRoutes:(bool)arg1 ;
-(void)willTapZoom;
-(void)didTapZoom;
-(void)willTransitionFrom:(long long)arg1 To:(long long)arg2 ;
-(void)didTransitionFrom:(long long)arg1 To:(long long)arg2 ;
-(void)setIsShowingRoute:(bool)arg1 ;
-(id)focusedPolylinePainter;
-(void)setFocusedPolylinePainter:(id)arg1 ;
-(void)debugHighlightLabelAtScreenPoint:(CGPoint)arg1 ;
-(id)labelDebugString;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)updateInfoMapTiles:(id)arg1 ;
-(bool)shouldModifyLabelsOnRoutes;
-(void)labelManager:(LabelManager*)arg1 setNeedsLayout:(bool)arg2 ;
-(void)labelManager:(LabelManager*)arg1 setNeedsDisplay:(bool)arg2 ;
-(void)labelManager:(LabelManager*)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)labelManager:(LabelManager*)arg1 pendingArtworkIsReady:(bool)arg2 ;
-(void)forEachDisplayedLabel:(/*^block*/ id)arg1 ;
-(bool)drawLabels;
@end

