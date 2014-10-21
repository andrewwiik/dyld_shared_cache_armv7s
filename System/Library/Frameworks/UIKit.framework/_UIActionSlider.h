/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIActionSliderDelegate;
@class UIView, _UIBackdropView, UIImageView, _UIGlintyStringView, UIPanGestureRecognizer, UIImage, NSString, UIFont, UIBezierPath;

@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate> {

	UIView* _contentView;
	UIView* _trackDodgeView;
	UIView* _trackLight1View;
	UIView* _trackLight2View;
	UIView* _trackBackgroundView;
	_UIBackdropView* _trackBlurView;
	UIView* _trackSolidView;
	UIView* _knobView;
	UIImageView* _knobImageView;
	_UIGlintyStringView* _trackLabel;
	UIPanGestureRecognizer* _slideGestureRecognizer;
	CGPoint _slideGestureInitialPoint;
	double _knobPosition;
	double _trackWidthProportion;
	bool _showingTrackLabel;
	bool _animating;
	long long _style;
	<_UIActionSliderDelegate>* _delegate;
	double _cachedTrackMaskWidth;
	CGSize _knobImageOffset;

}

@property (assign,nonatomic) long long style;                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * knobImage; 
@property (assign,nonatomic) CGSize knobImageOffset;                                         //@synthesize knobImageOffset=_knobImageOffset - In the implementation block
@property (nonatomic,copy) NSString * trackText; 
@property (nonatomic,retain) UIFont * trackFont; 
@property (assign,nonatomic) <_UIActionSliderDelegate> * delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double knobPosition;                                            //@synthesize knobPosition=_knobPosition - In the implementation block
@property (nonatomic,readonly) CGRect knobRect; 
@property (nonatomic,readonly) UIBezierPath * knobMaskPath; 
@property (assign,nonatomic) double trackWidthProportion;                                    //@synthesize trackWidthProportion=_trackWidthProportion - In the implementation block
@property (assign,getter=isShowingTrackLabel,nonatomic) bool showingTrackLabel;              //@synthesize showingTrackLabel=_showingTrackLabel - In the implementation block
@property (assign,getter=isAnimating,nonatomic) bool animating;                              //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double cachedTrackMaskWidth;                                    //@synthesize cachedTrackMaskWidth=_cachedTrackMaskWidth - In the implementation block
@property (getter=_knobView,nonatomic,readonly) UIView * knobView;                           //@synthesize knobView=_knobView - In the implementation block
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)didMoveToSuperview;
-(bool)isAnimating;
-(void)setAnimating:(bool)arg1 ;
-(id)_knobView;
-(void)_knobPanGesture:(id)arg1 ;
-(void)setCachedTrackMaskWidth:(double)arg1 ;
-(CGRect)knobRect;
-(double)_knobWidth;
-(double)_knobHorizontalPosition;
-(double)_knobVerticalInset;
-(void)_hideTrackLabel:(bool)arg1 ;
-(void)setTrackWidthProportion:(double)arg1 ;
-(void)_showTrackLabel;
-(void)updateAllTrackMasks;
-(double)_knobMinX;
-(double)_knobAvailableX;
-(CGRect)_trackFrame;
-(double)_knobHorizontalInset;
-(double)_knobMaxX;
-(double)trackWidthProportion;
-(double)cachedTrackMaskWidth;
-(id)trackMaskPath;
-(void)setMaskPath:(CGPathRef)arg1 onView:(id)arg2 ;
-(id)trackMaskImage;
-(void)setMaskFromImage:(id)arg1 onView:(id)arg2 ;
-(bool)isShowingTrackLabel;
-(void)setShowingTrackLabel:(bool)arg1 ;
-(void)setKnobPosition:(double)arg1 ;
-(void)_slideCompleted:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2 ;
-(id)knobMaskPath;
-(id)knobImage;
-(void)setKnobImage:(id)arg1 ;
-(void)setKnobImageOffset:(CGSize)arg1 ;
-(id)trackText;
-(void)setTrackText:(id)arg1 ;
-(id)trackFont;
-(void)setTrackFont:(id)arg1 ;
-(void)openTrackAnimated:(bool)arg1 ;
-(void)closeTrackAnimated:(bool)arg1 ;
-(CGSize)knobImageOffset;
-(double)knobPosition;
@end
