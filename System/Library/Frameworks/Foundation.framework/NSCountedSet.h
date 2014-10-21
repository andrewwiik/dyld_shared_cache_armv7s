/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet {

	id _table;
	void* _reserved;

}
+(bool)supportsSecureCoding;
-(id)initWithSet:(id)arg1 copyItems:(bool)arg2 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

