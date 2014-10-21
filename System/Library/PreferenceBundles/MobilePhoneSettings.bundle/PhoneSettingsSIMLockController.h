/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhoneSettings/PhoneSettingsListController.h>
#import <MobilePhoneSettings/PHSIMPINUnlockViewControllerDelegate.h>
#import <MobilePhoneSettings/PHSIMPINChangeViewControllerDelegate.h>

@class UINavigationController, PHSIMPINUnlockViewController, PHSIMPINChangeViewController;

@interface PhoneSettingsSIMLockController : PhoneSettingsListController <PHSIMPINUnlockViewControllerDelegate, PHSIMPINChangeViewControllerDelegate> {

	UINavigationController* _unlockPINNavigationController;
	PHSIMPINUnlockViewController* _unlockPINViewController;
	UINavigationController* _changePINNavigationController;
	PHSIMPINChangeViewController* _changePINViewController;

}

@property (retain) UINavigationController * unlockPINNavigationController;              //@synthesize unlockPINNavigationController=_unlockPINNavigationController - In the implementation block
@property (retain) PHSIMPINUnlockViewController * unlockPINViewController;              //@synthesize unlockPINViewController=_unlockPINViewController - In the implementation block
@property (retain) UINavigationController * changePINNavigationController;              //@synthesize changePINNavigationController=_changePINNavigationController - In the implementation block
@property (retain) PHSIMPINChangeViewController * changePINViewController;              //@synthesize changePINViewController=_changePINViewController - In the implementation block
-(void)_applicationSuspended:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(bool)arg1 ;
-(void)setChangePINViewController:(id)arg1 ;
-(id)changePINViewController;
-(void)PHSIMPINChangeViewControllerCanceled:(id)arg1 ;
-(void)PHSIMPINChangeViewControllerFinishedSuccessfully:(id)arg1 ;
-(void)PHSIMPINChangeViewControllerFailedWithZeroAttemptsRemaining:(id)arg1 ;
-(void)updateCellStates;
-(void)_simLockChanged:(id)arg1 ;
-(void)_simReady:(id)arg1 ;
-(id)unlockPINViewController;
-(void)setUnlockPINViewController:(id)arg1 ;
-(void)setUnlockPINNavigationController:(id)arg1 ;
-(id)unlockPINNavigationController;
-(void)setChangePINNavigationController:(id)arg1 ;
-(id)changePINNavigationController;
-(id)isSIMLocked:(id)arg1 ;
-(void)_dismissChangeController;
-(void)_dismissUnlockController;
-(void)SIMPINUnlockViewController:(id)arg1 finishedSuccessfullyWithSIMLocked:(bool)arg2 ;
-(void)SIMPINUnlockViewControllerCanceled:(id)arg1 ;
-(void)SIMPINUnlockViewControllerFailedWithZeroAttemptsRemaining:(id)arg1 ;
-(void)setIsSIMLocked:(id)arg1 specifier:(id)arg2 ;
-(void)changePIN:(id)arg1 ;
-(id)specifiers;
@end

