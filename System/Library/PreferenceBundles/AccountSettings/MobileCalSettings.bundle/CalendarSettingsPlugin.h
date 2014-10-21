/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUISettingsPluginProtocol.h>

@protocol ACUISettingsPluginParentProtocol;
@class PSViewController, PSSpecifier, EKEventStore, ACAccountStore;

@interface CalendarSettingsPlugin : NSObject <ACUISettingsPluginProtocol> {

	PSViewController<ACUISettingsPluginParentProtocol>* _parentController;
	PSSpecifier* _invitationAlertsSpecifier;
	PSSpecifier* _sharedCalendarAlertsSpecifier;
	PSSpecifier* _syncDaysSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	PSSpecifier* _defaultCalendarSpecifier;
	PSSpecifier* _birthdayCalendarSpecifier;
	PSSpecifier* _defaultAlarmsSpecifier;
	EKEventStore* _eventStore;
	ACAccountStore* _accountStore;
	bool _moreThanOneCalendar;
	PSSpecifier* _weekStartSpecifier;

}

@property (nonatomic,retain) PSSpecifier * weekStartSpecifier;              //@synthesize weekStartSpecifier=_weekStartSpecifier - In the implementation block
-(id)_eventStore;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
-(void)_freeSpecifiers;
-(void)setInvitationAlertsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)invitationAlertsEnabled:(id)arg1 ;
-(void)setSharedCalendarAlertsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)sharedCalendarAlertsEnabled:(id)arg1 ;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setDaysToSync:(id)arg1 specifier:(id)arg2 ;
-(id)daysToSync:(id)arg1 ;
-(id)_titlesForDaysToSync;
-(void)setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)defaultCalendarName:(id)arg1 ;
-(void)setWeekStart:(id)arg1 specifier:(id)arg2 ;
-(id)weekStart:(id)arg1 ;
-(id)_numbersForWeekdays;
-(id)_titlesForWeekDays:(id)arg1 ;
-(void)setWeekStartSpecifier:(id)arg1 ;
-(void)_createAllCommonSpecifiers;
-(long long)_countOfAccountsSyncingCalendars;
-(id)weekStartSpecifier;
-(void)setShowWeekNumbers:(id)arg1 specifier:(id)arg2 ;
-(id)showWeekNumbers:(id)arg1 ;
-(void)setImmediateAlarmCreation:(id)arg1 specifier:(id)arg2 ;
-(id)immediateAlarmCreation:(id)arg1 ;
-(id)footerText;
-(bool)shouldLoadSpecifiersLazily;
-(id)initWithParentController:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(id)specifiers;
-(id)headerText;
-(id)_accountStore;
@end

