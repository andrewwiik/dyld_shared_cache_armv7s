/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKCalendarItem.h>

@class EKCalendarDate, NSNumber, NSString, NSDate, EKParticipant, NSURL, EKEventStore, NSArray;

@interface EKEvent : EKCalendarItem {

	bool _occurrenceIsAllDay;
	bool _requiresDetachDueToSnoozedAlarm;
	int _attendeeCount;
	EKCalendarDate* _occurrenceStartDate;
	EKCalendarDate* _occurrenceEndDate;
	EKCalendarDate* _originalOccurrenceStartDate;
	EKCalendarDate* _originalOccurrenceEndDate;
	NSNumber* _originalOccurrenceIsAllDay;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (assign,getter=isAllDay,nonatomic) bool allDay; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,readonly) EKParticipant * organizer; 
@property (assign,nonatomic) int availability; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) bool isDetached; 
@property (nonatomic,readonly) long long birthdayPersonID; 
@property (nonatomic,readonly) NSDate * occurrenceDate; 
@property (readonly) int attendeeCount;                                               //@synthesize attendeeCount=_attendeeCount - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (assign,nonatomic) int participationStatus; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,readonly) bool dateChanged; 
@property (nonatomic,readonly) bool timeChanged; 
@property (nonatomic,readonly) bool titleChanged; 
@property (nonatomic,readonly) bool locationChanged; 
@property (nonatomic,readonly) SCD_Struct_EK11 startDateGr; 
@property (nonatomic,readonly) SCD_Struct_EK11 endDateGr; 
@property (readonly) NSDate * initialStartDate; 
@property (readonly) NSDate * initialEndDate; 
@property (copy) NSString * responseComment; 
@property (readonly) bool isEditable; 
@property (readonly) bool isStatusDirty; 
@property (readonly) bool isStartDateDirty; 
@property (readonly) bool isEndDateDirty; 
@property (readonly) bool isAllDayDirty; 
@property (readonly) double duration; 
@property (nonatomic,readonly) bool canBeRespondedTo; 
@property (nonatomic,readonly) bool canSetAvailability; 
@property (nonatomic,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) int pendingParticipationStatus; 
@property (nonatomic,readonly) NSDate * participationStatusModifiedDate; 
@property (nonatomic,readonly) unsigned modifiedProperties; 
@property (readonly) bool canDetachSingleOccurrence; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDate; 
@property (nonatomic,readonly) EKCalendarDate * endCalendarDate; 
@property (nonatomic,readonly) bool responseMustApplyToAll; 
@property (nonatomic,copy) EKCalendarDate * occurrenceStartDate;                      //@synthesize occurrenceStartDate=_occurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * occurrenceEndDate;                        //@synthesize occurrenceEndDate=_occurrenceEndDate - In the implementation block
@property (assign,nonatomic) bool occurrenceIsAllDay;                                 //@synthesize occurrenceIsAllDay=_occurrenceIsAllDay - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceStartDate;              //@synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceEndDate;                //@synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate - In the implementation block
@property (nonatomic,copy) NSNumber * originalOccurrenceIsAllDay;                     //@synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay - In the implementation block
@property (assign,nonatomic) bool requiresDetachDueToSnoozedAlarm;                    //@synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm - In the implementation block
+(id)eventWithEventStore:(id)arg1 ;
-(int)daySpan;
-(id)sortedEKAttachmentsDisplayStrings;
-(id)sortEKParticipantsIgnoringNonHumans:(id)arg1 ;
-(id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1 ;
-(id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1 ;
-(bool)hasHumanInviteesToDisplay;
-(bool)isAllDay;
-(bool)canSetAvailability;
-(id)initWithPersistentObject:(id)arg1 ;
-(id)eventStore;
-(void)didCommit;
-(void)clearInvitationStatus;
-(id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2 ;
-(bool)validateWithSpan:(int)arg1 error:(id*)arg2 ;
-(bool)commitWithSpan:(int)arg1 error:(id*)arg2 ;
-(bool)removeWithSpan:(int)arg1 error:(id*)arg2 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(id)externalURI;
-(id)initWithEventStore:(id)arg1 ;
-(void)setOccurrenceStartDate:(id)arg1 ;
-(void)setOccurrenceEndDate:(id)arg1 ;
-(bool)_isAllDay;
-(void)setOccurrenceIsAllDay:(bool)arg1 ;
-(id)_persistentEvent;
-(id)eventIdentifier;
-(id)externalURL;
-(id)exportToICS;
-(id)originalOccurrenceStartDate;
-(id)occurrenceStartDate;
-(id)originalOccurrenceEndDate;
-(id)committedValueForKey:(id)arg1 ;
-(long long)birthdayPersonID;
-(id)initialStartDate;
-(id)startCalendarDate;
-(void)setOriginalOccurrenceIsAllDay:(id)arg1 ;
-(void)setAllDay:(bool)arg1 ;
-(void)setOriginalOccurrenceStartDate:(id)arg1 ;
-(id)occurrenceEndDate;
-(void)setOriginalOccurrenceEndDate:(id)arg1 ;
-(id)_effectiveTimeZone;
-(SCD_Struct_EK11)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2 ;
-(SCD_Struct_EK11)startDateGr;
-(SCD_Struct_EK11)endDateGr;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(void)setAvailability:(int)arg1 ;
-(void)setNeedsOccurrenceCacheUpdate:(bool)arg1 ;
-(int)participationStatus;
-(id)attendees;
-(id)organizer;
-(bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(bool)_validateDurationConstrainedToRecurrenceInterval;
-(bool)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1 ;
-(bool)isDetached;
-(bool)allowsCalendarModifications;
-(bool)responseMustApplyToAll;
-(bool)isDirtyIgnoringCalendar;
-(bool)requiresDetach;
-(bool)isAllDayDirty;
-(int)pendingParticipationStatus;
-(id)participationStatusModifiedDate;
-(bool)allowsAlarmModifications;
-(void)_sendModifiedNote;
-(void)setRequiresDetachDueToSnoozedAlarm:(bool)arg1 ;
-(bool)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id*)arg2 ;
-(bool)allowsRecurrenceModifications;
-(bool)requiresDetachDueToSnoozedAlarm;
-(bool)_isInitialOccurrenceDate:(id)arg1 ;
-(void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(bool)arg3 ;
-(void)setParticipationStatus:(int)arg1 ;
-(bool)occurrenceIsAllDay;
-(id)originalOccurrenceIsAllDay;
-(bool)_checkStartDateConstraintAgainstDate:(SCD_Struct_EK11)arg1 timeZone:(id)arg2 error:(id*)arg3 ;
-(bool)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2 ;
-(SCD_Struct_EK11)startDatePinnedForAllDay;
-(SCD_Struct_EK11)endDatePinnedForAllDay;
-(void)_deleteThisOccurrence;
-(bool)_shouldCancelInsteadOfDeleteWithSpan:(int)arg1 ;
-(bool)_cancelWithSpan:(int)arg1 error:(id*)arg2 ;
-(bool)_shouldDeclineInsteadOfDelete;
-(bool)_deleteWithSpan:(int)arg1 error:(id*)arg2 ;
-(bool)isStatusDirty;
-(bool)isStartDateDirty;
-(bool)isEndDateDirty;
-(id)endCalendarDate;
-(id)occurrenceDate;
-(id)initialEndDate;
-(bool)needsOccurrenceCacheUpdate;
-(int)_parentParticipationStatus;
-(id)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1 ;
-(int)availability;
-(id)responseComment;
-(void)setResponseComment:(id)arg1 ;
-(bool)dateChanged;
-(bool)timeChanged;
-(bool)titleChanged;
-(bool)locationChanged;
-(bool)isTentative;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(bool)canDetachSingleOccurrence;
-(bool)changingAllDayPropertyIsAllowed;
-(bool)hasSelfAttendee;
-(bool)canBeRespondedTo;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)dirtyPropertiesToSkip;
-(void)revert;
-(id)_dateForNextOccurrence;
-(int)attendeeCount;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)setTimeZone:(id)arg1 ;
-(id)title;
-(id)uniqueId;
-(int)status;
-(id)attachments;
-(bool)refresh;
-(id)startDate;
-(id)endDate;
-(void)rollback;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
@end

