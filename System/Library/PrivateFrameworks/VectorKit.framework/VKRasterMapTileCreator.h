/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapModelDelegate.h>

@class VKImageCanvas, VKMapModel, NSString;

@interface VKRasterMapTileCreator : NSObject <VKMapModelDelegate> {

	VKImageCanvas* _canvas;
	long long _mapType;
	VKMapModel* _mapModel;
	VKTileKey _superTileKey;
	double _startTimestamp;
	NSString* _tileLoaderClientID;
	/*^block*/ id _completion;

}

@property (assign,nonatomic) long long mapType; 
@property (assign,nonatomic) bool localizeLabels; 
@property (assign,nonatomic) long long labelScaleFactor; 
-(void)dealloc;
-(id).cxx_construct;
-(void)setContentScale:(double)arg1 ;
-(long long)mapType;
-(bool)localizeLabels;
-(void)setLocalizeLabels:(bool)arg1 ;
-(long long)labelScaleFactor;
-(void)setLabelScaleFactor:(long long)arg1 ;
-(id)detailedDescription;
-(void)setMapType:(long long)arg1 ;
-(bool)mapModelInNav:(id)arg1 ;
-(void)mapModel:(id)arg1 needsPanByOffset:(CGPoint)arg2 relativeToScreenPoint:(CGPoint)arg3 animated:(bool)arg4 duration:(double)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2 ;
-(void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2 ;
-(void)mapModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2 ;
-(id)mapModel:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1 ;
-(void)mapModelWillBecomFullyDrawn:(id)arg1 ;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2 ;
-(void)mapModelDidStartLoadingTiles:(id)arg1 ;
-(void)mapModelDidFinishLoadingTiles:(id)arg1 ;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(bool)mapModelInNavAtDefaultZoom:(id)arg1 ;
-(double)mapModelZoomScale:(id)arg1 ;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4 ;
-(id)mapModel:(id)arg1 markerForAnnotation:(id)arg2 ;
-(void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4 ;
-(void)_lookAtKey:(const VKTileKey*)arg1 ;
-(id)initWithSoftwareRendering:(bool)arg1 ;
-(void)setTileKey:(const VKRasterTileKey*)arg1 ;
-(void)renderTile:(/*^block*/ id)arg1 ;
@end

