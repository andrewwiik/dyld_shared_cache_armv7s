/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, NSDate, NSURL, EKObjectID, EKAlarm;

@interface EKReminder : EKCalendarItem {

	bool hadRecurrences;

}

@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * dueDateComponents; 
@property (assign,getter=isCompleted,nonatomic) bool completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) long long priority; 
@property (assign,nonatomic) unsigned long long displayOrder; 
@property (nonatomic,readonly) NSDate * dueDate; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,readonly) EKObjectID * parentID; 
@property (nonatomic,readonly) EKAlarm * bestDisplayAlarm; 
@property (assign,nonatomic) bool hadRecurrences; 
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(bool)commit:(id*)arg1 ;
-(bool)validate:(id*)arg1 ;
-(void)setCompleted:(bool)arg1 ;
-(id)_persistentReminder;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(id)externalURI;
-(void)_sendModifiedNote;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)dueDate;
-(id)dueDateComponents;
-(id)reminderIdentifier;
-(id)startDateComponents;
-(void)setStartDateComponents:(id)arg1 ;
-(id)completionDate;
-(void)setCompletionDate:(id)arg1 ;
-(id)parentID;
-(void)setDueDateComponents:(id)arg1 ;
-(bool)isCompleted;
-(void)clearParentID;
-(id)bestDisplayAlarm;
-(bool)hadRecurrences;
-(void)setHadRecurrences:(bool)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
@end

