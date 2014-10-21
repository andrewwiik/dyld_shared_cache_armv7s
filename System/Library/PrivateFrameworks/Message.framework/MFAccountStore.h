/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore;

@interface MFAccountStore : NSObject {

	int _accountStoreLock;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * persistentStore; 
+(id)sharedAccountStore;
+(id)incomingAccountTypeIdentifiers;
+(id)deliveryAccountTypeIdentifiers;
+(bool)_shouldUpdateAccountsInPlace;
+(id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(bool)arg3 ;
-(id)persistentStore;
-(void)dealloc;
-(id)init;
-(id)existingAccountWithPersistentAccount:(id)arg1 ;
-(id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1 ;
-(id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1 ;
-(void)savePersistentAccountWithAccount:(id)arg1 ;
-(void)removePersistentAccountWithAccount:(id)arg1 ;
-(id)incomingAccountsWithError:(id*)arg1 ;
-(id)deliveryAccountsWithError:(id*)arg1 ;
-(void)setPersistentStore:(id)arg1 ;
-(void)_accountsStoreChanged:(id)arg1 ;
-(id)accountsWithTypeIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_accountWithPersistentAccount:(id)arg1 useExisting:(bool)arg2 ;
@end

