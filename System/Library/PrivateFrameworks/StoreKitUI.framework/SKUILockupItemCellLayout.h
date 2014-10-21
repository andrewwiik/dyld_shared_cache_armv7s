/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class UILabel, SKUILockupMetadataView, NSString;

@interface SKUILockupItemCellLayout : SKUIItemCellLayout {

	UIEdgeInsets _contentInsets;
	CGSize _imageBoundingSize;
	long long _itemOfferStyle;
	UILabel* _itemOfferTextLabel;
	long long _layoutStyle;
	long long _lockupSize;
	SKUILockupMetadataView* _metadataView;
	long long _verticalAlignment;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) CGSize imageBoundingSize;                      //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
@property (assign,nonatomic) long long itemOfferStyle;                      //@synthesize itemOfferStyle=_itemOfferStyle - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long lockupSize;                          //@synthesize lockupSize=_lockupSize - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                   //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields; 
@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * categoryString; 
@property (nonatomic,copy) NSString * itemCountString; 
@property (nonatomic,copy) NSString * releaseDateString; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long numberOfUserRatings; 
@property (assign,nonatomic) float userRating; 
+(double)heightForLockupStyle:(SKUILockupStyle)arg1 itemKind:(long long)arg2 editorial:(id)arg3 ;
+(double)heightForLockupComponent:(id)arg1 ;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)initWithTableViewCell:(id)arg1 ;
-(void).cxx_destruct;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)artistName;
-(void)setArtistName:(id)arg1 ;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setItemCountString:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)categoryString;
-(id)itemCountString;
-(id)releaseDateString;
-(void)setCategoryString:(id)arg1 ;
-(void)setReleaseDateString:(id)arg1 ;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(void)setLockupSize:(long long)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)layoutForItemOfferChange;
-(void)_initSKUILockupItemCellLayout;
-(void)_layoutHorizontal;
-(void)_layoutVertical;
-(CGRect)_layoutIconImageView;
-(bool)_isItemOfferHidden;
-(id)_itemOfferTextLabel;
-(void)setItemOfferStyle:(long long)arg1 ;
-(CGSize)imageBoundingSize;
-(long long)itemOfferStyle;
-(long long)lockupSize;
-(long long)numberOfUserRatings;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setClientContext:(id)arg1 ;
@end

