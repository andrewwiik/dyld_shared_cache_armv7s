/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailboxSetFlagsRequest.h>
#import <Message/MFDAMailAccountRequest.h>

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>

@property (nonatomic,readonly) bool shouldSend; 
@property (nonatomic,readonly) bool isUserRequested; 
-(unsigned long long)generationNumber;
-(bool)isUserRequested;
-(id)deferredOperation;
-(bool)shouldSend;
@end

