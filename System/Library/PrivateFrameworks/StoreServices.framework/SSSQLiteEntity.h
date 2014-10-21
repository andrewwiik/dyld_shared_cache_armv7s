/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@protocol SSSQLiteEntity <NSObject>
@required
+(id)foreignDatabaseTableForProperty:(id)arg1;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1;
+(id)databasePropertyToSetClientProperty:(id)arg1;
+(id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+(id)joinClauseForProperty:(id)arg1;
+(id)databasePropertyToGetClientProperty:(id)arg1;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1;
+(id)foreignDatabaseColumnForProperty:(id)arg1;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
-(id)valueForProperty:(id)arg1;
-(bool)setValue:(id)arg1 forProperty:(id)arg2;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
-(bool)setValuesWithDictionary:(id)arg1;
-(bool)deleteFromDatabase;
-(id)copyValuesForClientProperties:(id)arg1;
-(id)copyXPCEncodedValuesForClientProperties:(id)arg1;
@end


@class SSSQLiteDatabase;

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity> {

	SSSQLiteDatabase* _database;
	long long _persistentID;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long persistentID;                   //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) bool existsInDatabase; 
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1 ;
+(Class)memoryEntityClass;
-(id)database;
-(id)valueForProperty:(id)arg1 ;
-(bool)setValue:(id)arg1 forProperty:(id)arg2 ;
-(long long)persistentID;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2 ;
-(id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2 ;
-(bool)setValuesWithDictionary:(id)arg1 ;
-(bool)deleteFromDatabase;
-(id)_copyTableClusteredValuesWithValues:(id)arg1 ;
-(bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 ;
-(id)copyValuesForClientProperties:(id)arg1 ;
-(id)copyXPCEncodedValuesForClientProperties:(id)arg1 ;
-(bool)existsInDatabase;
@end

