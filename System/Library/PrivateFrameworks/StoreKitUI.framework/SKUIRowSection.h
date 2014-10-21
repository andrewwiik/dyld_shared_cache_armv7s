/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>

@class SKUIClientContext, NSMapTable, NSMutableIndexSet, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUILockupComponent, SKUIRowComponent;

@interface SKUIRowSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {

	SKUIClientContext* _clientContext;
	NSMapTable* _columnViews;
	NSMapTable* _componentArtworkRequestIDs;
	NSMapTable* _editorialLayouts;
	NSMutableIndexSet* _expandedEditorialIndexes;
	NSMapTable* _galleryViewControllers;
	NSMapTable* _countdownViewControllers;
	bool _isPad;
	double _landscapeCellContentHeight;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIProductPageOverlayController* _overlayController;
	SKUILockupComponent* _overlaySourceComponent;
	double _portraitCellContentHeight;

}

@property (nonatomic,@dynamic,readonly) SKUIRowComponent * pageComponent; 
-(void)dealloc;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(long long)numberOfCells;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)willHideInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2 ;
-(void)_reloadEditorialLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3 ;
-(void)_reloadLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3 ;
-(void)_reloadEditorialCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3 ;
-(id)_columnViews;
-(UIEdgeInsets)_edgeInsetsForColumnIndex:(long long)arg1 ;
-(void)_loadImagesForGalleryComponent:(id)arg1 columnIndex:(long long)arg2 ;
-(void)_reloadView:(id)arg1 forMediaComponent:(id)arg2 columnIndex:(long long)arg3 ;
-(double)_heightForComponent:(id)arg1 columnIndex:(double)arg2 rowWidth:(double)arg3 ;
-(double)_cellContentHeightForRowWidth:(double)arg1 ;
-(double)_columnWidthForColumnIndex:(long long)arg1 rowWidth:(double)arg2 ;
-(void)_setPositionForClickEvent:(id)arg1 elementIndex:(long long)arg2 ;
-(void)_expandEditorialComponent:(id)arg1 columnIndex:(long long)arg2 ;
-(void)_selectGalleryComponent:(id)arg1 columnIndex:(long long)arg2 ;
-(void)_selectLockupComponent:(id)arg1 columnIndex:(long long)arg2 ;
-(void)_selectMediaComponent:(id)arg1 columnIndex:(long long)arg2 ;
-(id)_missingItemLoader;
-(id)_editorialLayoutForEditorial:(id)arg1 columnIndex:(long long)arg2 ;
-(id)_editorialLayoutForLockup:(id)arg1 columnIndex:(long long)arg2 ;
-(void)_enumerateLockupsWithBlock:(/*^block*/ id)arg1 ;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(id)_overlaySourceCell;
-(id)_viewControllerForCountdownComponent:(id)arg1 ;
-(id)_viewControllerForGalleryComponent:(id)arg1 ;
-(id)_newViewWithMediaComponent:(id)arg1 ;
-(double)_interColumnSpacing;
-(SKUILockupStyle)_lockupStyleForComponent:(id)arg1 columnIndex:(long long)arg2 ;
-(double)_heightForCountdownComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3 ;
-(double)_heightForEditorialComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3 ;
-(double)_heightForGalleryComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3 ;
-(double)_heightForLockupComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3 ;
-(double)_heightForMediaComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3 ;
-(double)_heightForArtwork:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3 ;
-(id)_imageConsumerWithItem:(id)arg1 lockupSize:(long long)arg2 ;
-(id)_lockupImageForComponent:(id)arg1 ;
-(id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 columnIndex:(long long)arg2 ;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(id)cellForIndexPath:(id)arg1 ;
@end

