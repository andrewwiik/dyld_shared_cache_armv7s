/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKAttendee, NSString, EKCalendar, NSURL, NSDate, NSTimeZone, NSArray, EKStructuredLocation, EKOrganizer;

@interface EKCalendarItem : EKObject {

	bool _haveCachedActionsState;
	int _actionsStateCachedValue;
	EKAttendee* _selfAttendee;
	NSString* _sharedItemCreatedByEmailAddress;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarItemIdentifier; 
@property (nonatomic,readonly) NSString * calendarItemExternalIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) bool hasAlarms; 
@property (nonatomic,readonly) bool hasRecurrenceRules; 
@property (nonatomic,readonly) bool hasAttendees; 
@property (nonatomic,readonly) bool hasNotes; 
@property (nonatomic,readonly) NSArray * attendees; 
@property (nonatomic,copy) NSArray * alarms; 
@property (nonatomic,copy) NSArray * recurrenceRules; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (nonatomic,readonly) bool isFloating; 
@property (assign,getter=isAllDay,nonatomic) bool allDay; 
@property (nonatomic,readonly) bool isEditable; 
@property (nonatomic,readonly) bool isSelfOrganized; 
@property (nonatomic,readonly) bool isExternallyOrganizedInvitation; 
@property (nonatomic,readonly) bool isSelfOrganizedInvitation; 
@property (nonatomic,readonly) bool isOrganizedBySharedCalendarOwner; 
@property (nonatomic,readonly) int selfParticipantStatus; 
@property (nonatomic,retain) EKAttendee * selfAttendee;                                          //@synthesize selfAttendee=_selfAttendee - In the implementation block
@property (nonatomic,retain) EKOrganizer * organizer; 
@property (nonatomic,copy) NSURL * action; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,copy) NSString * sharedItemCreatedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByEmailAddress;                           //@synthesize sharedItemCreatedByEmailAddress=_sharedItemCreatedByEmailAddress - In the implementation block
@property (nonatomic,copy) NSString * sharedItemCreatedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemCreatedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemCreatedTimeZone; 
@property (nonatomic,copy) NSString * sharedItemModifiedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByEmailAddress; 
@property (nonatomic,copy) NSString * sharedItemModifiedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemModifiedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemModifiedTimeZone; 
@property (nonatomic,readonly) bool allowsCalendarModifications; 
@property (nonatomic,readonly) bool allowsRecurrenceModifications; 
@property (nonatomic,readonly) bool allowsAlarmModifications; 
@property (nonatomic,readonly) bool allowsAttendeeModifications; 
@property (nonatomic,copy) NSArray * allAlarms; 
@property (nonatomic,readonly) int actionsState; 
@property (nonatomic,readonly) EKCalendarItem * originalItem; 
@property (nonatomic,readonly) bool requiresDetach; 
@property (assign,getter=isDefaultAlarmRemoved,nonatomic) bool defaultAlarmRemoved; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSURL * externalURI; 
-(bool)isAllDay;
-(bool)validate:(id*)arg1 ;
-(void)updatePersistentObject;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)externalURI;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(void)setAllDay:(bool)arg1 ;
-(id)selfAttendee;
-(id)originalItem;
-(id)attendees;
-(id)organizer;
-(bool)hasRecurrenceRules;
-(id)recurrenceRules;
-(void)setRecurrenceRules:(id)arg1 ;
-(bool)isExternallyOrganizedInvitation;
-(bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(bool)isSelfOrganizedInvitation;
-(bool)allowsCalendarModifications;
-(bool)requiresDetach;
-(bool)allowsAlarmModifications;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(bool)isAlarmAcknowledgedPropertyDirty;
-(bool)hasAttendees;
-(bool)allowsAttendeeModifications;
-(bool)allowsRecurrenceModifications;
-(void)moveToCalendar:(id)arg1 ;
-(void)removeAllSnoozedAlarms;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)updatePersistentObjectSkippingProperties:(id)arg1 ;
-(id)alarms;
-(id)allAlarms;
-(void)removeRecurrenceRule:(id)arg1 ;
-(id)structuredLocation;
-(bool)rebase;
-(void)setOrganizer:(id)arg1 ;
-(void)addAttendee:(id)arg1 ;
-(void)setSelfAttendee:(id)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)_locationRelation;
-(void)setStructuredLocation:(id)arg1 ;
-(id)_persistentItem;
-(id)calendarItemIdentifier;
-(id)notes;
-(bool)hasNotes;
-(bool)isOrganizedBySharedCalendarOwner;
-(bool)isSelfOrganized;
-(id)_alarmsRelation;
-(id)_recurrencesRelation;
-(id)_attendeesRelation;
-(id)_selfAttendeeRelation;
-(int)selfParticipantStatus;
-(id)_organizerRelation;
-(id)sharedItemCreatedByFirstName;
-(id)sharedItemCreatedByLastName;
-(id)sharedItemModifiedByFirstName;
-(id)sharedItemModifiedByLastName;
-(id)_attachmentsRelation;
-(void)_moveToCalendarInternal:(id)arg1 ;
-(id)calendarItemExternalIdentifier;
-(void)setNotes:(id)arg1 ;
-(void)setLastModifiedDate:(id)arg1 ;
-(bool)isDefaultAlarmRemoved;
-(void)setDefaultAlarmRemoved:(bool)arg1 ;
-(int)actionsState;
-(bool)hasAlarms;
-(void)setAlarms:(id)arg1 ;
-(void)setAllAlarms:(id)arg1 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(void)setAttendees:(id)arg1 ;
-(void)removeAttendee:(id)arg1 ;
-(id)sharedItemCreatedByDisplayName;
-(void)setSharedItemCreatedByDisplayName:(id)arg1 ;
-(id)sharedItemCreatedByEmailAddress;
-(void)setSharedItemCreatedByAddress:(id)arg1 ;
-(void)setSharedItemCreatedByFirstName:(id)arg1 ;
-(void)setSharedItemCreatedByLastName:(id)arg1 ;
-(id)sharedItemCreatedDate;
-(void)setSharedItemCreatedDate:(id)arg1 ;
-(id)sharedItemCreatedTimeZone;
-(void)setSharedItemCreatedTimeZone:(id)arg1 ;
-(id)sharedItemModifiedByDisplayName;
-(void)setSharedItemModifiedByDisplayName:(id)arg1 ;
-(id)sharedItemModifiedByEmailAddress;
-(void)setSharedItemModifiedByEmailAddress:(id)arg1 ;
-(void)setSharedItemModifiedByFirstName:(id)arg1 ;
-(void)setSharedItemModifiedByLastName:(id)arg1 ;
-(id)sharedItemModifiedDate;
-(void)setSharedItemModifiedDate:(id)arg1 ;
-(id)sharedItemModifiedTimeZone;
-(void)setSharedItemModifiedTimeZone:(id)arg1 ;
-(void)setSharedItemCreatedByEmailAddress:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)action;
-(void)setTimeZone:(id)arg1 ;
-(bool)isEditable;
-(id)UUID;
-(id)title;
-(void)setAction:(id)arg1 ;
-(id)URL;
-(id)location;
-(void)setURL:(id)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(id)timeZone;
-(id)calendar;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)attachments;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(bool)isFloating;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(id)lastModifiedDate;
-(void)setLocation:(id)arg1 ;
@end
