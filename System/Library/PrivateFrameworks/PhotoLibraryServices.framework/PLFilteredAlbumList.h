/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAlbumContainer.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource.h>
#import <PhotoLibraryServices/PLIndexMappingCache.h>
#import <PhotoLibraryServices/PLDerivedAlbumListOrigin.h>

@protocol PLIndexMappingCache;
@class PLIndexMapper, NSMutableIndexSet, NSMutableOrderedSet, NSObject, PLManagedAlbumList, NSPredicate, PLPhotoLibrary, NSString, NSIndexSet;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin> {

	PLIndexMapper* _indexMapper;
	NSMutableIndexSet* _filteredIndexes;
	NSMutableOrderedSet* _weak_albums;
	NSObject<PLIndexMappingCache>* _derivedAlbumLists[5];
	int filter;
	PLManagedAlbumList* backingAlbumList;
	NSPredicate* predicate;

}

@property (nonatomic,readonly) int albumListType; 
@property (assign,nonatomic) int filter; 
@property (nonatomic,readonly) NSMutableOrderedSet * albums; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,readonly) bool canEditAlbums; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PLIndexMapper * indexMapper; 
@property (nonatomic,retain) PLManagedAlbumList * backingAlbumList; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (nonatomic,retain) NSMutableOrderedSet * _albums; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) NSString * _prettyDescription; 
@property (nonatomic,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) NSIndexSet * filteredIndexes; 
@property (nonatomic,readonly) <NSObject><NSCopying> * cachedIndexMapState; 
+(id)filteredAlbumList:(id)arg1 filter:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(bool)isEmpty;
-(void)setFilter:(int)arg1 ;
-(id)identifier;
-(id)_typeDescription;
-(void)setPredicate:(id)arg1 ;
-(id)managedObjectContext;
-(id)predicate;
-(id)albums;
-(id)photoLibrary;
-(unsigned long long)albumsCount;
-(id)_prettyDescription;
-(void)unregisterAllDerivedAlbums;
-(id)filteredIndexes;
-(bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id)cachedIndexMapState;
-(id)indexMapper;
-(id)containers;
-(bool)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(int)albumListType;
-(bool)hasAtLeastOneAlbum;
-(bool)canEditAlbums;
-(/*^block*/ id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(void)enumerateDerivedAlbumLists:(/*^block*/ id)arg1 ;
-(bool)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(bool)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(unsigned long long)unreadAlbumsCount;
-(void)registerDerivedAlbumList:(NSObject*)arg1 ;
-(id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2 ;
-(void)setBackingAlbumList:(id)arg1 ;
-(id)backingAlbumList;
-(void)_backingContextDidChange:(id)arg1 ;
-(void)_invalidateFilteredIndexes;
-(id)_albums;
-(void)set_albums:(id)arg1 ;
-(unsigned long long)countOfFilteredAlbums;
-(unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1 ;
-(id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1 ;
-(id)filteredAlbumsAtIndexes:(id)arg1 ;
-(void)getFilteredAlbums:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeFilteredAlbumsAtIndexes:(id)arg1 ;
-(void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2 ;
-(int)filter;
@end

