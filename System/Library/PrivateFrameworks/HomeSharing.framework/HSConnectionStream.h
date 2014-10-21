/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HomeSharing/HomeSharing-Structs.h>
@class NSObject;

@interface HSConnectionStream : NSObject {

	CFReadStreamRef _readStream;
	NSObject<OS_dispatch_queue>* _queue;

}
-(void)dealloc;
-(id)init;
-(void)sendCFHTTPMessage:(CFHTTPMessageRef)arg1 isConcurrent:(bool)arg2 timeoutInterval:(double)arg3 withResponseHandler:(/*^block*/ id)arg4 ;
@end
