/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <CoreFoundation/NSCoding.h>

@class NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding> {

	NSArray* _groupByProperties;
	NSPredicate* _havingPredicate;
	unsigned long long _offset;
	NSArray* _valuesToFetch;
	NSEntityDescription* _entity;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _batchSize;
	unsigned long long _fetchLimit;
	NSArray* _relationshipKeyPathsForPrefetching;
	struct {
		unsigned distinctValuesOnly : 1;
		unsigned includesSubentities : 1;
		unsigned includesPropertyValues : 1;
		unsigned resultType : 3;
		unsigned returnsObjectsAsFaults : 1;
		unsigned excludePendingChanges : 1;
		unsigned isInUse : 1;
		unsigned entityIsName : 1;
		unsigned refreshesRefetched : 1;
		unsigned propertiesValidated : 1;
		unsigned disableCaching : 1;
		unsigned _RESERVED : 19;
	}  _flags;

}
+(bool)accessInstanceVariablesDirectly;
+(void)initialize;
+(id)fetchRequestWithEntityName:(id)arg1 ;
-(void)_throwIfNotEditable;
-(bool)_isEditable;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(bool)_disablePersistentStoreResultCaching;
-(void)_setDisablePersistentStoreResultCaching:(bool)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)_incrementInUseCounter;
-(id)stores;
-(bool)hasChanges;
-(unsigned long long)requestType;
-(bool)includesPropertyValues;
-(bool)includesSubentities;
-(unsigned long long)fetchLimit;
-(id)propertiesToGroupBy;
-(bool)returnsObjectsAsFaults;
-(id)propertiesToFetch;
-(unsigned long long)fetchOffset;
-(id)havingPredicate;
-(id)relationshipKeyPathsForPrefetching;
-(bool)returnsDistinctResults;
-(bool)includesPendingChanges;
-(bool)shouldRefreshRefetchedObjects;
-(void)setReturnsDistinctResults:(bool)arg1 ;
-(void)setShouldRefreshRefetchedObjects:(bool)arg1 ;
-(id)affectedStores;
-(id)_newValidatedProperties:(id)arg1 groupBy:(bool)arg2 error:(id*)arg3 ;
-(void)setAffectedStores:(id)arg1 ;
-(void)setPropertiesToGroupBy:(id)arg1 ;
-(id)groupByProperties;
-(void)setGroupByProperties:(id)arg1 ;
-(void)setHavingPredicate:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(void)setSortDescriptors:(id)arg1 ;
-(id)predicate;
-(void)setEntity:(id)arg1 ;
-(id)entityName;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setReturnsObjectsAsFaults:(bool)arg1 ;
-(void)setRelationshipKeyPathsForPrefetching:(id)arg1 ;
-(void)setIncludesPendingChanges:(bool)arg1 ;
-(void)setIncludesPropertyValues:(bool)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(id)entity;
-(void)setPropertiesToFetch:(id)arg1 ;
-(void)setIncludesSubentities:(bool)arg1 ;
-(unsigned long long)fetchBatchSize;
-(id)sortDescriptors;
-(id)initWithEntityName:(id)arg1 ;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(unsigned long long)resultType;
@end

