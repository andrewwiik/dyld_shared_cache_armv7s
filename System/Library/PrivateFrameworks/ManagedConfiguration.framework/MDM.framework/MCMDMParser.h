/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCTunnelParser.h>

@class MCMDMServer, NSString;

@interface MCMDMParser : MCTunnelParser {

	bool _isChaperoned;
	MCMDMServer* _server;
	NSString* _managingProfileIdentifier;

}

@property (assign,nonatomic,__weak) MCMDMServer * server;                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) bool isChaperoned;                               //@synthesize isChaperoned=_isChaperoned - In the implementation block
@property (nonatomic,retain) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
-(id)server;
-(void).cxx_destruct;
-(void)setServer:(id)arg1 ;
-(id)_allCommands;
-(id)_invalidRequestTypeError:(id)arg1 ;
-(id)_unavailableCommandsWhileLocked;
-(id)_unavailableCommandsWhileInAppWhitelistModes;
-(id)_deviceInformationWithRequest:(id)arg1 accessRights:(int)arg2 ;
-(id)_installProfile:(id)arg1 accessRights:(int)arg2 ;
-(id)_removeProfile:(id)arg1 ;
-(void)_processRequest:(id)arg1 withAccessRights:(int)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)_notAuthorizedError;
-(id)_deviceLock:(id)arg1 ;
-(id)_clearPasscode:(id)arg1 ;
-(id)_requestUnlockToken:(id)arg1 ;
-(id)_profileList:(id)arg1 ;
-(id)_eraseDevice:(id)arg1 ;
-(id)_certificateList:(id)arg1 ;
-(id)_provisioningProfileList:(id)arg1 ;
-(id)_installProvisioningProfile:(id)arg1 ;
-(id)_removeProvisioningProfile:(id)arg1 ;
-(id)_installedApplicationList:(id)arg1 ;
-(id)_restrictions:(id)arg1 ;
-(id)_securityInfo:(id)arg1 ;
-(id)_settings:(id)arg1 accessRights:(int)arg2 ;
-(void)_installApplication:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)_applyRedemptionCode:(id)arg1 ;
-(id)_managedApplicationList:(id)arg1 ;
-(id)_managedApplicationConfiguration:(id)arg1 ;
-(id)_managedApplicationAttributes:(id)arg1 ;
-(id)_managedApplicationFeedback:(id)arg1 ;
-(id)_removeApplication:(id)arg1 ;
-(void)_requestMirroringRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_stopMirroringRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_inviteToProgramRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_activationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_clearActivationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_performQuery:(id)arg1 withResultDictionary:(id)arg2 ;
-(bool)_isProvisioningProfileUUIDManaged:(id)arg1 ;
-(id)malformedRequestErrorResult;
-(bool)_isProfileIdentifierManaged:(id)arg1 ;
-(id)_allSettingsItems;
-(id)_notManagedErrorAppID:(id)arg1 ;
-(id)approvedAppAttributesFromAttributes:(id)arg1 ;
-(id)_performSetWallpaper:(id)arg1 ;
-(id)_performSetDataRoaming:(id)arg1 ;
-(id)_performSetVoiceRoaming:(id)arg1 ;
-(id)_performSetPersonalHotspot:(id)arg1 ;
-(id)_performSetAppConfig:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetAppAttributes:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetOrganizationInfo:(id)arg1 ;
-(id)_performSetMDMOptions:(id)arg1 ;
-(bool)_validateSetting:(id)arg1 accessRights:(int)arg2 outError:(id*)arg3 ;
-(id)_performSetting:(id)arg1 outAdditionalResponseKeys:(id*)arg2 outRestartAppleTVApp:(bool*)arg3 ;
-(bool)_appStoreEnabled;
-(id)_appStoreDisabledError;
-(id)managedFeedbackDictionaryForBundleID:(id)arg1 delete:(bool)arg2 ;
-(id)initWithManagingProfileIdentifier:(id)arg1 ;
-(void)processRequest:(id)arg1 withAccessRights:(int)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)managingProfileIdentifier;
-(void)setManagingProfileIdentifier:(id)arg1 ;
-(bool)isChaperoned;
@end
