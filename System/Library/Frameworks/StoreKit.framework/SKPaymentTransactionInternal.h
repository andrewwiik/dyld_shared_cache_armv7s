/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSError, SKPaymentTransaction, SKPayment, NSString, NSDate, NSData;

@interface SKPaymentTransactionInternal : NSObject {

	NSArray* _downloads;
	NSError* _error;
	SKPaymentTransaction* _originalTransaction;
	SKPayment* _payment;
	NSString* _temporaryIdentifier;
	NSDate* _transactionDate;
	NSString* _transactionIdentifier;
	NSData* _transactionReceipt;
	long long _transactionState;

}
-(void)dealloc;
@end

