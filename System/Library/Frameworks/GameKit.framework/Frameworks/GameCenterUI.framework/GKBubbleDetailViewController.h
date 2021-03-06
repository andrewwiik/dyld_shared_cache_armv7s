/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, UIView, NSArray, NSLayoutConstraint;

@interface GKBubbleDetailViewController : GKViewController <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	UIView* _containerView;
	NSArray* _bubbleViews;
	NSLayoutConstraint* _containerConstraint;
	id _scrollInsetsToken;

}

@property (nonatomic,retain) UIScrollView * scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * bubbleViews;                                 //@synthesize bubbleViews=_bubbleViews - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerConstraint;              //@synthesize containerConstraint=_containerConstraint - In the implementation block
@property (nonatomic,retain) id scrollInsetsToken;                                  //@synthesize scrollInsetsToken=_scrollInsetsToken - In the implementation block
-(id)containerConstraint;
-(double)heightConstant;
-(void)setScrollInsetsToken:(id)arg1 ;
-(id)bubbleViews;
-(void)setBubbleViews:(id)arg1 ;
-(void)setContainerConstraint:(id)arg1 ;
-(id)scrollInsetsToken;
-(void)dealloc;
-(id)containerView;
-(void)setScrollView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)scrollView;
-(void)setContainerView:(id)arg1 ;
@end

