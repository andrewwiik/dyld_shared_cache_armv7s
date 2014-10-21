/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIOldSliderControl.h>

@class UIView;

@interface UIScrubberControl : UIOldSliderControl {

	SCD_Union_UI32 _sliderAvailableFill;
	double _duration;
	float _lastDisplayedWidth;
	float _maxTrackWidth;
	UIView* _elapsedTimeView;
	UIView* _remainingTimeView;
	id _delegate;
	double _trackingStartTime;
	CGPoint _lastUpdatedPoint;
	float _valueAvailable;
	unsigned _didDrag : 1;
	unsigned _sentScrubbingStart : 1;
	unsigned _autoSizesToFitDuration : 1;
	unsigned _layoutTimeParts : 2;
	unsigned _remainingIsDuration : 1;
	unsigned _delegateDidEnterScrubbingState : 1;
	unsigned _delegateDidChangeScrubValue : 1;
	unsigned _delegateShouldBeginScrubbing : 1;
	unsigned _endingTracking : 1;
	unsigned _showKnob : 1;
	unsigned _largeKnob : 1;
	unsigned _rightCapIsDownloadCap : 1;
	unsigned _requireMomentaryDelay : 1;
	unsigned _showFullWidthComponents : 1;
	unsigned _alwaysShowAllComponentsForDuration : 1;
	unsigned _timeLayoutDisabledCount : 7;
	unsigned _timeLayoutSkippedLayout : 1;
	unsigned _timeLayoutSkippedForcedLayout : 1;
	unsigned _showTimeCentered : 1;
	unsigned _leftCapIsDownloadCap : 1;
	unsigned _allowsAnyValue : 1;
	unsigned _unused : 3;

}
+(bool)allowLayeredFillForKnob;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CGRect)hitRect;
-(void)sizeToFit;
-(bool)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_setValue:(float)arg1 andSendAction:(bool)arg2 ;
-(void)setTimeColor:(id)arg1 ;
-(void)setTimeShadowColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(bool)arg3 knobStyle:(int)arg4 ;
-(id)createSliderKnobView;
-(void)_resetTimeFrames;
-(CGRect)_rectOfTrack;
-(id)imageForSliderPiece:(int)arg1 ;
-(const SCD_Struct_UI33*)metrics;
-(void)_updateTimes:(bool)arg1 ;
-(CGRect)fillBounds;
-(void)drawSliderPiece:(int)arg1 inRect:(CGRect)arg2 ;
-(bool)_notAllValueAvailable;
-(CGRect)sliderBounds;
-(void)_updateAvailableFill;
-(void)setValue:(float)arg1 animated:(bool)arg2 animationCurve:(int)arg3 ;
-(bool)pointInsideKnob:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_sendDelegateDidEnterScrubbingState:(bool)arg1 ;
-(float)scrubValue;
-(id)initWithFrame:(CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(bool)arg3 showKnob:(bool)arg4 ;
-(void)setPinTimeToOutsideEdges:(bool)arg1 ;
-(void)setShowTimeCenteredInAvailableArea:(bool)arg1 ;
-(double)requiredAutoUpdateDurationForDuration:(double)arg1 ;
-(bool)pointInsideKnob:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setAllowsAnyValue:(bool)arg1 ;
-(void)disableTimesLayout;
-(void)enableTimesLayout;
-(void)setShowFullWidthComponents:(bool)arg1 ;
-(void)setShowDuration:(bool)arg1 ;
-(void)setScrubbingRequiresMomentaryDelay:(bool)arg1 ;
-(void)setValueAvailable:(float)arg1 ;
@end

