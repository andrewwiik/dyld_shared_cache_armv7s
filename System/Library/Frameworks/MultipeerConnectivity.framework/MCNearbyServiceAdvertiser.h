/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/NSNetServiceDelegate.h>

@protocol MCNearbyServiceAdvertiserDelegate, OS_dispatch_queue;
@class MCPeerID, NSDictionary, NSString, NSMutableDictionary, NSObject, NSNetService;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate> {

	bool _isAdvertising;
	bool _wasAdvertising;
	<MCNearbyServiceAdvertiserDelegate>* _delegate;
	MCPeerID* _myPeerID;
	NSDictionary* _discoveryInfo;
	NSString* _serviceType;
	NSString* _formattedServiceType;
	NSMutableDictionary* _peers;
	long long _outgoingInviteID;
	NSObject<OS_dispatch_queue>* _syncQueue;
	NSMutableDictionary* _invites;
	NSNetService* _networkServer;

}

@property (assign,nonatomic) <MCNearbyServiceAdvertiserDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MCPeerID * myPeerID;                                       //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,copy) NSDictionary * discoveryInfo;                                  //@synthesize discoveryInfo=_discoveryInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                        //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * formattedServiceType;                               //@synthesize formattedServiceType=_formattedServiceType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peers;                                 //@synthesize peers=_peers - In the implementation block
@property (nonatomic,retain) NSNetService * networkServer;                                //@synthesize networkServer=_networkServer - In the implementation block
@property (assign,nonatomic) long long outgoingInviteID;                                  //@synthesize outgoingInviteID=_outgoingInviteID - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * syncQueue;                     //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invites;                               //@synthesize invites=_invites - In the implementation block
@property (assign,nonatomic) bool isAdvertising;                                          //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) bool wasAdvertising;                                         //@synthesize wasAdvertising=_wasAdvertising - In the implementation block
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(id)syncQueue;
-(id)myPeerID;
-(id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3 ;
-(id)discoveryInfo;
-(void)startAdvertisingPeer;
-(void)stopAdvertisingPeer;
-(void)setDiscoveryInfo:(id)arg1 ;
-(bool)isAdvertising;
-(void)setIsAdvertising:(bool)arg1 ;
-(bool)wasAdvertising;
-(void)setWasAdvertising:(bool)arg1 ;
-(void)applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)applicationWillTerminateNotification:(id)arg1 ;
-(id)networkServer;
-(id)formattedServiceType;
-(void)setNetworkServer:(id)arg1 ;
-(void)insertTXTRecord;
-(void)syncStartAdvertisingPeer;
-(void)syncStopAdvertisingPeer;
-(void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2 ;
-(void)parseIDString:(id*)arg1 displayName:(id*)arg2 fromIdentifier:(id)arg3 ;
-(void)syncCloseConnectionForPeer:(id)arg1 ;
-(void)syncReceivedData:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncAttachConnection:(id)arg1 toPeer:(id)arg2 ;
-(void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)setFormattedServiceType:(id)arg1 ;
-(long long)outgoingInviteID;
-(void)setOutgoingInviteID:(long long)arg1 ;
-(id)invites;
-(void)setInvites:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)setServiceType:(id)arg1 ;
-(id)serviceType;
-(id)peers;
-(void)setPeers:(id)arg1 ;
-(void)setSyncQueue:(id)arg1 ;
@end

