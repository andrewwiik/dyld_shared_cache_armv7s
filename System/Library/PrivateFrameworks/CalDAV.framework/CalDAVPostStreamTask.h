/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask {

	NSString* _previousScheduleTag;
	NSString* _filename;

}

@property (retain) NSString * previousScheduleTag;              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (retain) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
-(id)responseData;
-(void)dealloc;
-(void)setPreviousScheduleTag:(id)arg1 ;
-(id)previousScheduleTag;
-(id)lossyAsciiFilename;
-(id)utf8PercentEscapedFilename;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)requestBodyStream;
-(id)requestBody;
-(id)filename;
-(void)setFilename:(id)arg1 ;
@end

