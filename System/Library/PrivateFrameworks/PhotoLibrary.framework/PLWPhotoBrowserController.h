/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PLPhotoBrowserController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotoLibrary/PLAssetContainerObserver.h>

@class PLLibraryImageDataProvider;

@interface PLWPhotoBrowserController : PLPhotoBrowserController <UIGestureRecognizerDelegate, PLAssetContainerObserver> {

	PLLibraryImageDataProvider* _imageDataProvider;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(bool)wantsPhotoBrowserStyleStatusBar;
-(void)setAssetContainerList:(id)arg1 currentImageIndexPath:(id)arg2 ;
-(id)initWithAssetContainerList:(id)arg1 atImageIndexPath:(id)arg2 imageDataProvider:(id)arg3 modalDoneButtonItem:(id)arg4 ;
@end

