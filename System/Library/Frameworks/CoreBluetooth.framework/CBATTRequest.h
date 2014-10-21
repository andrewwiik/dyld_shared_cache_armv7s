/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, CBCentral, CBCharacteristic, NSData;

@interface CBATTRequest : NSObject {

	NSNumber* _transactionID;
	bool _ignoreResponse;
	CBCentral* _central;
	CBCharacteristic* _characteristic;
	unsigned long long _offset;
	NSData* _value;

}

@property (nonatomic,retain) CBCentral * central;                            //@synthesize central=_central - In the implementation block
@property (nonatomic,retain) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                      //@synthesize offset=_offset - In the implementation block
@property (copy) NSData * value;                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumber * transactionID;                       //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) bool ignoreResponse;                            //@synthesize ignoreResponse=_ignoreResponse - In the implementation block
-(void)setCharacteristic:(id)arg1 ;
-(id)characteristic;
-(bool)ignoreResponse;
-(id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 value:(id)arg4 transactionID:(id)arg5 ;
-(void)setIgnoreResponse:(bool)arg1 ;
-(id)central;
-(void)setCentral:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(id)transactionID;
-(void)setTransactionID:(id)arg1 ;
@end

