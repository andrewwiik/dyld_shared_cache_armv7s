/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {

	NSString* _nextETag;

}

@property (assign,nonatomic,@dynamic) <CoreDAVTaskDelegate> * delegate; 
@property (retain) NSString * nextETag;                                              //@synthesize nextETag=_nextETag - In the implementation block
-(void)dealloc;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)nextETag;
-(void)setNextETag:(id)arg1 ;
-(id)httpMethod;
@end

