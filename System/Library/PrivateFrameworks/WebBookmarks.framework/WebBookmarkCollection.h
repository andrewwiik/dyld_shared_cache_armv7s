/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class WebBookmarkTitleWordTokenizer, WebBookmark, SafariFetcherServerProxy;

@interface WebBookmarkCollection : NSObject {

	sqlite3Ref _db;
	CFLocaleRef _locale;
	WebBookmarkTitleWordTokenizer* _wordTokenizer;
	WebBookmark* _rootBookmark;
	unsigned _favoritesFolderIdentifier;
	bool _merging;
	bool _dirty;
	SafariFetcherServerProxy* _safariFetcherServerProxy;

}

@property (assign,getter=isMerging,nonatomic) bool merging;                                                                    //@synthesize merging=_merging - In the implementation block
@property (getter=isWebFilterEnabled,nonatomic,readonly) bool webFilterEnabled; 
@property (getter=isWebFilterWhiteListOnlyModeEnabled,nonatomic,readonly) bool webFilterWhiteListOnlyModeEnabled; 
+(bool)lockSync;
+(void)unlockSync;
+(bool)isLockedSync;
+(void)_postBookmarksChangedSyncNotification;
+(id)safariBookmarkCollection;
+(id)_uniqueExternalUUID;
+(id)safariDirectoryPath;
+(id)_currentProcessContainerPath;
+(id)readingListArchivesDirectoryPath;
+(unsigned long long)readingListArchivesDiskUsage;
-(unsigned long long)generation;
-(void)rollbackSyncTransaction;
-(bool)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(bool)arg2 error:(id*)arg3 ;
-(bool)syncSetString:(id)arg1 forKey:(id)arg2 ;
-(void)commitSyncTransaction;
-(id)bookmarksDictionary;
-(id)syncStringForKey:(id)arg1 ;
-(bool)beginSyncTransaction;
-(id)syncDataForKey:(id)arg1 ;
-(bool)setSyncData:(id)arg1 forKey:(id)arg2 ;
-(bool)_addChildrenOfID:(unsigned)arg1 toCollection:(id)arg2 recursive:(bool)arg3 error:(id*)arg4 ;
-(id)_bookmarkDictionaryForSqliteRow:(sqlite3_stmtRef)arg1 recursive:(bool)arg2 error:(id*)arg3 ;
-(bool)_syncAdd:(id)arg1 toParent:(unsigned)arg2 withOrderIndex:(unsigned)arg3 error:(id*)arg4 ;
-(bool)_mergeChildrenOfID:(unsigned)arg1 referencingBase:(id)arg2 error:(id*)arg3 ;
-(bool)_markSpecialBookmarks;
-(bool)_deleteSyncPropertyForKey:(id)arg1 ;
-(bool)_syncPropertyExistsForKey:(id)arg1 ;
-(bool)containsOnlyStockBookmarks;
-(void)dealloc;
-(bool)isEmpty;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)purgeableSpace;
-(unsigned long long)purge:(unsigned long long)arg1 ;
-(id)initSafariBookmarkCollectionCheckingIntegrity:(bool)arg1 ;
-(void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
-(bool)_restoreMissingSpecialBookmarks;
-(bool)_clearAllDAVSyncData;
-(id)_bookmarkWithServerID:(id)arg1 ;
-(bool)_setServerID:(id)arg1 forBookmark:(id)arg2 ;
-(id)_serverIDForBookmarkID:(unsigned)arg1 ;
-(bool)_setSyncKey:(id)arg1 forBookmark:(id)arg2 ;
-(bool)_setSyncData:(id)arg1 forBookmark:(id)arg2 ;
-(bool)_saveBookmark:(id)arg1 withSpecialID:(unsigned)arg2 updateGenerationIfNeeded:(bool)arg3 ;
-(bool)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 ;
-(id)_syncKeysForServerIDs:(id)arg1 ;
-(id)_serverIDsInFolderWithServerID:(id)arg1 ;
-(id)_serverIDAtOrderIndex:(unsigned)arg1 inFolderWithServerID:(id)arg2 ;
-(bool)clearReadingListArchiveWithUUID:(id)arg1 ;
-(bool)clearAllReadingListArchives;
-(bool)_deleteBookmark:(id)arg1 leaveTombstone:(bool)arg2 ;
-(id)readingListWithUnreadOnly:(bool)arg1 ;
-(id)_changeList;
-(int)_DAVGeneration;
-(bool)_clearChangeList;
-(void)setMerging:(bool)arg1 ;
-(unsigned)_bookmarkIDForServerID:(id)arg1 ;
-(bool)isMerging;
-(id)_bookmarkWithSpecialID:(unsigned)arg1 ;
-(id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(unsigned)arg2 ;
-(id)_mergeCandidateBookmarkWithAddress:(id)arg1 parent:(unsigned)arg2 ;
-(bool)_markBookmarkID:(unsigned)arg1 added:(bool)arg2 ;
-(bool)_openDatabaseAtPath:(id)arg1 checkIntegrity:(bool)arg2 error:(id*)arg3 ;
-(void)_registerForSyncBookmarksFileChangedNotification;
-(id)initWithPath:(id)arg1 checkIntegrity:(bool)arg2 ;
-(id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(bool)arg4 ;
-(id)_errorForMostRecentSQLiteError;
-(void)_createSchema;
-(id)_errorForMostRecentSQLiteErrorWithErrorCode:(long long)arg1 ;
-(void)_migrateToCurrentSchema;
-(bool)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2 ;
-(void)_registerForWebFilterConfigurationChangedNotification;
-(bool)saveBookmark:(id)arg1 ;
-(unsigned)readingListFolderBookmarkID;
-(int)_executeSQL:(id)arg1 ;
-(id)_safariFetcherServerProxy;
-(id)_readingListItemsWhere:(id)arg1 ;
-(bool)saveBookmark:(id)arg1 startReadingListFetcher:(bool)arg2 ;
-(bool)markWebContentFilterAllowsAllReadingListItems;
-(int)_executeSQLWithCString:(const char*)arg1 ;
-(id)purgeableReadingListItems;
-(bool)vacuum;
-(sqlite3_stmtRef)_selectBookmarksWhere:(id)arg1 ;
-(int)_finalizeStatementIfNotNull:(sqlite3_stmtRef)arg1 ;
-(bool)isWebFilterWhiteListOnlyModeEnabled;
-(id)rootBookmark;
-(id)bookmarkWithID:(unsigned)arg1 ;
-(id)listWithID:(unsigned)arg1 skipOffset:(unsigned)arg2 ;
-(int)_intFromExecutingSQL:(id)arg1 ;
-(id)listWithID:(unsigned)arg1 ;
-(id)listWithID:(unsigned)arg1 skipOffset:(unsigned)arg2 includeHidden:(bool)arg3 ;
-(id)_rootFolderHiddenChildrenClause;
-(id)listWithSpecialID:(unsigned)arg1 ;
-(unsigned)webFilterWhiteListFolderBookmarkID;
-(id)favoritesFolder;
-(unsigned)_parentIdentifierForBookmarksNeedingIcons;
-(sqlite3_stmtRef)_selectBookmarksWhere:(id)arg1 countOnly:(bool)arg2 ;
-(void)_simulateCrashWithDescription:(id)arg1 ;
-(unsigned)_specialIDForBookmarkBeingSaved:(id)arg1 ;
-(void)_postBookmarksFolderContentsDidChangeNotification:(unsigned)arg1 ;
-(void)_postBookmarksSpecialFoldersDidChangeNotification;
-(void)_startReadingListFetcher;
-(bool)_incrementGeneration;
-(bool)deleteBookmark:(id)arg1 postChangeNotification:(bool)arg2 ;
-(bool)_moveBookmark:(id)arg1 toFolderWithID:(unsigned)arg2 ;
-(bool)_moveBookmark:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)_normalizeSearchString:(CFStringRef)arg1 ;
-(void)_enumerateBookmarksForMatchStatement:(id)arg1 normalizedQuery:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)_addBookmarksForReadingListMatchStatement:(id)arg1 normalizedQuery:(id)arg2 toArray:(id)arg3 maxResults:(int)arg4 ;
-(id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(bool)arg2 inParent:(unsigned)arg3 ;
-(void)_postBookmarksDidReloadNotification;
-(id)_tableExpressionForArchiveMode:(int)arg1 ;
-(id)_orderedWhereClauseForArchiveMode:(int)arg1 ;
-(id)rollingListOfArchivedReadingListItems;
-(void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned long long)arg2 ;
-(void)_clearAndCreateBookmarksTables;
-(void)_clearAndCreateAncestorTable;
-(void)_clearAndCreateBookmarksTitleWordTable;
-(bool)_indexAllTitleWords;
-(void)_normalizeDatabaseURLs;
-(bool)_rebuildAncestorTable;
-(bool)deleteAllFavoriteIcons;
-(bool)markAllFavoritesAsNeedingIcons;
-(void)_migrateSchemaVersion3ToVersion4;
-(void)_migrateSchemaVersion4ToVersion5;
-(void)_migrateSchemaVersion5ToVersion6;
-(void)_migrateSchemaVersion6ToVersion7;
-(void)_migrateSchemaVersion7ToVersion8;
-(void)_migrateSchemaVersion8ToVersion9;
-(void)_migrateSchemaVersion9ToVersion10;
-(void)_migrateSchemaVersion10ToVersion11;
-(void)_migrateSchemaVersion11And12And13ToVersion14;
-(void)_migrateSchemaVersion14ToVersion15;
-(void)_migrateSchemaVersion15ToVersion16;
-(void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
-(void)_migrateSchemaVersion21ToVersion22;
-(void)_migrateSchemaVersion22ToVersion23;
-(void)_migrateSchemaVersion23ToVersion24;
-(void)_migrateSchemaVersion24ToVersion25;
-(long long)_userVersion;
-(void)_migrateSchemaVersion0ToVersion1;
-(void)_migrateSchemaVersion1And2ToVersion3;
-(void)_migrateSchemaVersion19And20ToVersion21;
-(void)_migrateSchemaVersion25ToVersion26;
-(void)_migrateSchemaVersion26ToVersion27;
-(void)_migrateSchemaVersion27ToVersion28;
-(void)_migrateSchemaVersion28ToVersion29;
-(void)_migrateSchemaVersion29ToVersion30;
-(void)_migrateSchemaVersion30ToVersion31;
-(void)_migrateSchemaVersion31ToVersion32;
-(void)_migrateSchemaVersion32ToVersion33;
-(void)_migrateSchemaVersion33ToVersion34;
-(void)_migrateSchemaVersion34ToVersion35;
-(void)_migrateSchemaVersion35ToVersion36;
-(void)_migrateSchemaVersion36ToVersion37;
-(void)_migrateSchemaVersion37ToVersion38;
-(void)_rerunMigrationsIfNecessary;
-(bool)_importBookmarksPlist:(id)arg1 ;
-(bool)_importSyncAnchorPlist:(id)arg1 ;
-(bool)_insertAncestorTableEntriesForBookmarkID:(unsigned)arg1 withAncestorIDs:(id)arg2 ;
-(bool)_restoreBookmarkBarIfMissing;
-(void)_restoreOrMergeReadingListFolderWithChangeNotification:(bool)arg1 ;
-(void)_restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:(bool)arg1 ;
-(unsigned)_orderIndexForBookmarkInsertedIntoParent:(unsigned)arg1 insertAtBeginning:(bool)arg2 ;
-(bool)_updateCachedChildCountForParentID:(unsigned)arg1 inDirection:(int)arg2 ;
-(bool)_clearSyncKeysUnderBookmarkID:(unsigned)arg1 isFolder:(bool)arg2 ;
-(bool)_insertTombstoneWithServerID:(id)arg1 ;
-(bool)_deleteAncestorTableEntriesForBookmarkID:(unsigned)arg1 ;
-(bool)_insertAncestorTableEntriesForBookmarkID:(unsigned)arg1 withParentID:(unsigned)arg2 ;
-(bool)_clearAllSyncKeys;
-(bool)_clearAllTombstones;
-(bool)_deleteRecursively:(unsigned)arg1 ;
-(unsigned)_specialIDForBookmarkTitle:(id)arg1 ;
-(id)_databaseTitleForSpecialID:(unsigned)arg1 ;
-(bool)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(unsigned)arg3 orderIndex:(unsigned)arg4 isFolder:(bool)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 updateParentChildCount:(bool)arg8 updateAncestorEntries:(bool)arg9 ;
-(bool)_updateHiddenAncestorCountForBookmarksUnderFolderID:(unsigned)arg1 addingOffset:(int)arg2 ;
-(bool)_markBookmarkID:(unsigned)arg1 withSpecialID:(unsigned)arg2 ;
-(bool)_reindexBookmarkID:(unsigned)arg1 title:(id)arg2 ;
-(bool)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 ;
-(bool)_clearTitleWordsForBookmarkID:(unsigned)arg1 ;
-(bool)_indexBookmarkID:(unsigned)arg1 title:(id)arg2 ;
-(void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3 ;
-(bool)_incrementDAVGeneration;
-(bool)isWebFilterEnabled;
-(void)postBookmarksDidReloadNotification;
-(id)bookmarksBarBookmark;
-(unsigned)_favoritesFolderIdentifier;
-(id)webFilterWhiteListFolder;
-(id)webFilterWhiteList;
-(bool)moveBookmark:(id)arg1 toFolderWithID:(unsigned)arg2 ;
-(id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 ;
-(bool)cleanupReadingListArchives;
-(bool)markArchivedReadingListItemsAsNonRecoverable;
-(bool)updateReadingListWebFilterStatusForUnsetItemsOnly:(bool)arg1 ;
-(void)localeSettingsChanged;
-(id)bookmarkWithUUID:(id)arg1 ;
-(id)readingListFolder;
-(id)bookmarkAtPath:(id)arg1 ;
-(id)subfoldersOfID:(unsigned)arg1 ;
-(id)rootList;
-(id)bookmarksBarList;
-(bool)shouldFetchIconForBookmark:(id)arg1 ;
-(id)bookmarksNeedingIcons;
-(bool)deleteBookmark:(id)arg1 ;
-(bool)reorderBookmark:(id)arg1 toIndex:(unsigned)arg2 ;
-(bool)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(sqlite3_stmtRef)_prefixSearch:(id)arg1 usingColumns:(const char*)arg2 maxCount:(unsigned)arg3 ;
-(id)bookmarksMatchingString:(id)arg1 ;
-(void)enumerateBookmarks:(bool)arg1 andReadingListItems:(bool)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)_bookmarksFromStatementSelectingIDs:(const char*)arg1 withQuery:(id)arg2 ;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(bool)arg3 ;
-(id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(bool)arg2 ;
-(unsigned)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(bool)arg2 ;
-(unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1 ;
-(id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1 ;
-(id)readingListBookmarksNeedingArchiveInMode:(int)arg1 ;
-(bool)rollOutLastReadingListItem;
-(void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
-(unsigned long long)rollingReadingListMaximumCount;
-(void)clearCarrierBookmarks;
-(id)_bookmarksInListWhere:(id)arg1 fromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(void)_webFilterConfigurationChanged;
-(id)webFilterUserSettings;
-(void)setFavoritesFolderIdentifier:(unsigned)arg1 ;
-(void)_clearCachedFavoritesFolderIdentifier;
-(id)favoritesFolderList;
-(bool)bookmarkIsFavoritesFolder:(id)arg1 ;
@end
