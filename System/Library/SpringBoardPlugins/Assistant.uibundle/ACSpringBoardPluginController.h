/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIPluginController.h>
#import <Assistant/ACBulletinManagerDelegate.h>
#import <Assistant/ACHeaterDelegate.h>
#import <Assistant/AFUISiriLanguageDelegate.h>
#import <Assistant/AFUISiriViewControllerDataSource.h>
#import <Assistant/AFUISiriViewControllerDelegate.h>

@class AFConnection, AFUISiriViewController, AFUISiriLanguage, ACAssistantEducationAlertManager, ACBulletinManager, ACHeater, NSString, AFUIQueue, BluetoothDevice, CMGestureManager, AFUIDialogPhase, NSTimer;

@interface ACSpringBoardPluginController : SBUIPluginController <ACBulletinManagerDelegate, ACHeaterDelegate, AFUISiriLanguageDelegate, AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate> {

	/*^block*/ id _buttonTrigger;
	AFConnection* _unownedConnection;
	AFUISiriViewController* _siriViewController;
	bool _delaySessionForTTS;
	bool _proxForGestureEnabled;
	bool _waitingForUserEvent;
	bool _springBoardIdleTimerDisabled;
	bool _startGuidedAccessOnDismissal;
	bool _waitingForTelephonyToStart;
	bool _wasLockedAtWantsActivation;
	AFUISiriLanguage* _language;
	ACAssistantEducationAlertManager* _educationAlertManager;
	ACBulletinManager* _bulletinManager;
	ACHeater* _heater;
	NSString* _presentationIdentifier;
	long long _lastSpeechEvent;
	AFUIQueue* _testInputQueue;
	BluetoothDevice* _bluetoothDevice;
	CMGestureManager* _motionGestureManager;
	double _preparationTimestamp;
	double _lastDismissalTimestamp;
	AFUIDialogPhase* _dismissalDialogPhase;
	double _carSiriButtonTimeInterval;
	NSTimer* _carSiriButtonHoldToTalkTimer;

}

@property (getter=_language,nonatomic,readonly) AFUISiriLanguage * language;                                                                                    //@synthesize language=_language - In the implementation block
@property (getter=_educationAlertManager,nonatomic,readonly) ACAssistantEducationAlertManager * educationAlertManager;                                          //@synthesize educationAlertManager=_educationAlertManager - In the implementation block
@property (getter=_bulletinManager,nonatomic,readonly) ACBulletinManager * bulletinManager;                                                                     //@synthesize bulletinManager=_bulletinManager - In the implementation block
@property (getter=_heater,nonatomic,readonly) ACHeater * heater;                                                                                                //@synthesize heater=_heater - In the implementation block
@property (setter=_setPresentationIdentifier:,getter=_presentationIdentifier,nonatomic,retain) NSString * presentationIdentifier;                               //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
@property (assign,setter=_setProxForGestureEnabled:,getter=_isProxForGestureEnabled,nonatomic) bool proxForGestureEnabled;                                      //@synthesize proxForGestureEnabled=_proxForGestureEnabled - In the implementation block
@property (assign,setter=_setLastSpeechEvent:,getter=_lastSpeechEvent,nonatomic) long long lastSpeechEvent;                                                     //@synthesize lastSpeechEvent=_lastSpeechEvent - In the implementation block
@property (getter=_testInputQueue,nonatomic,readonly) AFUIQueue * testInputQueue;                                                                               //@synthesize testInputQueue=_testInputQueue - In the implementation block
@property (assign,getter=_isWaitingForUserEvent,nonatomic) bool waitingForUserEvent;                                                                            //@synthesize waitingForUserEvent=_waitingForUserEvent - In the implementation block
@property (assign,setter=_setSpringBoardIdleTimerDisabled:,getter=_isSpringBoardIdleTimerDisabled,nonatomic) bool springBoardIdleTimerDisabled;                 //@synthesize springBoardIdleTimerDisabled=_springBoardIdleTimerDisabled - In the implementation block
@property (setter=_setBluetoothDevice:,getter=_bluetoothDevice,nonatomic,retain) BluetoothDevice * bluetoothDevice;                                             //@synthesize bluetoothDevice=_bluetoothDevice - In the implementation block
@property (setter=_setMotionGestureManager:,getter=_motionGestureManager,nonatomic,retain) CMGestureManager * motionGestureManager;                             //@synthesize motionGestureManager=_motionGestureManager - In the implementation block
@property (assign,setter=_setPreparationTimestamp:,getter=_preparationTimestamp,nonatomic) double preparationTimestamp;                                         //@synthesize preparationTimestamp=_preparationTimestamp - In the implementation block
@property (assign,setter=_setLastDismissalTimestamp:,getter=_lastDismissalTimestamp,nonatomic) double lastDismissalTimestamp;                                   //@synthesize lastDismissalTimestamp=_lastDismissalTimestamp - In the implementation block
@property (setter=_setDismissalDialogPhase:,getter=_dismissalDialogPhase,nonatomic,retain) AFUIDialogPhase * dismissalDialogPhase;                              //@synthesize dismissalDialogPhase=_dismissalDialogPhase - In the implementation block
@property (assign,setter=_setStartGuidedAccessOnDismissal:,getter=_startGuidedAccessOnDismissal,nonatomic) bool startGuidedAccessOnDismissal;                   //@synthesize startGuidedAccessOnDismissal=_startGuidedAccessOnDismissal - In the implementation block
@property (assign,setter=_setWaitingForTelephonyToStart:,getter=_isWaitingForTelephonyToStart,nonatomic) bool waitingForTelephonyToStart;                       //@synthesize waitingForTelephonyToStart=_waitingForTelephonyToStart - In the implementation block
@property (assign,setter=_setWasLockedAtWantsActivation:,getter=_wasLockedAtWantsActivation,nonatomic) bool wasLockedAtWantsActivation;                         //@synthesize wasLockedAtWantsActivation=_wasLockedAtWantsActivation - In the implementation block
@property (assign,setter=_setCarSiriButtonTimeInterval:,getter=_carSiriButtonTimeInterval,nonatomic) double carSiriButtonTimeInterval;                          //@synthesize carSiriButtonTimeInterval=_carSiriButtonTimeInterval - In the implementation block
@property (setter=_setCarSiriButtonHoldToTalkTimer:,getter=_carSiriButtonHoldToTalkTimer,nonatomic,retain) NSTimer * carSiriButtonHoldToTalkTimer;              //@synthesize carSiriButtonHoldToTalkTimer=_carSiriButtonHoldToTalkTimer - In the implementation block
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)_preferencesDidChange:(id)arg1 ;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(void)siriViewControllerDidChangeVisibility:(id)arg1 ;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2 ;
-(id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(unsigned long long)lockStateForSiriViewController:(id)arg1 ;
-(void)dismissSiriViewController:(id)arg1 ;
-(void)startGuidedAccessForSiriViewController:(id)arg1 ;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1 ;
-(bool)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 ;
-(void)notifyOnNextUserInteractionForSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2 ;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(bool)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(bool)arg3 ;
-(bool)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(bool)arg4 ;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2 ;
-(bool)siriViewControllerShouldEndSession:(id)arg1 ;
-(bool)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(id)bulletinsForSiriViewController:(id)arg1 ;
-(void)siriViewControllerDidChangeListeningState:(id)arg1 ;
-(bool)supportedAndEnabled;
-(bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
-(bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(bool)handledPasscodeUnlockWithCompletion:(/*^block*/ id)arg1 ;
-(void)handleBluetoothDismissal;
-(void)handlePreheatCommand;
-(bool)handledButtonDownEventFromSource:(int)arg1 ;
-(bool)handledButtonUpEventFromSource:(int)arg1 ;
-(bool)handledButtonTapFromSource:(int)arg1 ;
-(id)viewControllerForActivationContext:(id)arg1 ;
-(void)heaterSuggestsDefrosting:(id)arg1 ;
-(void)heaterSuggestsPreheating:(id)arg1 ;
-(void)bulletinManagerDidChangeBulletins:(id)arg1 ;
-(void)_updateLanguageCode;
-(void)_proximityDidChange:(id)arg1 ;
-(void)_lockStateDidChange:(id)arg1 ;
-(void)_applicationURLWillOpen:(id)arg1 ;
-(void)_testingStringsDidChange:(id)arg1 ;
-(void)_testingAudioInputPathsDidChange:(id)arg1 ;
-(void)_updateMotionGestureListening;
-(id)_language;
-(bool)_supportsActivationEvent:(int)arg1 ;
-(double)_intervalForActivationEvent:(int)arg1 ;
-(void)_setWasLockedAtWantsActivation:(bool)arg1 ;
-(void)_setPreparationTimestamp:(double)arg1 ;
-(id)_heater;
-(bool)_presentationIsEyesFree;
-(void)_clearSiriViewController;
-(id)_siriViewController;
-(id)_presentationIdentifier;
-(bool)_wasLockedAtWantsActivation;
-(double)_preparationTimestamp;
-(void)_setPresentationIdentifier:(id)arg1 ;
-(void)_setBluetoothDevice:(id)arg1 ;
-(unsigned long long)_lockState;
-(void)_endDelayingSessionEndForTTS;
-(void)_setProxForGestureEnabled:(bool)arg1 ;
-(double)_lastDismissalTimestamp;
-(id)_dismissalDialogPhase;
-(void)_startRequestWithOptions:(id)arg1 ;
-(void)_updateExpectsFaceContact;
-(void)_requestDismissal;
-(void)_setLastDismissalTimestamp:(double)arg1 ;
-(void)_setDismissalDialogPhase:(id)arg1 ;
-(bool)_isDelayingSessionEnd;
-(void)_endBTVoiceSession;
-(bool)_startGuidedAccessOnDismissal;
-(void)_setStartGuidedAccessOnDismissal:(bool)arg1 ;
-(void)_wasDismissed;
-(id)_bluetoothDevice;
-(void)_preheat;
-(bool)_cancelPendingPhoneCall;
-(void)_setCarSiriButtonTimeInterval:(double)arg1 ;
-(void)_carSiriButtonHoldToTalkIntervalFired:(id)arg1 ;
-(void)_setCarSiriButtonHoldToTalkTimer:(id)arg1 ;
-(bool)_sourceIsHoldToTalkTrigger:(int)arg1 ;
-(bool)_releaseExistingTrigger;
-(double)_carSiriButtonTimeInterval;
-(id)_currentConnection;
-(bool)_isWaitingForTelephonyToStart;
-(void)_setWaitingForTelephonyToStart:(bool)arg1 ;
-(void)_applicationURLDidOpen:(id)arg1 ;
-(void)_displayDidLaunch:(id)arg1 ;
-(void)_activeCallStateDidChange:(id)arg1 ;
-(void)_sendTelephonyHasStartedAfterDelay:(double)arg1 ;
-(void)_telephonyHasStarted;
-(void)_applicationDidLaunch;
-(void)_ttsQueueDidEmpty:(id)arg1 ;
-(id)_testInputQueue;
-(void)_dequeueAllTestInputs;
-(void)_enqueueTestInput:(id)arg1 ;
-(void)_deletePersistedConversation;
-(void)_activationSettingsDidChange;
-(void)setWaitingForUserEvent:(bool)arg1 ;
-(bool)_isWaitingForUserEvent;
-(void)_setSpringBoardIdleTimerDisabled:(bool)arg1 ;
-(id)_bulletinManager;
-(bool)_hasTestInput;
-(id)_dequeueTestInput;
-(void)_sbUserEvent:(id)arg1 ;
-(void)_beginDelayingSessionEndForTTS;
-(void)_beginListeningForAssistantActivationGesture;
-(void)_stopListeningForAssistantActivationGesture;
-(bool)_isProxForGestureEnabled;
-(id)_motionGestureManager;
-(void)_setMotionGestureManager:(id)arg1 ;
-(void)_passcodeLockStateDidChange;
-(bool)_wantsToActivateWithActivationEvent:(int)arg1 ;
-(id)_educationAlertManager;
-(long long)_lastSpeechEvent;
-(void)_setLastSpeechEvent:(long long)arg1 ;
-(bool)_isSpringBoardIdleTimerDisabled;
-(id)_carSiriButtonHoldToTalkTimer;
@end

