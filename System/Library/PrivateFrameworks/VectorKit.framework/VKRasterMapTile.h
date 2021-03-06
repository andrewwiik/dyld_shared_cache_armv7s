/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSData;

@interface VKRasterMapTile : NSObject {

	NSData* _bitmapData;
	VKTileKey _superTileKey;
	VKTileKey _finalTileKey;
	double _scale;
	CGImageRef _image;

}

@property (nonatomic,readonly) VKRasterTileKey tileKey; 
-(void)dealloc;
-(CGImageRef)_image;
-(VKRasterTileKey)tileKey;
-(id)tileForKey:(const VKRasterTileKey*)arg1 ;
-(id)initWithBitmapData:(id)arg1 tileKey:(const VKTileKey*)arg2 scale:(double)arg3 ;
-(id)initWithBitmapData:(id)arg1 superKey:(const VKTileKey*)arg2 finalKey:(const VKTileKey*)arg3 scale:(double)arg4 ;
-(id)imageDataInFormat:(unsigned long long)arg1 ;
-(void)foreachTileOfSize:(unsigned)arg1 perform:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)writeImageToFile:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
@end

