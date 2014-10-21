/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkPlayabilityMonitor : NSObject {

	long long _effectiveNetworkTypeForCloudPlayback;
	long long _effectiveNetworkTypeForRadioPlayback;
	double _lastAverageBitrate;
	long long _networkType;
	NSObject<OS_dispatch_queue>* _queue;
	double _radioMinimumBitrateForHighQuality;
	bool _supportsRadio;

}

@property (nonatomic,readonly) long long networkType; 
@property (nonatomic,readonly) long long effectiveNetworkTypeForPlayback; 
@property (assign,nonatomic) bool supportsRadio; 
+(id)sharedNetworkPlayabilityMonitor;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(long long)networkType;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(long long)effectiveNetworkTypeForPlaybackType:(long long)arg1 ;
-(long long)effectiveNetworkTypeForPlayback;
-(void)_updateRadioMinimumBitrateWithStoreBag:(id)arg1 ;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
-(void)_radioStoreBagDidLoadNotification:(id)arg1 ;
-(long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 playbackType:(long long)arg2 ;
-(void)setSupportsRadio:(bool)arg1 ;
-(bool)supportsRadio;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end
