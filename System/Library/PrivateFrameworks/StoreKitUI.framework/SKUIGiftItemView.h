/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUIItem, UIImageView, SKUIItemOfferButton, SKUIItemState, UILabel, SKUIGiftTheme, UIImage, SKUIItemArtworkContext;

@interface SKUIGiftItemView : UIView {

	NSString* _artistName;
	NSString* _categoryName;
	SKUIClientContext* _clientContext;
	SKUIItem* _item;
	UIImageView* _itemImageView;
	SKUIItemOfferButton* _itemOfferButton;
	SKUIItemState* _itemState;
	long long _itemStyle;
	long long _numberOfUserRatings;
	NSString* _price;
	UIImageView* _starRatingImageView;
	UILabel* _subtitleLabel1;
	UILabel* _subtitleLabel2;
	SKUIGiftTheme* _theme;
	UILabel* _titleLabel;
	float _userRating;
	UILabel* _userRatingCountLabel;

}

@property (nonatomic,readonly) long long giftItemStyle;                              //@synthesize itemStyle=_itemStyle - In the implementation block
@property (nonatomic,readonly) SKUIItem * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) SKUIGiftTheme * theme;                                    //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                  //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * price;                                         //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long numberOfUserRatings;                          //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating;                                       //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * itemOfferButton;                //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,retain) SKUIItemState * itemState;                              //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (nonatomic,readonly) SKUIItemArtworkContext * artworkContext; 
-(id)price;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(id)item;
-(void).cxx_destruct;
-(id)artistName;
-(void)setArtistName:(id)arg1 ;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(id)theme;
-(void)setTheme:(id)arg1 ;
-(CGSize)_imageSize;
-(id)itemImage;
-(void)setItemImage:(id)arg1 ;
-(id)categoryName;
-(void)_reloadUserRatingViews;
-(id)_titleColor;
-(void)setItemState:(id)arg1 ;
-(id)itemState;
-(id)artworkContext;
-(id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3 ;
-(void)setCategoryName:(id)arg1 ;
-(void)setPrice:(id)arg1 ;
-(void)_reloadItemState:(bool)arg1 ;
-(void)_itemOfferConfirmAction:(id)arg1 ;
-(void)_reloadSubtitles;
-(void)setItemState:(id)arg1 animated:(bool)arg2 ;
-(id)_subtitleColor;
-(double)_paddingRight;
-(UIEdgeInsets)_imageEdgeInsets;
-(double)_paddingLeft;
-(id)_userRatingColor;
-(long long)giftItemStyle;
-(id)itemOfferButton;
-(id)_newLabel;
-(long long)numberOfUserRatings;
-(void)setNumberOfUserRatings:(long long)arg1 ;
@end
