/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VGLGroundCoverProgram.h>

@interface VGLAnimatableGroundCoverProgram : VGLGroundCoverProgram {

	int _uLandVariantSampler;
	int _landVariantSampler;
	int _uTextureVariation;
	float _textureVariation;

}

@property (assign,nonatomic) int landVariantSampler;              //@synthesize landVariantSampler=_landVariantSampler - In the implementation block
@property (assign,nonatomic) float textureVariation;              //@synthesize textureVariation=_textureVariation - In the implementation block
+(id)fragName;
-(void)setup;
-(void)setTextureVariation:(float)arg1 ;
-(float)textureVariation;
-(void)setLandVariantSampler:(int)arg1 ;
-(int)landVariantSampler;
@end

