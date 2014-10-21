/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/LoopbackSocketTunnelDelegate.h>

@protocol VCCallSessionDelegate, VideoConferenceRealTimeChannel, OS_dispatch_queue, OS_dispatch_source, VideoConferenceChannelQualityDelegate;
@class NSObject, VCCallInfo, NSMutableArray, AVAudioPayload, AVAudioTierPicker, AVAudioTier, LoopbackSocketTunnel, VCCapabilities, GKRingBuffer, NSDictionary, NSArray, TCPTunnelClient, TimingCollection, NSString, VCCallLinkCongestionDetector, NSData, VCSessionMessaging, VCBitrateArbiter, VCJitterBuffer, VideoAttributes, GKInterfaceListener, VCWCMClient, NSCondition, VCTransport;

@interface VCCallSession : NSObject <LoopbackSocketTunnelDelegate> {

	NSObject<VCCallSessionDelegate>* delegate;
	VCCallInfo* localCallInfo;
	VCCallInfo* remoteCallInfo;
	tagHANDLE* rtpHandle;
	tagHANDLE* rtpVideo;
	int numEncodedBytes;
	int numBufferBytesAvailable;
	bool didUseICE;
	tagCONNRESULT* connectionResult;
	tagCONNRESULT* prevConnectionResult;
	tagCONNRESULT* origConnectionResult;
	long long state;
	NSMutableArray* audioPayloads;
	AVAudioPayload* currentAudioPayload;
	AVAudioTierPicker* audioTierPicker_AppleCalling;
	AVAudioTierPicker* audioTierPicker_FaceTime;
	AVAudioTier* currentAudioTier;
	AVAudioTier* requestedAudioTier;
	long long videoPayload;
	long long sampleRate;
	long long samplesPerFrame;
	long long blockSize;
	float blockSeconds;
	tagHANDLE* hAUIO;
	tagHANDLE* hSIP;
	double lastReceivedAudio;
	bool launchedShutdownThread;
	bool isAudioRunning;
	bool isWaitingForICEResult;
	bool didSend200OK;
	float remoteParticipantVolume;
	NSObject<VideoConferenceRealTimeChannel>* rtChannel;
	LoopbackSocketTunnel* tunnel;
	opaque_pthread_mutex_t mutex;
	bool useLoopback;
	bool receivedSIPInvite;
	BOOL szRemoteRTPIP[48];
	int iRemoteRTPPort;
	int iRemoteRTCPPort;
	VCCapabilities* caps;
	tagHANDLE* hMediaQueue;
	tagHANDLE* hAFRC;
	GKRingBuffer* ringBuf;
	unsigned lastReceived;
	char* bundleBuffer;
	int bundledPackets;
	int packetsPerBundle;
	unsigned bundleTimestamp;
	int bundlePayload;
	int canUseSpecialAACBundle;
	int preferredAudioCodec;
	int audioTxBitrate;
	int audioHeaderSize;
	unsigned afrcBitrate;
	double audioInterval;
	bool useSBR;
	bool useControlByte;
	bool useUEP;
	NSDictionary* _allPayloadsLocalFeaturesString;
	BOOL _matchedFeaturesString[1600];
	unsigned char inputMeter;
	bool audioIsPaused;
	opaque_pthread_mutex_t pauseLock;
	NSObject<OS_dispatch_queue>* videoQueue;
	NSArray* mutedPeers;
	int bandwidthUpstream;
	int bandwidthDownstream;
	bool allowAudioRecording;
	int aacBlockSize;
	bool fInitialBandwidthDetection;
	int carrierBitrateCap;
	AudioStreamBasicDescription vpioFormat;
	bool allowAudioSwitching;
	bool shouldUpdateLastReceivedPacketTimestamp;
	double lastReceivedPacketTimestamp;
	bool isRemoteMediaStalled;
	int packetsSinceStall;
	bool isAttemptingRelay;
	long long relayState;
	bool allowsRelay;
	bool requiresWifi;
	bool useCompressedConnectionData;
	int natType;
	unsigned lastSentAudioSampleTime;
	NSObject<OS_dispatch_source>* pausedAudioHeartBeat;
	TCPTunnelClient* _tcpTunnelClient;
	TimingCollection* videoQualityTimers;
	TimingCollection* perfTimers;
	double packetLossRate;
	double timeLastCheckedNetworkConditions;
	double timeLastKnowGoodNetworkPLR;
	double timeLastKnowGoodNetworkRTT;
	double networkConditionsTimeoutInSeconds;
	NSString* peerCN;
	NSString* sessionID;
	unsigned roundTripTime;
	float packetLateAndMissingRatio;
	float callerPreEmptiveTimeoutInSecs;
	int sampleLogCount;
	double timeSinceLastReportedNoPackets;
	double noRemotePacketsTimeout;
	bool didAttemptSIPInvite;
	NSObject<VideoConferenceChannelQualityDelegate>* qualityDelegate;
	opaque_pthread_mutex_t qualityDelegateLock;
	NSObject<OS_dispatch_queue>* qualityQueue;
	NSObject<OS_dispatch_queue>* managerQueue;
	bool shouldTimeoutPackets;
	opaque_pthread_mutex_t srtpLock;
	bool didPrepareSRTP;
	bool useAFRC;
	bool isRTCPFBEnabled;
	VCCallLinkCongestionDetector* congestionDetector;
	bool shouldSendAudio;
	bool isRemoteDevice4x;
	bool isGKVoiceChat;
	void* packetThread;
	int signalStrength;
	int signalRaw;
	int signalGrade;
	bool bBWEstOperatingModeInitialized;
	bool bBWEstNewBWEstModeEnabled;
	bool bBWEstFakeLargeFrameModeEnabled;
	bool bBWEstActiveProbingSenderLog;
	CGSize remoteScreenPortraitAspectRatio;
	CGSize remoteScreenLandscapeAspectRatio;
	CGSize remoteExpectedPortraitAspectRatio;
	CGSize remoteExpectedLandscapeAspectRatio;
	bool isStarted;
	NSData* srtpKeyBytes;
	bool isInitiator;
	bool sentClientSuccessfulDidStart;
	double videoThrottlingTimeout;
	bool useAWDStats;
	VCSessionMessaging* messaging;
	bool isCurrentNetworkBad;
	bool requestedTimeoutRelay;
	unsigned callSessionBitrate;
	NSObject<OS_dispatch_queue>* cellTechQueue;
	NSObject<OS_dispatch_source>* cellTechChangeSource;
	TimingCollection* cameraTimers;
	VCBitrateArbiter* callSessionBitrateArbiter;
	NSObject<OS_dispatch_source>* connectionTimeoutSource;
	unsigned short maxPacketLength;
	bool lastAudioStalled;
	double lastTierSwitch;
	bool audioTierHysteresis;
	long long initialSentBytes;
	long long initialReceivedBytes;
	VCJitterBuffer* vcJitterBuffer;
	tagHANDLE* hVideoReceiver;
	tagHANDLE* hVideoTransmitter;
	bool remoteSupportsVisibleRect;
	bool remoteSupportsExpectedAspectRatio;
	bool canLocalResizePIP;
	bool canRemoteResizePIP;
	bool receivedFirstRemoteFrame;
	int fecMode;
	NSObject<OS_dispatch_source>* sessionHealthMonitor;
	VideoAttributes* remoteVideoAttributes;
	double lastVideoQualityNotificationUpdate;
	unsigned remoteFrameWidth;
	unsigned remoteFrameHeight;
	GKInterfaceListener* interfaceListener;
	VCWCMClient* vcWCMClient;
	NSCondition* connectionDataTimeoutCondVar;
	VCTransport* transport;
	OpaqueVTPixelTransferSessionRef hdTransferSession;
	CVPixelBufferPoolRef hdBufferPool;
	CGSize expectedDecodeSize;
	opaqueRTCReportingRef reportingAgent;
	int reportUpdateInterval;
	int reportReportFrequency;
	bool enableAFRCDump;
	int operatingMode;
	unsigned receivedAudioBytes;
	unsigned sentAudioBytes;
	double lastVCLogCallbackTime;
	SKEStateOpaqueRef skeState;
	CFDataRef secretKey;
	double lastUpdateQualityIndicator;
	unsigned dwRTT_ice;
	NSObject<OS_dispatch_queue>* timestampQueue;

}

@property (nonatomic,copy) NSString * peerCN; 
@property (readonly) VCJitterBuffer * vcJitterBuffer; 
@property (nonatomic,readonly) bool isCaller; 
@property (nonatomic,copy) NSString * sessionID; 
@property (assign,nonatomic) bool isStarted; 
@property (assign,nonatomic) bool shouldSendAudio; 
@property (assign,nonatomic) unsigned roundTripTime; 
@property (assign,nonatomic) bool useAFRC; 
@property (assign,nonatomic) bool isRTCPFBEnabled; 
@property (assign,nonatomic) double packetLossRate; 
@property (assign,nonatomic) float packetLateAndMissingRatio; 
@property (readonly) double networkQuality; 
@property (assign,nonatomic) double networkConditionsTimeoutInSeconds; 
@property (assign,nonatomic) int signalStrength; 
@property (assign,nonatomic) int signalRaw; 
@property (assign,nonatomic) int signalGrade; 
@property (assign,nonatomic) unsigned lastSentAudioSampleTime; 
@property (assign,nonatomic) int natType; 
@property (assign,nonatomic) bool requiresWifi; 
@property (assign,nonatomic) bool useCompressedConnectionData; 
@property (retain) NSObject<VCCallSessionDelegate> * delegate; 
@property (assign) NSObject<VideoConferenceRealTimeChannel> * rtChannel; 
@property (assign) tagHANDLE* rtpHandle; 
@property (assign) int numEncodedBytes; 
@property (assign) int numBufferBytesAvailable; 
@property (assign) tagCONNRESULT* connectionResult; 
@property (assign) tagCONNRESULT* prevConnectionResult; 
@property (assign) tagCONNRESULT* origConnectionResult; 
@property (assign) unsigned short maxPacketLength; 
@property (assign) long long state; 
@property (assign) bool didUseICE; 
@property (assign) long long videoPayload; 
@property (assign) long long sampleRate; 
@property (readonly) bool isAudioRunning; 
@property (readonly) bool videoIsPaused; 
@property (readonly) bool audioIsPaused; 
@property (assign) bool isGKVoiceChat; 
@property (nonatomic,readonly) AVAudioPayload * currentAudioPayload; 
@property (assign) bool isWaitingForICEResult; 
@property (assign) bool receivedSIPInvite; 
@property (assign) tagHANDLE* hMediaQueue; 
@property (assign) tagHANDLE* hAFRC; 
@property (nonatomic,retain) GKRingBuffer * ringBuf; 
@property (assign) unsigned lastReceived; 
@property (assign) int bundledPackets; 
@property (assign) int packetsPerBundle; 
@property (assign) int preferredAudioCodec; 
@property (nonatomic,readonly) int audioTxBitrate; 
@property (assign) bool useControlByte; 
@property (assign) bool useUEP; 
@property (assign) unsigned char inputMeter; 
@property (assign) int bandwidthUpstream; 
@property (assign) int bandwidthDownstream; 
@property (nonatomic,retain) NSArray * mutedPeers; 
@property (assign) NSObject<VideoConferenceChannelQualityDelegate> * qualityDelegate; 
@property (assign) bool shouldTimeoutPackets; 
@property (retain) NSData * srtpKeyBytes; 
@property (nonatomic,retain) VideoAttributes * remoteVideoAttributes; 
@property (assign) unsigned remoteFrameWidth; 
@property (assign) unsigned remoteFrameHeight; 
@property (assign,nonatomic) int operatingMode; 
@property (readonly) bool isSKEOptimizationEnabled; 
@property (readonly) bool isRemoteMediaStalled; 
+(id)keyPathsForValuesAffectingNetworkQuality;
-(void)processResolutionChangeToVideoRule:(id)arg1 ;
-(id)newRemoteScreenAttributesForOrientation:(int)arg1 ;
-(bool)initializeVideoTransmitter:(id*)arg1 encodeRule:(id)arg2 unpausing:(bool)arg3 reportingAgent:(opaqueRTCReportingRef)arg4 ;
-(bool)initializeVideoReceiver:(id*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(double)sessionReceivingBitrate;
-(double)sessionReceivingFramerate;
-(double)sessionTransmittingBitrate;
-(double)sessionTransmittingFramerate;
-(void)callAlarmsWithRTPTimeStamp:(unsigned)arg1 ;
-(bool)onCaptureFrame:(CVBufferRef)arg1 audioTS:(unsigned)arg2 audioHT:(double)arg3 videoHT:(double)arg4 cameraBits:(unsigned char)arg5 ;
-(void)updateVideoQualityNotification:(double)arg1 ;
-(void)onPlayVideo:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC16)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)setupTransport;
-(void)setupMessaging;
-(void)setupVideoPauseMessages;
-(void)setupAudioPauseMessages;
-(void)setupCellTechChangeMessages;
-(void)setupAudioPausedHBMessages;
-(void)lock;
-(void)unlock;
-(unsigned)audioRTPID;
-(unsigned)videoRTPID;
-(void)disconnectWithNoRemotePackets:(long long)arg1 ;
-(void)logDetailedNetworkInformation;
-(void)updateNetworkCheckHint:(double)arg1 ;
-(void)sendTimings;
-(bool)chooseAudioNetworkBitrate;
-(void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(bool)arg3 capabilities:(id)arg4 ;
-(bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingBlob:(id)arg3 isCaller:(bool)arg4 capabilities:(id)arg5 useRelay:(bool)arg6 error:(id*)arg7 ;
-(void)reportDashboardEndResult;
-(void)cleanupMedia;
-(void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(bool)arg2 error:(id)arg3 ;
-(void)initWithRelevantStorebagEntries;
-(bool)createConnectionDataForParticipantID:(id)arg1 pCallID:(unsigned*)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id*)arg4 useRelay:(bool)arg5 ;
-(id)createSKEBlobWithRemoteSKEBlob:(id)arg1 ;
-(void)stopPausedHeartbeat;
-(void)startPausedHeartbeat;
-(bool)startVideo:(bool)arg1 error:(id*)arg2 ;
-(bool)stopVideo:(bool)arg1 error:(id*)arg2 ;
-(void)resetICETimeoutToLongTimeout;
-(id)createRelayUpdateDictionary:(id)arg1 ;
-(void)sipConnectThreadProc:(id)arg1 ;
-(void)logConnectionSuccess;
-(void)logConnectionType:(int)arg1 ;
-(void)inviteeICEResultTimer:(float)arg1 shouldBailIfRelay:(bool)arg2 ;
-(void)connectionResultFromSIP:(tagSIPCallbackData*)arg1 ;
-(int)handleIncomingWithCallID:(unsigned)arg1 msgIn:(const char*)arg2 msgOut:(char*)arg3 optional:(void*)arg4 confIndex:(int*)arg5 error:(id*)arg6 ;
-(void)setupEncryptionWithKey:(const _CFData*)arg1 confIndex:(int*)arg2 ;
-(void)notifyDelegateToCancelRelay;
-(bool)doBandwidthDetection:(tagHANDLE*)arg1 error:(id*)arg2 ;
-(bool)startMediaQueue:(id*)arg1 ;
-(void)processSIPMessage:(char*)arg1 msgOut:(char*)arg2 optional:(void*)arg3 confIndex:(int*)arg4 ;
-(void)startAudioWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)enableSessionHealthMonitor;
-(void)notifyDelegateSessionStarted;
-(void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 ;
-(SecIdentityRef)retrieveIdentity;
-(void)updateQOS;
-(void)setupDTLSDefaults;
-(void)setLocalIdentityForKeyExchange;
-(void)initiateRelayRequest;
-(double)iceTimeoutInSeconds:(bool)arg1 ;
-(void)logIdentity:(SecIdentityRef)arg1 ;
-(long long)calculateSIPEndAction:(bool)arg1 currentState:(long long)arg2 error:(id)arg3 ;
-(void)doSipEndAction:(int)arg1 callID:(unsigned)arg2 error:(id)arg3 ;
-(void)disableSessionHealthMonitor;
-(void)stopAudio;
-(bool)stopMediaQueue:(id*)arg1 ;
-(bool)stopAFRC:(id*)arg1 ;
-(void)stopLoopback;
-(int)generateConnectionData:(char**)arg1 forCallID:(unsigned)arg2 connectionDataSize:(int*)arg3 nonCellularCandidateTimeout:(double)arg4 ;
-(void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2 ;
-(void)resetState;
-(bool)createRTPHandles:(id*)arg1 ;
-(bool)createMediaQueueHandle:(id*)arg1 ;
-(bool)negotiatePayloads:(int*)arg1 numPayloads:(int*)arg2 withError:(id*)arg3 ;
-(bool)setRTPDestinationWithError:(id*)arg1 ;
-(bool)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(bool)negotiateMaxBandwidth:(int*)arg1 ;
-(int)getAllCompatibleVideoPayloads:(int*)arg1 ;
-(id)getCompatibleLocalFeaturesListForPayloads:(int*)arg1 count:(int)arg2 ;
-(bool)createSDP:(int*)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int*)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int*)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(imageTag*)arg10 imageSendCount:(int*)arg11 imageSizesRecv:(imageTag*)arg12 imageRecvCount:(int*)arg13 sdp:(char*)arg14 numSDPBytes:(int*)arg15 error:(id*)arg16 ;
-(void)launchDeadlineExitTimer;
-(bool)getForcedPayload:(int*)arg1 ;
-(void)getAllPayloadsForAudio:(int*)arg1 count:(int*)arg2 secondaryPayloads:(int*)arg3 secondaryCount:(int*)arg4 ;
-(void)getAllPayloadsForVideo:(int*)arg1 count:(int*)arg2 ;
-(bool)treatAsCellular;
-(id)allPayloadsLocalFeaturesString;
-(bool)is3GCall;
-(id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(bool)arg3 ;
-(bool)setMatchedFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2 ;
-(char*)matchedFeaturesString;
-(bool)findFeatureString:(const char*)arg1 value:(char*)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char*)arg4 ;
-(int)Conference_SetBWEstMode:(bool)arg1 bFakeLargeFrameMode:(bool)arg2 ;
-(bool)choosePayload:(int*)arg1 count:(int)arg2 ;
-(bool)chooseSecondaryPayloads:(int*)arg1 count:(int)arg2 ;
-(void)getDecodePayloads:(int*)arg1 numPayloads:(int*)arg2 withPayload:(int)arg3 secondaryPayloads:(int*)arg4 numSecondaryPayloads:(int)arg5 ;
-(bool)chooseVideoPayload:(int*)arg1 count:(int)arg2 ;
-(int)negotiateFeaturesString:(id)arg1 forPaylosd:(int)arg2 ;
-(bool)startAFRC:(id*)arg1 ;
-(bool)startRTPWithError:(id*)arg1 ;
-(bool)sendSIPInviteWithError:(id*)arg1 ;
-(bool)setupCallerRTPChannelWithError:(id*)arg1 ;
-(void)stopAudioIOProc:(id)arg1 ;
-(bool)setupAudioEncoders;
-(bool)allocateBundleBuffer;
-(bool)setupAudioTierPicker;
-(bool)setupAudioCookies;
-(void)useAudioTier:(id)arg1 ;
-(void)updateAudioTxBitrate;
-(void)useAudioPayload:(id)arg1 withBitrate:(unsigned)arg2 ;
-(void)getVideoSettings:(int)arg1 width:(int*)arg2 height:(int*)arg3 framerate:(int*)arg4 bitRate:(int*)arg5 ;
-(void)adjustBitrateForConnectionType;
-(void)setupAACELDPayload:(int)arg1 ;
-(id)addAudioPayload:(int)arg1 ;
-(unsigned)codecBitmapForPayloads:(int*)arg1 count:(int)arg2 ;
-(bool)setupAudioCodecWithPayload:(int)arg1 ;
-(bool)sipConnectWithError:(id*)arg1 ;
-(void)stopLoopbackProc:(id)arg1 ;
-(id)createInitiateRelayDictionary;
-(id)deriveAspectRatioFLS;
-(id)retrieveRawFeaturesString;
-(id)createLocalFeaturesString;
-(unsigned)maxBitrateForConnectionType;
-(void)remotePauseDidChangeToState:(bool)arg1 forVideo:(bool)arg2 ;
-(bool)canNegotiateVideoPayload:(int)arg1 ;
-(void)doSipEndProc:(id)arg1 ;
-(void)setupBitrateNegotation;
-(void)processConnectionResultUpdate;
-(unsigned)connectionResultCallback:(tagCONNRESULT*)arg1 didReceiveICEPacket:(bool)arg2 didUseRelay:(bool)arg3 secretKey:(CFDataRef)arg4 skeResult:(int)arg5 ;
-(int)sipCallback:(int)arg1 callID:(unsigned)arg2 msgIn:(const char*)arg3 msgOut:(char*)arg4 optional:(void*)arg5 confIndex:(int*)arg6 ;
-(id)description;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(tagIPPORT*)arg3 ;
-(void)resetLoopback;
-(void)deleteTCPTunnel;
-(bool)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(bool)arg3 relayType:(unsigned char)arg4 error:(id*)arg5 ;
-(void)setupLoopback;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)interfaceStateDidChangeWithWifiUp:(bool)arg1 withCellUp:(bool)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(bool)isStarted;
-(double)networkQuality;
-(void)sendARPLData:(id)arg1 toCallID:(unsigned)arg2 ;
-(bool)requiresWifi;
-(void)setRequiresWifi:(bool)arg1 ;
-(void)processRemoteIPChange:(id)arg1 callID:(unsigned)arg2 ;
-(int)natType;
-(unsigned)callID;
-(unsigned)connectionType;
-(bool)getRealAudioTxBitrate:(unsigned short*)arg1 RxBitrate:(unsigned short*)arg2 duplication:(unsigned short*)arg3 ;
-(bool)isCaller;
-(bool)videoIsPaused;
-(bool)resultMatchesIPInRemoteConnectionData:(tagCONNRESULT*)arg1 ;
-(bool)didUseICE;
-(bool)isCallOngoing;
-(void)updateMaxPktLength:(tagCONNRESULT*)arg1 ;
-(bool)evaluateEnableRRx:(int*)arg1 ;
-(void)updateRemoteMediaStallState:(double)arg1 ;
-(bool)disconnect:(id)arg1 didRemoteCancel:(bool)arg2 ;
-(void)updateLastReceivedPacketWithTimestamp:(double)arg1 ;
-(void)reportVideoQualityMetric;
-(void)setRemoteVideoAttributes:(id)arg1 ;
-(void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4 ;
-(void)cancelConnectionTimeoutTimer;
-(int)bundleAndSendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hasNewSamples:(bool)arg6 ;
-(float)nextAudioInterval:(int)arg1 ;
-(int)sendAudioBundle:(bool)arg1 atTimeStamp:(unsigned)arg2 nextInterval:(float)arg3 ;
-(bool)bundleAudio:(void*)arg1 withPayload:(int)arg2 numInputBytes:(int)arg3 ;
-(void)cleanupWCMClient;
-(bool)setPauseAudio:(bool)arg1 force:(bool)arg2 error:(id*)arg3 ;
-(bool)setPauseVideo:(bool)arg1 force:(bool)arg2 error:(id*)arg3 ;
-(void)getFrontCaptureTime:(float*)arg1 backCaptureTime:(float*)arg2 ;
-(id)vcJitterBuffer;
-(bool)pullAudioSamples:(char*)arg1 timestamp:(unsigned*)arg2 byteCount:(int*)arg3 sampleCount:(int*)arg4 sampleRate:(int*)arg5 receivedBytes:(int*)arg6 lastReceivedAudioTime:(double*)arg7 padding:(char*)arg8 paddingLength:(char*)arg9 silence:(int*)arg10 ;
-(void)setOperatingMode:(int)arg1 ;
-(void)startAWDStats;
-(void)setUseAFRC:(bool)arg1 ;
-(void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(bool)arg4 ;
-(bool)isBetterForIncomingSIPThanOtherSession:(id)arg1 result:(tagCONNRESULT*)arg2 ;
-(void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2 ;
-(void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned)arg2 ;
-(void)setQualityDelegate:(id)arg1 ;
-(id)qualityDelegate;
-(void)updateLastReceivedAudioTime;
-(void)updateLastReceivedPacket:(bool)arg1 ;
-(bool)handshakeComplete:(SSLContextRef)arg1 withError:(_CFError*)arg2 ;
-(void)timeoutUnfinishedConnection;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 ;
-(void)sendThreadedAudio:(tagEncodedAudio*)arg1 buffer:(char*)arg2 bufferSize:(unsigned)arg3 ;
-(int)sendAudioHeartbeat:(unsigned)arg1 ;
-(bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingInviteData:(id)arg3 isCaller:(bool)arg4 capabilities:(id)arg5 error:(id*)arg6 ;
-(int)rtcpDescriptor;
-(void)setupWCMClient;
-(id)inviteDataForParticipantID:(id)arg1 callID:(unsigned*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5 ;
-(void)setShouldSendAudio:(bool)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(int)packetsPerBundle;
-(void)setIsGKVoiceChat:(bool)arg1 ;
-(bool)isGKVoiceChat;
-(bool)setPauseAudio:(bool)arg1 error:(id*)arg2 ;
-(bool)setPauseVideo:(bool)arg1 error:(id*)arg2 ;
-(bool)stillWantsToRelay;
-(void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(bool)arg2 ;
-(void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(bool)arg2 ;
-(void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(bool)arg2 ;
-(void)rcvdFirstRemoteFrame;
-(id)remoteParticipantID;
-(id)localParticipantID;
-(void)localCameraSwitchedFrom:(int)arg1 to:(int)arg2 ;
-(id)callMetadata;
-(bool)isSKEOptimizationEnabled;
-(tagHANDLE*)rtpHandle;
-(void)setRtpHandle:(tagHANDLE*)arg1 ;
-(tagCONNRESULT*)connectionResult;
-(void)setConnectionResult:(tagCONNRESULT*)arg1 ;
-(tagCONNRESULT*)prevConnectionResult;
-(void)setPrevConnectionResult:(tagCONNRESULT*)arg1 ;
-(tagCONNRESULT*)origConnectionResult;
-(void)setOrigConnectionResult:(tagCONNRESULT*)arg1 ;
-(unsigned short)maxPacketLength;
-(void)setMaxPacketLength:(unsigned short)arg1 ;
-(void)setDidUseICE:(bool)arg1 ;
-(long long)videoPayload;
-(void)setVideoPayload:(long long)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(bool)isAudioRunning;
-(bool)isWaitingForICEResult;
-(void)setIsWaitingForICEResult:(bool)arg1 ;
-(bool)receivedSIPInvite;
-(void)setReceivedSIPInvite:(bool)arg1 ;
-(id)rtChannel;
-(void)setRtChannel:(id)arg1 ;
-(int)numEncodedBytes;
-(void)setNumEncodedBytes:(int)arg1 ;
-(int)numBufferBytesAvailable;
-(void)setNumBufferBytesAvailable:(int)arg1 ;
-(tagHANDLE*)hMediaQueue;
-(void)setHMediaQueue:(tagHANDLE*)arg1 ;
-(tagHANDLE*)hAFRC;
-(void)setHAFRC:(tagHANDLE*)arg1 ;
-(id)ringBuf;
-(void)setRingBuf:(id)arg1 ;
-(unsigned)lastReceived;
-(void)setLastReceived:(unsigned)arg1 ;
-(int)bundledPackets;
-(void)setBundledPackets:(int)arg1 ;
-(int)audioTxBitrate;
-(int)preferredAudioCodec;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(bool)useControlByte;
-(void)setUseControlByte:(bool)arg1 ;
-(bool)useUEP;
-(void)setUseUEP:(bool)arg1 ;
-(unsigned char)inputMeter;
-(void)setInputMeter:(unsigned char)arg1 ;
-(bool)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(bool)arg1 ;
-(int)bandwidthUpstream;
-(void)setBandwidthUpstream:(int)arg1 ;
-(int)bandwidthDownstream;
-(void)setBandwidthDownstream:(int)arg1 ;
-(id)mutedPeers;
-(void)setMutedPeers:(id)arg1 ;
-(bool)audioIsPaused;
-(void)setNatType:(int)arg1 ;
-(unsigned)lastSentAudioSampleTime;
-(void)setLastSentAudioSampleTime:(unsigned)arg1 ;
-(id)peerCN;
-(void)setPeerCN:(id)arg1 ;
-(double)packetLossRate;
-(void)setPacketLossRate:(double)arg1 ;
-(double)networkConditionsTimeoutInSeconds;
-(void)setNetworkConditionsTimeoutInSeconds:(double)arg1 ;
-(unsigned)roundTripTime;
-(void)setRoundTripTime:(unsigned)arg1 ;
-(int)signalStrength;
-(void)setSignalStrength:(int)arg1 ;
-(int)signalRaw;
-(void)setSignalRaw:(int)arg1 ;
-(int)signalGrade;
-(void)setSignalGrade:(int)arg1 ;
-(id)currentAudioPayload;
-(float)packetLateAndMissingRatio;
-(void)setPacketLateAndMissingRatio:(float)arg1 ;
-(id)sessionID;
-(void)setSessionID:(id)arg1 ;
-(bool)shouldTimeoutPackets;
-(void)setShouldTimeoutPackets:(bool)arg1 ;
-(bool)useAFRC;
-(bool)isRTCPFBEnabled;
-(void)setIsRTCPFBEnabled:(bool)arg1 ;
-(bool)shouldSendAudio;
-(void)setIsStarted:(bool)arg1 ;
-(id)remoteVideoAttributes;
-(unsigned)remoteFrameWidth;
-(void)setRemoteFrameWidth:(unsigned)arg1 ;
-(unsigned)remoteFrameHeight;
-(void)setRemoteFrameHeight:(unsigned)arg1 ;
-(int)operatingMode;
-(bool)isRemoteMediaStalled;
-(id)srtpKeyBytes;
-(void)setSrtpKeyBytes:(id)arg1 ;
-(long long)sampleRate;
@end

