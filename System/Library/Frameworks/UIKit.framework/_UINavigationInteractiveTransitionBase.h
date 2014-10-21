/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UINavigationInteractiveTransitionBaseDelegate;
@class UIView, UIPanGestureRecognizer, UIViewController, CADisplayLink, _UINavigationParallaxTransition, UIGestureRecognizer;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {

	UIView* _gestureRecognizerView;
	UIPanGestureRecognizer* _gestureRecognizer;
	long long __interactionState;
	bool __transitionWasStopped;
	bool __stoppedTransitionWasCancelled;
	UIViewController* __parent;
	bool __useAugmentedShouldPopDecisionProcedure;
	bool __completesTransitionOnEnd;
	CADisplayLink* _displayLink;
	double _timestamps[3];
	double _velocities[3];
	double _accelerations[3];
	bool _shouldReverseTranslation;
	bool _springAnimationIsPending;
	bool _inSpringAnimation;
	_UINavigationParallaxTransition* _animationController;
	<_UINavigationInteractiveTransitionBaseDelegate>* _delegate;
	unsigned long long _sampleCount;
	double _totalDistance;
	double _skipTimeStamp;
	double _previousTimeStamp;
	double _previousDisplacement;
	double _previousVelocity;
	double _previousAcceleration;
	double _averageVelocity;
	double _averageAcceleration;

}

@property (assign,nonatomic) UIPanGestureRecognizer * gestureRecognizer;                                                                   //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) bool shouldReverseTranslation;                                                                                //@synthesize shouldReverseTranslation=_shouldReverseTranslation - In the implementation block
@property (nonatomic,retain) _UINavigationParallaxTransition * animationController;                                                        //@synthesize animationController=_animationController - In the implementation block
@property (assign,setter=_setInteractionState:,nonatomic) long long _interactionState;                                                     //@synthesize _interactionState=__interactionState - In the implementation block
@property (assign,setter=_setTransitionWasStopped:,nonatomic) bool _transitionWasStopped;                                                  //@synthesize _transitionWasStopped=__transitionWasStopped - In the implementation block
@property (assign,setter=_setStoppedTransitionWasCancelled:,nonatomic) bool _stoppedTransitionWasCancelled;                                //@synthesize _stoppedTransitionWasCancelled=__stoppedTransitionWasCancelled - In the implementation block
@property (assign,setter=_setParent:,nonatomic) UIViewController * _parent;                                                                //@synthesize _parent=__parent - In the implementation block
@property (assign,setter=_setUseAugmentedShouldPopDecisionProcedure:,nonatomic) bool _useAugmentedShouldPopDecisionProcedure;              //@synthesize _useAugmentedShouldPopDecisionProcedure=__useAugmentedShouldPopDecisionProcedure - In the implementation block
@property (assign,setter=_setCompletesTransitionOnEnd:,nonatomic) bool _completesTransitionOnEnd;                                          //@synthesize _completesTransitionOnEnd=__completesTransitionOnEnd - In the implementation block
@property (getter=_navigationGesture,nonatomic,readonly) UIGestureRecognizer * navigationGesture; 
@property (assign,nonatomic) <_UINavigationInteractiveTransitionBaseDelegate> * delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool springAnimationIsPending;                                                                                //@synthesize springAnimationIsPending=_springAnimationIsPending - In the implementation block
@property (assign,nonatomic) bool inSpringAnimation;                                                                                       //@synthesize inSpringAnimation=_inSpringAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long sampleCount;                                                                               //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) double totalDistance;                                                                                         //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) double skipTimeStamp;                                                                                         //@synthesize skipTimeStamp=_skipTimeStamp - In the implementation block
@property (assign,nonatomic) double previousTimeStamp;                                                                                     //@synthesize previousTimeStamp=_previousTimeStamp - In the implementation block
@property (assign,nonatomic) double previousDisplacement;                                                                                  //@synthesize previousDisplacement=_previousDisplacement - In the implementation block
@property (assign,nonatomic) double previousVelocity;                                                                                      //@synthesize previousVelocity=_previousVelocity - In the implementation block
@property (assign,nonatomic) double previousAcceleration;                                                                                  //@synthesize previousAcceleration=_previousAcceleration - In the implementation block
@property (assign,nonatomic) double averageVelocity;                                                                                       //@synthesize averageVelocity=_averageVelocity - In the implementation block
@property (assign,nonatomic) double averageAcceleration;                                                                                   //@synthesize averageAcceleration=_averageAcceleration - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)_resetInteractionController;
-(void)_setInteractionState:(long long)arg1 ;
-(void)_setCompletesTransitionOnEnd:(bool)arg1 ;
-(void)setAnimationController:(id)arg1 ;
-(void)handleNavigationTransition:(id)arg1 ;
-(void)setGestureRecognizer:(id)arg1 ;
-(id)gestureRecognizer;
-(id)gestureRecognizerView;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_stopInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)startInteractiveTransition;
-(id)animationController;
-(void)_updateStatistics:(id)arg1 firstSample:(bool)arg2 finalSample:(bool)arg3 ;
-(bool)springAnimationIsPending;
-(bool)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double*)arg3 ;
-(bool)_completesTransitionOnEnd;
-(void)setNotInteractiveTransition;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3 ;
-(id)_navigationGesture;
-(void)_completeStoppedInteractiveTransition;
-(bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(bool)shouldReverseTranslation;
-(void)setShouldReverseTranslation:(bool)arg1 ;
-(long long)_interactionState;
-(bool)_transitionWasStopped;
-(void)_setTransitionWasStopped:(bool)arg1 ;
-(bool)_stoppedTransitionWasCancelled;
-(void)_setStoppedTransitionWasCancelled:(bool)arg1 ;
-(id)_parent;
-(void)_setParent:(id)arg1 ;
-(bool)_useAugmentedShouldPopDecisionProcedure;
-(void)_setUseAugmentedShouldPopDecisionProcedure:(bool)arg1 ;
-(void)setSpringAnimationIsPending:(bool)arg1 ;
-(bool)inSpringAnimation;
-(void)setInSpringAnimation:(bool)arg1 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(double)totalDistance;
-(void)setTotalDistance:(double)arg1 ;
-(double)skipTimeStamp;
-(void)setSkipTimeStamp:(double)arg1 ;
-(double)previousTimeStamp;
-(void)setPreviousTimeStamp:(double)arg1 ;
-(double)previousDisplacement;
-(void)setPreviousDisplacement:(double)arg1 ;
-(double)previousVelocity;
-(void)setPreviousVelocity:(double)arg1 ;
-(double)previousAcceleration;
-(void)setPreviousAcceleration:(double)arg1 ;
-(double)averageVelocity;
-(void)setAverageVelocity:(double)arg1 ;
-(double)averageAcceleration;
-(void)setAverageAcceleration:(double)arg1 ;
@end
