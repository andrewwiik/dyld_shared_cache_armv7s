/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIControl.h>

@protocol PLSlalomRegionEditorDelegate;
@class UIImageView;

@interface PLSlalomRegionEditor : UIControl {

	UIImageView* _startHandleView;
	UIImageView* _endHandleView;
	UIImageView* _trackImageView;
	UIImageView* _trackSnapshotView;
	bool _draggingStart;
	bool _draggingEnd;
	double _touchOffset;
	bool _zoomed;
	bool _trackingZoom;
	CGPoint _touchLocationWhenTrackingZoomBegan;
	bool _forceLayout;
	double _zoomMinValue;
	double _zoomMaxValue;
	bool _zoomAnimating;
	<PLSlalomRegionEditorDelegate>* _delegate;
	double _trimHandleWidth;
	double _minValue;
	double _maxValue;
	double _startValue;
	double _endValue;
	double _zoomDelay;
	UIEdgeInsets _trackInsets;

}

@property (assign,nonatomic) <PLSlalomRegionEditorDelegate> * delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets trackInsets;                                                        //@synthesize trackInsets=_trackInsets - In the implementation block
@property (assign,nonatomic) double trimHandleWidth;                                                          //@synthesize trimHandleWidth=_trimHandleWidth - In the implementation block
@property (assign,nonatomic) double minValue;                                                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) double startValue;                                                               //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                                                 //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double zoomDelay;                                                                //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,setter=setZoomAnimating:,getter=isZoomAnimating,nonatomic) bool zoomAnimating;              //@synthesize zoomAnimating=_zoomAnimating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setEnabled:(bool)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)minValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(bool)isZoomAnimating;
-(double)zoomDelay;
-(void)setZoomDelay:(double)arg1 ;
-(CGRect)_trackFrame;
-(double)maxValue;
-(void)setZoomAnimating:(bool)arg1 ;
-(void)setZoomMinValue:(double)arg1 maxValue:(double)arg2 ;
-(double)startValue;
-(double)endValue;
-(id)_handleImage;
-(void)_updateTrack;
-(CGRect)_startHandleFrame;
-(CGRect)_endHandleFrame;
-(void)setStartValue:(double)arg1 notify:(bool)arg2 ;
-(void)setEndValue:(double)arg1 notify:(bool)arg2 ;
-(double)_zoomMinValue;
-(double)_zoomMaxValue;
-(CGRect)_handleFrameForValue:(double)arg1 isStart:(bool)arg2 ;
-(double)_valueFromHandleFrame:(CGRect)arg1 isStart:(bool)arg2 ;
-(CGRect)_trackFrameNoZoom;
-(bool)_isZoomed;
-(double)_trackScale;
-(double)_trimHandleWidth;
-(bool)_isTouch:(id)arg1 inHandleIsStart:(bool)arg2 outTouchOffset:(double*)arg3 ;
-(void)_beginTrackingZoomWithTouch:(id)arg1 ;
-(void)_updateSlidersWithTouch:(id)arg1 ;
-(void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1 ;
-(void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1 ;
-(void)_cancelTrackingZoom;
-(void)_cancelZoom;
-(double)_valueFromStartHandleFrame:(CGRect)arg1 ;
-(double)_valueFromEndHandleFrame:(CGRect)arg1 ;
-(void)_zoomPressWasHeld;
-(id)_trackImageForZoom:(bool)arg1 ;
-(void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4 ;
-(UIEdgeInsets)trackInsets;
-(double)trimHandleWidth;
-(void)setTrackInsets:(UIEdgeInsets)arg1 ;
-(void)setTrimHandleWidth:(double)arg1 ;
@end
