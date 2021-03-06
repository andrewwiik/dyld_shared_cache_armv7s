/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufFacetimeiMessage.dylib/libAWDProtobufFacetimeiMessage.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallStarted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _isCallUpgrade;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isVideo;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) bool hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) bool hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) bool hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                    //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) bool hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                          //@synthesize isVideo=_isVideo - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
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
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(void)setHasIsCallUpgrade:(bool)arg1 ;
-(bool)hasIsCallUpgrade;
-(unsigned)isCallUpgrade;
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(void)setHasIsToPhoneNumber:(bool)arg1 ;
-(bool)hasIsToPhoneNumber;
-(void)setIsToEmail:(unsigned)arg1 ;
-(void)setHasIsToEmail:(bool)arg1 ;
-(bool)hasIsToEmail;
-(unsigned)isToPhoneNumber;
-(unsigned)isToEmail;
@end

