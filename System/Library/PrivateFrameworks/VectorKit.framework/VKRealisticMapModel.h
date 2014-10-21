/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKVectorMapModel.h>
#import <VectorKit/VKMapLayer.h>

@protocol VKRoutePreloadSession;
@class VGLRenderState, VKSkyModel;

@interface VKRealisticMapModel : VKVectorMapModel <VKMapLayer> {

	VGLRenderState* _renderState;
	double _fade;
	float _sceneAlpha;
	<VKRoutePreloadSession>* _routePreloadSession;
	bool _disableRealisticRoads;
	bool _disableRealisticLand;
	VKSkyModel* _skyModel;

}

@property (nonatomic,retain) <VKRoutePreloadSession> * routePreloadSession; 
@property (assign,nonatomic) bool disableRealisticRoads;                                 //@synthesize disableRealisticRoads=_disableRealisticRoads - In the implementation block
@property (assign,nonatomic) bool disableRealisticLand;                                  //@synthesize disableRealisticLand=_disableRealisticLand - In the implementation block
@property (assign,nonatomic) float sceneAlpha;                                           //@synthesize sceneAlpha=_sceneAlpha - In the implementation block
@property (nonatomic,retain) VKSkyModel * skyModel;                                      //@synthesize skyModel=_skyModel - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned long long)mapLayerPosition;
-(void)setRoutePreloadSession:(id)arg1 ;
-(id)routePreloadSession;
-(void)setDisableRealisticRoads:(bool)arg1 ;
-(void)setDisableRealisticLand:(bool)arg1 ;
-(bool)disableRealisticRoads;
-(bool)disableRealisticLand;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)preloadNavigationSceneAnimationResourcesForDisplayStyle:(long long)arg1 context:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)preloadRenderingResourcesWithContext:(id)arg1 ;
-(void)setSkyModel:(id)arg1 ;
-(bool)minimumZoomLevelBoundsCamera;
-(void)setSceneAlpha:(float)arg1 ;
-(float)sceneAlpha;
-(bool)wantsCategorizedSourceTiles;
-(void)willStartDrawingTiles:(id)arg1 ;
-(id)skyModel;
-(double)_calculateZoomLevelWithContext:(id)arg1 ;
@end

