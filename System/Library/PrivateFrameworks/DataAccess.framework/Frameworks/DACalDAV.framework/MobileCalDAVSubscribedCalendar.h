/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>
#import <CalDAV/CalDAVSubscribedCalendar.h>

@class NSURL, NSString, NSMutableDictionary, NSSet, NSTimeZone, NSDictionary, NSArray;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar> {

	NSMutableDictionary* _properties;

}

@property (readonly) <CalDAVPrincipal> * principal; 
@property (retain) NSString * guid; 
@property (retain) NSURL * calendarURL; 
@property (retain) NSString * title; 
@property (retain) NSString * notes; 
@property (retain) NSString * color; 
@property (retain) NSString * symbolicColorName; 
@property (retain) NSString * pushKey; 
@property (retain) NSURL * owner; 
@property (retain) NSString * ownerDisplayName; 
@property (retain) NSSet * calendarUserAddresses; 
@property (retain) NSURL * publishURL; 
@property (retain) NSURL * prePublishURL; 
@property (retain) NSTimeZone * timeZone; 
@property (retain) NSDictionary * bulkRequests; 
@property (assign) int order; 
@property (assign) int sharingStatus; 
@property (retain) NSSet * sharees; 
@property (assign) bool isTaskContainer; 
@property (assign) bool isEventContainer; 
@property (assign) bool isSubscribed; 
@property (assign) bool isManagedByServer; 
@property (assign) bool isScheduleInbox; 
@property (assign) bool isScheduleOutbox; 
@property (assign) bool isNotification; 
@property (assign) bool isPoll; 
@property (assign) bool isEditable; 
@property (assign) bool isRenameable; 
@property (assign) bool isEnabled; 
@property (assign) bool isPublished; 
@property (assign) bool isAffectingAvailability; 
@property (assign) bool canBePublished; 
@property (assign) bool canBeShared; 
@property (assign) bool wasModifiedLocally; 
@property (assign) bool needsResync; 
@property (retain) NSString * ctag; 
@property (retain) NSString * syncToken; 
@property (readonly) bool needsPublishUpdate; 
@property (readonly) NSArray * syncActions; 
@property (readonly) NSArray * shareeActions; 
@property (readonly) NSDictionary * uuidsToAddActions; 
@property (readonly) NSDictionary * hrefsToModDeleteActions; 
@property (readonly) NSSet * allItemURLs; 
@property (retain) NSURL * subscriptionURL; 
@property (assign) bool hasAlarmFilter; 
@property (assign) bool hasAttachmentFilter; 
@property (assign) bool hasTaskFilter; 
@property (assign) double refreshInterval; 
@property (assign) bool autoprovisioned; 
@property (retain) NSString * locationCode; 
@property (retain) NSString * languageCode; 
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)properties;
-(id)subscriptionURL;
-(double)refreshInterval;
-(void)setSubscriptionURL:(id)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(id)initWithCalendarURL:(id)arg1 properties:(id)arg2 principal:(id)arg3 ;
-(id)calendarURLString;
-(bool)isTaskContainer;
-(void)setIsTaskContainer:(bool)arg1 ;
-(bool)isManagedByServer;
-(void)setIsManagedByServer:(bool)arg1 ;
-(bool)hasAlarmFilter;
-(bool)hasAttachmentFilter;
-(bool)hasTaskFilter;
-(void)setHasAlarmFilter:(bool)arg1 ;
-(void)setHasAttachmentFilter:(bool)arg1 ;
-(void)setHasTaskFilter:(bool)arg1 ;
@end

