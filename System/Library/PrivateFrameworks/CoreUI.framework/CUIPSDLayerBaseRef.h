/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject {

	CUIPSDImageRef* _imageRef;
	unsigned _layerIndex;

}

@property (readonly) CGRect bounds; 
@property (readonly) bool visibility; 
@property (readonly) double opacity; 
@property (readonly) int blendMode; 
@property (readonly) bool hasLayerMask; 
@property (readonly) bool hasVectorMask; 
-(CGRect)bounds;
-(double)opacity;
-(id)name;
-(CPSDLayerRecord*)_psdLayerRecord;
-(bool)hasVectorMask;
-(bool)hasLayerMask;
-(id)_psdImageRef;
-(bool)isLayerGroup;
-(id)layerMaskRef;
-(id)vectorMaskRef;
-(CGImageRef)_createMaskFromAlphaChannel:(long long)arg1 ;
-(int)blendMode;
-(bool)visibility;
@end

