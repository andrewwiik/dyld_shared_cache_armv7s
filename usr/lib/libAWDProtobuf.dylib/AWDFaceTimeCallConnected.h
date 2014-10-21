/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	NSString* _guid;
	unsigned _isVideo;
	unsigned _localNetworkConnection;
	unsigned _relayConnectDuration;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) bool hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                      //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) bool hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;              //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) bool hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;               //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) bool hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) bool hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                            //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) bool hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                       //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) bool hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                        //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) bool hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                 //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) bool hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                              //@synthesize isVideo=_isVideo - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(bool)readFrom:(id)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(bool)hasGuid;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(void)setHasIsVideo:(bool)arg1 ;
-(bool)hasIsVideo;
-(void)setConnectDuration:(unsigned)arg1 ;
-(void)setHasConnectDuration:(bool)arg1 ;
-(bool)hasConnectDuration;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(void)setHasRemoteNetworkConnection:(bool)arg1 ;
-(bool)hasRemoteNetworkConnection;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(void)setHasLocalNetworkConnection:(bool)arg1 ;
-(bool)hasLocalNetworkConnection;
-(void)setHasConnectionType:(bool)arg1 ;
-(bool)hasConnectionType;
-(void)setUsesRelay:(unsigned)arg1 ;
-(void)setHasUsesRelay:(bool)arg1 ;
-(bool)hasUsesRelay;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(void)setHasCurrentNatType:(bool)arg1 ;
-(bool)hasCurrentNatType;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(void)setHasRemoteNatType:(bool)arg1 ;
-(bool)hasRemoteNatType;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(void)setHasRelayConnectDuration:(bool)arg1 ;
-(bool)hasRelayConnectDuration;
-(unsigned)connectDuration;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(unsigned)usesRelay;
-(unsigned)currentNatType;
-(unsigned)remoteNatType;
-(unsigned)relayConnectDuration;
@end

