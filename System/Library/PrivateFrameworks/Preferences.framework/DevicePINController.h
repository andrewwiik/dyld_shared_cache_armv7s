/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSDetailController.h>

@class NSString, UIBarButtonItem;

@interface DevicePINController : PSDetailController {

	int _mode;
	int _substate;
	NSString* _oldPassword;
	NSString* _lastEntry;
	bool _success;
	id _pinDelegate;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _nextButton;
	UIBarButtonItem* _doneButton;
	NSString* _error1;
	NSString* _error2;
	bool _hidesNavigationButtons;

}

@property (assign,nonatomic) <DevicePINControllerDelegate> * pinDelegate;              //@synthesize pinDelegate=_pinDelegate - In the implementation block
@property (assign,nonatomic) bool hidesNavigationButtons;                              //@synthesize hidesNavigationButtons=_hidesNavigationButtons - In the implementation block
+(bool)settingEnabled;
-(bool)isBlocked;
-(bool)success;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)_dismiss;
-(void)setPane:(id)arg1 ;
-(void)setLastEntry:(id)arg1 ;
-(void)willUnlock;
-(CGRect)paneFrame;
-(bool)requiresKeyboard;
-(bool)useProgressiveDelays;
-(CFStringRef)defaultsID;
-(void)_updateUI;
-(CGSize)overallContentSizeForViewInPopover;
-(CGSize)pinContentSizeForViewInPopover;
-(bool)validatePIN:(id)arg1 ;
-(int)_getScreenType;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(double)unblockTime;
-(void)_clearBlockedState;
-(int)numberOfFailedAttempts;
-(void)_setNumberOfFailedAttempts:(int)arg1 ;
-(void)_setUnblockTime:(double)arg1 ;
-(id)stringsBundle;
-(id)stringsTable;
-(void)_showFailedAttempts;
-(void)_updateErrorTextAndFailureCount:(bool)arg1 ;
-(void)cancelButtonTapped;
-(bool)simplePIN;
-(void)adjustButtonsForPasswordLength:(unsigned long long)arg1 ;
-(void)_updatePINButtons;
-(bool)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)_slidePasscodeField;
-(void)_showUnacceptablePINError:(id)arg1 password:(id)arg2 ;
-(bool)completedInputIsValid:(id)arg1 ;
-(void)performActionAfterPINSet;
-(id)pinDelegate;
-(bool)_asyncSetPinCompatible;
-(void)setPIN:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setPIN:(id)arg1 ;
-(void)_showPINConfirmationError;
-(bool)attemptValidationWithPIN:(id)arg1 ;
-(void)setOldPassword:(id)arg1 ;
-(void)performActionAfterPINRemove;
-(void)performActionAfterPINEntry;
-(int)pinLength;
-(void)pinEntered:(id)arg1 ;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
-(void)setPinDelegate:(id)arg1 ;
-(bool)hidesNavigationButtons;
-(void)setHidesNavigationButtons:(bool)arg1 ;
-(void)setSuccess:(bool)arg1 ;
@end
