/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/InterfaceListenerDelegate.h>
#import <GameKitServices/GKSessionVoiceChatDelegate.h>
#import <GameKitServices/GKVoiceChatClient.h>
#import <GameKitServices/VideoConferenceSpeakingDelegate.h>

@protocol OS_dispatch_queue, GKVoiceChatSessionDelegate;
@class NSString, GKSessionInternal, NSMutableArray, NSMutableDictionary, GKRWLock, GKVoiceChatServiceFocus, VoiceChatSessionRoster, NSObject, GKInterfaceListener, NSArray;

@interface GKVoiceChatSessionInternal : NSObject <InterfaceListenerDelegate, GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate> {

	NSString* _sessionName;
	unsigned _conferenceID;
	bool activeSession;
	float sessionVolume;
	bool focusCallbacks;
	GKSessionInternal* _gkSession;
	NSString* _peerID;
	NSMutableArray* _connectedPeers;
	NSMutableArray* _focusPausedPeers;
	NSMutableArray* _connectedVoicePeers;
	NSMutableArray* _connectedFocusPeers;
	NSMutableArray* _mutedPeers;
	NSMutableArray* _myPausedList;
	NSMutableDictionary* _peerChannelQuality;
	bool needsRecalculateGoodChannels;
	int goodChannels;
	unsigned talkingPeersLimit;
	bool isUsingSuppression;
	unsigned _sessionState;
	GKRWLock* _rwLock;
	GKVoiceChatServiceFocus* _vcService;
	VoiceChatSessionRoster* _roster;
	NSObject<OS_dispatch_queue>* _sendQueue;
	<GKVoiceChatSessionDelegate>* delegate;
	unsigned congestionState;
	id _publicWrapper;
	GKInterfaceListener* _wifiListener;
	bool _currentWifiState;

}

@property (assign) <GKVoiceChatSessionDelegate> * delegate; 
@property (nonatomic,readonly) NSString * sessionName; 
@property (nonatomic,readonly) unsigned conferenceID; 
@property (readonly) NSArray * peerList; 
@property (getter=isActiveSession) bool activeSession; 
@property (assign) float sessionVolume; 
@property (assign) unsigned talkingPeersLimit; 
@property (assign) bool isUsingSuppression; 
+(void)brokenHash:(id)arg1 response:(char*)arg2 ;
-(void)lossRate:(float)arg1 forParticipantID:(id)arg2 ;
-(int)goodChannels;
-(int)calculateChannelQualities;
-(void)didStartSpeaking:(id)arg1 ;
-(void)didStopSpeaking:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)participantID;
-(void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3 ;
-(void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned)arg3 ;
-(void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2 ;
-(void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3 ;
-(void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3 ;
-(void)informClientVoiceChatDidStart:(id)arg1 ;
-(void)informClientVoiceChatDidStop:(id)arg1 ;
-(void)informClientVoiceChatConnecting:(id)arg1 ;
-(void)informClientVoiceChatFocusChange:(id)arg1 ;
-(void)informClientVoiceChatCouldNotConnect:(id)arg1 ;
-(void)informClientVoiceChatSpeaking:(id)arg1 ;
-(void)informClientVoiceChatSilent:(id)arg1 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
-(void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3 ;
-(void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(void)cleanup;
-(void)interfaceStateDidChangeWithWifiUp:(bool)arg1 withCellUp:(bool)arg2 ;
-(void)setIsUsingSuppression:(bool)arg1 ;
-(void)updatedConnectedPeers:(id)arg1 ;
-(bool)isUsingSuppression;
-(unsigned)talkingPeersLimit;
-(void)setTalkingPeersLimit:(unsigned)arg1 ;
-(void)cleanupProc:(id)arg1 ;
-(id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3 ;
-(void)startSession;
-(void)stopSession;
-(void)setMute:(bool)arg1 forPeer:(id)arg2 ;
-(bool)getMuteStateForPeer:(id)arg1 ;
-(id)sessionName;
-(id)peerList;
-(bool)isActiveSession;
-(void)setActiveSession:(bool)arg1 ;
-(float)sessionVolume;
-(void)setSessionVolume:(float)arg1 ;
-(void)startSessionInternal;
-(void)stopSessionInternal;
-(void)calculateConferenceID;
-(id)encodePeerID:(id)arg1 ;
-(void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2 ;
-(void)sendMutedPeers;
-(void)updatedSubscribedBeaconList:(id)arg1 ;
-(unsigned)conferenceID;
-(void)sendConnectedPeers;
-(void)handlePeerDisconnected:(id)arg1 ;
-(void)unPauseAll;
-(void)updatedFocusPeers:(id)arg1 ;
-(void)addPeerToFocusPausedList:(id)arg1 ;
-(id)decodePeerID:(id)arg1 ;
-(void)updatedFocusID:(unsigned)arg1 ;
-(void)parseMutedPeers:(id)arg1 forPeer:(id)arg2 ;
-(void)pauseAll;
-(void)pruneBadLinks;
-(void)removeFromFocusPausedList:(id)arg1 ;
-(void)parseConnectedPeers:(id)arg1 ;
-(unsigned)peerCount;
@end

