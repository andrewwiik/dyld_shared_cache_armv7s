/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VGLProgram.h>

@interface VGLSimpleRoadProgram : VGLProgram {

	int _uTextureSampler;
	int _textureSampler;
	int _uLineWidth;
	float _lineWidth;

}

@property (assign,nonatomic) int textureSampler;              //@synthesize textureSampler=_textureSampler - In the implementation block
@property (assign,nonatomic) float lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setup;
-(void)setTextureSampler:(int)arg1 ;
-(int)textureSampler;
@end

