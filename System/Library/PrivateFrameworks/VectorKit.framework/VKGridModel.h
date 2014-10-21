/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>

@class VKMapModel, VGLRenderState, VGLMesh, VKStylesheet;

@interface VKGridModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {

	VKMapModel* _mapModel;
	bool _simpleGridEnabled;
	unsigned _renderPass;
	VGLRenderState* _renderState;
	double _gridMix;
	SCD_Struct_VK42 _projection;
	SCD_Struct_VK42 _gridView;
	Vec2Imp<float> _invFwidth;
	VGLColor _fillColor;
	VGLColor _lineColor;
	VGLMesh* _mesh;

}

@property (nonatomic,readonly) VGLColor fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) VKMapModel * mapModel;                    //@synthesize mapModel=_mapModel - In the implementation block
@property (assign,nonatomic) bool simpleGridEnabled;                   //@synthesize simpleGridEnabled=_simpleGridEnabled - In the implementation block
@property (assign,nonatomic) unsigned renderPass;                      //@synthesize renderPass=_renderPass - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
+(bool)reloadOnStylesheetChange;
-(void)dealloc;
-(id)init;
-(VGLColor)fillColor;
-(id).cxx_construct;
-(unsigned long long)mapLayerPosition;
-(id)stylesheet;
-(void)setMapModel:(id)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)setRenderPass:(unsigned)arg1 ;
-(void)updateGridColor;
-(void)stylesheetDidChange;
-(void)setSimpleGridEnabled:(bool)arg1 ;
-(id)mapModel;
-(bool)simpleGridEnabled;
-(unsigned)renderPass;
@end

