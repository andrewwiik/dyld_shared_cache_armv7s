/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIImageView, PUPhotoViewContentHelper, PUPhotoView;

@interface PUPhotosGridCell : UICollectionViewCell {

	UIView* _selectionOverlayView;
	UIImageView* _selectionBadgeImageView;
	UIView* _highlightOverlayView;
	bool _selectionBadgeVisible;
	bool _transitionIsAppearing;
	PUPhotoViewContentHelper* _photoContentHelper;
	PUPhotoView* _temporaryPhotoContentView;

}

@property (assign,getter=isHighlighted,nonatomic) bool highlighted; 
@property (assign,getter=isSelectionBadgeVisible,nonatomic) bool selectionBadgeVisible;              //@synthesize selectionBadgeVisible=_selectionBadgeVisible - In the implementation block
@property (nonatomic,retain) PUPhotoViewContentHelper * photoContentHelper;                          //@synthesize photoContentHelper=_photoContentHelper - In the implementation block
@property (nonatomic,retain) PUPhotoView * temporaryPhotoContentView;                                //@synthesize temporaryPhotoContentView=_temporaryPhotoContentView - In the implementation block
@property (assign,nonatomic) bool transitionIsAppearing;                                             //@synthesize transitionIsAppearing=_transitionIsAppearing - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(void)prepareForReuse;
-(void)_updateHighlight;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void).cxx_destruct;
-(bool)transitionIsAppearing;
-(void)setSelectionBadgeVisible:(bool)arg1 ;
-(id)photoContentHelper;
-(void)setPhotoContentHelper:(id)arg1 ;
-(void)_updateSubviewOrdering;
-(bool)isSelectionBadgeVisible;
-(void)_updateSelectionBadge;
-(void)addTemporaryPhotoContentView;
-(void)removeTemporaryPhotoContentView;
-(void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2 ;
-(id)temporaryPhotoContentView;
-(void)setTemporaryPhotoContentView:(id)arg1 ;
-(void)setTransitionIsAppearing:(bool)arg1 ;
@end

