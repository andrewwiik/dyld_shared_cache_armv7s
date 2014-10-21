/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPVolumeControllerDelegate;
@class MPAVController, NSString, UIImage;

@interface MPVolumeController : NSObject {

	MPAVController* _player;
	NSString* _volumeAudioCategory;
	bool _volumeWarningBlinking;
	UIImage* _volumeWarningTrackImage;
	bool _debugVolumeWarning;
	bool _volumeWarningEnabled;
	float _volumeValue;
	float _EUVolumeLimit;
	<MPVolumeControllerDelegate>* _delegate;
	long long _volumeWarningState;

}

@property (assign,nonatomic,__weak) <MPVolumeControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float volumeValue;                                         //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,nonatomic) bool muted; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,copy) NSString * volumeAudioCategory; 
@property (nonatomic,readonly) bool volumeWarningEnabled;                                 //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) long long volumeWarningState;                              //@synthesize volumeWarningState=_volumeWarningState - In the implementation block
@property (nonatomic,readonly) float EUVolumeLimit;                                       //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(bool)muted;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(float)setVolumeValue:(float)arg1 ;
-(void)setMuted:(bool)arg1 ;
-(bool)volumeWarningEnabled;
-(long long)volumeWarningState;
-(void)updateVolumeWarningState;
-(void)updateVolumeValue;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(id)volumeAudioCategory;
-(void)setVolumeAudioCategory:(id)arg1 ;
-(float)EUVolumeLimit;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)_systemVolumeDidChange:(id)arg1 ;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(float)_volumeFromAVController;
-(void)_setVolumeWarningState:(long long)arg1 ;
-(float)volumeValue;
-(void)_internalSetVolumeValue:(float)arg1 ;
-(bool)_isPlayerInValidState;
-(void)_systemMuteDidChange:(id)arg1 ;
-(void)_EUVolumeLimitDidChange:(id)arg1 ;
-(void)_EUVolumeLimitEnforcedDidChange:(id)arg1 ;
-(void)_volumeDidChange:(id)arg1 ;
-(void)_forcefullySetVolumeValue:(float)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

