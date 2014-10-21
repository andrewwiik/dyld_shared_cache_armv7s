/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPServerObject.h>
#import <MediaPlayer/MPMusicPlayerController.h>

@protocol MPMusicPlayerControllerServerDelegate;
@class MPMusicPlayerControllerServer, NSMutableArray, NSMutableDictionary, MPVideoViewController;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {

	<MPMusicPlayerControllerServerDelegate>* _delegate;
	MPMusicPlayerControllerServer* _musicPlayerServer;
	int _activeClientPID;
	NSMutableArray* _clientPorts;
	NSMutableDictionary* _clientPortsForPIDs;
	NSMutableDictionary* _clientStateForPIDs;
	MPVideoViewController* _videoViewController;
	unsigned _queuePrepared : 1;

}
+(bool)_canSeedGeniusWithItem:(id)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(id)playbackState;
-(id)repeatMode;
-(void)setRepeatMode:(id)arg1 ;
-(void)prepareToPlay;
-(void)play;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(id)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(id)arg1 ;
-(id)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(id)_avController;
-(void)_tvOutCapabilityDidChangeNotification:(id)arg1 ;
-(id)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2 ;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(id)shuffleMode;
-(void)setShuffleMode:(id)arg1 ;
-(id)isGeniusAvailable;
-(id)isGeniusAvailableForSeedItems:(id)arg1 ;
-(id)setQueueWithSeedItems:(id)arg1 ;
-(id)nowPlayingItemAtIndex:(id)arg1 ;
-(id)nowPlayingRadioTrack;
-(void)pauseWithFadeoutDuration:(id)arg1 ;
-(id)allowsBackgroundVideo;
-(void)setAllowsBackgroundVideo:(id)arg1 ;
-(id)playbackSpeed;
-(void)setPlaybackSpeed:(id)arg1 ;
-(id)indexOfNowPlayingItem;
-(id)unshuffledIndexOfNowPlayingItem;
-(id)isNowPlayingItemFromGeniusMix;
-(id)currentChapterIndex;
-(void)setCurrentChapterIndex:(id)arg1 ;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1 ;
-(void)setQueueWithRadioStation:(id)arg1 ;
-(id)skipInDirection:(id)arg1 ;
-(id)serverIsAlive;
-(void)setUseApplicationSpecificQueue:(id)arg1 ;
-(void)registerForServerDiedNotifications;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)playItem:(id)arg1 ;
-(id)queueAsQuery;
-(id)queueAsRadioStation;
-(void)prepareQueueForPlayback;
-(void)setNowPlayingItem:(id)arg1 ;
-(void)shuffle;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToPreviousChapter;
-(void)_tearDownVideoView;
-(void)_prepareQueueIfNecessary;
-(void)_setQueueWithQuery:(id)arg1 ;
-(id)_clientState;
-(void)_endPlayback;
-(unsigned long long)_numberOfItems;
-(bool)useApplicationSpecificQueue;
-(void)_clientPortInvalidated:(id)arg1 ;
-(bool)_clientPIDHasPermissionToPlay:(int)arg1 ;
-(void)_endPlaybackForClientIfNecessary:(int)arg1 ;
-(id)_avControllerForClientPID:(int)arg1 ;
-(void)_clientPortInvalidatedNotification:(id)arg1 ;
-(void)_applicationStateChangedNotification:(id)arg1 ;
-(id)_clientStateForPID:(int)arg1 ;
-(bool)_currentClientPIDHasPermissionToPlay;
-(void)_registerClientPort:(unsigned)arg1 forProcessID:(int)arg2 hasAudioBackgroundMode:(bool)arg3 ;
-(void)_setQueuePrepared:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(id)numberOfItems;
-(void).cxx_destruct;
-(void)stop;
-(void)pause;
@end

