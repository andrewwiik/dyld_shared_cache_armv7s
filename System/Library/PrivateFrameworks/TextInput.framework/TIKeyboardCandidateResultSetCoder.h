/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {

	NSMutableData* _mutableData;
	NSData* _data;
	unsigned long long _offset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                //@synthesize mutableData=_mutableData - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) const char* bytes; 
@property (nonatomic,readonly) const char* currentPosition; 
+(id)decodeWithData:(id)arg1 ;
+(id)encodeWithCandidateResultSet:(id)arg1 ;
+(id)candidateTypeToClassNameMap;
+(Class)classFromCandidateType:(int)arg1 ;
-(void)dealloc;
-(const char*)bytes;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(id)candidateResultSet;
-(const char*)currentPosition;
-(unsigned long long)decodeUInt64;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(unsigned char)decodeByte;
-(id)decodeString;
-(void)encodeByte:(unsigned char)arg1 ;
-(void)encodeString:(id)arg1 ;
-(id)initForEncoding;
-(id)dataFromCandidateResultSet:(id)arg1 ;
-(id)initForDecodingWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 mutableData:(id)arg2 ;
-(id)mutableData;
-(unsigned)decodeUInt32;
-(void)encodeStringArray:(id)arg1 ;
-(void)encodeUInt32:(unsigned)arg1 ;
-(void)encodeShort:(unsigned short)arg1 ;
-(id)decodeCandidate;
-(id)decodeStringArray;
-(unsigned short)decodeShort;
-(void)encodeBool:(bool)arg1 ;
-(bool)decodeBool;
-(void)setMutableData:(id)arg1 ;
@end

