/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <AssistantUI/SVSSiriViewControllerHosting.h>

@protocol AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate;
@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting> {

	<AFUISiriRemoteViewControllerDataSource>* _dataSource;
	<AFUISiriRemoteViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <AFUISiriRemoteViewControllerDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) <AFUISiriRemoteViewControllerDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/ id)arg1 ;
-(void)setSession:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)setStatusBarHidden:(bool)arg1 ;
-(void).cxx_destruct;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setStatusViewHidden:(bool)arg1 ;
-(void)setCarDisplaySnippetVisible:(bool)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(bool)arg1 ;
-(void)setBugReportingAvailable:(bool)arg1 ;
-(void)setHelpButtonEmphasized:(bool)arg1 ;
-(void)pulseHelpButton;
-(void)serviceRequestsDismissal;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/ id)arg2 ;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1 ;
-(void)serviceStartRequestWithOptions:(id)arg1 ;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)notifyOnNextUserInteraction;
-(void)siriIdleAndQuietStatusDidChange:(bool)arg1 ;
-(void)setStatusViewDisabled:(bool)arg1 ;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(bool)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(bool)arg3 ;
-(void)getScreenshotWithReplyHandler:(/*^block*/ id)arg1 ;
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)setRequestOptions:(id)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 ;
-(void)siriDidDeactivate;
-(void)siriWillShowPasscodeUnlock;
-(void)siriWillHidePasscodeUnlock;
-(void)siriDidHidePasscodeUnlock;
-(void)userInteractionDidOccur;
-(void)setSpeechSynthesis:(id)arg1 ;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(id)sessionDelegate;
-(id)speechSynthesisDelegate;
-(void)setStatusBarFrame:(CGRect)arg1 ;
@end

