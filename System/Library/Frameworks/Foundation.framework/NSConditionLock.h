/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLocking.h>

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZone)arg1 ;
-(bool)tryLock;
-(bool)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)lock;
-(void)unlock;
-(long long)condition;
-(id)initWithCondition:(long long)arg1 ;
-(void)lockWhenCondition:(long long)arg1 ;
-(bool)tryLockWhenCondition:(long long)arg1 ;
-(void)unlockWithCondition:(long long)arg1 ;
-(bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(void)finalize;
@end

