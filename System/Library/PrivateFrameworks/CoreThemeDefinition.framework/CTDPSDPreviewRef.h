/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreUI/CUIPSDImageRef.h>

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef {

	PSDImageInfo _imageInfo;
	long long _layerCount;
	long long _sliceCount;
	long long _columnWidth;
	long long _rowHeight;
	NSArray* _layerIndexLayout;
	long long _sliceRowCount;
	long long _sliceColumnCount;
	NSArray* _sliceRects;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(long long)sliceRowCount;
-(long long)sliceColumnCount;
-(void)evaluateSliceGrid;
-(bool)hasRegularSliceGrid;
-(bool)hasGradient;
-(long long)numberOfGradientLayers;
-(long long)numberOfAlphaChannels;
-(long long)indexOfDrawingLayerType:(long long)arg1 ;
@end

