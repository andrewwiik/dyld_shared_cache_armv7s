/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUPhotosGridViewController.h>

@class WallpaperMagicGridViewControllerSpec, NSString, NSDictionary, NSArray, PLWallpaperImageViewController;

@interface WallpaperMagicGridViewController : PUPhotosGridViewController {

	WallpaperMagicGridViewControllerSpec* _wallpaperSpec;
	NSString* _magicWallpaperCategoryKey;
	NSDictionary* __allWallpapersEnum;
	NSDictionary* _variantBeingPreviewed;
	NSDictionary* _optionsBeingPreviewed;
	NSArray* __wallpaperVariants;
	PLWallpaperImageViewController* _imageViewController;

}

@property (nonatomic,retain) WallpaperMagicGridViewControllerSpec * wallpaperSpec;                                //@synthesize wallpaperSpec=_wallpaperSpec - In the implementation block
@property (nonatomic,copy) NSString * magicWallpaperCategoryKey;                                                  //@synthesize magicWallpaperCategoryKey=_magicWallpaperCategoryKey - In the implementation block
@property (setter=_setAllWallpapersEnum:,nonatomic,retain) NSDictionary * _allWallpapersEnum;                     //@synthesize _allWallpapersEnum=__allWallpapersEnum - In the implementation block
@property (setter=_setVariantBeingPreviewed:,nonatomic,retain) NSDictionary * variantBeingPreviewed;              //@synthesize variantBeingPreviewed=_variantBeingPreviewed - In the implementation block
@property (setter=_setOptionsBeingPreviewed:,nonatomic,retain) NSDictionary * optionsBeingPreviewed;              //@synthesize optionsBeingPreviewed=_optionsBeingPreviewed - In the implementation block
@property (setter=_setWallpaperVariants:,nonatomic,retain) NSArray * _wallpaperVariants;                          //@synthesize _wallpaperVariants=__wallpaperVariants - In the implementation block
@property (nonatomic,retain) PLWallpaperImageViewController * imageViewController;                                //@synthesize imageViewController=_imageViewController - In the implementation block
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void).cxx_destruct;
-(void)setMagicWallpaperCategoryKey:(id)arg1 ;
-(id)_allWallpapersEnum;
-(void)_setWallpaperVariants:(id)arg1 ;
-(id)wallpaperSpec;
-(id)_wallpaperVariants;
-(void)_setVariantBeingPreviewed:(id)arg1 ;
-(void)setImageViewController:(id)arg1 ;
-(id)imageViewController;
-(id)variantBeingPreviewed;
-(void)dismissDidSetWallpaper:(bool)arg1 ;
-(void)setWallpaperSpec:(id)arg1 ;
-(id)magicWallpaperCategoryKey;
-(void)_setAllWallpapersEnum:(id)arg1 ;
-(id)optionsBeingPreviewed;
-(void)_setOptionsBeingPreviewed:(id)arg1 ;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(bool)canNavigateToPhotoInteractively:(bool)arg1 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(bool)allowSlideshowButton;
-(void)updatePeripheralInterfaceAnimated:(bool)arg1 ;
-(void)preheatAssets;
-(bool)canBeShownFromSuspendedState;
@end

