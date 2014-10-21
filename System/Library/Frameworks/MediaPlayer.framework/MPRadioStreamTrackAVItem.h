/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRadioAVItem.h>
#import <MediaPlayer/AVAssetResourceLoaderDelegate.h>

@class _MPRadioStreamMetadata, NSArray, NSData;

@interface MPRadioStreamTrackAVItem : MPRadioAVItem <AVAssetResourceLoaderDelegate> {

	_MPRadioStreamMetadata* _adamIDMetadata;
	long long _albumStoreID;
	NSArray* _buyOffers;
	_MPRadioStreamMetadata* _effectiveMetadata;
	NSData* _previousAdamIDBlob;
	_MPRadioStreamMetadata* _radioStreamTrackMetadata;
	long long _storeID;
	_MPRadioStreamMetadata* _timedMetadata;

}
-(void)setPlayerItem:(id)arg1 ;
-(void)loadAssetAndPlayerItem;
-(id)imageCacheRequestWithSize:(CGSize)arg1 time:(double)arg2 usePlaceholderAsFallback:(bool)arg3 ;
-(id)artist;
-(bool)isExplicitTrack;
-(bool)isAlwaysLive;
-(id)mainTitle;
-(bool)supportsRadioTrackActions;
-(long long)albumStoreID;
-(id)buyOffers;
-(long long)storeID;
-(id)_createMetadataForRadioStreamTrack;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_reloadMetadataAndPostNotificationsIfNeeded:(bool)arg1 ;
-(id)streamTrack;
-(float)_maximumBitRateForNetworkType:(long long)arg1 ;
-(id)albumBuyButtonText;
-(long long)albumBuyButtonType;
-(void)_getCurrentTimedMetadata:(id*)arg1 pings:(id*)arg2 adamIDBlob:(id*)arg3 ;
-(void)_updateEffectiveMetadataAndPostNotifications:(bool)arg1 ;
-(bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)initWithStreamTrack:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
-(id)album;
@end

