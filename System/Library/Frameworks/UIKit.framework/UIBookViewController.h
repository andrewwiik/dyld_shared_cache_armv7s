/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol UIBookViewControllerDelegate;
@class UIView, UIViewController;

@interface UIBookViewController : UIViewController {

	<UIBookViewControllerDelegate>* _delegate;
	UIView* _contentView;
	UIViewController* _evenPage;
	UIViewController* _oddPage;
	UIViewController* _newEvenPage;
	UIViewController* _newOddPage;
	long long _turnCount;
	long long _animatedPageTurns;
	double _turnMargin;
	UIEdgeInsets _contentInset;
	double _turnDuration;

}

@property (assign,nonatomic) <UIBookViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * oddPage;                             //@synthesize oddPage=_oddPage - In the implementation block
@property (nonatomic,retain) UIViewController * evenPage;                            //@synthesize evenPage=_evenPage - In the implementation block
@property (assign,nonatomic) double turnMargin;                                      //@synthesize turnMargin=_turnMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                              //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) double turnDuration;                                    //@synthesize turnDuration=_turnDuration - In the implementation block
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(void)_setupContentViewIfNecessary;
-(void)_setNewPage:(id)arg1 isLeft:(bool)arg2 ;
-(void)_positionPage:(id)arg1 isLeft:(bool)arg2 ;
-(void)_turnSinglePageAnimated;
-(void)_turnAllPagesNonAnimated;
-(void)_setupCurlFilters;
-(void)_startCurlAnimation;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)view;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEvenPage:(id)arg1 ;
-(void)setOddPage:(id)arg1 ;
-(void)turnPages:(long long)arg1 animated:(bool)arg2 ;
-(id)oddPage;
-(id)evenPage;
-(double)turnMargin;
-(void)setTurnMargin:(double)arg1 ;
-(double)turnDuration;
-(void)setTurnDuration:(double)arg1 ;
@end

