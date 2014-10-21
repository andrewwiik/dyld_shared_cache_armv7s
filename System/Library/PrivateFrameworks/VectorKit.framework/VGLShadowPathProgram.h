/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLProgram.h>

@interface VGLShadowPathProgram : VGLProgram {

	int _uDirection;
	SCD_Struct_VG164 _direction;
	int _uWidth;
	float _width;
	int _uColor;
	VGLColor _color;

}

@property (assign,nonatomic) SCD_Struct_VG164 direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) float width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) VGLColor color;                          //@synthesize color=_color - In the implementation block
+(id)vertName;
+(id)fragName;
-(void)setDirection:(SCD_Struct_VG164)arg1 ;
-(SCD_Struct_VG164)direction;
-(float)width;
-(VGLColor)color;
-(void)setColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(void)setWidth:(float)arg1 ;
-(void)setup;
@end

