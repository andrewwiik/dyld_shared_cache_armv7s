/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
#import <UIKit/UIKit-Structs.h>
@class UITransitionView, UIWindow, UIViewController;

@interface UIWindowController : NSObject {

	UITransitionView* _transitionView;
	UIWindow* _window;
	int _currentTransition;
	id _target;
	SEL _didEndSelector;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	CGPoint _beginOriginForToView;
	CGPoint _endOriginForToView;
	bool _presenting;
	long long _toModalStyle;
	bool _needsDidAppear;
	bool _needsDidDisappear;
	bool __interactiveTransition;
	<UIViewControllerAnimatedTransitioning>* _transitionController;
	<UIViewControllerInteractiveTransitioning>* _interactionController;

}

@property (assign,nonatomic) UIWindow * window;                                                                                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UITransitionView * transitionView;                                                                                //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic) bool presenting;                                                                                                    //@synthesize presenting=_presenting - In the implementation block
@property (setter=_setTransitionController:,nonatomic,retain) <UIViewControllerAnimatedTransitioning> * _transitionController;                   //@synthesize transitionController=_transitionController - In the implementation block
@property (setter=_setInteractionController:,nonatomic,retain) <UIViewControllerInteractiveTransitioning> * _interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,setter=_setInteractiveTransition:,getter=_isInteractiveTransition,nonatomic) bool _interactiveTransition;                      //@synthesize _interactiveTransition=__interactiveTransition - In the implementation block
+(void)windowWillBeDeallocated:(id)arg1 ;
+(id)windowControllerForWindow:(id)arg1 ;
-(void)dealloc;
-(id)window;
-(id)_interactionController;
-(void)setWindow:(id)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidStart:(id)arg1 ;
-(bool)transitionViewShouldUseViewControllerCallbacks;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(bool)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2 ;
-(id)_transitionController;
-(void)setPresenting:(bool)arg1 ;
-(void)_setTransitionController:(id)arg1 ;
-(void)_setInteractionController:(id)arg1 ;
-(void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 animation:(/*^block*/ id)arg6 ;
-(id)transitionView;
-(CGSize)_flipSize:(CGSize)arg1 ;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(CGPoint)_originForViewController:(id)arg1 orientation:(long long)arg2 actualStatusBarHeight:(double)arg3 fullScreenLayout:(bool)arg4 inWindow:(id)arg5 ;
-(CGRect)_boundsForViewController:(id)arg1 transition:(int)arg2 orientation:(long long)arg3 fullScreenLayout:(bool)arg4 inWindow:(id)arg5 ;
-(void)_setInteractiveTransition:(bool)arg1 ;
-(void)transitionViewDidCancel:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2 ;
-(bool)_isInteractiveTransition;
-(CGPoint)_adjustOrigin:(CGPoint)arg1 givenOtherOrigin:(CGPoint)arg2 forTransition:(int)arg3 ;
-(void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 ;
-(bool)presenting;
@end

