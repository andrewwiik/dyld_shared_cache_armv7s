/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSDictionary, NSString;

@interface GKPreferences : NSObject {

	bool _webKitInspectElementEnabled;
	bool __shouldSynchronizeOnNextRead;
	NSDictionary* _overrideValues;

}

@property (assign,nonatomic) <GKPreferencesDelegate> * preferencesDelegate; 
@property (getter=isStoreDemoModeEnabled,nonatomic,readonly) bool storeDemoModeEnabled; 
@property (getter=isAddingFriendsRestricted,nonatomic,readonly) bool addingFriendsRestricted; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) bool multiplayerGamingRestricted; 
@property (getter=isAppInstallationRestricted,nonatomic,readonly) bool appInstallationRestricted; 
@property (getter=isAccountModificationRestricted,nonatomic,readonly) bool accountModificationRestricted; 
@property (getter=isGameCenterRestricted,nonatomic,readonly) bool gameCenterRestricted; 
@property (copy) NSDictionary * overrideValues;                                                                        //@synthesize overrideValues=_overrideValues - In the implementation block
@property (assign,nonatomic) long long environment; 
@property (nonatomic,retain) NSString * storeBagURL; 
@property (assign,nonatomic) unsigned long long mescalSetupRetries; 
@property (assign,nonatomic) bool ignoreSandbox; 
@property (assign,nonatomic) unsigned long long loginDisableThreshold; 
@property (assign,nonatomic) bool allowUnsignedBag; 
@property (assign,nonatomic) bool useTestProtocols; 
@property (assign,nonatomic) double terminationInterval; 
@property (assign,nonatomic) double garbageCollectionInterval; 
@property (assign,nonatomic) double minimumCacheTTL; 
@property (assign,nonatomic) double cacheTTLOverride; 
@property (assign,nonatomic) double operationTimeout; 
@property (assign,nonatomic) double operationRetryDelay; 
@property (assign,nonatomic) unsigned long long operationRetryCount; 
@property (assign,nonatomic) double debugRequestTimeout; 
@property (assign,getter=isNotificationCenterEnabled,nonatomic) bool notificationCenterEnabled; 
@property (assign,nonatomic) bool notificationBadgesEnabled; 
@property (assign,nonatomic) bool notificationSoundsEnabled; 
@property (assign,nonatomic) bool notificationAlertsEnabled; 
@property (assign,nonatomic) bool verboseLogging; 
@property (assign,nonatomic) unsigned logFilter; 
@property (assign,nonatomic) bool forceRelay; 
@property (assign,nonatomic) bool preemptiveRelay; 
@property (assign,nonatomic) long long pushEnvironment; 
@property (assign,nonatomic) long long pipeliningSetting; 
@property (assign,nonatomic) unsigned long long maxPlayersP2P; 
@property (assign,nonatomic) unsigned long long maxPlayersHosted; 
@property (assign,nonatomic) unsigned long long maxPlayersTurnBased; 
@property (assign,nonatomic) unsigned long long maxGameStateSizeTurnBased; 
@property (assign,nonatomic) unsigned long long exchangeDataMaximumSize; 
@property (assign,nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; 
@property (nonatomic,readonly) bool HTTPShouldUsePipelining; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersP2P; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersHosted; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersTurnBased; 
@property (nonatomic,readonly) unsigned long long maxDefaultGameStateSizeTurnBased; 
@property (nonatomic,readonly) unsigned long long exchangeDataDefaultMaximumSize; 
@property (nonatomic,readonly) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer; 
@property (assign,nonatomic) bool useInternalHeader; 
@property (assign,getter=isWebKitInspectElementEnabled,nonatomic) bool webKitInspectElementEnabled;                    //@synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled - In the implementation block
@property (assign,nonatomic) bool shouldAnnotateImageUsage; 
@property (assign,nonatomic) bool shouldTrackAtlasImageUsage; 
@property (assign,nonatomic) bool shouldUseTestIcons; 
@property (assign,nonatomic) bool shouldLinkPlayerToICloud; 
@property (assign,nonatomic) bool shouldLinkPlayerToTwitter; 
@property (assign,nonatomic) bool shouldLinkPlayerToFacebook; 
@property (nonatomic,readonly) bool shouldDisallowInvitesFromStrangers; 
@property (assign,nonatomic) bool shouldAllowGameInvites; 
@property (assign,nonatomic) bool shouldAllowNearbyMultiplayer; 
@property (assign,nonatomic) bool shouldAddPlayerInfoToAddressBook; 
@property (assign,nonatomic) bool _shouldSynchronizeOnNextRead;                                                        //@synthesize _shouldSynchronizeOnNextRead=__shouldSynchronizeOnNextRead - In the implementation block
+(id)hostNameForEnvironment:(long long)arg1 ;
+(id)displayNameForEnvironment:(long long)arg1 ;
+(id)sharedPreferences;
-(id)preferencesDelegate;
-(bool)restrictionEnabledForKey:(id)arg1 ;
-(void)setPreferencesDelegate:(id)arg1 ;
-(bool)executionAllowedForBundleID:(id)arg1 ;
-(bool)isAppInstallationRestricted;
-(bool)isMultiplayerGamingRestricted;
-(bool)isAddingFriendsRestricted;
-(bool)isGameCenterRestricted;
-(bool)isStoreDemoModeEnabled;
-(bool)isAccountModificationRestricted;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setEnvironment:(long long)arg1 ;
-(bool)HTTPShouldUsePipelining;
-(double)minimumCacheTTL;
-(id)initWithoutUIKitNotifications;
-(unsigned)logFilter;
-(bool)useTestProtocols;
-(void)applicationWillEnterBackground:(id)arg1 ;
-(id)initWithUIKitNotifications;
-(bool)_shouldSynchronizeOnNextRead;
-(void)set_shouldSynchronizeOnNextRead:(bool)arg1 ;
-(void)removeOverrideForKey:(id)arg1 ;
-(id)preferencesValueForKey:(id)arg1 ;
-(bool)booleanValueForKey:(CFStringRef)arg1 defaultValue:(bool)arg2 ;
-(void)_didWriteKey:(CFStringRef)arg1 ;
-(void)setOverrideValues:(id)arg1 ;
-(long long)integerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(void)setIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(bool)booleanValueForKey:(CFStringRef)arg1 ;
-(void)setBooleanValue:(bool)arg1 forKey:(CFStringRef)arg2 ;
-(long long)unsignedIntegerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(void)setUnsignedIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(double)timeIntervalForKey:(CFStringRef)arg1 defaultValue:(double)arg2 ;
-(void)setTimeInterval:(double)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned long long)maxDefaultPlayersP2P;
-(unsigned long long)maxDefaultPlayersHosted;
-(unsigned long long)maxDefaultPlayersTurnBased;
-(unsigned long long)maxDefaultGameStateSizeTurnBased;
-(unsigned long long)exchangeDataDefaultMaximumSize;
-(unsigned long long)exchangeDefaultMaxInitiatedExchangesPerPlayer;
-(id)stringValueForKey:(CFStringRef)arg1 defaultValue:(id)arg2 ;
-(void)setStringValue:(id)arg1 forKey:(CFStringRef)arg2 ;
-(id)storeBagURL;
-(void)setStoreBagURL:(id)arg1 ;
-(bool)allowUnsignedBag;
-(void)setAllowUnsignedBag:(bool)arg1 ;
-(void)setUseTestProtocols:(bool)arg1 ;
-(unsigned long long)mescalSetupRetries;
-(void)setMescalSetupRetries:(unsigned long long)arg1 ;
-(bool)ignoreSandbox;
-(void)setIgnoreSandbox:(bool)arg1 ;
-(unsigned long long)loginDisableThreshold;
-(void)setLoginDisableThreshold:(unsigned long long)arg1 ;
-(double)operationTimeout;
-(void)setOperationTimeout:(double)arg1 ;
-(double)operationRetryDelay;
-(void)setOperationRetryDelay:(double)arg1 ;
-(unsigned long long)operationRetryCount;
-(void)setOperationRetryCount:(unsigned long long)arg1 ;
-(double)debugRequestTimeout;
-(void)setDebugRequestTimeout:(double)arg1 ;
-(bool)verboseLogging;
-(void)setVerboseLogging:(bool)arg1 ;
-(void)setLogFilter:(unsigned)arg1 ;
-(bool)forceRelay;
-(void)setForceRelay:(bool)arg1 ;
-(bool)preemptiveRelay;
-(void)setPreemptiveRelay:(bool)arg1 ;
-(long long)pushEnvironment;
-(void)setPushEnvironment:(long long)arg1 ;
-(long long)pipeliningSetting;
-(void)setPipeliningSetting:(long long)arg1 ;
-(unsigned long long)maxPlayersP2P;
-(void)setMaxPlayersP2P:(unsigned long long)arg1 ;
-(unsigned long long)maxPlayersHosted;
-(void)setMaxPlayersHosted:(unsigned long long)arg1 ;
-(unsigned long long)maxPlayersTurnBased;
-(void)setMaxPlayersTurnBased:(unsigned long long)arg1 ;
-(unsigned long long)maxGameStateSizeTurnBased;
-(void)setMaxGameStateSizeTurnBased:(unsigned long long)arg1 ;
-(unsigned long long)exchangeDataMaximumSize;
-(void)setExchangeDataMaximumSize:(unsigned long long)arg1 ;
-(unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
-(void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned long long)arg1 ;
-(bool)useInternalHeader;
-(void)setUseInternalHeader:(bool)arg1 ;
-(double)terminationInterval;
-(void)setTerminationInterval:(double)arg1 ;
-(double)garbageCollectionInterval;
-(void)setGarbageCollectionInterval:(double)arg1 ;
-(void)setMinimumCacheTTL:(double)arg1 ;
-(double)cacheTTLOverride;
-(void)setCacheTTLOverride:(double)arg1 ;
-(void)setShouldAnnotateImageUsage:(bool)arg1 ;
-(bool)shouldTrackAtlasImageUsage;
-(void)setShouldTrackAtlasImageUsage:(bool)arg1 ;
-(void)setShouldUseTestIcons:(bool)arg1 ;
-(bool)shouldLinkPlayerToICloud;
-(void)setShouldLinkPlayerToICloud:(bool)arg1 ;
-(bool)shouldLinkPlayerToTwitter;
-(void)setShouldLinkPlayerToTwitter:(bool)arg1 ;
-(bool)shouldLinkPlayerToFacebook;
-(void)setShouldLinkPlayerToFacebook:(bool)arg1 ;
-(bool)shouldAllowGameInvites;
-(bool)shouldDisallowInvitesFromStrangers;
-(bool)shouldAddPlayerInfoToAddressBook;
-(void)setShouldAddPlayerInfoToAddressBook:(bool)arg1 ;
-(id)overrideValues;
-(bool)isWebKitInspectElementEnabled;
-(void)setWebKitInspectElementEnabled:(bool)arg1 ;
-(void)setShouldAllowGameInvites:(bool)arg1 ;
-(void)setShouldAllowNearbyMultiplayer:(bool)arg1 ;
-(bool)shouldAllowNearbyMultiplayer;
-(bool)shouldAnnotateImageUsage;
-(bool)notificationBadgesEnabled;
-(bool)notificationSoundsEnabled;
-(bool)notificationAlertsEnabled;
-(void)setNotificationBadgesEnabled:(bool)arg1 ;
-(void)setNotificationSoundsEnabled:(bool)arg1 ;
-(void)setNotificationAlertsEnabled:(bool)arg1 ;
-(bool)isNotificationCenterEnabled;
-(void)setNotificationCenterEnabled:(bool)arg1 ;
-(bool)shouldUseTestIcons;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)synchronize;
-(long long)environment;
@end

