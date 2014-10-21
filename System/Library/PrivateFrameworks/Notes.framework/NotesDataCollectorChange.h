/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NotesDataCollectorChange : NSObject {

	int _accountType;
	NSString* _accountIdentifier;
	long long _operation;
	long long _entity;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) int accountType;                         //@synthesize accountType=_accountType - In the implementation block
@property (assign,nonatomic) long long operation;                     //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) long long entity;                        //@synthesize entity=_entity - In the implementation block
+(id)changeForEntity:(long long)arg1 operation:(long long)arg2 account:(id)arg3 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void).cxx_destruct;
-(id)accountIdentifier;
-(void)setEntity:(long long)arg1 ;
-(long long)entity;
-(void)setAccountType:(int)arg1 ;
-(int)accountType;
@end

