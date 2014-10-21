/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIPopoverBackgroundView, UIImageView, UIActionSheet, UIPopoverController, UIColor;

@interface _UIPopoverView : UIView {

	UIView* _contentView;
	UIPopoverBackgroundView* _backgroundView;
	Class _backgroundViewClass;
	UIImageView* _toolbarShine;
	bool _showsBackgroundComponentHighlights;
	bool _showsBackgroundViewHighlight;
	bool _showsContentViewHighlight;
	UIActionSheet* _presentedActionSheet;
	UIPopoverController* _popoverController;

}

@property (assign,nonatomic) bool showsBackgroundComponentHighlights;              //@synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights - In the implementation block
@property (assign,nonatomic) bool showsBackgroundViewHighlight;                    //@synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight - In the implementation block
@property (assign,nonatomic) bool showsContentViewHighlight;                       //@synthesize showsContentViewHighlight=_showsContentViewHighlight - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,retain) UIActionSheet * presentedActionSheet;                 //@synthesize presentedActionSheet=_presentedActionSheet - In the implementation block
@property (assign,nonatomic) UIPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
+(id)popoverViewContainingView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)contentView;
-(bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(int)_style;
-(id)backgroundView;
-(id)viewController;
-(void)setUseToolbarShine:(bool)arg1 ;
-(id)toolbarShine;
-(bool)_allowsCustomizationOfContent;
-(void)setPopoverController:(id)arg1 ;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(CGRect)_snapshotBounds;
-(id)popoverController;
-(void)setPresentedActionSheet:(id)arg1 ;
-(bool)_isIgnoringTapsInDimmingView;
-(void)_setIgnoreTapsInDimmingView:(bool)arg1 ;
-(bool)toolbarIsVisible;
-(void)_presentationInPopoverWillBeginForViewController:(id)arg1 ;
-(void)_presentationInPopoverWillEndForViewController:(id)arg1 ;
-(void)_presentationInPopoverDidBeginForViewController:(id)arg1 ;
-(void)_presentationInPopoverDidEndForViewController:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(long long)backgroundStyle;
-(id)popoverBackgroundColor;
-(void)setPopoverBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(bool)arg3 ;
-(id)standardChromeView;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(void)_layoutToolbarShine;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(double)arg2 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_showArrow;
-(void)_hideArrow;
-(id)_viewForModalPresentationOfViewController:(id)arg1 ;
-(bool)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(bool)arg1 ;
-(bool)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(bool)arg1 ;
-(bool)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(bool)arg1 ;
-(id)presentedActionSheet;
@end

