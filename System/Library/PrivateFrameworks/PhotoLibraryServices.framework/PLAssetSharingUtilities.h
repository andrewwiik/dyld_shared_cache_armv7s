/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLAssetSharingUtilities : NSObject
+(CGImageRef)_thumbnailForAssetURL:(id)arg1 useAspect:(bool)arg2 ;
+(double)_durationForVideoAssetURL:(id)arg1 ;
+(double)_durationForVideoFilePath:(id)arg1 ;
+(long long)_estimatedOutputFileLengthForDuration:(double)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3 ;
+(id)_assetFromManagedAsset:(id)arg1 forExport:(bool)arg2 outAudioMix:(id*)arg3 ;
+(id)_exportSessionForAsset:(id)arg1 audioMix:(id)arg2 exportPreset:(id)arg3 ;
+(id)exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 ;
+(id)_assetFromVideoFilePath:(id)arg1 metadata:(id)arg2 forExport:(bool)arg3 outAudioMix:(id*)arg4 ;
+(id)_playerItemForVideoAssetURL:(id)arg1 ;
+(id)playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2 ;
+(CGImageRef)thumbnailForAssetURL:(id)arg1 ;
+(CGImageRef)aspectRatioThumbnailForAssetURL:(id)arg1 ;
+(id)filePathForVideoURL:(id)arg1 outMetadata:(id*)arg2 ;
+(long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 ;
+(long long)estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 ;
+(id)exportSessionForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 ;
+(id)playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 ;
@end
