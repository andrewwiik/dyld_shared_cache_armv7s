/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVTask.h>

@class NSString, NSArray;

@interface CoreDAVSRVLookupTask : CoreDAVTask {

	NSString* _serviceString;
	NSArray* _fetchedRecords;
	CFHostRef _host;

}

@property (retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (retain) NSArray * fetchedRecords;              //@synthesize fetchedRecords=_fetchedRecords - In the implementation block
@property (assign) CFHostRef host;                        //@synthesize host=_host - In the implementation block
-(void)setHost:(CFHostRef)arg1 ;
-(void)dealloc;
-(id)description;
-(CFHostRef)host;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithServiceString:(id)arg1 ;
-(id)fetchedRecords;
-(id)serviceString;
-(void)performCoreDAVTask;
-(void)setServiceString:(id)arg1 ;
-(void)setFetchedRecords:(id)arg1 ;
@end

