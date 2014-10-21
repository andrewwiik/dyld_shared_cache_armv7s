/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <CoreMediaStream/MSSubscriber.h>

@protocol MSSubscriber
@property (assign,nonatomic) <MSSubscriberDelegate> * delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(void)stop;
-(void)checkForOutstandingActivities;
-(void)checkForNewAssetCollections;
-(void)resetSync;
-(id)subscribedStreams;
-(id)ownSubscribedStream;
-(void)retrieveAssets:(id)arg1;
-(void)abort;
@end

#import <CoreMediaStream/MSSubscribeStreamsProtocolDelegate.h>
#import <CoreMediaStream/MSSubscribeStorageProtocolDelegate.h>
#import <CoreMediaStream/MSReauthorizationProtocolDelegate.h>

@protocol MSSubscriberDelegate, MSSubscribeStorageProtocol;
@class MSMediaStreamDaemon, MSSubscribeStreamsProtocol, NSMutableDictionary, MSReauthorizationProtocol, MSObjectQueue, NSMutableArray;

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {

	<MSSubscriberDelegate>* _delegate;
	MSMediaStreamDaemon* _daemon;
	bool _checkOneMoreTime;
	int _state;
	MSSubscribeStreamsProtocol* _protocol;
	NSMutableDictionary* _newSubscriptionsByStreamID;
	int _retrievalState;
	<MSSubscribeStorageProtocol>* _storageProtocol;
	MSReauthorizationProtocol* _reauthProtocol;
	MSObjectQueue* _retrievalQueue;
	NSMutableArray* _assetsBeingRetrieved;
	long long _targetRetrievalByteCount;
	int _retrievalBatchSize;
	long long _maxErrorCount;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                    //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) long long targetRetrievalByteCount;              //@synthesize targetRetrievalByteCount=_targetRetrievalByteCount - In the implementation block
@property (assign,nonatomic) int retrievalBatchSize;                          //@synthesize retrievalBatchSize=_retrievalBatchSize - In the implementation block
@property (assign,nonatomic) <MSSubscriberDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
+(id)nextActivityDate;
+(id)personIDsWithOutstandingActivities;
+(bool)isInRetryState;
+(id)subscriberForPersonID:(id)arg1 ;
+(id)existingSubscriberForPersonID:(id)arg1 ;
+(void)stopAllActivities;
+(id)_clearInstantiatedSubscribersByPersonID;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(id)_descriptionForState:(int)arg1 ;
+(id)_descriptionForRetrievalState:(int)arg1 ;
+(void)forgetPersonID:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)deactivate;
-(void).cxx_destruct;
-(void)stop;
-(void)setDaemon:(id)arg1 ;
-(void)checkForOutstandingActivities;
-(void)checkForNewAssetCollections;
-(void)resetSync;
-(id)subscribedStreams;
-(id)ownSubscribedStream;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(bool)_isInRetryState;
-(void)_serverSideConfigurationDidChange:(id)arg1 ;
-(void)_updateMasterManifest;
-(void)_abort;
-(void)_forget;
-(id)daemon;
-(id)_subscriptionsByStreamID;
-(void)_refreshServerSideConfigurationParameters;
-(bool)_hasOutstandingPoll;
-(void)_stopOutSubscriberState:(int*)arg1 outRetrievalState:(int*)arg2 ;
-(void)_setHasOutstandingPoll:(bool)arg1 ;
-(bool)_isAllowedToDownload;
-(void)_changeStateTo:(int)arg1 ;
-(void)_checkForNewAssetCollections;
-(void)_setSubscriptionsByStreamID:(id)arg1 ;
-(void)_didFinishRetrievingSubscriptionUpdate;
-(void)_didReceiveAuthenticationError:(id)arg1 ;
-(void)_retrieveAssets;
-(void)_changeRetrievalStateTo:(int)arg1 ;
-(void)_retrieveNextAssets;
-(void)_reauthorizeAssets;
-(void)retrieveAssets:(id)arg1 ;
-(void)_finishedRetrievingAsset:(id)arg1 ;
-(void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(bool)arg3 metadata:(id)arg4 ;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindShareState:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3 ;
-(void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1 ;
-(void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4 ;
-(void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(long long)targetRetrievalByteCount;
-(void)setTargetRetrievalByteCount:(long long)arg1 ;
-(int)retrievalBatchSize;
-(void)setRetrievalBatchSize:(int)arg1 ;
-(void)abort;
@end

