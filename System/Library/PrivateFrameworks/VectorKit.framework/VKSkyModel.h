/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>

@class VKMapModel, VGLRenderState, VKStylesheet;

@interface VKSkyModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {

	VKMapModel* _mapModel;
	float _skyStartOffset;
	VGLRenderState* _renderState;
	VGLColor _fillColor;
	VGLColor _horizonColor;

}

@property (nonatomic,readonly) VGLColor fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) VGLColor horizonColor;                  //@synthesize horizonColor=_horizonColor - In the implementation block
@property (assign,nonatomic) VKMapModel * mapModel;                    //@synthesize mapModel=_mapModel - In the implementation block
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
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)stylesheetDidChange;
-(id)mapModel;
-(VGLColor)horizonColor;
@end

