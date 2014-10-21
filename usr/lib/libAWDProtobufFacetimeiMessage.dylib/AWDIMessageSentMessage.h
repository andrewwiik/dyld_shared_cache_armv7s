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

@interface AWDIMessageSentMessage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isGroupMessage;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isTypingIndicator;
	unsigned _messageError;
	unsigned _sendDuration;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) bool hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) bool hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) bool hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                     //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) bool hasIsTypingIndicator; 
@property (assign,nonatomic) unsigned isTypingIndicator;                //@synthesize isTypingIndicator=_isTypingIndicator - In the implementation block
@property (assign,nonatomic) bool hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) bool hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) bool hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) bool hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (assign,nonatomic) bool hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
-(unsigned)hasAttachments;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)guid;
-(bool)readFrom:(id)arg1 ;
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
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(void)setHasIsToPhoneNumber:(bool)arg1 ;
-(bool)hasIsToPhoneNumber;
-(void)setIsToEmail:(unsigned)arg1 ;
-(void)setHasIsToEmail:(bool)arg1 ;
-(bool)hasIsToEmail;
-(unsigned)isToPhoneNumber;
-(unsigned)isToEmail;
-(void)setFzError:(int)arg1 ;
-(void)setHasFzError:(bool)arg1 ;
-(bool)hasFzError;
-(void)setMessageError:(unsigned)arg1 ;
-(void)setHasMessageError:(bool)arg1 ;
-(bool)hasMessageError;
-(int)fzError;
-(unsigned)messageError;
-(void)setIsTypingIndicator:(unsigned)arg1 ;
-(void)setHasIsTypingIndicator:(bool)arg1 ;
-(bool)hasIsTypingIndicator;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(void)setHasIsGroupMessage:(bool)arg1 ;
-(bool)hasIsGroupMessage;
-(void)setHasAttachments:(unsigned)arg1 ;
-(void)setHasHasAttachments:(bool)arg1 ;
-(bool)hasHasAttachments;
-(unsigned)isTypingIndicator;
-(unsigned)isGroupMessage;
@end

