/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUViewControllerTransition.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate> {

	long long __operation;

}

@property (assign,setter=_setOperation:,nonatomic) long long _operation;              //@synthesize _operation=__operation - In the implementation block
-(void)animateTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(long long)_operation;
-(void)completeInteractivePresentTransitionFinished:(bool)arg1 ;
-(void)completeInteractiveDismissTransitionFinished:(bool)arg1 ;
-(void)_setOperation:(long long)arg1 ;
-(void)transitionWillPresentInteractively:(bool)arg1 ;
-(void)transitionWillDismissInteractively:(bool)arg1 ;
@end
