/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPAccount.h>

@class MFLock, ACAccount, DeliveryAccount, NSMutableDictionary, NSString, ACAccountStore, NSURL;

@interface CastleIMAPAccount : IMAPAccount {

	MFLock* _appleAccountLock;
	ACAccount* _appleAccount;
	DeliveryAccount* _deliveryAccount;
	unsigned _readyForPushRegistration : 1;
	NSMutableDictionary* _aliasChanges;
	NSString* _updatedDefaultEmail;

}

@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * authToken; 
@property (nonatomic,readonly) ACAccount * appleAccount; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,readonly) NSString * deliveryHostname; 
@property (nonatomic,readonly) unsigned deliveryPortNumber; 
@property (nonatomic,readonly) bool deliveryUsesSSL; 
@property (nonatomic,readonly) NSURL * aliasLookupURL; 
+(id)editableSuffix;
+(bool)setupIsAutomated;
+(id)descriptionPlaceholder;
+(bool)addressIsEditable;
+(id)copyShortFormForHost:(id)arg1 descriptionPlaceholder:(id)arg2 addressIsEditable:(bool)arg3 ;
+(int)advancedSpecifiersOptions;
+(bool)aliasesAreEditable;
+(id)aliasSpecifiersForEmails:(id)arg1 ;
+(id)helpTitle;
+(id)helpURL;
+(id)userInfoForAccountTopLevelSpecifier;
+(bool)isSSLEditable;
+(id)emailAddressHostPart;
+(id)newChildAccountWithParentAccount:(id)arg1 error:(id*)arg2 ;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(bool)isPredefinedAccountType;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(bool)primaryDeliveryAccountIsDynamic;
+(bool)usernameIsEmailAddress;
-(id)accountStore;
-(id)authToken;
-(void)dealloc;
-(id)displayName;
-(void)_accountsChanged:(id)arg1 ;
-(bool)shouldRegisterForPush;
-(void)handleAlertResponse:(id)arg1 ;
-(void)handleOverQuotaResponse:(id)arg1 ;
-(bool)canAttemptPushRegistration;
-(void)_resetAppleAccount;
-(id)appleAccount;
-(id)_mailPropertyFromAppleAccountForKey:(id)arg1 ;
-(id)_fromEmailAddressesIncludingDisabled:(bool)arg1 ;
-(id)deliveryHostname;
-(unsigned)deliveryPortNumber;
-(bool)deliveryUsesSSL;
-(void)setLocalDefaultEmailAddress:(id)arg1 ;
-(void)setLocallyEnabled:(bool)arg1 forEmailAddress:(id)arg2 ;
-(bool)_updateEmailAddressAndAliases;
-(id)aliasLookupURL;
-(id)_aliasAuthorizationHeader;
-(id)_aliasUserAgent;
-(id)_headerStringFromDate:(id)arg1 ;
-(id)_aliasesFromData:(id)arg1 ;
-(id)_emailsFromData:(id)arg1 ;
-(id)_defaultEmailAddressFromData:(id)arg1 ;
-(id)_prepareAliasData;
-(void)setPasswordInKeychain:(id)arg1 ;
-(void)_removePasswordInKeychain;
-(id)passwordFromKeychain;
-(id)_aliasesFromOldData:(id)arg1 ;
-(bool)supportsArchiving;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(void)setUsername:(id)arg1 ;
-(bool)usesSSL;
-(id)preferredAuthScheme;
-(unsigned)portNumber;
-(void)setUsesSSL:(bool)arg1 ;
-(void)setHostname:(id)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(bool)allowsTrustPrompt;
-(unsigned long long)credentialAccessibility;
-(bool)shouldDisplayHostnameInErrorMessages;
-(bool)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3 ;
-(id)uniqueIdForPersistentConnection;
-(id)emailAddressesAndAliasesList;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(id)_deliveryAccountCreateIfNeeded:(bool)arg1 ;
-(id)emailAddresses;
-(id)fromEmailAddressesIncludingDisabled;
-(bool)updateEmailAliases;
-(id)firstEmailAddress;
-(bool)canReceiveNewMailNotifications;
-(void)setDefaultEmailAddress:(id)arg1 ;
-(void)setEnabled:(bool)arg1 forEmailAddress:(id)arg2 ;
-(void)pushUpdateForAliasData;
-(id)fromEmailAddresses;
-(void)startListeningForNotifications;
-(id)displayUsername;
-(bool)derivesDeliveryAccountInfoFromMailAccount;
-(id)statisticsKind;
-(id)iconString;
-(void)setDisplayName:(id)arg1 ;
-(id)personID;
-(bool)isEnabledForDataclass:(id)arg1 ;
-(id)username;
-(id)hostname;
@end

