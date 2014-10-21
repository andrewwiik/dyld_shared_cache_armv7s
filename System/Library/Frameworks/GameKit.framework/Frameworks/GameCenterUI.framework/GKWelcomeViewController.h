/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKViewController.h>
#import <GameCenterUI/GKBubbleFlowableViewController.h>

@interface GKWelcomeViewController : GKViewController <GKBubbleFlowableViewController>
-(bool)_gkUsesBubbleFlowModalPresentation;
-(id)bubbleAnimatorForTransitionFromViewController:(id)arg1 ;
-(id)bubbleAnimatorForTransitionToViewController:(id)arg1 ;
-(CGRect)finalScreenFrameInViewCoordinatesForBubbleOfType:(long long)arg1 ;
-(void)configureControlForBubble:(id)arg1 ;
-(double)bubbleFlowAnimateOutDuration;
-(double)bubbleFlowAnimateInDuration;
-(bool)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1 ;
-(bool)_gkCanBeRemovedFromParentWhenCovered;
-(bool)_shouldAnimateBubblesIn;
-(void)viewDidLoad;
@end

