/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class _UIRefreshControlContentView, UIScrollView, UIColor, NSAttributedString;

@interface UIRefreshControl : UIControl {

	long long _style;
	_UIRefreshControlContentView* _contentView;
	UIScrollView* _scrollView;
	double _refreshControlHeight;
	double _visibleHeight;
	double _snappingHeight;
	double _additionalTopInset;
	bool _insetsApplied;
	bool _adjustingInsets;
	UIEdgeInsets _appliedInsets;
	int _refreshControlState;

}

@property (getter=isRefreshing,nonatomic,readonly) bool refreshing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) int refreshControlState;                                       //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) double _refreshControlHeight; 
@property (nonatomic,readonly) double _snappingHeight; 
@property (nonatomic,readonly) double _visibleHeight; 
@property (getter=_isApplyingInsets,nonatomic,readonly) bool _applyingInsets; 
@property (getter=_appliedInsets,nonatomic,readonly) UIEdgeInsets appliedInsets; 
+(Class)_contentViewClassForStyle:(long long)arg1 ;
+(id)_defaultColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id)_contentView;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAttributedTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(void)sizeToFit;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_didScroll;
-(void)_setTintColor:(id)arg1 ;
-(id)_tintColor;
-(double)_refreshControlHeight;
-(bool)_isApplyingInsets;
-(int)refreshControlState;
-(void)_removeInsets;
-(void)_update;
-(void)_addInsets;
-(void)beginRefreshing;
-(void)endRefreshing;
-(UIEdgeInsets)_appliedInsets;
-(id)initWithStyle:(long long)arg1 ;
-(id)attributedTitle;
-(double)_visibleHeight;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedTitle;
-(void)_updateSnappingHeight;
-(void)setRefreshControlState:(int)arg1 ;
-(void)_resizeToFitContents;
-(void)_removeInsetHeight:(double)arg1 ;
-(void)_addInsetHeight:(double)arg1 ;
-(double)revealedFraction;
-(int)_recomputeNewState;
-(void)_updateHiddenStateIfNeeded;
-(void)_updateConcealingMask;
-(CGPoint)_originForContentOffset:(CGPoint)arg1 ;
-(double)_visibleHeightForContentOffset:(CGPoint)arg1 origin:(CGPoint)arg2 ;
-(void)_setVisibleHeight:(double)arg1 ;
-(double)_stiffnessForVelocity:(double)arg1 ;
-(void)_setRefreshControlState:(int)arg1 notify:(bool)arg2 ;
-(bool)_canTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(bool)isRefreshing;
-(double)_snappingHeight;
-(double)_scrollViewHeight;
@end

