/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFIMAPFetchResult : NSObject {

	int _itemType;
	unsigned long long _modSequenceNumber;
	SCD_Union_MF7 _typeSpecific;

}
-(void)dealloc;
-(id)description;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(unsigned long long)startOffset;
-(id)section;
-(unsigned)uid;
-(void)setStartOffset:(unsigned long long)arg1 ;
-(unsigned)encoding;
-(void)setSection:(id)arg1 ;
-(void)setFlagsArray:(id)arg1 ;
-(id)flagsArray;
-(id)envelope;
-(id)bodyStructure;
-(void)setEnvelope:(id)arg1 ;
-(id)internalDate;
-(void)setInternalDate:(id)arg1 ;
-(void)setFetchData:(id)arg1 ;
-(void)setBodyStructure:(id)arg1 ;
-(void)setCustomFlagsArray:(id)arg1 ;
-(id)customFlagsArray;
-(unsigned long long)messageFlags;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(id)fetchData;
-(void)setUid:(unsigned)arg1 ;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(unsigned long long)uniqueRemoteId;
-(void)setUniqueRemoteId:(unsigned long long)arg1 ;
-(unsigned long long)modSequenceNumber;
-(void)setModSequenceNumber:(unsigned long long)arg1 ;
@end
