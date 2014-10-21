/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKTextureCache : NSObject {

	long long filteringMode;
	unsigned texId;
	int texInternalFormat;
	unsigned texFormat;
	unsigned texType;
	CGSize size;
	CGSize pixelSize;
	bool isLoaded;
	bool hasAlpha;
	bool isPOT;
	char* pixelData;
	unsigned* alphaMap;
	CGSize alphaMapSize;
	int state;
	int lock;
	CGImageRef collisionMask;
	int wrapMode;

}

@property (assign,nonatomic) long long filteringMode; 
@property (assign,nonatomic) int wrapMode; 
@property (assign,nonatomic) unsigned texId; 
@property (assign,nonatomic) int texInternalFormat; 
@property (assign,nonatomic) unsigned texFormat; 
@property (assign,nonatomic) unsigned texType; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) bool isLoaded; 
@property (assign,nonatomic) bool hasAlpha; 
@property (assign,nonatomic) bool isPOT; 
@property (assign,nonatomic) char* pixelData; 
@property (assign,nonatomic) unsigned* alphaMap; 
@property (assign,nonatomic) CGSize alphaMapSize; 
@property (assign,nonatomic) int state; 
@property (getter=getLock,nonatomic,readonly) int* lock; 
-(void)setFilteringMode:(long long)arg1 ;
-(int*)getLock;
-(unsigned)texId;
-(void)setTexId:(unsigned)arg1 ;
-(void)setIsLoaded:(bool)arg1 ;
-(bool)isPOT;
-(void)setIsPOT:(bool)arg1 ;
-(bool)hasAlpha;
-(void)setHasAlpha:(bool)arg1 ;
-(void)setPixelData:(char*)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(unsigned*)alphaMap;
-(void)setAlphaMap:(unsigned*)arg1 ;
-(CGSize)alphaMapSize;
-(void)setAlphaMapSize:(CGSize)arg1 ;
-(int)texInternalFormat;
-(void)setTexInternalFormat:(int)arg1 ;
-(unsigned)texFormat;
-(void)setTexFormat:(unsigned)arg1 ;
-(unsigned)texType;
-(void)setTexType:(unsigned)arg1 ;
-(long long)filteringMode;
-(int)wrapMode;
-(void)dealloc;
-(CGSize)size;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(id).cxx_construct;
-(bool)isLoaded;
-(char*)pixelData;
-(void)setWrapMode:(int)arg1 ;
-(CGSize)pixelSize;
@end
