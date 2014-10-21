/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKAnnotationMarker.h>

@class VKImageAnnotationMarkerLayer;

@interface VKImageAnnotationMarker : VKAnnotationMarker {

	VKImageAnnotationMarkerLayer* _imageLayer;

}

@property (assign,nonatomic) bool drawsOnGround; 
@property (assign,nonatomic) float brightness; 
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(void)setDrawsOnGround:(bool)arg1 ;
-(bool)drawsOnGround;
@end

