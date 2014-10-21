/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <DataAccessUI/DAValidityCheckConsumer.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class DAAccount;

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate> {

	DAAccount* _account;
	bool _isSettingUpNewAccount;
	bool _accountNeedsAdd;
	bool _attemptedValidation;
	bool _validatedSuccessfully;
	bool _confirmedUnvalidatedAccount;
	bool _needsSave;
	bool _haveRegisteredForAccountsChanged;
	bool _transitioningToFinishedAccountSetup;
	bool _didSetFullHostURL;

}

@property (assign,nonatomic) bool didSetFullHostURL;              //@synthesize didSetFullHostURL=_didSetFullHostURL - In the implementation block
@property (assign) bool needsSave;                                //@synthesize needsSave=_needsSave - In the implementation block
@property (assign) bool attemptedValidation;                      //@synthesize attemptedValidation=_attemptedValidation - In the implementation block
@property (nonatomic,readonly) DAAccount * account; 
-(void)doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(id)lastGroupSpecifierInSpecifiers:(id)arg1 ;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)setNeedsSaveAndValidation:(bool)arg1 ;
-(id)localizedAccountTitleString;
-(void)showIdenticalAccountFailureView;
-(void)hideProgressWithPrompt:(id)arg1 ;
-(int)indexOfCurrentlyEditingCell;
-(id)currentlyEditingCell;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(bool)transitionsAfterInitialSetup;
-(id)_defaultAccountDescription;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)updateDoneButton;
-(void)propertyValueChanged:(id)arg1 ;
-(bool)validateAccount;
-(bool)haveEnoughValues;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4 ;
-(void)finishedAccountSetup;
-(id)accountSpecifiers;
-(void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3 ;
-(id)accountFromSpecifier;
-(void)reloadAccount;
-(void)didConfirmTryWithoutSSL:(bool)arg1 ;
-(void)_beginAccountValidation;
-(void)didConfirmSaveUnvalidatedAccount:(bool)arg1 ;
-(bool)dismissesAfterInitialSetup;
-(void)_confirmSaveUnvalidatedAccount;
-(void)_saveAccountDismissWhenDone:(bool)arg1 ;
-(void)setDidSetFullHostURL:(bool)arg1 ;
-(bool)didSetFullHostURL;
-(void)setHostString:(id)arg1 ;
-(void)_dismissAndUpdateParent;
-(void)_finishSaveAccountDismissWhenDone:(bool)arg1 ;
-(bool)isRunningFromMobileMailApp;
-(void)_deleteAccount;
-(id)daAccountWithBackingAccountInfo:(id)arg1 ;
-(void)showSSLFailureView;
-(void)deleteAccountButtonTapped;
-(bool)needsSave;
-(void)setNeedsSave:(bool)arg1 ;
-(bool)attemptedValidation;
-(void)setAttemptedValidation:(bool)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(id)account;
-(id)specifiers;
@end

