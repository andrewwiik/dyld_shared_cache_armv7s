/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CAMBlurredSnapshotView : UIView {

	bool _blurred;
	bool _dimmed;
	bool __supportsBlur;
	long long _style;
	UIView* _snapshotView;
	UIView* __lowQualityBlurView;
	UIView* __dimmingView;
	CGRect _targetFrame;

}

@property (assign,nonatomic) long long style;                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * snapshotView;                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) bool blurred;                                //@synthesize blurred=_blurred - In the implementation block
@property (assign,nonatomic) bool dimmed;                                 //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                          //@synthesize targetFrame=_targetFrame - In the implementation block
@property (nonatomic,readonly) bool _supportsBlur;                        //@synthesize _supportsBlur=__supportsBlur - In the implementation block
@property (nonatomic,readonly) UIView * _lowQualityBlurView;              //@synthesize _lowQualityBlurView=__lowQualityBlurView - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                     //@synthesize _dimmingView=__dimmingView - In the implementation block
-(void)dealloc;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id)snapshotView;
-(id)_dimmingView;
-(id)initWithView:(id)arg1 ;
-(CGRect)targetFrame;
-(void)setTargetFrame:(CGRect)arg1 ;
-(void)setBlurred:(bool)arg1 ;
-(void)setDimmed:(bool)arg1 ;
-(void)setBlurred:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(bool)blurred;
-(void)setDimmed:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)_applySnapshotBlurAnimated:(bool)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_removeSnapshotBlurAnimated:(bool)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_applyLowQualityBlurAnimated:(bool)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_removeLowQualityBlurAnimated:(bool)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_applySnapshotDimAnimated:(bool)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_removeSnapshotDimAnimated:(bool)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_setupBlurOnSnapshot;
-(void)_prepareForApplyingBlurAnimation:(bool)arg1 inputRadiusAmount:(double*)arg2 inputRadiusDuration:(double*)arg3 inputRadiusDelay:(double*)arg4 inputRadiusTimingFunction:(id*)arg5 opacityAmount:(double*)arg6 opacityDuration:(double*)arg7 opacityDelay:(double*)arg8 opacityTimingFunction:(id*)arg9 ;
-(id)_lowQualityBlurView;
-(void)_setupLowQualityBlurOnSnapshot;
-(void)_prepareForApplyingLowQualityBlurAnimation:(bool)arg1 opacityAmount:(double*)arg2 opacityDuration:(double*)arg3 opacityDelay:(double*)arg4 opacityTimingFunction:(id*)arg5 targetView:(id*)arg6 ;
-(void)_setupDimOnSnapshot;
-(bool)dimmed;
-(bool)_supportsBlur;
@end

