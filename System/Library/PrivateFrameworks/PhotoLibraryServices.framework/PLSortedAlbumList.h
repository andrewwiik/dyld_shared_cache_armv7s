/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAlbumContainer.h>
#import <PhotoLibraryServices/PLIndexMappingCache.h>

@class NSMutableOrderedSet, NSString;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {

	NSObject* _backingAlbumList;
	CFArrayRef _toBackingMap;
	CFArrayRef _fromBackingMap;
	/*^block*/ id _sortComparator;
	NSMutableOrderedSet* _weak_albums;

}

@property (nonatomic,retain) NSObject<PLAlbumContainer> * backingAlbumList;              //@synthesize backingAlbumList=_backingAlbumList - In the implementation block
@property (nonatomic,copy) id sortComparator;                                            //@synthesize sortComparator=_sortComparator - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _albums; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,readonly) NSString * _prettyDescription; 
@property (nonatomic,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) <NSObject><NSCopying> * cachedIndexMapState; 
-(void)dealloc;
-(bool)isEmpty;
-(id)identifier;
-(id)_typeDescription;
-(id)managedObjectContext;
-(id)albums;
-(id)photoLibrary;
-(unsigned long long)albumsCount;
-(id)_prettyDescription;
-(bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id)cachedIndexMapState;
-(id)containers;
-(bool)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(int)albumListType;
-(bool)hasAtLeastOneAlbum;
-(bool)canEditAlbums;
-(/*^block*/ id)albumsSortingComparator;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(bool)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(bool)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(unsigned long long)unreadAlbumsCount;
-(void)setBackingAlbumList:(NSObject*)arg1 ;
-(NSObject*)backingAlbumList;
-(id)_albums;
-(void)set_albums:(id)arg1 ;
-(void)setSortComparator:(/*^block*/ id)arg1 ;
-(/*^block*/ id)sortComparator;
-(id)initWithAlbumList:(NSObject*)arg1 sortComparator:(/*^block*/ id)arg2 ;
-(void)createSortedIndexesMap;
-(unsigned long long)countOfSortedAlbums;
-(unsigned long long)indexInSortedAlbumsOfObject:(id)arg1 ;
-(id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(int)filter;
@end
