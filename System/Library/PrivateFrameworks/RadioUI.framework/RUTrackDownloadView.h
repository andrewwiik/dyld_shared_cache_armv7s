/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPStoreDownloadManagerObserver.h>
#import <StoreKit/SKStoreProductViewControllerDelegate.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>

@protocol RUTrackDownloadViewDelegate;
@class NSArray, MPMediaDownloadObserver, SKUIItemOfferButton, MPMediaItem, NSString, UIViewController, RadioTrack, MPAVItem;

@interface RUTrackDownloadView : UIView <MPStoreDownloadManagerObserver, SKStoreProductViewControllerDelegate, SKUIItemOfferButtonDelegate> {

	UIEdgeInsets _alignmentRectInsets;
	NSArray* _buyOffers;
	MPMediaDownloadObserver* _downloadObserver;
	bool _isPurchaseAllowed;
	SKUIItemOfferButton* _itemOfferButton;
	MPMediaItem* _mediaItem;
	bool _showingConfirmation;
	bool _supportsAlbumOnly;
	long long _buyButtonTitleStyle;
	<RUTrackDownloadViewDelegate>* _delegate;
	NSString* _baseOriginator;
	long long _overrideState;
	NSString* _overrideTitleText;
	long long _state;
	NSString* _stationHash;
	long long _stationID;
	UIViewController* _viewControllerForPresenting;
	RadioTrack* _radioTrack;
	MPAVItem* _avItem;
	CGSize _overrideSize;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets; 
@property (assign,nonatomic) long long buyButtonTitleStyle;                                      //@synthesize buyButtonTitleStyle=_buyButtonTitleStyle - In the implementation block
@property (assign,nonatomic) <RUTrackDownloadViewDelegate> * delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * baseOriginator;                                            //@synthesize baseOriginator=_baseOriginator - In the implementation block
@property (assign,nonatomic) CGSize overrideSize;                                                //@synthesize overrideSize=_overrideSize - In the implementation block
@property (assign,nonatomic) long long overrideState;                                            //@synthesize overrideState=_overrideState - In the implementation block
@property (nonatomic,copy) NSString * overrideTitleText;                                         //@synthesize overrideTitleText=_overrideTitleText - In the implementation block
@property (nonatomic,readonly) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                               //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;                                                //@synthesize stationID=_stationID - In the implementation block
@property (assign,nonatomic) bool supportsAlbumOnly;                                             //@synthesize supportsAlbumOnly=_supportsAlbumOnly - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewControllerForPresenting;              //@synthesize viewControllerForPresenting=_viewControllerForPresenting - In the implementation block
@property (nonatomic,retain) RadioTrack * radioTrack;                                            //@synthesize radioTrack=_radioTrack - In the implementation block
@property (setter=setAVItem:,nonatomic,retain) MPAVItem * avItem;                                //@synthesize avItem=_avItem - In the implementation block
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)radioTrack;
-(void)setAVItem:(id)arg1 ;
-(id)stationHash;
-(long long)stationID;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)_unregisterForAVItemNotifications;
-(void)_registerForAVItemNotifications;
-(void)setStationHash:(id)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(long long)state;
-(UIEdgeInsets)alignmentRectInsets;
-(id)_title;
-(void).cxx_destruct;
-(id)avItem;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(void)_radioPurchaseAllowedDidChangeNotification:(id)arg1 ;
-(void)setViewControllerForPresenting:(id)arg1 ;
-(void)setBaseOriginator:(id)arg1 ;
-(void)setBuyButtonTitleStyle:(long long)arg1 ;
-(void)setSupportsAlbumOnly:(bool)arg1 ;
-(void)setOverrideTitleText:(id)arg1 ;
-(void)setOverrideSize:(CGSize)arg1 ;
-(void)setOverrideState:(long long)arg1 ;
-(void)setRadioTrack:(id)arg1 ;
-(void)_updateIsPurchasedAllowedAndUpdateState:(bool)arg1 ;
-(void)_unregisterForRadioTrackNotifications;
-(void)_itemOfferCancelConfirmationAction:(id)arg1 ;
-(void)_itemOfferShowConfirmationAction:(id)arg1 ;
-(void)_updateStateAndInternalViewsAnimated:(bool)arg1 ;
-(void)_sizeToFitAndNotifyDelegate;
-(void)_registerForRadioTrackNotifications;
-(void)_updateStateAndInternalViewsIfNeededForDownloads:(id)arg1 ;
-(long long)_downloadStoreID;
-(id)_effectiveRadioTrack;
-(id)_bestItemOffer;
-(bool)_isAlbumOnlyOffer:(id)arg1 ;
-(long long)_albumStoreID;
-(bool)_isExplicit;
-(id)_buyOffers;
-(void)_avItemBuyOffersDidChangeNotification:(id)arg1 ;
-(void)_radioTrackDidChangeNotification:(id)arg1 ;
-(long long)buyButtonTitleStyle;
-(id)baseOriginator;
-(CGSize)overrideSize;
-(long long)overrideState;
-(id)overrideTitleText;
-(bool)supportsAlbumOnly;
-(id)viewControllerForPresenting;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)_itemOfferButtonAction:(id)arg1 ;
@end

