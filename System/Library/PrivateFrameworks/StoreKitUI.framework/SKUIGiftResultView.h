/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIImageView, SKUIGiftItemView, UILabel, UIImage, NSString;

@interface SKUIGiftResultView : UIView {

	UIButton* _giftAgainButton;
	UIImageView* _imageView;
	SKUIGiftItemView* _itemView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIButton * giftAgainButton;              //@synthesize giftAgainButton=_giftAgainButton - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIGiftItemView * itemView;               //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(id)title;
-(void).cxx_destruct;
-(void)setItemView:(id)arg1 ;
-(id)giftAgainButton;
-(id)itemView;
@end

