/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VGLContext, NSMutableArray;

@interface VGLTexturePool : NSObject {

	CGSize _contentSize;
	CGSize _textureSize;
	VGLContext* _context;
	NSMutableArray* _textureResources;

}
-(void)dealloc;
-(id).cxx_construct;
-(void)purge;
-(id)initWithCapacity:(int)arg1 textureSize:(CGSize)arg2 scale:(int)arg3 context:(id)arg4 ;
-(id)checkoutTexture;
-(void)pushTextureResource:(id)arg1 ;
-(void)allocateTextureResource;
@end
