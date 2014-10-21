/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface BKSXPCMessage : NSObject {

	NSObject<OS_xpc_object>* _message;
	/*^block*/ id _replyHandler;
	NSObject<OS_dispatch_queue>* _replyQueue;

}
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/ id)arg3 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/ id)arg3 replyHandler:(/*^block*/ id)arg4 replyQueue:(id)arg5 ;
+(void)sendMessageWithPacker:(/*^block*/ id)arg1 toConnection:(id)arg2 replyHandler:(/*^block*/ id)arg3 replyQueue:(id)arg4 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/ id)arg2 replyHandler:(/*^block*/ id)arg3 replyQueue:(id)arg4 ;
+(void)sendMessageWithPacker:(/*^block*/ id)arg1 toConnection:(id)arg2 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)initWithMessagePacker:(/*^block*/ id)arg1 replyHandler:(/*^block*/ id)arg2 replyQueue:(id)arg3 ;
-(void)sendToConnection:(id)arg1 ;
-(id)initWithMessage:(long long)arg1 packer:(/*^block*/ id)arg2 replyHandler:(/*^block*/ id)arg3 replyQueue:(id)arg4 ;
-(id)initWithMessage:(id)arg1 replyHandler:(/*^block*/ id)arg2 replyQueue:(id)arg3 ;
@end
