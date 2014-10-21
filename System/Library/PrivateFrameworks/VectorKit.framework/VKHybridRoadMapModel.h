/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKRoadMapModel.h>

@class VGLTextureCanvas, VGLTexture, VGLRenderState;

@interface VKHybridRoadMapModel : VKRoadMapModel {

	VGLTextureCanvas* _offscreenCanvas;
	VGLTexture* _offscreenTexture;
	VGLRenderState* _renderState;
	float _roadAlpha;

}
-(void)dealloc;
-(id)init;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)_cleanupOffscreen;
-(void)_createOffscreenWithContext:(id)arg1 ;
-(void)_offscreenDrawScene:(id)arg1 withContext:(id)arg2 ;
-(void)_onscreenDrawScene:(id)arg1 withContext:(id)arg2 ;
@end

