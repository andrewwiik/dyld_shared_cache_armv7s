/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVCalendar;
@class NSError, NSString;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {

	bool _getScheduleTags;
	bool _getScheduleChanges;
	NSError* _savedError;
	NSString* _nextCtag;
	NSString* _nextSyncToken;
	<CalDAVCalendar>* _calendar;

}

@property (assign,nonatomic,@dynamic) <CalDAVCalendarSyncDelegate> * delegate; 
@property (assign) bool getScheduleTags;                                                    //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign) bool getScheduleChanges;                                                 //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
-(void)dealloc;
-(void)setGetScheduleTags:(bool)arg1 ;
-(void)setGetScheduleChanges:(bool)arg1 ;
-(bool)getScheduleTags;
-(bool)getScheduleChanges;
-(bool)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3 ;
-(id)_distantFutureEndDate;
-(void)_processAddedOrModified:(id)arg1 removed:(id)arg2 ;
-(void)_syncEventsForMerge;
-(void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6 ;
-(void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3 ;
-(id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1 ;
-(bool)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3 ;
-(bool)syncDeleteTask:(id)arg1 error:(id)arg2 ;
-(void)_finishWithError:(id)arg1 ;
-(id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4 ;
-(void)syncCalendar;
@end
