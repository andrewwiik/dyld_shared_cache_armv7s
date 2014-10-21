/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>

@class NSURL, CoreDAVPropFindTask, ICSDocument;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	NSURL* _inboxURL;
	CoreDAVPropFindTask* _fetchTask;
	ICSDocument* _calendarAvailability;

}

@property (assign,nonatomic,@dynamic) <CoreDAVTaskGroupDelegate> * delegate; 
@property (retain) ICSDocument * calendarAvailability;                                    //@synthesize calendarAvailability=_calendarAvailability - In the implementation block
@property (retain) NSURL * inboxURL;                                                      //@synthesize inboxURL=_inboxURL - In the implementation block
@property (retain) CoreDAVPropFindTask * fetchTask;                                       //@synthesize fetchTask=_fetchTask - In the implementation block
-(void)dealloc;
-(void)setCalendarAvailability:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3 ;
-(id)calendarAvailability;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)startTaskGroup;
-(void)setFetchTask:(id)arg1 ;
-(id)fetchTask;
-(void)_finishWithError:(id)arg1 ;
-(id)inboxURL;
-(void)setInboxURL:(id)arg1 ;
@end

