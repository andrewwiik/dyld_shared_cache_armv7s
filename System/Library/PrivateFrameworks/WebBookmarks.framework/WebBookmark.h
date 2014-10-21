/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class NSString, NSData, NSDictionary, NSDate;

@interface WebBookmark : NSObject {

	bool _folder;
	NSString* _title;
	NSString* _url;
	NSString* _UUID;
	NSString* _serverID;
	NSString* _syncKey;
	NSData* _syncData;
	bool _editable;
	bool _deletable;
	bool _hidden;
	bool _syncable;
	bool _fetchedIconData;
	NSData* _iconData;
	bool _locallyAdded;
	int _archiveStatus;
	int _webFilterStatus;
	NSDictionary* _extraAttributes;
	NSDictionary* _localAttributes;
	unsigned _id;
	unsigned _parentID;
	unsigned _specialID;
	unsigned _orderIndex;
	bool _inserted;
	bool _needsSyncUpdate;

}

@property (nonatomic,retain) NSString * previewText; 
@property (assign,nonatomic) bool locallyAdded; 
@property (assign,nonatomic) int archiveStatus; 
@property (assign,nonatomic) int webFilterStatus; 
@property (nonatomic,retain) NSDate * dateLastArchived; 
@property (nonatomic,retain) NSDate * dateAdded; 
@property (nonatomic,retain) NSDate * dateLastViewed; 
@property (nonatomic,retain) NSDate * dateLastFetched; 
@property (nonatomic,retain) NSDictionary * nextPageURLs; 
@property (nonatomic,retain) NSString * localPreviewText; 
@property (nonatomic,retain) NSString * siteName; 
@property (nonatomic,retain) NSString * sourceBundleID; 
@property (nonatomic,retain) NSString * sourceLocalizedAppName; 
@property (nonatomic,retain) NSString * serverID; 
@property (nonatomic,retain) NSString * syncKey; 
@property (nonatomic,retain) NSData * syncData; 
@property (assign,nonatomic) bool needsSyncUpdate;                             //@synthesize needsSyncUpdate=_needsSyncUpdate - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * address;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned parentID;                              //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) unsigned identifier;                            //@synthesize id=_id - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) unsigned specialID;                             //@synthesize specialID=_specialID - In the implementation block
@property (getter=isEditable,nonatomic,readonly) bool editable;                //@synthesize editable=_editable - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) bool deletable;              //@synthesize deletable=_deletable - In the implementation block
@property (getter=isHidden,nonatomic,readonly) bool hidden;                    //@synthesize hidden=_hidden - In the implementation block
@property (getter=isFolder,nonatomic,readonly) bool folder;                    //@synthesize folder=_folder - In the implementation block
@property (getter=isInserted,nonatomic,readonly) bool inserted;                //@synthesize inserted=_inserted - In the implementation block
@property (getter=isSyncable,nonatomic,readonly) bool syncable;                //@synthesize syncable=_syncable - In the implementation block
@property (assign,nonatomic) bool fetchedIconData;                             //@synthesize fetchedIconData=_fetchedIconData - In the implementation block
@property (nonatomic,retain) NSData * iconData;                                //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSDictionary * extraAttributes;                   //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * localAttributes;                   //@synthesize localAttributes=_localAttributes - In the implementation block
+(id)_trimmedTitle:(id)arg1 ;
+(id)_trimmedPreviewText:(id)arg1 ;
-(id)_readingListPropertyNamed:(id)arg1 ;
-(void)_modifyExtraReadingListAttributes:(/*^block*/ id)arg1 ;
-(void)_modifyLocalReadingListAttributes:(/*^block*/ id)arg1 ;
-(unsigned long long)archiveSize;
-(void)clearArchiveSynchronously;
-(void)clearArchive;
-(bool)fullArchiveAvailable;
-(id)_suggestedFileNameForWebView:(id)arg1 ;
-(unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2 ;
-(void)_removeDirectoryAtPath:(id)arg1 ;
-(id)webarchivePathInReaderForm:(bool)arg1 fileExists:(bool*)arg2 ;
-(id)webarchivePathForNextPageURL:(id)arg1 ;
-(bool)writeOfflineWebView:(id)arg1 asArchive:(bool)arg2 inReaderForm:(bool)arg3 ;
-(bool)shouldReattemptArchive;
-(id)previewText;
-(id)dateAdded;
-(void)setDateAdded:(id)arg1 ;
-(void)cleanupRedundantPreviewText;
-(bool)isReadingListItem;
-(int)archiveStatus;
-(void)setArchiveStatus:(int)arg1 ;
-(void)setWebFilterStatus:(int)arg1 ;
-(id)dateLastViewed;
-(void)setDateLastArchived:(id)arg1 ;
-(bool)locallyAdded;
-(int)webFilterStatus;
-(id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3 ;
-(id)localPreviewText;
-(void)setPreviewText:(id)arg1 ;
-(void)setLocallyAdded:(bool)arg1 ;
-(id)dateLastArchived;
-(void)setDateLastViewed:(id)arg1 ;
-(id)dateLastFetched;
-(void)setDateLastFetched:(id)arg1 ;
-(id)sourceLocalizedAppName;
-(void)setSourceLocalizedAppName:(id)arg1 ;
-(id)sourceBundleID;
-(void)setSourceBundleID:(id)arg1 ;
-(void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3 ;
-(void)setNextPageURLs:(id)arg1 ;
-(id)nextPageURLs;
-(id)siteName;
-(void)setSiteName:(id)arg1 ;
-(void)setLocalPreviewText:(id)arg1 ;
-(void)_setUUID:(id)arg1 ;
-(void)setServerID:(id)arg1 ;
-(id)serverID;
-(void)setSyncKey:(id)arg1 ;
-(id)syncKey;
-(void)_markSpecial:(unsigned)arg1 ;
-(id)syncData;
-(void)setSyncData:(id)arg1 ;
-(unsigned)_orderIndex;
-(void)_setParentID:(unsigned)arg1 ;
-(id)_initWithSqliteRow:(sqlite3_stmtRef)arg1 ;
-(void)_setOrderIndex:(unsigned)arg1 ;
-(void)_setID:(unsigned)arg1 ;
-(void)_setInserted:(bool)arg1 ;
-(void)_setHidden:(bool)arg1 ;
-(void)_setSyncable:(bool)arg1 ;
-(void)setAddress:(id)arg1 ;
-(unsigned)parentID;
-(void)dealloc;
-(bool)isHidden;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(bool)isEditable;
-(id)UUID;
-(id)title;
-(unsigned)identifier;
-(id)localizedTitle;
-(id)iconData;
-(void)setExtraAttributes:(id)arg1 ;
-(id)extraAttributes;
-(bool)isInserted;
-(id)address;
-(bool)isDeletable;
-(id)initWithTitle:(id)arg1 address:(id)arg2 ;
-(id)initFolderWithParentID:(unsigned)arg1 ;
-(unsigned)specialID;
-(bool)isReadingListFolder;
-(bool)isFolder;
-(id)localAttributes;
-(void)setLocalAttributes:(id)arg1 ;
-(id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(id)shortTypeDescription;
-(id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2 ;
-(bool)isBookmarksBarFolder;
-(bool)isBookmarksMenuFolder;
-(bool)isWebFilterWhiteListFolder;
-(bool)isSyncable;
-(bool)needsSyncUpdate;
-(void)setNeedsSyncUpdate:(bool)arg1 ;
-(bool)fetchedIconData;
-(void)setFetchedIconData:(bool)arg1 ;
-(void)setIconData:(id)arg1 ;
@end

