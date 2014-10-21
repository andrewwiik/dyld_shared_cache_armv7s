/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegListController.h>
#import <CommunicationsSetupUI/CNFRegWizardControllerDelegate.h>
#import <CommunicationsSetupUI/CNFRegViewAccountControllerDelegate.h>
#import <CommunicationsSetupUI/CNFRegFirstRunDelegate.h>

@class PSSpecifier, NSArray, NSString, NSMutableArray, NSNumber;

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate> {

	PSSpecifier* _faceTimeEnabledGroupSpecifier;
	PSSpecifier* _faceTimeEnabledSpecifier;
	NSArray* _accountGroupSpecifiers;
	NSArray* _aliasGroupSpecifiers;
	NSArray* _callerIdGroupSpecifiers;
	PSSpecifier* _addAddressButtonSpecifier;
	NSArray* _replyWithMessageGroupSpecifiers;
	NSArray* _blacklistGroupSpecifiers;
	PSSpecifier* _blankAddressSpecifier;
	NSString* _pendingAddress;
	NSMutableArray* _addresses;
	/*^block*/ id _alertHandler;
	NSNumber* _delayedRefreshAnimatedFlag;
	struct {
		unsigned listeningForFinishedEditingEvents : 1;
		unsigned appeared : 1;
		unsigned ignoringTextFieldChanges : 1;
		unsigned showEnableSwitch : 1;
		unsigned refreshingCallerIdValues : 1;
	}  _settingsFlags;

}

@property (assign,nonatomic) bool showEnableSwitch; 
@property (nonatomic,copy) id alertHandler;                        //@synthesize alertHandler=_alertHandler - In the implementation block
@property (nonatomic,copy) NSString * pendingAddress;              //@synthesize pendingAddress=_pendingAddress - In the implementation block
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)bundle;
-(void)setAlertHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)alertHandler;
-(id)specifierList;
-(id)logName;
-(void)_handleFaceTimeStateChanged;
-(void)_handleFaceTimeCTRegistrationStatusChanged;
-(void)_handleFaceTimeEntitlementStatusChanged;
-(void)_handleDeactivation:(id)arg1 ;
-(id)_appleIDAccounts;
-(id)createSpecifierForAccount:(id)arg1 ;
-(id)_useableAccounts;
-(id)createSpecifierForAlias:(id)arg1 ;
-(id)possibleCallerIdAliases;
-(id)createSpecifierForCallerIdAlias:(id)arg1 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(bool)shouldShowReplyWithMessage;
-(id)pendingAddress;
-(bool)shouldShowBlacklistSettings;
-(void)_updateAddAliasButtonText;
-(id)aliasDetailControllerForSpecifier:(id)arg1 ;
-(void)refreshFaceTimeSettingsAnimated:(bool)arg1 ;
-(void)refreshAllAliasSpecifiers;
-(void)refreshAllCallerIdAliasSpecifiers;
-(void)startEditingTextField;
-(void)_setupAllListeners;
-(void)stopListeningForFinishedEditingEventNotifications;
-(void)stopEditingTextField:(bool)arg1 ;
-(void)_setupAccountHandlers;
-(bool)isShowingBlankAlias;
-(void)showAddAliasButton:(bool)arg1 animated:(bool)arg2 ;
-(void)showBlankAlias:(bool)arg1 animated:(bool)arg2 ;
-(void)startListeningForFinishedEditingEventNotifications;
-(void)returnKeyPressed:(id)arg1 ;
-(void)keyboardDismissed:(id)arg1 ;
-(id)blankAliasTextField;
-(void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(bool*)arg2 ;
-(void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2 ;
-(bool)showEnableSwitch;
-(id)_switchFooterText;
-(void)_updateSwitch;
-(bool)popToFirstRunControllerAnimated:(bool)arg1 ;
-(void)_setupAccountHandlersForDisabling;
-(void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(bool)arg3 ;
-(void)_refreshFaceTimeSettingsDelayed:(id)arg1 ;
-(id)_operationalAccounts;
-(void)refreshAccountsAnimated:(bool)arg1 ;
-(bool)showAccounts:(bool)arg1 animated:(bool)arg2 ;
-(bool)showAliases:(bool)arg1 animated:(bool)arg2 ;
-(bool)showCallerId:(bool)arg1 animated:(bool)arg2 ;
-(void)showBlacklistSettings:(bool)arg1 animated:(bool)arg2 ;
-(void)refreshAliasesAnimated:(bool)arg1 ;
-(void)refreshCallerIdAliasesAnimated:(bool)arg1 ;
-(void)refreshBlacklistSettingsAnimated:(bool)arg1 ;
-(void)refreshEnabledStateAnimated:(bool)arg1 ;
-(bool)_popFromSettingsAnimated:(bool)arg1 ;
-(bool)_canDeselectAlias:(id)arg1 ;
-(void)_showLocaleChooserWithAccount:(id)arg1 ;
-(void)_showViewAccountControllerForAccount:(id)arg1 ;
-(void)_showAccountAlertForAccount:(id)arg1 ;
-(void)_showSignInController;
-(id)getAccountNameForSpecifier:(id)arg1 ;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(id)_specifierIdentifierForAccount:(id)arg1 ;
-(void)_reloadSpecifier:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)accountSpecifiers;
-(void)updateSpecifier:(id)arg1 withAccount:(id)arg2 ;
-(void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(bool)arg3 ;
-(void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_tearDownAllListeners;
-(id)_localeChooserForAccount:(id)arg1 ;
-(void)_updateControllerStateAnimated:(bool)arg1 ;
-(void)_hideLocaleChooser;
-(bool)_shouldShowAliasInfo;
-(id)aliasSpecifiers;
-(void)updateSpecifier:(id)arg1 withAlias:(id)arg2 ;
-(bool)isShowingAddButton;
-(void)setAliasSelected:(id)arg1 ;
-(id)statusForSpecifier:(id)arg1 ;
-(void)refreshAliasSpecifier:(id)arg1 ;
-(long long)indexOfLastSpecifierInGroup:(id)arg1 ;
-(void)_clearBlankAliasField;
-(id)statusForAlias:(id)arg1 ;
-(void)setPendingAddress:(id)arg1 ;
-(id)callerIdAliasSpecifiers;
-(void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2 ;
-(void)setCallerId:(id)arg1 ;
-(void)refreshCallerIdSpecifier:(id)arg1 ;
-(id)_operationalAccountsForService:(long long)arg1 ;
-(long long)groupIdForSpecifier:(id)arg1 ;
-(bool)_shouldUseDisabledHandlers;
-(void)_setupAccountHandlersForDisabledOperation;
-(void)_setupAccountHandlersForNormalOperation;
-(bool)_allAccountsAreDeactivated;
-(void)_updateSwitchDelayed;
-(void)_handleSuccessfulAccountReactivation:(id)arg1 ;
-(void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2 ;
-(void)refreshFaceTimeSettingsWithDelayAnimated:(bool)arg1 ;
-(void)_showAliasValidationError:(id)arg1 ;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(bool)arg2 ;
-(void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 ;
-(void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2 ;
-(id)getFaceTimeEnabledForSpecifier:(id)arg1 ;
-(void)setShowEnableSwitch:(bool)arg1 ;
-(void)showAllSettings:(bool)arg1 animated:(bool)arg2 ;
-(void)clearAccountCache;
-(bool)additionalAliasesAvailable;
-(id)aliasForSpecifier:(id)arg1 ;
-(void)addAddressTapped:(id)arg1 ;
-(id)getAddAliasTextForSpecifier:(id)arg1 ;
-(void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pendingAddressForSpecifier:(id)arg1 ;
-(void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2 ;
-(id)aliasWithIdentifier:(id)arg1 ;
-(void)showReplyWithMessage:(bool)arg1 animated:(bool)arg2 ;
-(long long)groupIdForSpecifierId:(id)arg1 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(id)customTitle;
-(void)formSheetViewWillDisappear;
-(bool)shouldReloadSpecifiersOnResume;
-(void)formSheetViewDidDisappear;
@end

