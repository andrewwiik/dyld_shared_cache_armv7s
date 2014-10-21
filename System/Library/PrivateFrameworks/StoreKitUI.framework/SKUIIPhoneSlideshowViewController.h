/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SKUISlideshowViewControllerDataSource;
@class SKUIClientContext, SKUIGiftThemeCollectionView, UIPageControl, NSOperationQueue, NSMutableArray, NSMutableDictionary, SKUIScreenshotDataConsumer;

@interface SKUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUIClientContext* _clientContext;
	<SKUISlideshowViewControllerDataSource>* _dataSource;
	SKUIGiftThemeCollectionView* _collectionView;
	UIPageControl* _pageControl;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _placeholderQueue;
	NSMutableArray* _images;
	NSMutableDictionary* _placeholderImages;
	SKUIScreenshotDataConsumer* _screenshotConsumer;
	long long _indexToScrollToOnLoadView;
	bool _respondsToCount;
	bool _respondsToURL;
	bool _respondsToImage;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUISlideshowViewControllerDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long currentIndex; 
-(void)_doneAction:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)dataSource;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)currentIndex;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void).cxx_destruct;
-(id)clientContext;
-(void)setCurrentIndex:(long long)arg1 ;
-(void)_reloadPageControl;
-(void)_setImage:(id)arg1 atIndex:(long long)arg2 ;
-(id)_imageAtIndex:(long long)arg1 ;
-(id)_placeholderImageAtIndex:(long long)arg1 ;
-(void)_setLowResImage:(id)arg1 atIndex:(long long)arg2 ;
-(void)setClientContext:(id)arg1 ;
@end
