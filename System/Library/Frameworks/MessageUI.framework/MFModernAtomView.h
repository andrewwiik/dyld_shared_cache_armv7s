/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIDefaultKeyboardInput.h>
#import <MessageUI/MFModernAtomViewResembling.h>

@class UIFont, MFModernAtomIconView, UIColor, UIView, MFModernAtomBackgroundView, UILabel, UIActivityIndicatorView, NSString;

@interface MFModernAtomView : UIDefaultKeyboardInput <MFModernAtomViewResembling> {

	MFModernAtomIconView* _badgeIconView;
	MFModernAtomIconView* _accessoryIconView;
	UIColor* _effectiveTintColor;
	unsigned long long _disabledPresentationOptions;
	UIView* _baselineView;
	MFModernAtomBackgroundView* _background;
	UIView* _compositingView;
	UIView* _titleLabelFillView;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	double _scalingFactor;
	bool _isPrimaryAddressAtom;
	bool _separatorHidden;
	bool _separatorIsLeftAligned;
	bool _selected;
	UIFont* _titleFont;
	unsigned long long _presentationOptions;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isSelected,nonatomic) bool selected;                                //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) unsigned long long effectivePresentationOptions; 
@property (nonatomic,readonly) UIColor * effectiveTintColor; 
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (nonatomic,readonly) MFModernAtomBackgroundView * backgroundView; 
@property (nonatomic,readonly) MFModernAtomIconView * badgeIconView;                         //@synthesize badgeIconView=_badgeIconView - In the implementation block
@property (nonatomic,readonly) MFModernAtomIconView * accessoryIconView;                     //@synthesize accessoryIconView=_accessoryIconView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) bool isPrimaryAddressAtom;                                      //@synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom - In the implementation block
@property (assign,nonatomic) bool hidesVIPIndicator; 
@property (assign,nonatomic) bool separatorHidden;                                           //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) bool separatorIsLeftAligned;                                    //@synthesize separatorIsLeftAligned=_separatorIsLeftAligned - In the implementation block
@property (assign,nonatomic) double scale;                                                   //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions;                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont;                                             //@synthesize titleFont=_titleFont - In the implementation block
+(id)_defaultTintColor;
+(id)_defaultLabelAttributes;
+(id)primaryAtomFont;
+(id)_defaultLabelAttributesWithFont:(id)arg1 ;
+(id)_failureTintColor;
+(id)_SMSTintColor;
+(id)_badgeImagesForPresentationOptions:(unsigned long long)arg1 iconOrder:(const unsigned long long*)arg2 orderingLength:(unsigned long long)arg3 tintColor:(id)arg4 large:(bool)arg5 variant:(int)arg6 ;
+(CGPoint)defaultBaselinePoint;
+(id)defaultFont;
+(double)defaultHeight;
+(double)horizontalPadding;
-(id)initWithFrame:(CGRect)arg1 presentationOptions:(unsigned long long)arg2 separatorStyle:(int)arg3 ;
-(void)_invalidatePresentationOptions;
-(id)effectiveTintColor;
-(void)_setEffectiveTintColor:(id)arg1 ;
-(unsigned long long)presentationOptions;
-(int)_preferredIconVariant;
-(bool)isPrimaryAddressAtom;
-(void)_updateActivityIndicator;
-(void)setSelected:(bool)arg1 animated:(bool)arg2 style:(unsigned long long)arg3 ;
-(void)_updateCompositingFilters;
-(void)_setPresentationOption:(unsigned long long)arg1 enabled:(bool)arg2 ;
-(double)preferredWidthWithSizeConstraints:(CGSize)arg1 ;
-(double)_leftPadding;
-(void)_updateFontIfNecessary;
-(bool)separatorHidden;
-(double)_rightInset;
-(double)_leftInset;
-(double)preferredWidth;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2 ;
-(void)setIsPrimaryAddressAtom:(bool)arg1 ;
-(bool)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(bool)arg1 ;
-(bool)separatorIsLeftAligned;
-(void)setSeparatorIsLeftAligned:(bool)arg1 ;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(void)appendPresentationOption:(unsigned long long)arg1 ;
-(void)clearPresentationOption:(unsigned long long)arg1 ;
-(unsigned long long)effectivePresentationOptions;
-(id)accessoryIconView;
-(id)badgeIconView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(double)scale;
-(UIEdgeInsets)edgeInsets;
-(void)tintColorDidChange;
-(void)setScale:(double)arg1 ;
-(id)title;
-(CGSize)intrinsicContentSize;
-(id)titleLabel;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSelected:(bool)arg1 animated:(bool)arg2 ;
-(bool)isSelected;
-(void)setSelected:(bool)arg1 ;
-(int)separatorStyle;
-(id)backgroundView;
-(id)viewForBaselineLayout;
-(CGRect)selectionFrame;
-(CGPoint)baselinePoint;
-(id)titleFont;
-(id)activityIndicator;
-(void)setSeparatorHidden:(bool)arg1 ;
-(double)_rightPadding;
-(void)setTitleFont:(id)arg1 ;
@end

