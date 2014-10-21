/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUNavigationTransition.h>
#import <PhotosUI/PUCollectionViewLayoutTransitioningDelegate.h>
#import <PhotosUI/PUTransitionViewAnimatorDelegate.h>

@protocol PLAssetContainer, PUStackedAlbumTransitionDelegate;
@class NSSet, UIView, PUStackedAlbumLayout, PUStackedAlbumTransitionLayout, PUTransitionViewAnimator, PUPhotoPinchGestureRecognizer;

@interface PUStackedAlbumTransition : PUNavigationTransition <PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate> {

	CGRect _popTransitionInitialVisibleBounds;
	NSSet* _popTransitionInitialVisibleStackedAssetIndexPaths;
	UIView* _animatorView;
	bool _isExpanding;
	bool _isForStandInAlbum;
	<PLAssetContainer>* _photoCollection;
	<PUStackedAlbumTransitionDelegate>* _delegate;
	PUStackedAlbumLayout* __transitionLayout;
	PUStackedAlbumTransitionLayout* __interactiveTransitionLayout;
	PUTransitionViewAnimator* __transitionViewAnimator;
	PUPhotoPinchGestureRecognizer* __photoPinchGestureRecognizer;
	id __disableToken;
	CGPoint _interactionCenter;

}

@property (nonatomic,retain) <PLAssetContainer> * photoCollection;                                                                               //@synthesize photoCollection=_photoCollection - In the implementation block
@property (assign,nonatomic,__weak) <PUStackedAlbumTransitionDelegate> * delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool isExpanding;                                                                                                   //@synthesize isExpanding=_isExpanding - In the implementation block
@property (assign,setter=setForStandInAlbum:,nonatomic) bool isForStandInAlbum;                                                                  //@synthesize isForStandInAlbum=_isForStandInAlbum - In the implementation block
@property (assign,nonatomic) CGPoint interactionCenter;                                                                                          //@synthesize interactionCenter=_interactionCenter - In the implementation block
@property (assign,setter=_setTransitionLayout:,nonatomic,__weak) PUStackedAlbumLayout * _transitionLayout;                                       //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (setter=_setInteractiveTransitionLayout:,nonatomic,retain) PUStackedAlbumTransitionLayout * _interactiveTransitionLayout;              //@synthesize _interactiveTransitionLayout=__interactiveTransitionLayout - In the implementation block
@property (setter=_setTransitionViewAnimator:,nonatomic,retain) PUTransitionViewAnimator * _transitionViewAnimator;                              //@synthesize _transitionViewAnimator=__transitionViewAnimator - In the implementation block
@property (setter=_setPhotoPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * _photoPinchGestureRecognizer;               //@synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer - In the implementation block
@property (setter=_setDisableToken:,nonatomic,retain) id _disableToken;                                                                          //@synthesize _disableToken=__disableToken - In the implementation block
@property (nonatomic,readonly) UIViewController<PUStackedAlbumControllerTransition> * fromViewController; 
@property (nonatomic,readonly) UIViewController<PUStackedAlbumControllerTransition> * toViewController; 
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 ;
-(void)setInteractionCenter:(CGPoint)arg1 ;
-(void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 isExpanding:(bool)arg2 ;
-(bool)isExpanding;
-(id)_photoPinchGestureRecognizer;
-(CGPoint)interactionCenter;
-(void)_setExpanding:(bool)arg1 ;
-(void)_setPhotoPinchGestureRecognizer:(id)arg1 ;
-(id)_transitionViewAnimator;
-(id)_interactiveTransitionLayout;
-(id)_disableToken;
-(id)photoCollection;
-(void)_setInteractiveTransitionLayout:(id)arg1 ;
-(void)_setDisableToken:(id)arg1 ;
-(void)_setTransitionLayout:(id)arg1 ;
-(id)_newInteractiveTransitionViewAnimatorForLayout:(id)arg1 collectionView:(id)arg2 ;
-(void)_setTransitionViewAnimator:(id)arg1 ;
-(id)_newTransitionLayoutWithStackedAlbumLayout:(id)arg1 otherLayout:(id)arg2 forPush:(bool)arg3 ;
-(bool)isForStandInAlbum;
-(id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)arg1 ;
-(id)_transitionLayout;
-(void)collectionViewLayout:(id)arg1 willSupplyLayoutAttributes:(id)arg2 ;
-(bool)collectionViewLayoutShouldProvideCustomAnimations:(id)arg1 ;
-(void)transitionViewAnimatorDidUpdate:(id)arg1 ;
-(void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout CGPoint*)arg2 ;
-(void)transitionViewAnimatorDidEnd:(id)arg1 finished:(bool)arg2 ;
-(void)completeInteractiveOperation:(long long)arg1 finished:(bool)arg2 ;
-(void)animatePushTransition;
-(void)animatePopTransition;
-(void)setPhotoCollection:(id)arg1 ;
-(void)setForStandInAlbum:(bool)arg1 ;
@end

