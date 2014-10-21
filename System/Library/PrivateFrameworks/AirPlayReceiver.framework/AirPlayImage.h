/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@interface AirPlayImage : NSObject {

	CGSize _unadjustedSize;
	CGImageRef _image;
	void* _ioSurface;
	int _imageOrientation;
	CGSize _scale;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@property (nonatomic,readonly) void* ioSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) int imageOrientation; 
@property (assign,nonatomic) CGSize scale; 
-(void)dealloc;
-(CGSize)size;
-(CGSize)scale;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void*)ioSurface;
-(void)setScale:(CGSize)arg1 ;
-(CGAffineTransform)contentsTransformForLayer:(id)arg1 ;
-(id)layerContents;
-(id)initWithData:(id)arg1 decode:(bool)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 decode:(bool)arg2 ;
-(CGSize)_unadjustedContentSize;
-(void)_setCGImage:(CGImageRef)arg1 ;
-(void)_setIOSurface:(void*)arg1 ;
-(void)_setImageOrientation:(int)arg1 ;
@end

