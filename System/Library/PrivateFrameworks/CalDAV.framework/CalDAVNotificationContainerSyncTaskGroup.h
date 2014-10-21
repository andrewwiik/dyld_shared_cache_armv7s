/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	NSSet* _notificationTypeNamesToFetch;

}

@property (retain) NSSet * notificationTypeNamesToFetch;              //@synthesize notificationTypeNamesToFetch=_notificationTypeNamesToFetch - In the implementation block
-(void)dealloc;
-(id)notificationTypeNamesToFetch;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(void)setNotificationTypeNamesToFetch:(id)arg1 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
@end

