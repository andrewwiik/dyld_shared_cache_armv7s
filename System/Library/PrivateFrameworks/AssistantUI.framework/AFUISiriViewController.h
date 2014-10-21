/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <AssistantUI/AFUISiriRemoteViewControllerDataSource.h>
#import <AssistantUI/AFUISiriRemoteViewControllerDelegate.h>
#import <AssistantUI/AFUISiriViewDelegate.h>
#import <AssistantUI/SiriUIAudioRoutePickerControllerDelegate.h>
#import <AssistantUI/AFUISiriSessionLocalDataSource.h>
#import <AssistantUI/AFUISiriSessionLocalDelegate.h>

@protocol AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate, OS_dispatch_queue;
@class AFUISiriSession, AFUISiriRemoteViewController, NSObject, SiriUIAudioRoutePickerController, UIStatusBar, NSTimer, AFUIRequestOptions, NSNumber, AFUISiriView, AFUIDialogPhase;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate> {

	bool _attemptingRemoteViewControllerPresentation;
	bool _visible;
	bool _eyesFree;
	bool _isStark;
	bool _showsStatusBar;
	bool _statusBarEnabled;
	bool _mapsGatekeeperEnabled;
	bool _hasCalledBeginAppearanceTransition;
	bool _hasCalledEndAppearanceTransition;
	bool _inHoldToTalkMode;
	<AFUISiriViewControllerDataSource>* _dataSource;
	<AFUISiriViewControllerDelegate>* _delegate;
	AFUISiriSession* _session;
	AFUISiriRemoteViewController* _remoteViewController;
	NSObject<OS_dispatch_queue>* _remoteViewControllerDispatchQueue;
	SiriUIAudioRoutePickerController* _routePickerController;
	UIStatusBar* _statusBar;
	NSTimer* _manualEndpointTimer;
	AFUIRequestOptions* _currentRequestOptions;
	NSNumber* _recordingStartedTimeValue;

}

@property (assign,nonatomic,__weak) <AFUISiriViewControllerDataSource> * dataSource;                                                                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) <AFUISiriViewControllerDelegate> * delegate;                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) bool visible;                                                                                                                  //@synthesize visible=_visible - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) bool eyesFree;                                                                                                                //@synthesize eyesFree=_eyesFree - In the implementation block
@property (assign,nonatomic) bool isStark;                                                                                                                                   //@synthesize isStark=_isStark - In the implementation block
@property (assign,nonatomic) bool showsStatusBar;                                                                                                                            //@synthesize showsStatusBar=_showsStatusBar - In the implementation block
@property (assign,nonatomic) bool statusBarEnabled;                                                                                                                          //@synthesize statusBarEnabled=_statusBarEnabled - In the implementation block
@property (assign,nonatomic) bool mapsGatekeeperEnabled;                                                                                                                     //@synthesize mapsGatekeeperEnabled=_mapsGatekeeperEnabled - In the implementation block
@property (nonatomic,readonly) bool hasScreenSnapshot; 
@property (nonatomic,retain) AFUISiriView * view; 
@property (nonatomic,readonly) AFUIDialogPhase * dialogPhase; 
@property (getter=_session,nonatomic,readonly) AFUISiriSession * session;                                                                                                    //@synthesize session=_session - In the implementation block
@property (getter=_remoteViewController,nonatomic,readonly) AFUISiriRemoteViewController * remoteViewController;                                                             //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (getter=_remoteViewControllerDispatchQueue,nonatomic,readonly) NSObject<OS_dispatch_queue> * remoteViewControllerDispatchQueue;                                    //@synthesize remoteViewControllerDispatchQueue=_remoteViewControllerDispatchQueue - In the implementation block
@property (assign,setter=_setHasCalledBeginAppearanceTransition:,getter=_hasCalledBeginAppearanceTransition,nonatomic) bool hasCalledBeginAppearanceTransition;              //@synthesize hasCalledBeginAppearanceTransition=_hasCalledBeginAppearanceTransition - In the implementation block
@property (assign,setter=_setHasCalledEndAppearanceTransition:,getter=_hasCalledEndAppearanceTransition,nonatomic) bool hasCalledEndAppearanceTransition;                    //@synthesize hasCalledEndAppearanceTransition=_hasCalledEndAppearanceTransition - In the implementation block
@property (nonatomic,retain) SiriUIAudioRoutePickerController * routePickerController;                                                                                       //@synthesize routePickerController=_routePickerController - In the implementation block
@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;                                                                                //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,setter=_setInHoldToTalkMode:,getter=_isInHoldToTalkMode,nonatomic) bool inHoldToTalkMode;                                                                  //@synthesize inHoldToTalkMode=_inHoldToTalkMode - In the implementation block
@property (setter=_setManualEndpointTimer:,getter=_manualEndpointTimer,nonatomic,retain) NSTimer * manualEndpointTimer;                                                      //@synthesize manualEndpointTimer=_manualEndpointTimer - In the implementation block
@property (setter=_setCurrentRequestOptions:,getter=_currentRequestOptions,nonatomic,copy) AFUIRequestOptions * currentRequestOptions;                                       //@synthesize currentRequestOptions=_currentRequestOptions - In the implementation block
@property (setter=_setRecordingStartedTimeValue:,getter=_recordingStartedTimeValue,nonatomic,retain) NSNumber * recordingStartedTimeValue;                                   //@synthesize recordingStartedTimeValue=_recordingStartedTimeValue - In the implementation block
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)dataSource;
-(id)delegate;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)setVisible:(bool)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(bool)isVisible;
-(void).cxx_destruct;
-(void)endSession;
-(void)preheat;
-(void)_sendBeginAppearanceTransitionIfReadyAnimated:(bool)arg1 ;
-(void)_sendEndAppearanceTransitionIfReady;
-(id)initWithConnection:(id)arg1 ;
-(void)siriViewDidReceiveAudioRouteAction:(id)arg1 ;
-(void)siriViewDidReceiveReportBugAction:(id)arg1 ;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg1 ;
-(void)siriViewDidReceiveHelpAction:(id)arg1 ;
-(bool)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(float)audioRecordingPowerLevelForSiriView:(id)arg1 ;
-(void)siriViewDidReceiveStartSpeechRequestAction:(id)arg1 ;
-(void)siriViewDidReceiveStopRecordingSpeechAction:(id)arg1 ;
-(void)siriViewDidReceiveCancelSpeechRequestAction:(id)arg1 ;
-(void)siriView:(id)arg1 didReceiveStartSpeechRequestWithTrigger:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(void)dismissSiriRemoteViewController:(id)arg1 ;
-(void)startGuidedAccessForRemoteViewController:(id)arg1 ;
-(id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2 ;
-(void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1 ;
-(bool)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 ;
-(void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(bool)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(bool)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(bool)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(bool)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(bool)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(bool)arg2 ;
-(void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(bool)arg2 ;
-(void)siriRemoteViewControllerPulseHelpButton:(id)arg1 ;
-(bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(bool)arg3 ;
-(bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(bool)arg4 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 ;
-(void)siriDidDeactivate;
-(void)userInteractionDidOccur;
-(void)setIsStark:(bool)arg1 ;
-(void)setLockState:(unsigned long long)arg1 ;
-(void)startRequestWithOptions:(id)arg1 ;
-(void)stopRequestWithOptions:(id)arg1 ;
-(void)updateRequestOptions:(id)arg1 ;
-(void)telephonyRequestCompleted;
-(void)siriSession:(id)arg1 didChangeToState:(long long)arg2 ;
-(id)bulletinsForSiriSession:(id)arg1 ;
-(void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(/*^block*/ id)arg2 ;
-(bool)isPreventingActivationGesture;
-(bool)isListening;
-(id)underlyingConnection;
-(bool)isEyesFree;
-(id)_session;
-(bool)statusBarEnabled;
-(void)_addStatusBar;
-(void)_removeStatusBar;
-(id)_remoteViewController;
-(void)_enqueueRemoteViewControllerMessageBlock:(/*^block*/ id)arg1 ;
-(CGRect)_statusBarFrame;
-(void)_setStatusBar:(id)arg1 ;
-(void)_updateAudioRoutePicker;
-(bool)hasScreenSnapshot;
-(void)_setHasCalledBeginAppearanceTransition:(bool)arg1 ;
-(void)_setHasCalledEndAppearanceTransition:(bool)arg1 ;
-(void)_presentRemoteViewController;
-(bool)_hasCalledBeginAppearanceTransition;
-(bool)_hasCalledEndAppearanceTransition;
-(void)setShowsStatusBar:(bool)arg1 ;
-(void)defrost;
-(void)_setCurrentRequestOptions:(id)arg1 ;
-(void)_setRecordingStartedTimeValue:(id)arg1 ;
-(id)_manualEndpointTimer;
-(bool)_isInHoldToTalkMode;
-(id)_currentRequestOptions;
-(bool)_holdToTalkThresholdHasElapsed;
-(void)_transitionToAutomaticEndpointMode;
-(id)_recordingStartedTimeValue;
-(double)_manualEndpointingThreshold;
-(void)_manualEndpointTimerFired:(id)arg1 ;
-(void)_setManualEndpointTimer:(id)arg1 ;
-(void)_setInHoldToTalkMode:(bool)arg1 ;
-(void)_exitHoldToTalkMode;
-(void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1 ;
-(void)_activationTriggerDidRelease:(id)arg1 ;
-(void)_enterHoldToTalkMode;
-(void)startRequestWithActivationTrigger:(id)arg1 ;
-(bool)isStark;
-(id)_routePickerController;
-(void)_setShowAudioRoutePicker:(bool)arg1 ;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/ id)arg1 ;
-(unsigned long long)lockStateForSiriRemoteViewController:(id)arg1 ;
-(void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2 ;
-(void)routePickerController:(id)arg1 hasRoutesToPick:(bool)arg2 ;
-(void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(bool)arg2 ;
-(void)presentRemoteViewControllerIfNecessary;
-(void)updateAlertAndApplicationContexts;
-(void)setOverriddenApplicationContext:(id)arg1 ;
-(bool)hasQueuedTTS;
-(bool)showsStatusBar;
-(void)setStatusBarEnabled:(bool)arg1 ;
-(bool)mapsGatekeeperEnabled;
-(void)setMapsGatekeeperEnabled:(bool)arg1 ;
-(id)_remoteViewControllerDispatchQueue;
-(id)routePickerController;
-(void)setRoutePickerController:(id)arg1 ;
-(id)_statusBar;
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(id)dialogPhase;
-(void)setEyesFree:(bool)arg1 ;
-(void)setAlertContext;
-(void)resetContext;
@end

