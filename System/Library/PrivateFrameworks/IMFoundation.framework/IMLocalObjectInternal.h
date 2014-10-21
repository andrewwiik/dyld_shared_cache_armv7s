/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_semaphore;
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSMutableArray, NSLock;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_semaphore>* _deathLock;
	NSString* _portName;
	NSProtocolChecker* _protocolChecker;
	NSMutableArray* _componentQueue;
	NSLock* _componentQueueLock;
	NSRecursiveLock* _componentQueueProcessingLock;
	bool _pendingComponentQueueProcessing;
	bool _busyForwarding;

}
-(void)dealloc;
@end
