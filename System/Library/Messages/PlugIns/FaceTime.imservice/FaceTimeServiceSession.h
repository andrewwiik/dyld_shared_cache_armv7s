/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <IMDaemonCore/IMDAppleServiceSession.h>
#import <FaceTime/FaceTimePushHandlerListener.h>

@class FaceTimePushHandler, IDSAccountController, NSString, NSMutableDictionary, NSMutableArray;

@interface FaceTimeServiceSession : IMDAppleServiceSession <FaceTimePushHandlerListener> {

	FaceTimePushHandler* _ftPushHandler;
	IDSAccountController* _callAccountController;
	NSString* _loggingCategory;
	NSMutableDictionary* _conferenceIDMap;
	NSMutableDictionary* _callTypeMap;
	NSMutableArray* _initiatedConferences;
	id _broadcasterInvocationQueue;
	/*^block*/ id _completionBlock;
	SecKeyRef _privateKey;
	bool _privateIdentityLoaded;

}
+(void)initialize;
-(id)pushToken;
-(void)dealloc;
-(id)phoneNumber;
-(id)loggingName;
-(id)_displayIDForPeerID:(id)arg1 conferenceID:(id)arg2 ;
-(id)_pushTokensForPeerID:(id)arg1 conferenceID:(id)arg2 ;
-(id)_peerIDsForDiplayID:(id)arg1 conferenceID:(id)arg2 ;
-(id)_peerIDPushTokenPairsForConferenceID:(id)arg1 ;
-(id)topicForCallType:(int)arg1 ;
-(void)_setInitiatedConference:(id)arg1 ;
-(void)_setCallType:(int)arg1 forConferenceID:(id)arg2 ;
-(void)_setConferenceIDMap:(id)arg1 forToken:(id)arg2 ;
-(bool)_anyPeersForConferenceIDMayRequireBreakBeforeMake:(id)arg1 ;
-(id)idsAccountForCallType:(int)arg1 ;
-(id)callerCertForCallType:(int)arg1 ;
-(bool)_validRegistrationStateToMakeCalls;
-(bool)_registrationSupportedForRegistration;
-(double)_messageTimeoutTimeForMessage:(id)arg1 ;
-(SecKeyRef)callerPrivateKey;
-(id)_mappedSessionTokenForConferenceID:(id)arg1 ;
-(int)_callTypeForConferenceID:(id)arg1 ;
-(bool)_checkRegistrationAndFailIfNecessaryAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5 ;
-(bool)_checkManagedProfileAndFailIfNecessaryAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5 ;
-(bool)_checkCanSendRequestsAndFailIfNecessaryAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5 ;
-(bool)_checkAliasInfoAndFailIfNecessaryWithAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5 ;
-(id)_peerInfoForDisplayID:(id)arg1 conferenceID:(id)arg2 skippingPairs:(id)arg3 ;
-(bool)_hasOutgoingInvitationInFlight;
-(void)_cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 pairsToSkip:(id)arg4 reason:(id)arg5 ;
-(bool)_checkForBadPeerIDWithAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5 peerID:(id)arg6 ;
-(id)_peerIDForDiplayID:(id)arg1 conferenceID:(id)arg2 ;
-(id)_pushTokenForPeerID:(id)arg1 conferenceID:(id)arg2 ;
-(bool)_checkConferenceIDAndFailIfNecessaryWithAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5 ;
-(void)_sendRejectToPeerID:(id)arg1 peerToken:(id)arg2 sessionToken:(id)arg3 callType:(int)arg4 reason:(long long)arg5 clientInfo:(id)arg6 ;
-(bool)_hasOutgoingRelayInitiateInFlight;
-(id)_peerIDPushTokensPairsForPeerID:(id)arg1 conferenceID:(id)arg2 skippingPairs:(id)arg3 ;
-(void)handler:(id)arg1 sessionInitated:(id)arg2 topic:(id)arg3 myID:(id)arg4 peerID:(id)arg5 peerDisplayID:(id)arg6 peerCN:(id)arg7 peerPushToken:(id)arg8 peerNATType:(id)arg9 peerBlob:(id)arg10 peerNatIP:(id)arg11 clientInfo:(id)arg12 serviceData:(id)arg13 ;
-(bool)_validRegistrationStateToAcceptCalls;
-(void)_retargetPeerID:(id)arg1 displayID:(id)arg2 pushToken:(id)arg3 conferenceID:(id)arg4 ;
-(bool)_checkBadPushToken:(id)arg1 ;
-(void)handler:(id)arg1 sessionAccepted:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerCN:(id)arg5 peerPushToken:(id)arg6 peerNATType:(id)arg7 peerBlob:(id)arg8 peerNatIP:(id)arg9 relayType:(id)arg10 relayConnectionID:(id)arg11 relayTransactionIDAlloc:(id)arg12 relayTokenAllocReq:(id)arg13 myRelayIP:(id)arg14 myRelayPort:(id)arg15 peerRelayIP:(id)arg16 peerRelayPort:(id)arg17 clientInfo:(id)arg18 serviceData:(id)arg19 ;
-(bool)_hasPeersForPeerID:(id)arg1 conferenceID:(id)arg2 ;
-(void)_cancelOtherInvitesForPeerID:(id)arg1 skipPairs:(id)arg2 properties:(id)arg3 conference:(id)arg4 reason:(id)arg5 ;
-(void)handler:(id)arg1 sessionRejected:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 reason:(id)arg6 clientInfo:(id)arg7 serviceData:(id)arg8 ;
-(void)handler:(id)arg1 incomingMessage:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7 ;
-(void)handler:(id)arg1 sessionCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7 ;
-(void)handler:(id)arg1 relayInitiated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 relayTokenAllocReq:(id)arg9 myRelayIP:(id)arg10 myRelayPort:(id)arg11 peerRelayIP:(id)arg12 peerRelayPort:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15 ;
-(void)handler:(id)arg1 relayUpdated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDChannelBind:(id)arg8 relayTokenChannelBind:(id)arg9 relayBlob:(id)arg10 peerRelayNATIP:(id)arg11 peerRelayNATPort:(id)arg12 clientInfo:(id)arg13 serviceData:(id)arg14 ;
-(void)handler:(id)arg1 relayCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 relayType:(id)arg5 relayTokenAllocReq:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 myRelayIP:(id)arg9 myRelayPort:(id)arg10 peerRelayIP:(id)arg11 peerRelayPort:(id)arg12 reason:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15 ;
-(void)_setPeerInfo:(id)arg1 conferenceID:(id)arg2 ;
-(void)_setAlternateDisplayID:(id)arg1 forPeerID:(id)arg2 conferenceID:(id)arg3 ;
-(void)_logLocalInfo;
-(id)profileID;
-(id)userID;
-(id)regionID;
-(id)regionBasePhoneNumber;
-(id)regionServerContext;
-(void)_setPurgeTimer;
-(void)_purgeMap;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionWillBecomeInactive;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5 ;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3 ;
-(void)refreshServiceCapabilities;
-(void)refreshRegistration;
-(bool)queue:(id)arg1 shouldInvoke:(id)arg2 ;
-(unsigned long long)queue:(id)arg1 optionsForInvocation:(id)arg2 ;
-(unsigned long long)capabilities;
@end
