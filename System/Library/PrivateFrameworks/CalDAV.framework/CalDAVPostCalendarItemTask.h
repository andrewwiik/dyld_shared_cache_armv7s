/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask {

	NSString* _previousScheduleTag;

}

@property (assign,nonatomic,@dynamic) <CalDAVPostCalendarItemTaskDelegate> * delegate; 
@property (retain) NSString * previousScheduleTag;                                                  //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setPreviousScheduleTag:(id)arg1 ;
-(id)previousScheduleTag;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
-(id)additionalHeaderValues;
@end

