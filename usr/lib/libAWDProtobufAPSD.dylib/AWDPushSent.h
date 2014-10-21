/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufAPSD.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufAPSD.dylib/libAWDProtobufAPSD.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDPushSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	unsigned _error;
	unsigned _flushes;
	NSString* _guid;
	int _linkQuality;
	unsigned _payloadSize;
	unsigned _sendDuration;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) bool hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) bool hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) bool hasFlushes; 
@property (assign,nonatomic) unsigned flushes;                          //@synthesize flushes=_flushes - In the implementation block
@property (assign,nonatomic) bool hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
@property (assign,nonatomic) bool hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) bool hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) bool hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                 //@synthesize dualChannelState=_dualChannelState - In the implementation block
-(void)setError:(unsigned)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(bool)readFrom:(id)arg1 ;
-(unsigned)error;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(bool)hasGuid;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(void)setSendDuration:(unsigned)arg1 ;
-(void)setHasSendDuration:(bool)arg1 ;
-(bool)hasSendDuration;
-(unsigned)sendDuration;
-(void)setHasConnectionType:(bool)arg1 ;
-(bool)hasConnectionType;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(bool)arg1 ;
-(bool)hasLinkQuality;
-(int)linkQuality;
-(void)setDualChannelState:(unsigned)arg1 ;
-(void)setHasDualChannelState:(bool)arg1 ;
-(bool)hasDualChannelState;
-(unsigned)dualChannelState;
-(void)setHasError:(bool)arg1 ;
-(bool)hasError;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(bool)arg1 ;
-(bool)hasPayloadSize;
-(unsigned)payloadSize;
-(void)setFlushes:(unsigned)arg1 ;
-(void)setHasFlushes:(bool)arg1 ;
-(bool)hasFlushes;
-(unsigned)flushes;
@end

