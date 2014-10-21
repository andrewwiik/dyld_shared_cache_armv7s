/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject {

	int _databaseVersion;
	NSDictionary* _fullMetadata;
	unsigned long long _primaryKeyGeneration;
	NSMutableDictionary* _mapData;
	NSDictionary* _storeOptions;

}
-(bool)readMetadataFromFile:(id)arg1 error:(id*)arg2 ;
-(id)fullMetadata;
-(void)setFullMetadata:(id)arg1 ;
-(bool)writeMetadataToFile:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseVersion:(int)arg1 ;
-(void)setPrimaryKeyGeneration:(unsigned long long)arg1 ;
-(void)setMapData:(id)arg1 ;
-(void)clearCurrentValues;
-(bool)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id*)arg3 ;
-(bool)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4 ;
-(int)databaseVersion;
-(unsigned long long)primaryKeyGeneration;
-(id)mapData;
-(bool)readFromFile:(id)arg1 error:(id*)arg2 ;
-(bool)writeToFile:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

