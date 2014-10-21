/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLTexture.h>

@class NSData, NSMutableArray;

@interface VGLCompressedTexture : VGLTexture {

	NSData* _data;
	NSMutableArray* _imageData;
	unsigned _surfaces;
	unsigned _mipmapLevels;
	struct {
		unsigned hasAlpha : 1;
		unsigned isCubeMap : 1;
		unsigned isMipmapped : 1;
		unsigned isVerticalFlipped : 1;
	}  _flags;
	unsigned _internalFormat;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id).cxx_construct;
-(bool)decodeTexture;
-(bool)loadTexture;
@end

