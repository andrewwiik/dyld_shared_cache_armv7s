/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUTaskMemoryCache : NSObject {

	mapped_memory_tRef _memoryRegions;
	unsigned _task;
	bool _taskIs64Bit;
	bool _stopped;
	bool _shouldTouchPages;

}
+(bool)taskIs64Bit:(unsigned)arg1 ;
+(id)taskMemoryCacheForTask:(unsigned)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(void)dealloc;
-(int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void*)arg3 ;
-(bool)copyRange:(VMURange)arg1 to:(void*)arg2 ;
-(int)startPeeking;
-(void)flushMemoryCache;
-(int)stopPeeking;
-(int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2 ;
-(void)finalize;
@end
