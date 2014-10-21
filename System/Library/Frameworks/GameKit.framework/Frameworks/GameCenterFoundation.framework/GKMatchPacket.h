/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface GKMatchPacket : NSObject {

	unsigned char _version;
	unsigned char _packetType;
	bool _valid;
	unsigned short _checksum;
	unsigned _sequenceNumber;
	unsigned _totalLength;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char version;                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned totalLength;                  //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) unsigned short checksum;               //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) bool valid;                            //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(unsigned)sequenceNumber;
-(void)setValid:(bool)arg1 ;
-(void)setPacketType:(unsigned char)arg1 ;
-(void)setTotalLength:(unsigned)arg1 ;
-(unsigned)totalLength;
-(unsigned char)packetType;
-(void)setChecksum:(unsigned short)arg1 ;
-(void)dealloc;
-(id)init;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)message;
-(bool)valid;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned short)checksum;
-(id)initWithMessage:(id)arg1 ;
@end

