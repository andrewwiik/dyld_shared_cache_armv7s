/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore, ACAccountType, ACAccount, NSString;

@interface GKFacebookAuthTokenHelper : NSObject {

	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	ACAccount* _account;
	NSString* _authToken;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccountType * accountType;                //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * authToken;                       //@synthesize authToken=_authToken - In the implementation block
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(void)fetchMeObjectWithHandler:(/*^block*/ id)arg1 ;
-(void)requestAccessToAccountWithHandler:(/*^block*/ id)arg1 ;
-(void)requestAuthTokenWithHandler:(/*^block*/ id)arg1 ;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)setAccountType:(id)arg1 ;
-(id)accountType;
@end

