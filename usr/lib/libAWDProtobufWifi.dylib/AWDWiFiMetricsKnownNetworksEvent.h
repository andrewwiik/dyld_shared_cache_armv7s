/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufWifi.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufWifi.dylib/libAWDProtobufWifi.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSData;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _eventType;
	unsigned _networkSecurity;
	unsigned _networkTypeBitMap;
	NSData* _oui;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasEventType; 
@property (assign,nonatomic) unsigned eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) bool hasNetworkTypeBitMap; 
@property (assign,nonatomic) unsigned networkTypeBitMap;                //@synthesize networkTypeBitMap=_networkTypeBitMap - In the implementation block
@property (assign,nonatomic) bool hasNetworkSecurity; 
@property (assign,nonatomic) unsigned networkSecurity;                  //@synthesize networkSecurity=_networkSecurity - In the implementation block
@property (nonatomic,readonly) bool hasOui; 
@property (nonatomic,retain) NSData * oui;                              //@synthesize oui=_oui - In the implementation block
-(unsigned)eventType;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(bool)readFrom:(id)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(void)setOui:(id)arg1 ;
-(bool)hasOui;
-(id)oui;
-(void)setHasEventType:(bool)arg1 ;
-(bool)hasEventType;
-(void)setNetworkTypeBitMap:(unsigned)arg1 ;
-(void)setHasNetworkTypeBitMap:(bool)arg1 ;
-(bool)hasNetworkTypeBitMap;
-(void)setNetworkSecurity:(unsigned)arg1 ;
-(void)setHasNetworkSecurity:(bool)arg1 ;
-(bool)hasNetworkSecurity;
-(unsigned)networkTypeBitMap;
-(unsigned)networkSecurity;
@end

