/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray;

@interface PLAssetsSaver : NSObject {

	NSMutableArray* __pendingSaveAssetJobs;

}

@property (nonatomic,retain) NSMutableArray * _pendingSaveAssetJobs;              //@synthesize _pendingSaveAssetJobs=__pendingSaveAssetJobs - In the implementation block
+(id)sharedAssetsSaver;
+(id)publicAssetsLibraryErrorFromPrivateError:(id)arg1 ;
+(id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)copyAssetToCameraRoll:(id)arg1 ;
-(void)deletePhotoStreamDataForStreamID:(id)arg1 ;
-(void)setAvalancheInProgress:(bool)arg1 uuid:(id)arg2 ;
-(id)_saveIsolationQueue;
-(id)_pendingSaveAssetJobs;
-(void)_setIsTakingPhoto:(bool)arg1 ;
-(id)_XMPDictionaryForAsset:(id)arg1 jobDictionary:(id)arg2 ;
-(void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(/*^block*/ id)arg3 completionBlock:(/*^block*/ id)arg4 imageSurface:(IOSurfaceRef)arg5 previewImageSurface:(IOSurfaceRef)arg6 slalomRegions:(id)arg7 ;
-(id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 adjustmentFilters:(id)arg4 effectFilters:(id)arg5 diagnostics:(id)arg6 previouslyPendingAsset:(id)arg7 requestEnqueuedBlock:(/*^block*/ id)arg8 ;
-(id)_addCameraAssetToLibraryWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 adjustmentFilters:(id)arg9 effectFilters:(id)arg10 completionHandler:(/*^block*/ id)arg11 ;
-(void)queueJobDictionary:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(/*^block*/ id)_createWriteImageCompletionBlockWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(/*^block*/ id)_createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)_requestAccess;
-(id)pathForNewAssetOfType:(long long)arg1 extension:(id)arg2 ;
-(id)defaultExtensionForAssetType:(long long)arg1 ;
-(id)requestSynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 ;
-(void)requestAsynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)batchSavePendingAssetJobs;
-(void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(/*^block*/ id)arg4 ;
-(void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(bool)arg4 progressStack:(id)arg5 eventUUID:(id)arg6 isSlalom:(bool)arg7 slalomRegions:(id)arg8 videoHandler:(/*^block*/ id)arg9 requestEnqueuedBlock:(/*^block*/ id)arg10 completionBlock:(/*^block*/ id)arg11 ;
-(void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)saveCameraAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 allAssets:(id)arg3 stackAsset:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)saveImageRef:(CGImageRef)arg1 orientation:(long long)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)saveImage:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void*)arg6 ;
-(void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)savePhotoStreamImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)savePhotoStreamVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)saveOneWayATCSyncedImage:(id)arg1 imageData:(id)arg2 eventUUID:(id)arg3 properties:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2 ;
-(void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1 ;
-(void)importFilesWithMasterPath:(id)arg1 sidecarFileInfo:(id)arg2 intoEventWithName:(id)arg3 importSessionIdentifier:(id)arg4 isPhotoStreamsPublishCandidate:(bool)arg5 ;
-(void)saveSyncedAssets:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)set_pendingSaveAssetJobs:(id)arg1 ;
@end

