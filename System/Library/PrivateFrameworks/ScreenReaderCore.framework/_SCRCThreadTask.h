/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSConditionLock;

@interface _SCRCThreadTask : NSObject {

	id _target;
	SEL _selector;
	unsigned _count;
	void** _objects[6];
	NSConditionLock* _waitLock;
	unsigned _mask;

}
-(void)fire;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)setWaitLock:(id)arg1 ;
@end

