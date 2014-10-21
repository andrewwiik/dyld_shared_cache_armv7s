/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <VectorKit/VKMercatorTerrainHeightProvider.h>
#import <VectorKit/VKMapLayer.h>

@class VKAnimation, VKSkyModel, VGLRenderState, VKBuildingDrawStyle, VKMercatorTerrainHeightCache;

@interface VKBuildingFootprintMapModel : VKVectorMapModel <VKMercatorTerrainHeightProvider, VKMapLayer> {

	VGLColor _topColor;
	VGLColor _facadeColor;
	VGLColor _landmarkColor;
	VGLColor _flatColor;
	VGLColor _pointyFacadeColor;
	VGLColor _pointyTopColor;
	float _brightness;
	long long _vectorType;
	int _buildingMode;
	VKAnimation* _styleChangeAnimation;
	VKAnimation* _fadeBuildingAnimation;
	float _buildingOccluderAlpha;
	bool _fadeTiles;
	VKSkyModel* _skyModel;
	VGLColor _footprintStrokeColor;
	float _footprintStrokeWidth;
	VGLColor _3DStrokeColor;
	float _3DStrokeWidth;
	double _nearDistance;
	double _farDistance;
	unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, vk_allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > >* _currentOccluders;
	unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, vk_allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > >* _previousOccluders;
	VGLRenderState* _renderState;
	float _minLayeringHeight;
	float _maxLayeringHeight;
	bool _shouldDraw3DBuildingsInVectorBuildingsRenderPass;
	bool _shouldDraw3DBuildingsIn3DBuildingsRenderPass;
	bool _initializedStyles;
	VKBuildingDrawStyle* _globalBuildingDrawStyle;
	VKBuildingDrawStyle* _globalPointyBuildingDrawStyle;
	VKMercatorTerrainHeightCache* _heightCache;

}

@property (nonatomic,readonly) VKMercatorTerrainHeightCache * heightCache;              //@synthesize heightCache=_heightCache - In the implementation block
@property (assign,nonatomic) long long vectorType;                                      //@synthesize vectorType=_vectorType - In the implementation block
@property (assign,nonatomic) bool fadeTiles;                                            //@synthesize fadeTiles=_fadeTiles - In the implementation block
@property (assign,nonatomic) int buildingMode;                                          //@synthesize buildingMode=_buildingMode - In the implementation block
@property (nonatomic,retain) VKSkyModel * skyModel;                                     //@synthesize skyModel=_skyModel - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setActive:(bool)arg1 ;
-(id).cxx_construct;
-(void)reset;
-(void).cxx_destruct;
-(unsigned long long)mapLayerPosition;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(double)heightAtPoint:(VKPoint)arg1 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)drawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(id)heightCache;
-(void)setFadeTiles:(bool)arg1 ;
-(void)stylesheetDidChange;
-(void)setVectorType:(long long)arg1 ;
-(void)setSkyModel:(id)arg1 ;
-(double)maxTileHeightAtPoint:(VKPoint)arg1 ;
-(int)buildingMode;
-(void)setBuildingMode:(int)arg1 animated:(bool)arg2 ;
-(bool)wantsCategorizedSourceTiles;
-(void)removePersistingExitingTiles:(id)arg1 ;
-(void)willStartDrawingTiles:(id)arg1 ;
-(void)willStopDrawingTiles:(id)arg1 ;
-(long long)vectorType;
-(void)vectorTypeDidChange;
-(void)_clearOccluders;
-(void)_updateStyles;
-(void)draw3DBuildingsInScene:(id)arg1 withContext:(id)arg2 passes:(unsigned)arg3 ;
-(void)draw3DBuildingShadowsInScene:(id)arg1 withContext:(id)arg2 ;
-(void)drawFootprintsInScene:(id)arg1 withContext:(id)arg2 ;
-(void)draw3DBuildingStrokesInScene:(id)arg1 withContext:(id)arg2 ;
-(void)draw2DBuildingsInScene:(id)arg1 withContext:(id)arg2 ;
-(bool)fadeTiles;
-(void)setBuildingMode:(int)arg1 ;
-(id)skyModel;
@end

