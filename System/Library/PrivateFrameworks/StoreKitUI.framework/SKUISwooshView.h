/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UICollectionView, UIButton, SKUILinkButton, UIColor, UILabel, UIControl, NSString;

@interface SKUISwooshView : UIView {

	UIView* _borderView;
	UICollectionView* _collectionView;
	UIEdgeInsets _collectionViewInsets;
	UIButton* _seeAllButton;
	bool _showsChevronForTitle;
	SKUILinkButton* _titleButton;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionViewInsets;              //@synthesize collectionViewInsets=_collectionViewInsets - In the implementation block
@property (nonatomic,readonly) UIControl * seeAllControl; 
@property (nonatomic,copy) NSString * seeAllTitle; 
@property (nonatomic,readonly) UIControl * chevronTitleControl; 
@property (assign,nonatomic) bool showsChevronForTitle;                      //@synthesize showsChevronForTitle=_showsChevronForTitle - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIColor * titleColor;                             //@synthesize titleColor=_titleColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(id)collectionView;
-(id)titleColor;
-(void)setTitleColor:(id)arg1 ;
-(void).cxx_destruct;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setCollectionView:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(UIEdgeInsets)collectionViewInsets;
-(void)setCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(id)seeAllTitle;
-(id)chevronTitleControl;
-(id)seeAllControl;
-(void)setShowsChevronForTitle:(bool)arg1 ;
-(void)setSeeAllTitle:(id)arg1 ;
-(id)_seeAllArrowImage;
-(void)setSeeAllColor:(id)arg1 forControlState:(unsigned long long)arg2 ;
-(bool)showsChevronForTitle;
-(id)seeAllColorForControlState:(unsigned long long)arg1 ;
@end

