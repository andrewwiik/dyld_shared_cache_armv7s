/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLProgram.h>

@interface VGLFogProgram : VGLProgram {

	int _uModelViewMatrix;
	SCD_Union_VG35 _modelViewMatrix;
	VGLColor _skyBottomColor;
	int _uSkyBottomColor;
	VGLColor _skyTopColor;
	int _uSkyTopColor;
	float _skyOffset;
	int _uSkyOffset;
	float _screenHeight;
	int _uScreenHeight;
	float _horizonDepth;
	float _fogSlope;
	int _uFogSlope;
	float _fogOffset;
	int _uFogOffset;
	VGLColor _fogSlopeInShader;

}

@property (assign,nonatomic) /*function pointer*/ void* modelViewMatrix;              //@synthesize modelViewMatrix=_modelViewMatrix - In the implementation block
@property (assign,nonatomic) float horizonDepth;                                      //@synthesize horizonDepth=_horizonDepth - In the implementation block
@property (assign,nonatomic) VGLColor skyBottomColor;                                 //@synthesize skyBottomColor=_skyBottomColor - In the implementation block
@property (assign,nonatomic) VGLColor skyTopColor;                                    //@synthesize skyTopColor=_skyTopColor - In the implementation block
@property (assign,nonatomic) float skyOffset;                                         //@synthesize skyOffset=_skyOffset - In the implementation block
@property (assign,nonatomic) float screenHeight;                                      //@synthesize screenHeight=_screenHeight - In the implementation block
@property (assign,nonatomic) float fogSlope;                                          //@synthesize fogSlope=_fogSlope - In the implementation block
@property (assign,nonatomic) float fogOffset;                                         //@synthesize fogOffset=_fogOffset - In the implementation block
-(void)dealloc;
-(id).cxx_construct;
-(void)setup;
-(void)setHorizonDepth:(float)arg1 ;
-(void)setSkyOffset:(float)arg1 ;
-(void)setScreenHeight:(float)arg1 ;
-(void)setSkyTopColor:(VGLColor)arg1 ;
-(void)setSkyBottomColor:(VGLColor)arg1 ;
-(void)setModelViewMatrix:(/*function pointer*/ void*)arg1 ;
-(float)screenHeight;
-(float)skyOffset;
-(void)setFogSlope:(float)arg1 ;
-(void)setFogOffset:(float)arg1 ;
-(void)_updateFogSlopeInShader;
-(/*function pointer*/ void*)modelViewMatrix;
-(float)horizonDepth;
-(VGLColor)skyBottomColor;
-(VGLColor)skyTopColor;
-(float)fogSlope;
-(float)fogOffset;
@end

