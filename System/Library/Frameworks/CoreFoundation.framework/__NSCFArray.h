/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSCFArray : NSMutableArray
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)retainCount;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)classForCoder;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)finalize;
@end

