/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKDrawStyle.h>

@interface VKBuildingDrawStyle : VKDrawStyle {

	bool _hasStrokeColor3D;
	bool _hasStrokeWidth3D;
	VKProfileSparseRamp<bool>* visibility;
	VKProfileSparseRamp<_VGLColor>* topColor;
	VKProfileSparseRamp<_VGLColor>* facadeColor;
	VKProfileSparseRamp<_VGLColor>* outlineColor;
	VKProfileSparseRamp<_VGLColor>* landmarkColor;
	VKProfileSparseRamp<_VGLColor>* flatColor;
	VKProfileSparseRamp<bool>* outline;
	int roofStyle;
	VKProfileSparseRamp<_VGLColor>* footprintStrokeColor;
	VKProfileSparseRamp<float>* footprintStrokeWidth;
	VKProfileSparseRamp<_VGLColor>* strokeColor3D;
	VKProfileSparseRamp<float>* strokeWidth3D;

}
-(id)variant;
-(id).cxx_construct;
-(void).cxx_destruct;
-(VGLColor)topColorAtZoom:(float)arg1 ;
-(VGLColor)facadeColorAtZoom:(float)arg1 ;
-(VGLColor)landmarkColorAtZoom:(float)arg1 ;
-(VGLColor)flatColorAtZoom:(float)arg1 ;
-(VGLColor)footprintStrokeColorAtZoom:(float)arg1 ;
-(float)footprintStrokeWidthAtZoom:(float)arg1 ;
-(bool)hasStrokeColor3D;
-(VGLColor)strokeColor3DAtZoom:(float)arg1 ;
-(bool)hasStrokeWidth3D;
-(float)strokeWidth3DAtZoom:(float)arg1 ;
-(bool)visibleAtZoom:(float)arg1 ;
-(int)roofStyle;
-(void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned long long)arg2 globals:(id)arg3 ;
-(void)takeFromZoomInvariantProperties:(id)arg1 ;
-(VGLColor)outlineColorAtZoom:(float)arg1 ;
-(bool)outlineAtZoom:(float)arg1 ;
@end

