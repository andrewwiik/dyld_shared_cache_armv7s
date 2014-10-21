/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufSiri.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufSiri.dylib/libAWDProtobufSiri.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDSiriSessionLoadTimeout : PBCodable <NSCopying> {

	unsigned long long _connectionTechnology;
	unsigned long long _interfaceIndex;
	unsigned long long _sendBufferSize;
	unsigned long long _timestamp;
	NSString* _connectionURL;
	bool _wwanPreferred;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) bool hasConnectionURL; 
@property (nonatomic,retain) NSString * connectionURL;                             //@synthesize connectionURL=_connectionURL - In the implementation block
@property (assign,nonatomic) bool hasInterfaceIndex; 
@property (assign,nonatomic) unsigned long long interfaceIndex;                    //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign,nonatomic) bool hasSendBufferSize; 
@property (assign,nonatomic) unsigned long long sendBufferSize;                    //@synthesize sendBufferSize=_sendBufferSize - In the implementation block
@property (assign,nonatomic) bool hasWwanPreferred; 
@property (assign,nonatomic) bool wwanPreferred;                                   //@synthesize wwanPreferred=_wwanPreferred - In the implementation block
@property (assign,nonatomic) bool hasConnectionTechnology; 
@property (assign,nonatomic) unsigned long long connectionTechnology;              //@synthesize connectionTechnology=_connectionTechnology - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)connectionURL;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
-(void)setWwanPreferred:(bool)arg1 ;
-(void)setHasWwanPreferred:(bool)arg1 ;
-(bool)hasWwanPreferred;
-(bool)wwanPreferred;
-(void)setConnectionURL:(id)arg1 ;
-(bool)hasConnectionURL;
-(void)setInterfaceIndex:(unsigned long long)arg1 ;
-(void)setHasInterfaceIndex:(bool)arg1 ;
-(bool)hasInterfaceIndex;
-(void)setSendBufferSize:(unsigned long long)arg1 ;
-(void)setHasSendBufferSize:(bool)arg1 ;
-(bool)hasSendBufferSize;
-(void)setConnectionTechnology:(unsigned long long)arg1 ;
-(void)setHasConnectionTechnology:(bool)arg1 ;
-(bool)hasConnectionTechnology;
-(unsigned long long)interfaceIndex;
-(unsigned long long)sendBufferSize;
-(unsigned long long)connectionTechnology;
@end

