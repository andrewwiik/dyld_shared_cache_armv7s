/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate.h>

@class SBPasscodeKeyboard, SBUIAlphanumericPasscodeEntryField, UILabel, UIView, SBUIRingViewLabelButton;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {

	SBPasscodeKeyboard* _keyboard;
	SBUIAlphanumericPasscodeEntryField* _alphaEntryField;
	UILabel* _statusField;
	UILabel* _statusSubtitleView;
	UIView* _statusFieldBackground;
	SBUIRingViewLabelButton* _emergencyCallButton;
	UIView* _emergencyCallToTopFiller;
	UIView* _emergencyCallLeftFiller;
	UIView* _emergencyCallRightFiller;
	UIView* _statusFieldToTopOrEmergencyCallBottomFiller;
	UIView* _entryFieldToBottomFiller;
	bool _wasMinimizedWhenAnimationStarted;
	bool _previousKeyboardShowedInlineCandidates;
	bool _disableAnimationsDuringMinMax;
	bool _triedToMinMaxWhileRotating;
	bool _isAnimating;

}

@property (nonatomic,retain) UILabel * statusField;                     //@synthesize statusField=_statusField - In the implementation block
@property (nonatomic,retain) UILabel * statusSubtitleView;              //@synthesize statusSubtitleView=_statusSubtitleView - In the implementation block
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(bool)resignFirstResponder;
-(bool)becomeFirstResponder;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setShowsEmergencyCallButton:(bool)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(id)passcode;
-(double)backgroundAlpha;
-(void)_acceptOrCancelReturnKeyPress;
-(void)setShowsStatusField:(bool)arg1 ;
-(void)_luminanceBoostDidChange;
-(void)_updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3 ;
-(id)_newStatusField;
-(void)setStatusField:(id)arg1 ;
-(CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1 ;
-(void)_hardwareReturnKeyPressed:(id)arg1 ;
-(void)_geometryChanged:(id)arg1 ;
-(void)_handleWillRotateNotification:(id)arg1 ;
-(void)_handleWillAnimateNotification:(id)arg1 ;
-(void)_handleDidRotateNotification:(id)arg1 ;
-(void)_toggleForEmergencyCall;
-(void)_toggleForStatusField;
-(void)_layoutForMinimizationState:(bool)arg1 ;
-(bool)_canMinMaxKeyboard;
-(bool)_isMinimized;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(void)_notifyDelegateThatEmergencyCallButtonWasPressed;
-(id)statusField;
-(id)statusSubtitleView;
-(double)_keyboardToEntryFieldOffset;
-(double)_statusTitleWidth;
-(double)_statusFieldHeight;
-(void)_setMinimized:(bool)arg1 ;
-(void)_minimize;
-(void)_maximize;
-(id)_newStatusSubtitleView;
-(void)setStatusSubtitleView:(id)arg1 ;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
@end

