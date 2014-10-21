/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarProvider/EKBBDataProvider.h>
#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, EKEventDescriptionGenerator, NSArray, NSTimer;

@interface EKBBTodayProvider : EKBBDataProvider <BBDataProvider> {

	NSObject<OS_dispatch_queue>* _bulletinRefreshQueue;
	EKEventDescriptionGenerator* _descriptionGenerator;
	NSArray* _birthdayEvents;
	NSArray* _upcomingEvents;
	NSArray* _todayEvents;
	NSArray* _tomorrowEvents;
	NSTimer* _updateCountdownTimer;
	NSTimer* _startCountdownTimer;
	bool _visible;
	bool _upcomingEventBulletinNeedsRefresh;
	bool _isShowingBirthdayBulletin;
	bool _isShowingUpcomingEventBulletin;
	bool _isShowingTomorrowBulletin;

}
-(void)_eventDescriptionWasInvalidated:(id)arg1 ;
-(void)_selectedCalendarsChanged:(id)arg1 ;
-(void)_hostDidPresent:(id)arg1 ;
-(void)_hostWillDismiss:(id)arg1 ;
-(id)_createBirthdayBulletin;
-(id)_createUpcomingEventBulletin;
-(id)_createTomorrowBulletin;
-(id)_birthdayEventsForToday;
-(id)_expirationDateForTomorrowSnippet;
-(id)_dateForEndOfToday;
-(id)_upcomingEvents;
-(bool)_isEventFirstForToday:(id)arg1 ;
-(void)_refreshUpcomingEventBulletin;
-(id)_dateForNow;
-(void)_scheduleTimerForUpdatingCountdownForEvent:(id)arg1 ;
-(void)_scheduleTimerForStartingCountdownToEvent:(id)arg1 ;
-(id)_tomorrowEvents;
-(id)_todayEvents;
-(id)_loadBirthdayEventsForToday;
-(id)_loadUpcomingEvents;
-(id)_loadTomorrowEvents;
-(id)_loadTodayEvents;
-(id)_selectedCalendars;
-(bool)_shouldExcludeEvent:(id)arg1 allowAllDayEvents:(bool)arg2 ;
-(id)_dateForBeginningOfTomorrow;
-(id)_dateForEndOfTomorrow;
-(id)_dateForBeginningOfToday;
-(id)_nowComponents;
-(id)_todayComponents;
-(id)_tomorrowComponents;
-(void)_refreshBirthdayBulletin;
-(bool)_isListOfEvents:(id)arg1 equivalentToListOfEvents:(id)arg2 ;
-(void)_resetTimers;
-(void)_refreshTomorrowBulletin;
-(void)_releaseAllEvents;
-(bool)_doesListOfEvents:(id)arg1 containEquivalentForEvent:(id)arg2 ;
-(bool)_isEvent:(id)arg1 equivalentToEvent:(id)arg2 ;
-(void)_resetAllEvents;
-(void)_startCountdownTimerDidFire:(id)arg1 ;
-(void)_updateCountdownTimerDidFire:(id)arg1 ;
-(bool)supportsAlerts;
-(void)databaseChanged:(id)arg1 ;
-(void)eventStoreWillClose;
-(void)_localeChanged;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)_todayChanged:(id)arg1 ;
-(id)sectionIdentifier;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
-(void)_significantTimeChange:(id)arg1 ;
@end

