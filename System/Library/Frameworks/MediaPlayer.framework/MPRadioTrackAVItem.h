/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRadioAVItem.h>

@class NSString;

@interface MPRadioTrackAVItem : MPRadioAVItem {

	NSString* _assetFlavor;

}
-(void)loadAssetAndPlayerItem;
-(bool)supportsAddStation;
-(bool)supportsHistory;
-(bool)supportsRadioTrackActions;
-(id)_bestRadioTrackAssetWithAvailableAssets:(id)arg1 ;
-(void)_saveDownloadKeyCookie:(id)arg1 forURL:(id)arg2 ;
-(id)_sinfsByRemovingEmptyPinfsFromSinfs:(id)arg1 ;
-(void)setIsBanned:(bool)arg1 ;
-(void)_sendLikeOrBanRequestWithStatus:(int)arg1 ;
-(void)setIsLiked:(bool)arg1 ;
-(id)assetFlavor;
-(void).cxx_destruct;
@end

