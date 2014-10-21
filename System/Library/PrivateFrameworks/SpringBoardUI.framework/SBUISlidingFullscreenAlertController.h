/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIFullscreenAlertController.h>

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController {

	UIView* _topBar;
	UIView* _bottomBar;
	bool _animatingIn;
	bool _animatingOut;

}

@property (nonatomic,readonly) UIView * topBar;                 //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,readonly) UIView * bottomBar;              //@synthesize bottomBar=_bottomBar - In the implementation block
-(void)dealloc;
-(id)backgroundView;
-(void)viewDidLoad;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(id)topBar;
-(bool)shouldShowBottomBar;
-(id)bottomBar;
-(bool)isSlidingViewController;
-(bool)viewIsReadyToBeRemoved;
-(void)_performAnimateDisplayIn;
-(double)_slideOutAnimationDelay;
-(double)_slideOutAnimationDuration;
-(bool)_animatingToHomescreenWallpaper;
-(bool)isShowingWallpaper;
-(void)finishedAnimatingIn;
-(void)viewWillAnimateIn;
-(void)animateViewIn;
-(void)viewWillAnimateOut;
-(void)animateViewOut;
-(id)newTopBar;
-(id)newBottomBar;
-(void)_viewAnimatedOut;
-(double)_animationDelayForOthersActivation;
-(bool)hasTranslucentBackground;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
@end

