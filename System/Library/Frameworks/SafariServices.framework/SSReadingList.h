/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class WebBookmarksXPCConnection, NSObject;

@interface SSReadingList : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;
	NSObject<OS_dispatch_queue>* _serialQueue;
	NSObject<OS_xpc_object>* _batchedReadingListItems;
	bool _batchScheduled;

}
+(bool)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(void)_sendBatchedReadingListItems;
-(void)dealloc;
-(id)init;
-(id)_init;
-(bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 ;
@end

