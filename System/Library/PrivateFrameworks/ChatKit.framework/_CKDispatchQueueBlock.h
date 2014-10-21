/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _CKDispatchQueueBlock : NSObject {

	/*^block*/ id _block;
	NSString* _key;
	long long _priority;
	unsigned long long _fifo;

}

@property (nonatomic,copy) id block;                               //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned long long fifo;              //@synthesize fifo=_fifo - In the implementation block
-(void)dealloc;
-(id)description;
-(void)cancel;
-(long long)compare:(id)arg1 ;
-(id)key;
-(void)setKey:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)initWithBlock:(/*^block*/ id)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(unsigned long long)arg4 ;
-(unsigned long long)fifo;
-(void)setFIFO:(unsigned long long)arg1 ;
-(/*^block*/ id)block;
-(void)setBlock:(/*^block*/ id)arg1 ;
@end
