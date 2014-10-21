/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <MessageUI/MFComposeRecipientView.h>
#import <ChatKit/CKOverlayViewProtocol.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>

@class IMService, NSMutableDictionary, UIActionSheet, UIResponder, CKScheduledUpdater;

@interface CKComposeRecipientView : MFComposeRecipientView <CKOverlayViewProtocol, ABPeoplePickerNavigationControllerDelegate> {

	IMService* _preferredService;
	/*^block*/ id _sendBlock;
	bool _autoSendUponResolving;
	bool _atomizedForAutoSend;
	bool _resolvedForAutoSend;
	bool _canSend;
	BOOL _serviceError;
	bool _alreadyShowedAlertForTooManyRecipientsError;
	NSMutableDictionary* _recipientAvailabilityTimeoutTimers;
	UIActionSheet* _actionSheet;
	bool _forceMMS;
	UIResponder* _nextResponder;
	CKScheduledUpdater* _IDSQueryUpdater;

}

@property (assign,nonatomic) bool forceMMS;                                     //@synthesize forceMMS=_forceMMS - In the implementation block
@property (assign,nonatomic) UIResponder * nextResponder;                       //@synthesize nextResponder=_nextResponder - In the implementation block
@property (nonatomic,retain) IMService * preferredService;                      //@synthesize preferredService=_preferredService - In the implementation block
@property (assign,nonatomic) bool canSend;                                      //@synthesize canSend=_canSend - In the implementation block
@property (assign,nonatomic) BOOL serviceError;                                 //@synthesize serviceError=_serviceError - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                       //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * IDSQueryUpdater;              //@synthesize IDSQueryUpdater=_IDSQueryUpdater - In the implementation block
+(double)separatorHeight;
+(double)shadowHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)nextResponder;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)reset;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)customOverlayContainer;
-(id)atomViewForRecipient:(id)arg1 ;
-(bool)canInsertMoreRecipients;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(void)setNextResponder:(id)arg1 ;
-(void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
-(void)updateRecipientLimit;
-(bool)finishedComposingRecipients;
-(bool)forceMMS;
-(void)setForceMMS:(bool)arg1 ;
-(id)preferredService;
-(void)showErrorAlertForTooManyRecipientsUponSendIfNecessary;
-(void)atomizeAndInvokeBlock:(/*^block*/ id)arg1 ;
-(void)removeRecipients;
-(void)batchAddRecipients:(id)arg1 ;
-(id)actionSheet;
-(void)setActionSheet:(id)arg1 ;
-(void)handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)updateForPreferredServiceChange;
-(void)setIDSQueryUpdater:(id)arg1 ;
-(void)_showActionSheetForAtom:(id)arg1 animated:(bool)arg2 ;
-(void)setCanSend:(bool)arg1 ;
-(void)setServiceError:(BOOL)arg1 ;
-(void)setPreferredService:(id)arg1 ;
-(unsigned long long)atomPresentationOptionsForRecipient:(id)arg1 ;
-(bool)hasPendingAtoms;
-(void)_autoSendIfReady;
-(void)updatePreferredServiceForRecipients:(id)arg1 ;
-(void)_setTextColorForPreferredService:(id)arg1 ;
-(void)_reflowAnimated:(bool)arg1 ;
-(void)_reallyAutoSendIfReady;
-(bool)hasFailedAtoms;
-(bool)_hasTimedOutAtoms;
-(BOOL)iMessageAvailabilityForRecipient:(id)arg1 ;
-(BOOL)serviceError;
-(void)removeAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(void)_checkAvailabilityOfAlternateAddressesForMFComposeRecipient:(id)arg1 ;
-(void)startAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(void)_showOneTimeErrorAlertForTooManyRecipientsUponAddIfNecessary;
-(void)_dismissPicker:(id)arg1 ;
-(bool)shouldShowCardForPerson:(void*)arg1 ;
-(id)IDSQueryUpdater;
-(void)_refreshActionSheet;
-(bool)_hasAddressWithAvailability:(BOOL)arg1 ;
-(id)_alternateAddressesForMFComposeRecipient:(id)arg1 onlyIMessageAble:(bool)arg2 ;
-(void)handleRecipientAvailabilityTimeout:(id)arg1 ;
-(void)_stopCheckingRecipientAvailability;
-(long long)_calculateRecipientLimit;
-(bool)_serviceErrorIsForTooManyRecipients;
-(id)_recipientCausingTooManyRecipientsError;
-(float)heightWithoutSeparator;
-(void)windowDidResignKey:(id)arg1 ;
-(bool)_addable;
-(void)addRecipient:(id)arg1 atIndex:(unsigned long long)arg2 animate:(bool)arg3 ;
-(bool)canSend;
-(void)reflow;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
@end

