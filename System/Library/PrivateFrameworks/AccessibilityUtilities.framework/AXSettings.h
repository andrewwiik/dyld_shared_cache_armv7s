/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSObject, NSMutableSet, NSMutableDictionary, NSArray, NSSet, NSDictionary, NSNumber, NSString, NSDate;

@interface AXSettings : NSObject {

	NSObject<OS_dispatch_queue>* _axFeatureQueue;
	NSMutableSet* _registeredNotifications;
	NSMutableDictionary* _synchronizeDomains;
	NSMutableDictionary* _updateBlocks;

}

@property (assign,nonatomic) bool assistiveTouchAlwaysShowMenuEnabled; 
@property (assign,nonatomic) bool assistiveTouchOpenMenuSwaggleEnabled; 
@property (assign,nonatomic) double assistiveTouchSpeed; 
@property (nonatomic,retain) NSArray * assistiveTouchCustomGestures; 
@property (nonatomic,retain) NSArray * assistiveTouchRecentGestures; 
@property (nonatomic,retain) NSArray * assistiveTouchSavedGestures; 
@property (assign,nonatomic) long long assistiveTouchScanningMode; 
@property (assign,nonatomic) long long assistiveTouchPreferredPointPicker; 
@property (assign,nonatomic) bool assistiveTouchAutoScanningEnabled; 
@property (assign,nonatomic) bool assistiveTouchGroupElementsEnabled; 
@property (assign,nonatomic) bool assistiveTouchScannerCompactMenuEnabled; 
@property (assign,nonatomic) bool assistiveTouchScannerMenuLabelsEnabled; 
@property (assign,nonatomic) double assistiveTouchStepInterval; 
@property (assign,nonatomic) double assistiveTouchSelectTimeout; 
@property (assign,nonatomic) bool assistiveTouchSelectTimeoutEnabled; 
@property (assign,nonatomic) double assistiveTouchInputCoalescingDuration; 
@property (assign,nonatomic) bool assistiveTouchInputCoalescingEnabled; 
@property (assign,nonatomic) double assistiveTouchInputHoldDuration; 
@property (assign,nonatomic) bool assistiveTouchInputHoldEnabled; 
@property (assign,nonatomic) double assistiveTouchDelayAfterInput; 
@property (assign,nonatomic) bool assistiveTouchDelayAfterInputEnabled; 
@property (assign,nonatomic) double assistiveTouchAxisSweepSpeed; 
@property (assign,nonatomic) double assistiveTouchActionRepeatInterval; 
@property (assign,nonatomic) bool assistiveTouchActionRepeatEnabled; 
@property (assign,nonatomic) long long assistiveTouchScanCycles; 
@property (assign,nonatomic) double assistiveTouchScanTimeout; 
@property (assign,nonatomic) bool assistiveTouchScanTimeoutEnabled; 
@property (assign,nonatomic) bool assistiveTouchScannerSoundEnabled; 
@property (assign,nonatomic) bool assistiveTouchScannerSpeechEnabled; 
@property (assign,nonatomic) double assistiveTouchScannerSpeechRate; 
@property (assign,nonatomic) bool assistiveTouchScannerCursorHighVisibilityEnabled; 
@property (assign,nonatomic) bool assistiveTouchScannerSpeechIsInterruptedByScanning; 
@property (assign,nonatomic) bool assistiveTouchScannerPointPickerDefaultsToRescan; 
@property (assign,nonatomic) long long assistiveTouchCursorColor; 
@property (assign,nonatomic) long long assistiveTouchHeadMovementSensitivity; 
@property (assign,nonatomic) bool assistiveTouchSwitchUsageConfirmed; 
@property (nonatomic,retain) NSSet * assistiveTouchSwitches; 
@property (assign,nonatomic) bool assistiveTouchScannerMenuIncludeHomeItem; 
@property (assign,nonatomic) bool assistiveTouchScannerMenuIncludeScrollItem; 
@property (assign,nonatomic) bool assistiveTouchScannerMenuIncludeDeviceItem; 
@property (assign,nonatomic) bool assistiveTouchScannerMenuIncludeGesturesItem; 
@property (assign,nonatomic) bool assistiveTouchScannerMenuIncludeSettingsItem; 
@property (nonatomic,readonly) long long assistiveTouchScannerIncludedMenuItems; 
@property (assign,nonatomic) bool assistiveTouchScannerAddedTripleClickAutomatically; 
@property (assign,nonatomic) long long guidedAccessUsageCount; 
@property (assign,nonatomic) bool guidedAccessAXFeaturesEnabled; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsUserAppProfile; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsUserGlobalProfile; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsSavedAccessibilityFeatures; 
@property (nonatomic,retain) NSArray * gaxInternalSettingsSavedAccessibilityTripleClickOptions; 
@property (nonatomic,retain) NSArray * gaxInternalSettingsUserConfiguredAppIDs; 
@property (nonatomic,copy) NSNumber * gaxInternalSettingsActiveAppOrientation; 
@property (nonatomic,copy) NSString * gaxInternalSettingsActiveAppID; 
@property (assign,nonatomic) bool gaxInternalSettingsIsActiveAppSelfLocked; 
@property (assign,nonatomic) bool gaxInternalSettingsSystemDidRestartDueToLowBattery; 
@property (nonatomic,copy) NSString * gaxInternalSettingsDeviceID; 
@property (nonatomic,copy) NSString * gaxInternalSettingsProductBuildVersion; 
@property (nonatomic,retain) NSDate * gaxInternalSettingsLastActivationDate; 
@property (nonatomic,retain) NSDate * gaxInternalSettingsLastPasscodeSetDate; 
@property (assign,nonatomic) bool assistiveTouchCameraSwitchPreviewEnabled; 
@property (assign,nonatomic) bool assistiveTouchHeadlessModeEnabled; 
@property (assign,nonatomic) long long internalLoggingColorTheme; 
@property (assign,nonatomic) bool validateSecondPartyApps; 
@property (assign,nonatomic) bool includeBacktraceInLogs; 
@property (assign,nonatomic) bool writeAXLogsToFile; 
@property (assign,nonatomic) bool ignoreAXAssertions; 
@property (assign,nonatomic) bool ignoreAXServerEntitlements; 
@property (assign,nonatomic) bool logAXNotificationPosting; 
@property (assign,nonatomic) bool voiceOverHearingAidRoutingEnabled; 
@property (assign,nonatomic) bool skipHearingAidMFiAuth; 
@property (assign,nonatomic) bool enableHearingAidReporter; 
@property (assign,nonatomic) bool speakCorrectionsEnabled; 
@property (assign,nonatomic) float quickSpeakSpeakingRate; 
@property (assign,nonatomic) bool quickSpeakHighlightText; 
@property (assign,nonatomic) float quickSpeakVolume; 
@property (assign,nonatomic) bool voiceOverLargeCursorEnabled; 
@property (assign,nonatomic) long long voiceOverHelpMode; 
@property (assign,nonatomic) long long voiceOverNavigateImagesOption; 
@property (assign,nonatomic) long long voiceOverPhoneticsFeedback; 
@property (assign,nonatomic) long long voiceOverHardwareTypingFeedback; 
@property (assign,nonatomic) long long voiceOverSoftwareTypingFeedback; 
@property (assign,nonatomic) bool voiceOverCompactVoiceEnabled; 
@property (nonatomic,readonly) bool voiceOverHandwritingEnabled; 
@property (assign,nonatomic) bool voiceOverHintsEnabled; 
@property (assign,nonatomic) bool voiceOverPitchChangeEnabled; 
@property (assign,nonatomic) bool voiceOverSoundEffectsEnabled; 
@property (assign,nonatomic) bool voiceOverSpeakingRateInRotorEnabled; 
@property (assign,nonatomic) bool voiceOverSpeakNotificationsInLockScreenEnabled; 
@property (nonatomic,copy) NSArray * voiceOverRotorItems; 
@property (nonatomic,copy) NSString * voiceOverBrailleTableIdentifier; 
@property (assign,nonatomic) bool voiceOverAlwaysUseNemethCodeForMathEnabled; 
@property (assign,nonatomic) bool voiceOverShowSoftwareKeyboardWithBraille; 
@property (nonatomic,copy) NSString * voiceOverDefaultDialect; 
@property (assign,nonatomic) long long voiceOverActivationWorkaround; 
@property (assign,nonatomic) bool voiceOverShouldOutputToHearingAid; 
@property (nonatomic,retain) NSNumber * voiceOverHandwritingWasNativeAutocorrectEnabled; 
@property (nonatomic,retain) NSNumber * voiceOverHandwritingWasNativeSpellCheckingEnabled; 
@property (assign,nonatomic) bool voiceOverBrailleGradeTwoAutoTranslateEnabled; 
@property (assign,nonatomic) bool allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) bool shouldStreamToLeftAid; 
@property (assign,nonatomic) bool shouldStreamToRightAid; 
@property (assign,nonatomic) float reduceWhitePointLevel; 
@property (nonatomic,retain) NSMutableSet * registeredNotifications;                                         //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * synchronizeDomains;                                       //@synthesize synchronizeDomains=_synchronizeDomains - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                                             //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * axFeatureQueue;                                   //@synthesize axFeatureQueue=_axFeatureQueue - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(bool)writeAXLogsToFile;
-(bool)includeBacktraceInLogs;
-(bool)ignoreAXAssertions;
-(bool)assistiveTouchAlwaysShowMenuEnabled;
-(bool)assistiveTouchOpenMenuSwaggleEnabled;
-(double)assistiveTouchSpeed;
-(id)assistiveTouchCustomGestures;
-(id)assistiveTouchRecentGestures;
-(id)assistiveTouchSavedGestures;
-(long long)assistiveTouchScanningMode;
-(long long)assistiveTouchPreferredPointPicker;
-(bool)assistiveTouchAutoScanningEnabled;
-(bool)assistiveTouchGroupElementsEnabled;
-(bool)assistiveTouchScannerCompactMenuEnabled;
-(bool)assistiveTouchScannerMenuLabelsEnabled;
-(double)assistiveTouchStepInterval;
-(long long)assistiveTouchScanCycles;
-(double)assistiveTouchSelectTimeout;
-(bool)assistiveTouchSelectTimeoutEnabled;
-(double)assistiveTouchScanTimeout;
-(bool)assistiveTouchScannerSoundEnabled;
-(bool)assistiveTouchScannerSpeechEnabled;
-(double)assistiveTouchScannerSpeechRate;
-(id)assistiveTouchSwitches;
-(bool)assistiveTouchScannerCursorHighVisibilityEnabled;
-(bool)assistiveTouchScannerSpeechIsInterruptedByScanning;
-(double)assistiveTouchInputCoalescingDuration;
-(bool)assistiveTouchInputCoalescingEnabled;
-(double)assistiveTouchInputHoldDuration;
-(bool)assistiveTouchInputHoldEnabled;
-(double)assistiveTouchDelayAfterInput;
-(bool)assistiveTouchDelayAfterInputEnabled;
-(double)assistiveTouchAxisSweepSpeed;
-(double)assistiveTouchActionRepeatInterval;
-(bool)assistiveTouchActionRepeatEnabled;
-(bool)assistiveTouchScannerPointPickerDefaultsToRescan;
-(bool)assistiveTouchScanTimeoutEnabled;
-(long long)assistiveTouchCursorColor;
-(long long)assistiveTouchHeadMovementSensitivity;
-(bool)assistiveTouchSwitchUsageConfirmed;
-(bool)assistiveTouchScannerMenuIncludeHomeItem;
-(bool)assistiveTouchScannerMenuIncludeScrollItem;
-(bool)assistiveTouchScannerMenuIncludeDeviceItem;
-(bool)assistiveTouchScannerMenuIncludeGesturesItem;
-(bool)assistiveTouchScannerMenuIncludeSettingsItem;
-(bool)assistiveTouchCameraSwitchPreviewEnabled;
-(bool)assistiveTouchHeadlessModeEnabled;
-(bool)assistiveTouchScannerAddedTripleClickAutomatically;
-(long long)guidedAccessUsageCount;
-(bool)guidedAccessAXFeaturesEnabled;
-(id)gaxInternalSettingsUserAppProfile;
-(id)gaxInternalSettingsUserGlobalProfile;
-(id)gaxInternalSettingsSavedAccessibilityFeatures;
-(id)gaxInternalSettingsSavedAccessibilityTripleClickOptions;
-(id)gaxInternalSettingsUserConfiguredAppIDs;
-(id)gaxInternalSettingsActiveAppOrientation;
-(id)gaxInternalSettingsActiveAppID;
-(bool)gaxInternalSettingsIsActiveAppSelfLocked;
-(bool)gaxInternalSettingsSystemDidRestartDueToLowBattery;
-(id)gaxInternalSettingsDeviceID;
-(id)gaxInternalSettingsProductBuildVersion;
-(id)gaxInternalSettingsLastActivationDate;
-(id)gaxInternalSettingsLastPasscodeSetDate;
-(long long)internalLoggingColorTheme;
-(bool)validateSecondPartyApps;
-(bool)ignoreAXServerEntitlements;
-(bool)logAXNotificationPosting;
-(bool)voiceOverHearingAidRoutingEnabled;
-(bool)skipHearingAidMFiAuth;
-(bool)enableHearingAidReporter;
-(bool)speakCorrectionsEnabled;
-(float)quickSpeakSpeakingRate;
-(float)quickSpeakSpeakingRateForLanguage:(id)arg1 ;
-(bool)quickSpeakHighlightText;
-(float)quickSpeakVolume;
-(bool)voiceOverLargeCursorEnabled;
-(long long)voiceOverHelpMode;
-(long long)voiceOverNavigateImagesOption;
-(long long)voiceOverPhoneticsFeedback;
-(long long)voiceOverHardwareTypingFeedback;
-(long long)voiceOverSoftwareTypingFeedback;
-(bool)voiceOverCompactVoiceEnabled;
-(bool)voiceOverHintsEnabled;
-(bool)voiceOverPitchChangeEnabled;
-(bool)voiceOverSoundEffectsEnabled;
-(bool)voiceOverSpeakingRateInRotorEnabled;
-(bool)voiceOverSpeakNotificationsInLockScreenEnabled;
-(id)voiceOverRotorItems;
-(id)voiceOverBrailleTableIdentifier;
-(bool)voiceOverAlwaysUseNemethCodeForMathEnabled;
-(id)voiceOverDefaultDialect;
-(id)voiceOverHandwritingWasNativeAutocorrectEnabled;
-(id)voiceOverHandwritingWasNativeSpellCheckingEnabled;
-(float)voiceOverSpeakingRateForLanguage:(id)arg1 ;
-(long long)voiceOverActivationWorkaround;
-(bool)voiceOverShowSoftwareKeyboardWithBraille;
-(bool)voiceOverBrailleGradeTwoAutoTranslateEnabled;
-(bool)voiceOverShouldOutputToHearingAid;
-(bool)allowHearingAidControlOnLockScreen;
-(bool)shouldStreamToLeftAid;
-(bool)shouldStreamToRightAid;
-(float)reduceWhitePointLevel;
-(CFStringRef)_domainNameForDomain:(int)arg1 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(bool)_switchFromRootUserIfNecessary:(/*^block*/ id)arg1 ;
-(int)_domainForPreferenceKey:(id)arg1 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2 ;
-(void)_registerForNotification:(id)arg1 ;
-(id)_migratePreferenceIfNecessary:(id)arg1 ;
-(id)synchronizeDomains;
-(void)setAxFeatureQueue:(id)arg1 ;
-(id)updateBlocks;
-(id)registeredNotifications;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(id)_featureIDForTripleClickOption:(int)arg1 ;
-(id)axFeatureQueue;
-(void)_setAXFeature:(id)arg1 enabled:(bool)arg2 ;
-(id)accessibilityFeatureIDs;
-(id)_tripleClickOptionForAXFeatureID:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(void)registerUpdateBlock:(/*^block*/ id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)setAssistiveTouchAlwaysShowMenuEnabled:(bool)arg1 ;
-(void)setAssistiveTouchOpenMenuSwaggleEnabled:(bool)arg1 ;
-(void)setAssistiveTouchSpeed:(double)arg1 ;
-(void)setAssistiveTouchCustomGestures:(id)arg1 ;
-(void)setAssistiveTouchRecentGestures:(id)arg1 ;
-(void)setAssistiveTouchSavedGestures:(id)arg1 ;
-(void)setAssistiveTouchPreferredPointPicker:(long long)arg1 ;
-(void)setAssistiveTouchScannerSpeechIsInterruptedByScanning:(bool)arg1 ;
-(void)setAssistiveTouchScannerCursorHighVisibilityEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScanningMode:(long long)arg1 ;
-(void)setAssistiveTouchAutoScanningEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScannerPointPickerDefaultsToRescan:(bool)arg1 ;
-(void)setAssistiveTouchGroupElementsEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScannerCompactMenuEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScannerMenuLabelsEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeHomeItem:(bool)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeScrollItem:(bool)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeDeviceItem:(bool)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeGesturesItem:(bool)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeSettingsItem:(bool)arg1 ;
-(long long)assistiveTouchScannerIncludedMenuItems;
-(void)setAssistiveTouchAxisSweepSpeed:(double)arg1 ;
-(void)setAssistiveTouchActionRepeatInterval:(double)arg1 ;
-(void)setAssistiveTouchActionRepeatEnabled:(bool)arg1 ;
-(void)setAssistiveTouchDelayAfterInput:(double)arg1 ;
-(void)setAssistiveTouchDelayAfterInputEnabled:(bool)arg1 ;
-(void)setAssistiveTouchInputHoldDuration:(double)arg1 ;
-(void)setAssistiveTouchInputHoldEnabled:(bool)arg1 ;
-(void)setAssistiveTouchInputCoalescingDuration:(double)arg1 ;
-(void)setAssistiveTouchInputCoalescingEnabled:(bool)arg1 ;
-(void)setAssistiveTouchStepInterval:(double)arg1 ;
-(void)setAssistiveTouchSelectTimeout:(double)arg1 ;
-(void)setAssistiveTouchSelectTimeoutEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScanTimeoutEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScanTimeout:(double)arg1 ;
-(void)setAssistiveTouchScanCycles:(long long)arg1 ;
-(void)setAssistiveTouchScannerSoundEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScannerSpeechEnabled:(bool)arg1 ;
-(void)setAssistiveTouchScannerSpeechRate:(double)arg1 ;
-(void)setAssistiveTouchSwitches:(id)arg1 ;
-(void)setAssistiveTouchCursorColor:(long long)arg1 ;
-(void)setAssistiveTouchHeadMovementSensitivity:(long long)arg1 ;
-(void)setAssistiveTouchSwitchUsageConfirmed:(bool)arg1 ;
-(void)setAssistiveTouchScannerAddedTripleClickAutomatically:(bool)arg1 ;
-(void)setGuidedAccessUsageCount:(long long)arg1 ;
-(void)setGuidedAccessAXFeaturesEnabled:(bool)arg1 ;
-(void)setGaxInternalSettingsUserAppProfile:(id)arg1 ;
-(void)setGaxInternalSettingsUserGlobalProfile:(id)arg1 ;
-(void)setGaxInternalSettingsSavedAccessibilityFeatures:(id)arg1 ;
-(void)setGaxInternalSettingsSavedAccessibilityTripleClickOptions:(id)arg1 ;
-(void)setGaxInternalSettingsUserConfiguredAppIDs:(id)arg1 ;
-(void)setGaxInternalSettingsActiveAppOrientation:(id)arg1 ;
-(void)setGaxInternalSettingsActiveAppID:(id)arg1 ;
-(void)setGaxInternalSettingsIsActiveAppSelfLocked:(bool)arg1 ;
-(void)setGaxInternalSettingsSystemDidRestartDueToLowBattery:(bool)arg1 ;
-(void)setGaxInternalSettingsDeviceID:(id)arg1 ;
-(void)setGaxInternalSettingsProductBuildVersion:(id)arg1 ;
-(void)setGaxInternalSettingsLastActivationDate:(id)arg1 ;
-(void)setGaxInternalSettingsLastPasscodeSetDate:(id)arg1 ;
-(void)setAssistiveTouchCameraSwitchPreviewEnabled:(bool)arg1 ;
-(void)setAssistiveTouchHeadlessModeEnabled:(bool)arg1 ;
-(void)setValidateSecondPartyApps:(bool)arg1 ;
-(void)setIncludeBacktraceInLogs:(bool)arg1 ;
-(void)setWriteAXLogsToFile:(bool)arg1 ;
-(void)setIgnoreAXAssertions:(bool)arg1 ;
-(void)setIgnoreAXServerEntitlements:(bool)arg1 ;
-(void)setLogAXNotificationPosting:(bool)arg1 ;
-(void)setInternalLoggingColorTheme:(long long)arg1 ;
-(void)setVoiceOverHearingAidRoutingEnabled:(bool)arg1 ;
-(void)setSkipHearingAidMFiAuth:(bool)arg1 ;
-(void)setEnableHearingAidReporter:(bool)arg1 ;
-(void)setSpeakCorrectionsEnabled:(bool)arg1 ;
-(void)setQuickSpeakVolume:(float)arg1 ;
-(void)setQuickSpeakHighlightText:(bool)arg1 ;
-(void)setQuickSpeakSpeakingRate:(float)arg1 ;
-(void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2 ;
-(void)setVoiceOverLargeCursorEnabled:(bool)arg1 ;
-(void)setVoiceOverHelpMode:(long long)arg1 ;
-(void)setVoiceOverNavigateImagesOption:(long long)arg1 ;
-(void)setVoiceOverPhoneticsFeedback:(long long)arg1 ;
-(void)setVoiceOverHardwareTypingFeedback:(long long)arg1 ;
-(void)setVoiceOverSoftwareTypingFeedback:(long long)arg1 ;
-(void)setVoiceOverActivationWorkaround:(long long)arg1 ;
-(void)setVoiceOverCompactVoiceEnabled:(bool)arg1 ;
-(bool)voiceOverHandwritingEnabled;
-(void)setVoiceOverHintsEnabled:(bool)arg1 ;
-(void)setVoiceOverPitchChangeEnabled:(bool)arg1 ;
-(void)setVoiceOverSoundEffectsEnabled:(bool)arg1 ;
-(void)setVoiceOverSpeakingRateInRotorEnabled:(bool)arg1 ;
-(void)setVoiceOverSpeakNotificationsInLockScreenEnabled:(bool)arg1 ;
-(void)setVoiceOverRotorItems:(id)arg1 ;
-(void)setVoiceOverBrailleTableIdentifier:(id)arg1 ;
-(void)setVoiceOverAlwaysUseNemethCodeForMathEnabled:(bool)arg1 ;
-(void)setVoiceOverDefaultDialect:(id)arg1 ;
-(void)setVoiceOverHandwritingWasNativeAutocorrectEnabled:(id)arg1 ;
-(void)setVoiceOverHandwritingWasNativeSpellCheckingEnabled:(id)arg1 ;
-(void)setVoiceOverBrailleGradeTwoAutoTranslateEnabled:(bool)arg1 ;
-(void)setVoiceOverShowSoftwareKeyboardWithBraille:(bool)arg1 ;
-(void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2 ;
-(void)setVoiceOverShouldOutputToHearingAid:(bool)arg1 ;
-(void)setAllowHearingAidControlOnLockScreen:(bool)arg1 ;
-(void)setShouldStreamToLeftAid:(bool)arg1 ;
-(void)setShouldStreamToRightAid:(bool)arg1 ;
-(void)setReduceWhitePointLevel:(float)arg1 ;
-(id)accessibilityFeatureStatus;
-(id)accessibilityTripleClickOptions;
-(id)accessibilityFeatureIDsForTripleClickOptions:(id)arg1 ;
-(void)enableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2 ;
-(void)enableOnlyAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2 ;
-(void)disableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2 ;
-(void)enableAccessibilityTripleClickOptionsForFeatures:(id)arg1 ;
-(void)disableAccessibilityTripleClickOptionsForFeatures:(id)arg1 ;
-(void)setRegisteredNotifications:(id)arg1 ;
-(void)setSynchronizeDomains:(id)arg1 ;
-(void)setUpdateBlocks:(id)arg1 ;
@end

