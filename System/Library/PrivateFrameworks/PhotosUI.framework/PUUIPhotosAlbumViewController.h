/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosAlbumViewController.h>

@class UIBarButtonItem, NSArray;

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController {

	UIBarButtonItem* _imagePickerCancelButton;
	UIBarButtonItem* _imagePickerMultipleSelectionDoneButton;
	NSArray* __imagePickerMediaTypes;

}

@property (setter=_setImagePickerMediaTypes:,nonatomic,copy) NSArray * _imagePickerMediaTypes;              //@synthesize _imagePickerMediaTypes=__imagePickerMediaTypes - In the implementation block
-(id)init;
-(void)loadView;
-(void)viewDidLoad;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void).cxx_destruct;
-(void)setAlbum:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(bool)canNavigateToPhotoInteractively:(bool)arg1 ;
-(void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2 ;
-(bool)canBeginStackCollapseTransition;
-(bool)pu_wantsNavigationBarVisible;
-(id)_imagePickerMediaTypes;
-(void)_setAlbum:(NSObject*)arg1 mediaTypes:(id)arg2 ;
-(void)_handleImagePickerMultipleSelectionDone:(id)arg1 ;
-(void)_handleImagePickerCancel:(id)arg1 ;
@end
