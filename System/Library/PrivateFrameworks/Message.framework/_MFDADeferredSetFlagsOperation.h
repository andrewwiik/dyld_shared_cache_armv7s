/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <Message/MFDAOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredSetFlagsOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {

	unsigned long long _onFlags;
	unsigned long long _offFlags;
	NSString* _messageID;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(bool)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithSetFlagsRequest:(id)arg1 ;
@end

