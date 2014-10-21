/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SKUIGiftValidationResponse : NSObject {

	NSString* _errorString;
	NSString* _giftKey;
	NSString* _totalGiftAmountString;
	bool _valid;

}

@property (nonatomic,readonly) NSString * errorString;                        //@synthesize errorString=_errorString - In the implementation block
@property (nonatomic,readonly) NSString * giftKey;                            //@synthesize giftKey=_giftKey - In the implementation block
@property (nonatomic,readonly) NSString * totalGiftAmountString;              //@synthesize totalGiftAmountString=_totalGiftAmountString - In the implementation block
@property (getter=isValid,nonatomic,readonly) bool valid;                     //@synthesize valid=_valid - In the implementation block
-(bool)isValid;
-(void).cxx_destruct;
-(id)totalGiftAmountString;
-(id)errorString;
-(id)initWithValidationDictionary:(id)arg1 ;
-(id)giftKey;
@end

