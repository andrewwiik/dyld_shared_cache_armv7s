/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, PLThumbnailManager, PLGenericAlbum, NSCalendar, NSMutableDictionary, NSSet, PLManagedAlbum, PLFetchingAlbum, PLInFlightAssetsAlbum, PLManagedObjectContext, NSArray;

@interface PLPhotoLibrary : NSObject {

	bool _listeningForITunesSyncing;
	bool _isTransient;
	unsigned long long _pendingTransactions;
	CFDictionaryRef _allPhotos;
	int _databaseMigrationKind;
	NSMutableArray* _transactionCompletionHandlers;
	PLThumbnailManager* _thumbnailManager;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSCalendar* _exifConversionCalendar;
	NSMutableDictionary* _photoStreamAlbumsByStreamID;
	NSMutableArray* _photoStreamAlbums;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	unsigned long long _lastFetchedGPSCount;
	unsigned long long _insertedCountSinceLastFetchedGPSCount;
	unsigned long long _deletedCountSinceLastFetchedGPSCount;
	unsigned long long _newlyCompleteWithGPS;
	PLManagedAlbum* _cameraRollAlbum;
	PLFetchingAlbum* _cameraSessionAlbum;
	PLInFlightAssetsAlbum* _inFlightAssetsAlbum;
	PLManagedObjectContext* managedObjectContext;

}

@property (nonatomic,retain) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) PLThumbnailManager * thumbnailManager; 
@property (nonatomic,readonly) NSObject<PLAlbumProtocol> * savedPhotosAlbum; 
@property (nonatomic,readonly) NSObject<PLAlbumProtocol> * inFlightAssetsAlbum; 
@property (nonatomic,readonly) NSArray * albums; 
@property (nonatomic,readonly) NSArray * userAlbums; 
@property (nonatomic,readonly) NSArray * imagePickerAlbums; 
@property (nonatomic,readonly) NSArray * wallpaperAlbums; 
@property (nonatomic,readonly) NSArray * importAlbums; 
@property (nonatomic,readonly) NSArray * eventAlbums; 
@property (nonatomic,readonly) NSArray * faceAlbums; 
@property (nonatomic,readonly) NSArray * placeAlbums; 
@property (nonatomic,readonly) NSArray * photoStreamAlbums; 
@property (nonatomic,readonly) NSArray * photoStreamAlbumsForPreferences; 
+(bool)isRunningInStoreDemoMode;
+(id)fileReservationForFileAtPath:(id)arg1 exclusive:(bool)arg2 ;
+(id)lightweightReimportPhotoCloudSharingDataDirectory;
+(id)photoCloudSharingCacheDataDirectory;
+(id)photoMetadataDirectoryURL;
+(id)sharedPhotoLibrary;
+(void)setSqliteErrorAndExitIfNecessary;
+(id)crashRecoveryIndicatorFilePaths;
+(void)enqeueRecoveryJob:(id)arg1 ;
+(id)opportunisticTaskIsolationQueue;
+(id)photoDataDirectory;
+(void)setApplicationIsWildcat:(bool)arg1 ;
+(void)_doFilesystemImportIfNeeded;
+(NSObject*)savedPhotosAlbum;
+(id)photoCloudSharingDataDirectory;
+(id)photoDataCachesDirectory;
+(id)dcimDirectoryURL;
+(id)takingVideoIndicatorFilePath;
+(id)takingPhotoIndicatorFilePath;
+(id)imageWriterIndicatorFilePath;
+(id)pathToAssetsToAlbumsMapping;
+(id)iTunesSyncedAssetsDirectory;
+(id)persistedAlbumDataDirectoryURL;
+(bool)libraryAvailableIndicatorState;
+(void)setLibraryAvailableIndicatorState:(bool)arg1 ;
+(void)repairSingletonObjects;
+(id)migrationIndicatorFilePath;
+(id)momentAnalysisNeededFilePath;
+(id)dupeAnalysisNeededFilePath;
+(id)libraryAvailableIndicatorFilePath;
+(id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+(id)photoDataMiscDirectory;
+(id)sqliteErrorIndicatorFilePath;
+(int)createSqliteErrorIndicatorFile;
+(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+(id)iTunesSyncedFaceDataDirectory;
+(id)iTunesPhotosDirectory;
+(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+(id)iTunesSyncedAssetSmallThumbnailsDirectory;
+(void)resetSyncedAssetsDCIMDirectory;
+(id)photoStreamsDataDirectory;
+(bool)isDupeAnalysisNeeded;
+(id)syncInfoPath;
+(bool)isApplicationWildcat;
+(void)handlePossibleCoreDataError:(id)arg1 ;
+(void)recoverFromCrashIfNeeded;
+(void)disableOpportunisticTasks:(bool)arg1 ;
+(bool)areOpportunisticTasksDisabled;
+(void)setPhotoStreamEnabled:(bool)arg1 ;
+(void)setCloudAlbumSharingEnabled:(bool)arg1 ;
+(id)photoCloudSharingMetadataDirectory;
+(id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2 ;
+(id)assetsDataDirectory;
+(void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
+(void)setMigratorIsBusy:(bool)arg1 ;
+(void)setImageWriterIsBusy:(bool)arg1 ;
+(void)setVideoCaptureIsBusy:(bool)arg1 ;
+(void)setTakingPhotoIsBusy:(bool)arg1 ;
+(void)setMomentAnalysisNeeded:(bool)arg1 ;
+(bool)isMomentAnalysisNeeded;
+(void)setDupeAnalysisNeeded:(bool)arg1 ;
+(void)setStreamsLibraryUpdatingExpired:(bool)arg1 ;
+(bool)isStreamsLibraryUpdatingExpired;
+(id)mediaFilesDirectoryURL;
+(id)photoDataDirectoryURL;
+(id)videosPath;
+(id)dcimDirectory;
+(id)simpleDCIMDirectory;
+(bool)processCanReadSandboxForPath:(id)arg1 ;
+(bool)processCanWriteSandboxForPath:(id)arg1 ;
+(void)initializeGraphicsServices;
+(id)calculatedDisplayableIndexesForAlbum:(NSObject*)arg1 count:(unsigned long long)arg2 ;
+(bool)canSaveVideoToCameraRoll:(id)arg1 ;
+(id)syncedAlbumSubtitleStringFormat;
+(bool)isAlbumSynced:(id)arg1 ;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(bool)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)performBlock:(/*^block*/ id)arg1 ;
-(id)managedObjectContext;
-(id)initWithTransientContext:(bool)arg1 ;
-(void)loadDatabase;
-(void)setManagedObjectContext:(id)arg1 ;
-(void)_releaseThumbnailManager;
-(void)copyAssetToCameraRoll:(id)arg1 ;
-(bool)_hasAtLeastOneItem:(bool)arg1 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(bool)arg2 performTransaction:(/*^block*/ id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(bool)arg2 performBlock:(/*^block*/ id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(NSObject*)savedPhotosAlbum;
-(void)removeInflightAssets:(id)arg1 ;
-(id)albums;
-(NSObject*)allPhotoStreamPhotosAlbum;
-(id)photoStreamAlbumsForPreferences;
-(id)photoStreamAlbums;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)assetWithUUID:(id)arg1 inContainer:(id)arg2 ;
-(void)performTransaction:(/*^block*/ id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)globalValueForKey:(id)arg1 ;
-(void)setGlobalValue:(id)arg1 forKey:(id)arg2 ;
-(void)_deleteObsoleteMetadataFiles;
-(void)_safeSave:(id)arg1 ;
-(void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1 ;
-(id)_allAssetsForDeletion:(id)arg1 ;
-(void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1 ;
-(void)_linkAsideAlbumMetadataForOTARestore;
-(void)prepareDatabaseForOTAAssetsPhase;
-(id)allImportedPhotosAlbumCreateIfNeeded:(bool)arg1 ;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(bool)arg1 ;
-(void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3 ;
-(NSObject*)allPhotosAlbum;
-(NSObject*)iPadAllPhotosAlbum;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 ;
-(id)thumbnailManager;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 outImageProperties:(const _CFDictionary*)arg3 ;
-(id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(NSObject*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(CFDictionaryRef)arg13 withUUID:(id)arg14 ;
-(id)allImportedPhotosAlbum;
-(int)priorityForFileExtension:(id)arg1 ;
-(void)_loadFileExtensionInformation;
-(bool)isVideoFileExtension:(id)arg1 ;
-(bool)isNonRawImageFileExtension:(id)arg1 ;
-(bool)isRawImageFileExtension:(id)arg1 ;
-(bool)isAudioFileExtension:(id)arg1 ;
-(void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1 ;
-(NSObject*)syncProgressAlbum;
-(NSObject*)eventAlbumContainingPhoto:(id)arg1 ;
-(id)albumListForContentMode:(int)arg1 ;
-(id)imagePickerAlbums;
-(NSObject*)otaRestoreProgressAlbum;
-(NSObject*)filesystemImportProgressAlbum;
-(id)syncProgressAlbums;
-(bool)hasCompletedRestorePostProcessing;
-(bool)_hasPendingAssets;
-(bool)hasCompletedMomentAnalysis;
-(void)testForRecoveryInBackground;
-(void)flushDCIMAlbums;
-(void)flushPhotoStreamAlbums;
-(void)flushAlbums;
-(id)countOfAllPhotosAndVideos;
-(void)clientApplicationWillEnterForeground;
-(void)photoLibraryCorruptNotification;
-(bool)hasAtLeastOneItem;
-(bool)hasAtLeastOnePhoto;
-(void)deleteImages:(id)arg1 ;
-(void)deleteAllImages;
-(void)performTransaction:(/*^block*/ id)arg1 ;
-(void)performTransactionAndWait:(/*^block*/ id)arg1 ;
-(void)performTransactionAndWait:(/*^block*/ id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)addCompletionHandlerToCurrentTransaction:(/*^block*/ id)arg1 ;
-(void)performBlock:(/*^block*/ id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)performBlockAndWait:(/*^block*/ id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/ id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/ id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/ id)arg2 ;
-(NSObject*)inFlightAssetsAlbum;
-(NSObject*)inFlightAssetsAlbumIfAvailable;
-(void)addInflightAsset:(id)arg1 ;
-(NSObject*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 ;
-(NSObject*)albumWithUuid:(id)arg1 ;
-(id)userAlbums;
-(id)wallpaperAlbums;
-(id)importAlbums;
-(id)eventAlbums;
-(id)faceAlbums;
-(id)placeAlbums;
-(void)userDeleteAlbums:(id)arg1 ;
-(id)albumListForAlbumOfKind:(int)arg1 ;
-(unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2 ;
-(id)objectWithObjectID:(id)arg1 ;
-(id)assetWithUUID:(id)arg1 ;
-(void)userDeleteAssets:(id)arg1 ;
-(void)addToKnownPhotoStreamAlbums:(id)arg1 ;
-(void)removeFromKnownPhotoStreamAlbums:(id)arg1 ;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg1 ;
-(id)lastImportSessionUUID;
-(void)setLastImportSessionUUID:(id)arg1 ;
-(id)assetURLForPhoto:(id)arg1 extension:(id)arg2 ;
-(id)assetURLForPhoto:(id)arg1 ;
-(id)assetURLForManagedPhoto:(id)arg1 ;
-(id)photoFromAssetURL:(id)arg1 ;
-(NSObject*)albumFromGroupURL:(id)arg1 ;
-(id)handleAssetsLibrarySetGlobalMessage:(id)arg1 userInfo:(id)arg2 ;
-(id)handleAssetsLibraryGetGlobalMessage:(id)arg1 userInfo:(id)arg2 ;
-(bool)deleteAllDiagnosticFiles:(id*)arg1 ;
-(void)_migrationDidFinish;
-(void)cleanupModelAfterRestoreFromiTunesBackup;
-(void)cleanupForStoreDemoMode;
-(bool)isTransient;
-(unsigned long long)concurrencyType;
-(id)managedObjectWithObjectID:(id)arg1 ;
-(id)managedObjectContextStoreUUID;
-(bool)needsMigration;
-(void)recreateAlbumsFromMetadata;
-(id)lastImportedPhotosAlbum;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1 ;
-(bool)hasAtLeastOnePhotoWithGPS;
-(void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3 ;
-(id)syncedAlbums;
-(unsigned long long)editableAlbumCount;
-(NSObject*)allPhotosAlbumIfExists;
-(NSObject*)iPadAllPhotosAlbumIfExists;
-(id)imageForFormat:(int)arg1 forAsset:(id)arg2 ;
-(id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(void)modifyDCIMEntryForPhoto:(id)arg1 ;
-(id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(NSObject*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 extendedInfo:(id)arg11 thumbnailsData:(CFDictionaryRef)arg12 withUUID:(id)arg13 ;
-(id)masterURLFromSidecarURLs:(id)arg1 ;
-(id)masterFilenameFromSidecarFileInfo:(id)arg1 ;
-(bool)isImageFileExtension:(id)arg1 ;
-(bool)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 ;
-(void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2 ;
-(bool)isPhotoInSavedPhotosAlbum:(id)arg1 ;
-(id)albumsForContentMode:(int)arg1 ;
-(bool)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 ;
-(id)librarySizes;
@end

