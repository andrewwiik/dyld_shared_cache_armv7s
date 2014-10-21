/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSManagedObject;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _ignoringIdempotentKVO : 1;
		unsigned _mustCopyOnWrite : 1;
		unsigned _isImmutableCopy : 1;
		unsigned _reserved : 11;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;
	unsigned* _orderKeys;
	id _grottyHack;

}
+(bool)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone)arg1 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(bool)arg3 ;
-(void)willRead;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/ id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/ id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/ id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(void)turnIntoFault;
-(id)relationship;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(bool)_shouldProcessKVOChange;
-(bool)_isIdenticalFault:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(Class)classForArchiver;
-(bool)isEqualToOrderedSet:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(bool)_hasOrderKeys;
-(void)_batchFulfillOrderKeysForObjectsIntoIndexes:(unsigned long long*)arg1 ;
-(void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned long long*)arg3 reorderedIndexes:(char**)arg4 ;
-(unsigned)_orderKeyForObject:(id)arg1 ;
-(id)_newOrderKeys;
-(void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1 ;
-(void)_assignOrderKeysUsingCount:(unsigned)arg1 ;
-(void)willChange;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/ id)arg3 ;
-(void)_setProcessingIdempotentKVO:(bool)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)description;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(bool)containsObject:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)classForCoder;
-(void)sortUsingComparator:(/*^block*/ id)arg1 ;
-(id)objectEnumerator;
-(id)valueForKeyPath:(id)arg1 ;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)allObjects;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(id)source;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(void)unionSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(bool)isFault;
-(void)unionOrderedSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
@end

