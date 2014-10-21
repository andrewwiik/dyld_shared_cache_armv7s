/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKScreenCanvas.h>
#import <VectorKit/VKAnnotationModelDelegate.h>
#import <VectorKit/VKCameraControllerDelegate.h>
#import <VectorKit/LabelManagerDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <VectorKit/VKGlobeLineContainerDelegate.h>
#import <VectorKit/VKInteractiveMap.h>

@protocol VKInteractiveMapDelegate, OS_dispatch_queue;
@class VKGlobeCameraController, VKAnnotationModel, VKAnchorContext, VKGlobePointCache, VKViewTransform, VKGlobeViewWrapperImp, VKGlobeLineContainer, NSObject, NSArray, NSMutableArray, GEOMapRegion, NSSet, VKAnchorWrapper;

@interface VKClassicGlobeCanvas : VKScreenCanvas <VKAnnotationModelDelegate, VKCameraControllerDelegate, LabelManagerDelegate, GEOResourceManifestTileGroupObserver, VKGlobeLineContainerDelegate, VKInteractiveMap> {

	Viewer* _viewer;
	RenderThread* _thread;
	RenderThread* _noThread;
	<VKInteractiveMapDelegate>* _delegate;
	VKGlobeCameraController* _cameraController;
	VKAnnotationModel* _annotationModel;
	VKAnchorContext* _anchorContext;
	VKGlobePointCache* _pointCache;
	VKViewTransform* _viewTransform;
	bool _labelMarkerSelectionEnabled;
	bool _localizeLabels;
	long long _labelScaleFactor;
	long long _mapType;
	long long _mapDisplayStyle;
	VKGlobeViewWrapperImp* _wrapper;
	VKGlobeLineContainer* _lineContainer;
	NSObject<OS_dispatch_queue>* _rootLayoutQueue;
	NSObject<OS_dispatch_queue>* _layoutQueue;
	NSObject<OS_dispatch_queue>* _rootRenderQueue;
	NSObject<OS_dispatch_queue>* _renderQueue;
	bool _tracking;
	bool _forceRepaint;
	bool _searchAnimationEnabled;
	int _defaultHeight;
	bool _disableRoads;
	bool _disableLabels;
	shared_ptr<vk::VKGlobeStylesheet>* _globeStyleSheet;
	AltitudeDebugSettings _debugSettings;
	GlobeAdapter* _globeAdapter;
	bool _pendingAnimation;
	CGPoint _animationCoordinate;
	double _animationZoom;
	bool _initialized;
	bool _canShowFlyover;
	shared_ptr<bool>* _isDead;
	bool _isLoading;
	bool _isDownloading;
	bool _wasPitched;
	bool _couldEnter3DMode;
	bool _updateCalledNeedsRedraw;
	/*^block*/ id _sceneDidLoadCallback;
	long long _shieldSize;
	long long _navigationShieldSize;
	long long _shieldIdiom;
	bool _showsPointsOfInterest;
	bool _showsBuildings;
	/*^block*/ id _artworkIsReadyBlock;
	NSArray* _externalTrafficIncidents;
	PolylineCoordinate _routeUserOffset;
	NSMutableArray* _externalAnchors;

}

@property (assign,nonatomic) <VKInteractiveMapDelegate> * delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mapType; 
@property (nonatomic,readonly) double minimumZoomLevel; 
@property (nonatomic,readonly) double maximumZoomLevel; 
@property (assign,nonatomic) VKEdgeInsets edgeInsets; 
@property (assign,nonatomic) bool isPitchable; 
@property (assign,nonatomic) bool trafficEnabled; 
@property (assign,nonatomic) bool forceRepaint;                                                                  //@synthesize forceRepaint=_forceRepaint - In the implementation block
@property (assign,getter=isSearchAnimationEnabled,nonatomic) bool searchAnimationEnabled; 
@property (getter=isPitched,nonatomic,readonly) bool pitched; 
@property (getter=isFullyPitched,nonatomic,readonly) bool fullyPitched; 
@property (nonatomic,readonly) bool isMotionControlActive; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) bool flyoverAvailable;                                                            //@synthesize canShowFlyover=_canShowFlyover - In the implementation block
@property (assign,nonatomic) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation; 
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSSet * persistentOverlays; 
@property (assign,nonatomic) bool disableRoads;                                                                  //@synthesize disableRoads=_disableRoads - In the implementation block
@property (assign,nonatomic) bool disableLabels;                                                                 //@synthesize disableLabels=_disableLabels - In the implementation block
@property (nonatomic,copy) id sceneDidLoadCallback;                                                              //@synthesize sceneDidLoadCallback=_sceneDidLoadCallback - In the implementation block
@property (assign,nonatomic) bool staysCenteredDuringPinch; 
@property (assign,nonatomic) bool staysCenteredDuringRotation; 
@property (assign,nonatomic) long long shieldSize;                                                               //@synthesize shieldSize=_shieldSize - In the implementation block
@property (assign,nonatomic) long long navigationShieldSize;                                                     //@synthesize navigationShieldSize=_navigationShieldSize - In the implementation block
@property (assign,nonatomic) long long shieldIdiom;                                                              //@synthesize shieldIdiom=_shieldIdiom - In the implementation block
@property (assign,nonatomic) bool showsPointsOfInterest;                                                         //@synthesize showsPointsOfInterest=_showsPointsOfInterest - In the implementation block
@property (assign,nonatomic) bool showsBuildings;                                                                //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (assign,nonatomic) bool labelMarkerSelectionEnabled;                                                   //@synthesize labelMarkerSelectionEnabled=_labelMarkerSelectionEnabled - In the implementation block
@property (assign,nonatomic) bool localizeLabels;                                                                //@synthesize localizeLabels=_localizeLabels - In the implementation block
@property (assign,nonatomic) long long labelScaleFactor;                                                         //@synthesize labelScaleFactor=_labelScaleFactor - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double altitude; 
@property (assign,nonatomic) long long annotationTrackingZoomStyle; 
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) bool animatingToTrackAnnotation; 
@property (nonatomic,readonly) <VKTrackableAnnotation> * trackingAnnotation; 
@property (getter=isTrackingHeading,nonatomic,readonly) bool trackingHeading; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=isFullyDrawn,nonatomic,readonly) bool fullyDrawn; 
@property (nonatomic,readonly) VKAnchorWrapper * externalAnchors; 
+(bool)supportsMapType:(long long)arg1 scale:(int)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setHidden:(bool)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)initialize;
-(void)setContentsScale:(double)arg1 ;
-(void)_update;
-(id).cxx_construct;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void).cxx_destruct;
-(void)willEnterForeground;
-(id)camera;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)didEnterBackground;
-(double)altitude;
-(void)didPresent;
-(bool)canRender;
-(bool)wantsRender;
-(void)frameBufferDestroyed;
-(id)initWithContext:(id)arg1 inBackground:(bool)arg2 ;
-(void)drawWithTimestamp:(double)arg1 ;
-(bool)labelMarkerSelectionEnabled;
-(void)setLabelMarkerSelectionEnabled:(bool)arg1 ;
-(long long)mapType;
-(id)visibleTileSets;
-(id)attributionsForCurrentRegion;
-(bool)isShowingNoDataPlaceholders;
-(id)stylesheet;
-(bool)trafficEnabled;
-(void)setTrafficEnabled:(bool)arg1 ;
-(bool)currentZoomLevelAllowsRotation;
-(void)setStaysCenteredDuringPinch:(bool)arg1 ;
-(bool)localizeLabels;
-(void)setLocalizeLabels:(bool)arg1 ;
-(long long)labelScaleFactor;
-(void)setLabelScaleFactor:(long long)arg1 ;
-(bool)staysCenteredDuringPinch;
-(void)setStaysCenteredDuringRotation:(bool)arg1 ;
-(bool)staysCenteredDuringRotation;
-(void)setIsPitchable:(bool)arg1 ;
-(bool)isPitchable;
-(void)debugShowTourJump:(bool)arg1 ;
-(void)debugHighlightLabelAtPoint:(CGPoint)arg1 ;
-(id)detailedDescription;
-(bool)canZoomInForTileSize:(long long)arg1 ;
-(bool)canZoomOutForTileSize:(long long)arg1 ;
-(double)minimumZoomLevel;
-(double)minimumZoomLevelForTileSize:(long long)arg1 ;
-(double)topDownMinimumZoomLevelForTileSize:(long long)arg1 ;
-(double)maximumZoomLevel;
-(double)maximumZoomLevelForTileSize:(long long)arg1 ;
-(double)currentZoomLevel;
-(double)currentZoomLevelForTileSize:(long long)arg1 ;
-(double)zoomLevelAdjustmentForTileSize:(long long)arg1 ;
-(long long)shieldSize;
-(void)setShieldSize:(long long)arg1 ;
-(long long)navigationShieldSize;
-(void)setNavigationShieldSize:(long long)arg1 ;
-(long long)shieldIdiom;
-(void)setShieldIdiom:(long long)arg1 ;
-(bool)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(bool)arg1 ;
-(bool)showsBuildings;
-(void)setShowsBuildings:(bool)arg1 ;
-(long long)annotationTrackingZoomStyle;
-(void)setAnnotationTrackingZoomStyle:(long long)arg1 ;
-(PolylineCoordinate)routeUserOffset;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(id)externalTrafficIncidents;
-(void)setExternalTrafficIncidents:(id)arg1 ;
-(/*^block*/ id)annotationMarkerDeselectionCallback;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/ id)arg1 ;
-(id)selectedAnnotationMarker;
-(id)annotationMarkers;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(bool)arg2 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(id)persistentOverlays;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(id)routeLineSplitAnnotation;
-(void)setRouteLineSplitAnnotation:(id)arg1 ;
-(void)deselectLabelMarker;
-(id)trackingAnnotation;
-(bool)isTrackingHeading;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 ;
-(id)externalAnchors;
-(void)removeExternalAnchor:(id)arg1 ;
-(void)addExternalAnchor:(id)arg1 ;
-(bool)disableLabels;
-(void)setDisableLabels:(bool)arg1 ;
-(bool)disableRoads;
-(void)setDisableRoads:(bool)arg1 ;
-(void)setNightMode:(bool)arg1 ;
-(void)setMapType:(long long)arg1 ;
-(void)setForceRepaint:(bool)arg1 ;
-(void)transferCamera:(id)arg1 ;
-(void)stylesheetAnimationDidEnd:(bool)arg1 ;
-(bool)canEnter3DMode;
-(void)waitForLoading;
-(void)stylesheetAnimationWillStartFromStyle:(long long)arg1 toStyle:(long long)arg2 ;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(long long)arg2 setupHandler:(/*^block*/ id)arg3 ;
-(double)_styleTransitionProgress;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(long long)arg2 step:(long long)arg3 ;
-(double)presentationYaw;
-(void)setMapRegion:(id)arg1 animated:(bool)arg2 ;
-(id)mapRegion;
-(id)mapRegionOfInterest;
-(id)consoleString:(bool)arg1 ;
-(VKPoint)centerCoordinate;
-(void)setCenterCoordinate:(CGPoint)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/ id)arg6 completion:(/*^block*/ id)arg7 ;
-(void)setYaw:(double)arg1 animated:(bool)arg2 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4 completion:(/*^block*/ id)arg5 ;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/ id)arg5 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateFromLayer:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toMapPointFromLayer:(id)arg2 ;
-(CGPoint)convertMapPoint:(CGPoint)arg1 toPointToLayer:(id)arg2 ;
-(CGPoint)convertCoordinate:(CGPoint)arg1 toPointToLayer:(id)arg2 ;
-(CGPoint)convertCoordinate:(CGPoint)arg1 toCameraModelPointToLayer:(id)arg2 ;
-(bool)canShowAnimationForSearchResultWithMapRegion:(id)arg1 ;
-(void)showSearchResultAnimationAtCoordinate:(CGPoint)arg1 withMapRegion:(id)arg2 ;
-(void)startPlaceCardAnimationAtCoordinate:(CGPoint)arg1 andDistance:(double)arg2 ;
-(void)stopPlaceCardAnimation;
-(void)stopAnimations;
-(void)startLoadPosition:(CGPoint)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(bool)arg2 ;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(bool)arg2 ;
-(void)selectLabelMarker:(id)arg1 ;
-(void)enter3DMode;
-(void)exit3DMode;
-(bool)isPitched;
-(bool)isFullyPitched;
-(bool)isMotionControlActive;
-(bool)flyoverAvailable;
-(void)startMotionControlWithProvider:(id)arg1 ;
-(void)stopMotionControl;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(/*^block*/ id)annotationRectTest;
-(/*^block*/ id)annotationCoordinateTest;
-(bool)shouldHideOffscreenSelectedAnnotation;
-(id)selectedLabelMarker;
-(id)labelMarkers;
-(bool)isAnimatingToTrackAnnotation;
-(id)viewportInfo;
-(bool)restoreViewportFromInfo:(id)arg1 ;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2 ;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPanningAtPoint:(CGPoint)arg1 ;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(void)didStartPanningDeceleration;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(bool)isPointValidForGesturing:(CGPoint)arg1 ;
-(void)stopSnappingAnimations;
-(bool)isFullyDrawn;
-(void)setMapRegion:(id)arg1 ;
-(void)updateCameraForFrameResize;
-(VKPoint)screenPointForPoint:(CGPoint)arg1 ;
-(void)cameraControllerDidChangeCameraState:(id)arg1 ;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2 ;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2 ;
-(void)cameraController:(id)arg1 didBecomePitched:(bool)arg2 ;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2 ;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)onTimerFired:(id)arg1 ;
-(void)_reloadStylesheet;
-(void)annotationModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2 ;
-(void)annotationModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2 ;
-(void)annotationModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)labelManager:(LabelManager*)arg1 setNeedsLayout:(bool)arg2 ;
-(void)labelManager:(LabelManager*)arg1 setNeedsDisplay:(bool)arg2 ;
-(void)labelManager:(LabelManager*)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)labelManager:(LabelManager*)arg1 pendingArtworkIsReady:(bool)arg2 ;
-(id)addHandleAtCoordinate:(CGPoint)arg1 withHighPrecision:(bool)arg2 ;
-(void)removeHandle:(id)arg1 ;
-(VKPoint)pointForHandle:(id)arg1 atCoordinate:(CGPoint)arg2 withHighPrecision:(bool)arg3 ;
-(void)updateCameraFromGlobe;
-(void)setSceneDidLoadCallback:(/*^block*/ id)arg1 ;
-(void)_setAnimationCoordinate:(CGPoint)arg1 andZoom:(double)arg2 ;
-(void)_runPendingAnimation;
-(void)stopSearchResultAnimation;
-(void)_updateDebugSettings;
-(void)updateAndDrawWithTimestamp:(double)arg1 ;
-(/*^block*/ id)sceneDidLoadCallback;
-(bool)_viewTransformSetup;
-(void)layout:(bool)arg1 threaded:(bool)arg2 timestamp:(double)arg3 ;
-(void)draw:(bool)arg1 threaded:(bool)arg2 ;
-(void)layoutVK:(bool)arg1 timestamp:(double)arg2 ;
-(void)drawVK;
-(void)lineContainerNeedsDisplay:(id)arg1 ;
-(void)setSearchAnimationEnabled:(bool)arg1 ;
-(bool)isSearchAnimationEnabled;
-(void)setLodMode:(int)arg1 ;
-(unsigned)getTotalDownloaded;
-(void)setBackgroundViewLoading:(bool)arg1 ;
-(bool)forceRepaint;
-(double)pitch;
-(double)yaw;
@end

