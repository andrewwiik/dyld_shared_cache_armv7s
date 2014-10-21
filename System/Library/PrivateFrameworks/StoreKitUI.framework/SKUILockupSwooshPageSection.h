/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>
#import <StoreKitUI/SKUISwooshViewControllerDelegate.h>

@class SKUILockupSwooshArtworkLoader, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUILockupSwooshViewController, SKUISwooshPageComponent;

@interface SKUILockupSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate> {

	SKUILockupSwooshArtworkLoader* _artworkLoader;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIProductPageOverlayController* _overlayController;
	long long _overlaySourceIndex;
	SKUILockupSwooshViewController* _swooshViewController;

}

@property (nonatomic,@dynamic,readonly) SKUISwooshPageComponent * pageComponent; 
-(void)dealloc;
-(void).cxx_destruct;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(long long)numberOfCells;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(id)_missingItemLoader;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)_swooshViewController;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2 ;
-(void)swooshDidSelectSeeAll:(id)arg1 ;
-(void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(id)_artworkLoader;
@end

