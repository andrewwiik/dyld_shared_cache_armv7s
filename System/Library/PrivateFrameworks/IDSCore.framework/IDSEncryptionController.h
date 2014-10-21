/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IDSCore/IDSCore-Structs.h>
@class NSThread, NSRunLoop, NSMutableDictionary;

@interface IDSEncryptionController : NSObject {

	NSThread* _encryptionThread;
	NSRunLoop* _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	NSMutableDictionary* _contextMap;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)performBlock:(/*^block*/ id)arg1 ;
-(void)encryptMessageData:(id)arg1 myURI:(id)arg2 myIdentity:(id)arg3 toURI:(id)arg4 toToken:(id)arg5 service:(id)arg6 completionBlock:(/*^block*/ id)arg7 ;
-(void)_threadedMain;
-(void)performBlock:(/*^block*/ id)arg1 waitUntilDone:(bool)arg2 ;
-(void)checkThread;
-(void)decryptMessageData:(id)arg1 myURI:(id)arg2 myIdentity:(id)arg3 fromURI:(id)arg4 token:(id)arg5 service:(id)arg6 type:(long long)arg7 completionBlock:(/*^block*/ id)arg8 ;
-(void)noteDecryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
-(void)noteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
-(void)noteRemoteDecryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
-(void)noteRemoteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(long long)arg6 ;
@end

