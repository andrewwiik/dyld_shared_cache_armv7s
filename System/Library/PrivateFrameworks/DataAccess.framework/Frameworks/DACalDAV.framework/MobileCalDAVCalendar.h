/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <CalDAV/CalDAVCalendar.h>

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray, MobileCalDAVPrincipal, NSMutableDictionary, NSMutableArray, CalDiagCalendarCollectionSync;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {

	MobileCalDAVPrincipal* _principal;
	NSString* _calGUID;
	NSString* _calendarURLString;
	bool _isDirty;
	bool _isSubscribed;
	bool _isScheduleInbox;
	bool _isScheduleOutbox;
	bool _isEnabled;
	bool _isAffectingAvailability;
	NSString* _pushKey;
	NSString* _syncToken;
	bool _needsResync;
	bool _didResync;
	bool _needsPublishUpdate;
	NSSet* _sharees;
	NSMutableDictionary* _uniqueIdentifierToRecordIDMap;
	NSMutableDictionary* _URLToRecordIDMap;
	NSMutableDictionary* _URLToEtagMap;
	void* _calCalendar;
	int _mostRecentEventChangeIndex;
	int _mostRecentTaskChangeIndex;
	int _mostRecentAlarmChangeIndex;
	int _mostRecentAttendeeChangeIndex;
	int _mostRecentAttachmentChangeIndex;
	int _mostRecentRecurChangeIndex;
	int _mostRecentEventActionChangeIndex;
	int _mostRecentShareeChangeIndex;
	NSMutableDictionary* _deletedCalendarItems;
	NSArray* _syncActions;
	NSArray* _shareeActions;
	NSDictionary* _hrefsToModDeleteActions;
	NSDictionary* _uuidsToAddActions;
	NSMutableArray* _outstandingTaskGroups;
	/*^block*/ id _syncActionCompletionBlock;
	CalDiagCalendarCollectionSync* _calendarCollectionSyncDiagnostics;
	bool _wasModifiedLocally;

}

@property (readonly) <CalDAVPrincipal> * principal;                                                            //@synthesize principal=_principal - In the implementation block
@property (retain) NSString * guid; 
@property (retain) NSURL * calendarURL; 
@property (retain) NSString * title; 
@property (retain) NSString * notes; 
@property (retain) NSString * color; 
@property (retain) NSString * symbolicColorName; 
@property (retain) NSString * pushKey; 
@property (retain) NSURL * owner; 
@property (retain) NSString * ownerDisplayName; 
@property (readonly) NSString * ownerEmailAddress; 
@property (retain) NSSet * calendarUserAddresses; 
@property (retain) NSURL * publishURL; 
@property (retain) NSURL * prePublishURL; 
@property (assign) int order; 
@property (assign) int sharingStatus; 
@property (retain) NSSet * sharees; 
@property (assign) bool isTaskContainer; 
@property (assign) bool isEventContainer; 
@property (assign) bool isSubscribed; 
@property (assign) bool isManagedByServer; 
@property (assign) bool isScheduleInbox; 
@property (assign) bool isScheduleOutbox;                                                                      //@synthesize isScheduleOutbox=_isScheduleOutbox - In the implementation block
@property (assign) bool isNotification; 
@property (assign) bool isEditable; 
@property (assign) bool isRenameable; 
@property (assign) bool isEnabled;                                                                             //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign) bool isAffectingAvailability;                                                               //@synthesize isAffectingAvailability=_isAffectingAvailability - In the implementation block
@property (assign) bool canBePublished; 
@property (assign) bool canBeShared; 
@property (retain) NSString * ctag; 
@property (retain) NSDictionary * bulkRequests; 
@property (retain) NSString * syncToken; 
@property (assign) bool needsResync;                                                                           //@synthesize needsResync=_needsResync - In the implementation block
@property (assign) bool didResync;                                                                             //@synthesize didResync=_didResync - In the implementation block
@property (readonly) NSSet * allItemURLs; 
@property (assign) bool isDirty;                                                                               //@synthesize isDirty=_isDirty - In the implementation block
@property (readonly) NSString * displayColor; 
@property (readonly) bool isHidden; 
@property (readonly) NSString * accountID; 
@property (assign) bool needsPublishUpdate;                                                                    //@synthesize needsPublishUpdate=_needsPublishUpdate - In the implementation block
@property (readonly) NSString * calendarURLString; 
@property (nonatomic,readonly) CalDiagCalendarCollectionSync * calendarCollectionSyncDiagnostics;              //@synthesize calendarCollectionSyncDiagnostics=_calendarCollectionSyncDiagnostics - In the implementation block
@property (retain) NSTimeZone * timeZone; 
@property (assign) bool isPoll; 
@property (assign) bool isPublished; 
@property (assign) bool wasModifiedLocally;                                                                    //@synthesize wasModifiedLocally=_wasModifiedLocally - In the implementation block
@property (readonly) NSArray * syncActions; 
@property (readonly) NSArray * shareeActions; 
@property (readonly) NSDictionary * uuidsToAddActions; 
@property (readonly) NSDictionary * hrefsToModDeleteActions; 
+(int)addedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)modifiedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)deletedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(bool)clearCalendarChangesToIndex:(int)arg1 inPrincipal:(id)arg2 ;
-(bool)isSubscribed;
-(void)setCanBeShared:(bool)arg1 ;
-(void)setCanBePublished:(bool)arg1 ;
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(int)sharingStatus;
-(void)setSharingStatus:(int)arg1 ;
-(void)setIsPublished:(bool)arg1 ;
-(bool)isPublished;
-(bool)canBePublished;
-(bool)canBeShared;
-(bool)hasEvents;
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(id)pushKey;
-(void)setPushKey:(id)arg1 ;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(void)dealloc;
-(bool)isHidden;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(bool)isEditable;
-(bool)isEnabled;
-(id)title;
-(void)setIsEnabled:(bool)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)timeZone;
-(id)syncToken;
-(void)setSyncToken:(id)arg1 ;
-(id)principal;
-(id)uuidsToAddActions;
-(id)hrefsToModDeleteActions;
-(id)ctag;
-(void)setCtag:(id)arg1 ;
-(id)calendarURL;
-(void)deleteCalendar;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(void)setIsDirty:(bool)arg1 ;
-(id)calendarUserAddresses;
-(void)setWasModifiedLocally:(bool)arg1 ;
-(bool)needsPublishUpdate;
-(void)setNeedsPublishUpdate:(bool)arg1 ;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 ;
-(void)setCalendarUserAddresses:(id)arg1 ;
-(void)_dropCalStoreContext;
-(void*)getCalCalendar;
-(void*)initCalCalendarWithTitle:(id)arg1 ;
-(bool)_updateCalendarOwnerInfo;
-(id)calendarURLString;
-(bool)isEventContainer;
-(void)_setSupportsEvents:(bool)arg1 supportsTodos:(bool)arg2 ;
-(bool)isTaskContainer;
-(id)publishURL;
-(id)ownerDisplayName;
-(bool)isRenameable;
-(CalRecordIDRef)recordIDForUniqueIdentifier:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 forRecordID:(CalRecordIDRef)arg2 ;
-(void*)_copyCalItemWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(void*)_copyCalItemWithExternalID:(id)arg1 ;
-(bool)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(id)calendarCollectionSyncDiagnostics;
-(bool)_removeCalendarItemWithURL:(id)arg1 ;
-(id)ownerEmailAddress;
-(void)_addCalendarItemWithRowID:(int)arg1 toArrayIfNeeded:(id)arg2 withChangeRowid:(int)arg3 changeType:(id)arg4 ;
-(int)_addAddedItemsOfType:(int)arg1 toArray:(id)arg2 ;
-(int)_gatherModifiedItemsFromCalChangesCall:(/*function pointer*/ void*)arg1 forType:(id)arg2 inArray:(id)arg3 ;
-(int)_gatherModifiedTasksInArray:(id)arg1 ;
-(int)_gatherModifiedEventsInArray:(id)arg1 ;
-(id)_itemPropertyDictForItemAtIndex:(long long)arg1 withChangedIDs:(CFArrayRef)arg2 withChangedRowids:(CFArrayRef)arg3 withExternalIDs:(CFArrayRef)arg4 uniqueIdentifiers:(CFArrayRef)arg5 significantAttributeChanges:(CFArrayRef)arg6 oldCalendarIDs:(CFArrayRef)arg7 ;
-(int)_gatherDeletedChanges:(/*function pointer*/ void*)arg1 inDictionary:(id)arg2 ;
-(void)_clearChangesAtIndices:(id)arg1 withClearCall:(/*function pointer*/ void*)arg2 forType:(id)arg3 ;
-(void)_clearChangesFromItem:(id)arg1 ;
-(void)_forceRefreshNextSync;
-(void)_collectShareeActions;
-(void)_addShareeWithRowID:(id)arg1 toDictionaryIfNeeded:(id)arg2 ;
-(id)copyDeletedItems;
-(id)copyAddedItems;
-(id)_createActionsForItems:(id)arg1 withAction:(int)arg2 alreadySentItems:(id)arg3 createServerIDs:(bool)arg4 shouldSave:(bool*)arg5 ;
-(id)copyModifiedItems;
-(id)_copyDeletedEventActions;
-(id)removeInvitationsForItemWithUniqueIdentifier:(id)arg1 ;
-(id)copyAllItems;
-(id)etagsForItemURLs:(id)arg1 ;
-(bool)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(bool)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(bool)updateResourcesFromServer:(id)arg1 ;
-(bool)deleteResourcesAtURLs:(id)arg1 ;
-(bool)hasCalendarUserAddressEquivalentToURL:(id)arg1 ;
-(Class)appSpecificCalendarItemClass;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)clearShareeActions;
-(void)syncDidFinishWithError:(id)arg1 ;
-(void)putAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)setCalendarURL:(id)arg1 ;
-(void)setOwnerDisplayName:(id)arg1 ;
-(void)setPublishURL:(id)arg1 ;
-(id)prePublishURL;
-(void)setPrePublishURL:(id)arg1 ;
-(void)setIsTaskContainer:(bool)arg1 ;
-(void)setIsEventContainer:(bool)arg1 ;
-(void)setIsSubscribed:(bool)arg1 ;
-(bool)isManagedByServer;
-(void)setIsManagedByServer:(bool)arg1 ;
-(bool)isScheduleInbox;
-(void)setIsScheduleInbox:(bool)arg1 ;
-(bool)isScheduleOutbox;
-(void)setIsScheduleOutbox:(bool)arg1 ;
-(bool)isNotification;
-(void)setIsNotification:(bool)arg1 ;
-(bool)isPoll;
-(void)setIsPoll:(bool)arg1 ;
-(void)setIsEditable:(bool)arg1 ;
-(void)setIsRenameable:(bool)arg1 ;
-(bool)isAffectingAvailability;
-(void)setIsAffectingAvailability:(bool)arg1 ;
-(bool)wasModifiedLocally;
-(bool)needsResync;
-(void)setNeedsResync:(bool)arg1 ;
-(id)syncActions;
-(id)shareeActions;
-(id)allItemURLs;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 title:(id)arg3 ;
-(id)displayColor;
-(id)_calExternalRep;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(bool)didResync;
-(void)setDidResync:(bool)arg1 ;
-(id)guid;
-(id)accountID;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(id)owner;
-(bool)isDirty;
-(void)flushCaches;
-(void)setOwner:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
@end

