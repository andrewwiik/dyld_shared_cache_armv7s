/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIFont, UIAlertView;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {

	double _cellTextWidth;
	UIFont* _cellFont;
	UIAlertView* _disableRecoveryConfirmationAlert;
	bool _showsDisableRecoveryOption;

}

@property (assign,nonatomic) bool showsDisableRecoveryOption;              //@synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption - In the implementation block
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
-(void)nextPressed;
-(void)setShowsDisableRecoveryOption:(bool)arg1 ;
-(void)_finishedWithSpecifier:(id)arg1 ;
-(bool)showsDisableRecoveryOption;
@end

