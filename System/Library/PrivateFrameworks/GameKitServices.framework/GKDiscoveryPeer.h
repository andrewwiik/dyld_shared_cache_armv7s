/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GKSimpleTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableSet, NSMutableArray, GKDiscoveryPeerConnection, NSNumber, GKSimpleTimer, NSObject;

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate> {

	NSString* _serviceName;
	NSString* _playerID;
	NSString* _deviceID;
	NSMutableSet* _interfaces;
	NSMutableArray* _orderedInterfaces;
	NSMutableArray* _attemptedInterfaces;
	GKDiscoveryPeerConnection* _trialConnection;
	NSNumber* _chosenInterface;
	bool _shouldSignalDiscovery;
	NSMutableArray* _sendDataBuffer;
	GKDiscoveryPeerConnection* _connection;
	GKSimpleTimer* _resolveTimer;
	/*^block*/ id _resolveTimeoutHandler;
	NSObject<OS_dispatch_queue>* _syncQueue;
	int _state;
	double _discoveryTimeStamp;

}

@property (nonatomic,copy) NSString * serviceName;                                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSMutableSet * interfaces;                                //@synthesize interfaces=_interfaces - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedInterfaces;                       //@synthesize orderedInterfaces=_orderedInterfaces - In the implementation block
@property (nonatomic,retain) NSMutableArray * attemptedInterfaces;                     //@synthesize attemptedInterfaces=_attemptedInterfaces - In the implementation block
@property (nonatomic,retain) NSNumber * chosenInterface;                               //@synthesize chosenInterface=_chosenInterface - In the implementation block
@property (nonatomic,retain) GKDiscoveryPeerConnection * trialConnection;              //@synthesize trialConnection=_trialConnection - In the implementation block
@property (assign,nonatomic) bool shouldSignalDiscovery;                               //@synthesize shouldSignalDiscovery=_shouldSignalDiscovery - In the implementation block
@property (assign,nonatomic) double discoveryTimeStamp;                                //@synthesize discoveryTimeStamp=_discoveryTimeStamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * sendDataBuffer;                          //@synthesize sendDataBuffer=_sendDataBuffer - In the implementation block
@property (assign,nonatomic) int state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GKDiscoveryPeerConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,copy) NSString * playerID;                                        //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) GKSimpleTimer * resolveTimer;                             //@synthesize resolveTimer=_resolveTimer - In the implementation block
@property (nonatomic,copy) id resolveTimeoutHandler;                                   //@synthesize resolveTimeoutHandler=_resolveTimeoutHandler - In the implementation block
-(id)serviceName;
-(void)setPlayerID:(id)arg1 ;
-(id)playerID;
-(id)syncQueue;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)invalidate;
-(void)setState:(int)arg1 ;
-(id)stringForState:(int)arg1 ;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(id)deviceID;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(bool)parseServiceNameForInit:(id)arg1 ;
-(bool)shouldSignalDiscovery;
-(id)interfaces;
-(id)chosenInterface;
-(void)setResolveTimeoutHandler:(/*^block*/ id)arg1 ;
-(void)setResolveTimer:(id)arg1 ;
-(id)resolveTimer;
-(void)cleanUpForBrowse;
-(void)timeout:(id)arg1 ;
-(id)nextInterfaceIndex;
-(void)startResolveTimerWithHandler:(/*^block*/ id)arg1 ;
-(void)stopResolveTimer;
-(void)didLoseInterface:(id)arg1 ;
-(void)flushDataBuffer;
-(void)setDeviceID:(id)arg1 ;
-(void)setInterfaces:(id)arg1 ;
-(id)orderedInterfaces;
-(void)setOrderedInterfaces:(id)arg1 ;
-(id)attemptedInterfaces;
-(void)setAttemptedInterfaces:(id)arg1 ;
-(void)setChosenInterface:(id)arg1 ;
-(id)trialConnection;
-(void)setTrialConnection:(id)arg1 ;
-(void)setShouldSignalDiscovery:(bool)arg1 ;
-(id)sendDataBuffer;
-(void)setSendDataBuffer:(id)arg1 ;
-(double)discoveryTimeStamp;
-(void)setDiscoveryTimeStamp:(double)arg1 ;
-(/*^block*/ id)resolveTimeoutHandler;
-(void)setServiceName:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
@end
