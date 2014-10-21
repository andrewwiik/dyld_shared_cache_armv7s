/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSDictionary, NSString, NSMutableArray, NSMapTable, NSArray, NSData, NSDate;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol> {

	NSDictionary* _accountConfig;
	NSString* _serviceToken;
	NSString* _uniqueID;
	NSString* _service;
	NSMutableArray* _devices;
	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSMapTable* _registrationDelegateToInfo;
	bool _devicesLoaded;
	bool _isEnabled;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) bool isActive; 
@property (nonatomic,readonly) bool canSend; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int registrationStatus; 
@property (assign,setter=_setIsEnabled:,nonatomic) bool _isEnabled; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSString * regionID; 
@property (nonatomic,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
-(void)setPassword:(id)arg1 ;
-(id)serviceName;
-(void)setAuthToken:(id)arg1 ;
-(id)pushToken;
-(void)dealloc;
-(id)description;
-(bool)isActive;
-(bool)_isEnabled;
-(bool)canSend;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(id)uniqueID;
-(id)devices;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)_callDelegatesWithBlock:(/*^block*/ id)arg1 ;
-(id)aliasStrings;
-(void)setAccountInfo:(id)arg1 ;
-(void)_setIsEnabled:(bool)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(void)setLoginID:(id)arg1 ;
-(id)dateRegistered;
-(id)_objectForKey:(id)arg1 ;
-(id)registrationInfo;
-(void)_updateDependentDevicesWithDevicesInfo:(id)arg1 ;
-(void)_loadCachedDevices;
-(id)_keychainRegistration;
-(id)_registeredURIs;
-(void)_callRegistrationDelegatesWithBlock:(/*^block*/ id)arg1 ;
-(id)profileID;
-(int)registrationStatus;
-(id)regionID;
-(id)regionBasePhoneNumber;
-(id)nextRegistrationDate;
-(id)regionServerContext;
-(id)aliases;
-(id)profileInfo;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)vettedAliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(id)loginID;
-(void)passwordUpdated;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(id)accountInfo;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)activeDevicesUpdatedForAccount:(id)arg1 ;
-(id)registeredURIs;
-(void)deactivateAndPurgeIdentify;
-(void)_reregisterAndReidentify:(bool)arg1 ;
-(id)registrationCertificate;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(int)accountType;
@end

