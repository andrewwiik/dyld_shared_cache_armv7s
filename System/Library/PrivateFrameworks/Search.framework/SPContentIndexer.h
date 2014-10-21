/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Search/Search-Structs.h>
@class NSString, SPIndex, NSMutableArray;

@interface SPContentIndexer : NSObject {

	NSString* _displayIdentifier;
	NSString* _category;
	CXQueryRef _query;
	CXIndexRef _index;
	unsigned _version;
	SPIndex* _store;
	NSMutableArray* _dirtyRecords;
	NSMutableArray* _dirtyContent;
	NSMutableArray* _dirtyRemoves;

}
+(void)preheat;
+(id)indexerForDisplayIdentifier:(id)arg1 category:(id)arg2 ;
-(void)dealloc;
-(id)_indexPath;
-(bool)commitUpdates;
-(id)_legacyIndexPath;
-(id)_legacyStorePath;
-(id)_storePath;
-(void)_openOrCreateIndex;
-(id)initWithDisplayIdentifier:(id)arg1 category:(id)arg2 version:(unsigned)arg3 ;
-(void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2 existingRecord:(id)arg3 ;
-(void)removeRecord:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(bool)nextSearchResults:(id*)arg1 ;
-(id)resultForIdentifier:(id)arg1 ;
-(id)existingRecordsForExtIDs:(id)arg1 ;
-(void)cancelSearch;
@end

