/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@class NSString;

@interface ABPhonePredicate : ABPredicate {

	NSString* _phoneNumber;
	NSString* _country;
	NSString* _dbCountry;

}

@property (nonatomic,copy) NSString * phoneNumber;                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * country;                    //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) NSString * dbCountry;              //@synthesize dbCountry=_dbCountry - In the implementation block
-(id)queryWhereString;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(bool)arg1 ;
-(void)setCountry:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 ;
-(bool)hasCallback;
-(void)evaluateCallbackWithSqliteContext:(sqlite3_contextRef)arg1 predicateContext:(void*)arg2 values:(Mem*)arg3 count:(int)arg4 ;
-(id)dbCountry;
-(id)predicateFormat;
-(void)dealloc;
-(bool)isValid;
-(id)phoneNumber;
-(id)country;
@end

