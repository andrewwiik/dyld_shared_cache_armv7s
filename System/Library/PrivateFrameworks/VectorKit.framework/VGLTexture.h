/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VGLResource;

@interface VGLTexture : NSObject {

	CGRect _contentRect;
	CGSize _textureSize;
	bool _dirty;
	bool _isLoaded;
	bool _hasMipmap;
	bool _anisotropicFiltering;
	int _target;
	int _wrapBehaviorX;
	int _wrapBehaviorY;
	int _minFilter;
	int _magFilter;
	VGLResource* _textureResource;

}

@property (nonatomic,readonly) CGRect contentRect;                         //@synthesize contentRect=_contentRect - In the implementation block
@property (nonatomic,readonly) CGSize textureSize;                         //@synthesize textureSize=_textureSize - In the implementation block
@property (getter=isFlipped,nonatomic,readonly) bool flipped; 
@property (nonatomic,readonly) bool isLoaded;                              //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) bool dirty;                                 //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) bool anisotropicFiltering;                    //@synthesize anisotropicFiltering=_anisotropicFiltering - In the implementation block
@property (assign,nonatomic) bool hasMipmap;                               //@synthesize hasMipmap=_hasMipmap - In the implementation block
@property (assign,nonatomic) int target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) int wrapBehavior; 
@property (assign,nonatomic) int wrapBehaviorX;                            //@synthesize wrapBehaviorX=_wrapBehaviorX - In the implementation block
@property (assign,nonatomic) int wrapBehaviorY;                            //@synthesize wrapBehaviorY=_wrapBehaviorY - In the implementation block
@property (assign,nonatomic) int minificationFilter;                       //@synthesize minFilter=_minFilter - In the implementation block
@property (assign,nonatomic) int magnificationFilter;                      //@synthesize magFilter=_magFilter - In the implementation block
+(void)purge;
+(id)textureWithName:(id)arg1 forScale:(double)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTarget:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setMagnificationFilter:(int)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(int)target;
-(CGRect)contentRect;
-(id).cxx_construct;
-(bool)isLoaded;
-(id)initWithName:(id)arg1 ;
-(void)setMinificationFilter:(int)arg1 ;
-(bool)dirty;
-(unsigned)token;
-(bool)decodeTexture;
-(void)setWrapBehavior:(int)arg1 ;
-(id)initWithSize:(CGSize)arg1 requirePowerOf2:(bool)arg2 ;
-(bool)loadTexture;
-(void)setWrapBehaviorX:(int)arg1 ;
-(void)setWrapBehaviorY:(int)arg1 ;
-(id)initWithData:(id)arg1 loadImmediately:(bool)arg2 ;
-(void)useTextureWithContext:(id)arg1 ;
-(bool)isFlipped;
-(int)wrapBehavior;
-(CGSize)textureSize;
-(bool)anisotropicFiltering;
-(void)setAnisotropicFiltering:(bool)arg1 ;
-(bool)hasMipmap;
-(void)setHasMipmap:(bool)arg1 ;
-(int)wrapBehaviorX;
-(int)wrapBehaviorY;
-(int)minificationFilter;
-(int)magnificationFilter;
@end

