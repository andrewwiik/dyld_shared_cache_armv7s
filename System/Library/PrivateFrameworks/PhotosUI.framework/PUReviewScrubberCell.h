/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

@interface PUReviewScrubberCell : UICollectionViewCell {

	bool _favorite;
	bool _suggested;
	bool _wantsSmallSuggestionIndicators;
	UIImage* _image;
	UIImageView* __thumbnailImageView;
	UIImageView* __checkmarkImageView;
	UIImageView* __suggestedImageView;

}

@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,getter=isFavorite,nonatomic) bool favorite;                  //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isSuggested,nonatomic) bool suggested;                //@synthesize suggested=_suggested - In the implementation block
@property (assign,nonatomic) bool wantsSmallSuggestionIndicators;              //@synthesize wantsSmallSuggestionIndicators=_wantsSmallSuggestionIndicators - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbnailImageView;              //@synthesize _thumbnailImageView=__thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _checkmarkImageView;              //@synthesize _checkmarkImageView=__checkmarkImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _suggestedImageView;              //@synthesize _suggestedImageView=__suggestedImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(void).cxx_destruct;
-(void)_updateFavoriteView;
-(void)_updateSuggestedView;
-(void)_commonPUReviewScrubberCellInitialization;
-(void)_updateThumbnailImageView;
-(void)setFavorite:(bool)arg1 animated:(bool)arg2 ;
-(void)setSuggested:(bool)arg1 animated:(bool)arg2 ;
-(void)setFavorite:(bool)arg1 ;
-(void)setSuggested:(bool)arg1 ;
-(bool)isFavorite;
-(bool)isSuggested;
-(bool)wantsSmallSuggestionIndicators;
-(void)setWantsSmallSuggestionIndicators:(bool)arg1 ;
-(id)_thumbnailImageView;
-(id)_checkmarkImageView;
-(id)_suggestedImageView;
@end

