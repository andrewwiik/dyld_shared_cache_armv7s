/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUISiriViewControllerDelegate <NSObject>
@required
-(void)siriViewControllerDidChangeVisibility:(id)arg1;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2;
-(void)dismissSiriViewController:(id)arg1;
-(void)startGuidedAccessForSiriViewController:(id)arg1;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1;
-(bool)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3;
-(void)notifyOnNextUserInteractionForSiriViewController:(id)arg1;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
-(bool)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(bool)arg3;
-(bool)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(bool)arg4;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;
-(bool)siriViewControllerShouldEndSession:(id)arg1;
-(bool)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(void)siriViewControllerDidChangeListeningState:(id)arg1;
@end
