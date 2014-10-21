/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UISegmentedControl, SKUIColorScheme, UIView, _UIBackdropView, UIControl;

@interface SKUIProductPageHeaderFloatingView : UIView {

	UISegmentedControl* _sectionControl;
	SKUIColorScheme* _colorScheme;
	UIView* _separatorView;
	UIView* _backdropAlphaView;
	_UIBackdropView* _backdropView;
	bool _isPad;

}

@property (assign,nonatomic) double backdropAlpha; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIControl * sectionControl;                //@synthesize sectionControl=_sectionControl - In the implementation block
@property (assign,nonatomic) long long selectedSectionIndex; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void).cxx_destruct;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)sectionControl;
-(id)initWithSectionTitles:(id)arg1 isPad:(bool)arg2 ;
-(long long)selectedSectionIndex;
-(void)setSelectedSectionIndex:(long long)arg1 ;
-(void)setBackdropAlpha:(double)arg1 ;
-(void)_reloadBackdropView;
-(double)backdropAlpha;
@end

