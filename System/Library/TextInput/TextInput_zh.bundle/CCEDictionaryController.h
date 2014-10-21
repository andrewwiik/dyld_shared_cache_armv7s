/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, CCEDictionaryInformation, NSArray;

@interface CCEDictionaryController : NSObject {

	NSMapTable* _dictionaryIdentifiers;
	CCEDictionaryInformation* _currentSearchSession;
	NSArray* _currentIdentifiers;
	unsigned long long _currentIdentifierCounter;

}
-(void)dealloc;
-(id)init;
-(void)_initializeForNewSearch;
-(id)_nextSearchResult;
-(id)_convertedSearchResult:(id)arg1 ;
-(id)nextCandidate;
-(id)allCandidates;
-(void)setSearchString:(id)arg1 forIdentifiers:(id)arg2 ;
-(bool)dictionaryExistsAtPath:(id)arg1 ;
-(void)createDictionaryAtPath:(id)arg1 ;
-(bool)setIdentifier:(id)arg1 forDictionaryWithPath:(id)arg2 ;
-(void)setDataUnpackingEncoding:(unsigned long long)arg1 forIdentifiers:(id)arg2 ;
-(void)setDataUnpackingNames:(id)arg1 separator:(id)arg2 forIdentifiers:(id)arg3 ;
-(void)setSearchMethod:(int)arg1 forIdentifiers:(id)arg2 ;
-(id)allEntriesInDictionaryWithIdentifier:(id)arg1 ;
-(bool)entryExists:(id)arg1 forKey:(id)arg2 identifier:(id)arg3 ;
-(void)addEntry:(id)arg1 forKey:(id)arg2 identifier:(id)arg3 ;
-(void)deleteEntry:(id)arg1 forKey:(id)arg2 identifier:(id)arg3 ;
@end

