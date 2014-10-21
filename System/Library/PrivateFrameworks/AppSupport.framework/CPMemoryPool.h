/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSMutableArray;

@interface CPMemoryPool : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _files;
	char* _label;
	unsigned long long _slotLength;

}

@property (nonatomic,readonly) unsigned long long slotLength;              //@synthesize slotLength=_slotLength - In the implementation block
-(void)dealloc;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLabel:(const char*)arg1 slotLength:(unsigned long long)arg2 ;
-(unsigned long long)slotLength;
@end

