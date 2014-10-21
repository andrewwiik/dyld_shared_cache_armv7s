/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUICellLayout.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>

@class SKUICellImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemOfferButtonAppearance, SKUIItemState, UIView, UIImage;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {

	bool _iconImageHidden;
	bool _hidesItemOfferButton;
	bool _highlighted;
	SKUICellImageView* _iconImageView;
	SKUIItemOffer* _itemOffer;
	SKUIItemOfferButton* _itemOfferButton;
	SKUIItemOfferButtonAppearance* _itemOfferButtonAppearance;
	SKUIItemState* _itemState;
	bool _restricted;
	bool _selected;
	UIView* _removeControlView;

}

@property (nonatomic,retain) UIImage * iconImage; 
@property (assign,getter=isIconImageHidden,nonatomic) bool iconImageHidden;                          //@synthesize iconImageHidden=_iconImageHidden - In the implementation block
@property (assign,nonatomic) bool displaysItemOfferButton; 
@property (assign,getter=isRestricted,nonatomic) bool restricted;                                    //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,retain) SKUIItemOffer * itemOffer;                                              //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;              //@synthesize itemOfferButtonAppearance=_itemOfferButtonAppearance - In the implementation block
@property (nonatomic,copy) SKUIItemState * itemState;                                                //@synthesize itemState=_itemState - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) bool highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) bool selected;                                        //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIView * iconImageView;                                               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * itemOfferButton;                                //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,readonly) UIView * removeControlView;                                           //@synthesize removeControlView=_removeControlView - In the implementation block
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(bool)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(bool)arg1 ;
-(id)iconImage;
-(void).cxx_destruct;
-(void)setIconImage:(id)arg1 ;
-(id)iconImageView;
-(void)setItemState:(id)arg1 ;
-(void)setItemOffer:(id)arg1 ;
-(id)itemOffer;
-(id)itemState;
-(void)_itemOfferConfirmAction:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(bool)arg2 ;
-(id)itemOfferButtonAppearance;
-(void)setRestricted:(bool)arg1 ;
-(void)setIconImageHidden:(bool)arg1 ;
-(void)setItemOfferButtonAppearance:(id)arg1 ;
-(void)resetLayout;
-(void)_reloadItemOfferButton:(bool)arg1 ;
-(bool)isIconImageHidden;
-(void)_reloadItemOfferVisibility;
-(void)layoutForItemOfferChange;
-(void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2 ;
-(id)_parentCollectionViewCell;
-(void)_cancelItemOfferConfirmationAction:(id)arg1 ;
-(void)_showItemOfferConfirmationAction:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(bool)displaysItemOfferButton;
-(void)setDisplaysItemOfferButton:(bool)arg1 ;
-(bool)_useCloudButtonForItemState:(id)arg1 ;
-(id)removeControlView;
-(bool)isRestricted;
-(id)itemOfferButton;
@end
