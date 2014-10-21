/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLThumbPersistenceManager.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSMutableIndexSet, NSObject, NSDictionary;

@interface PLImageTable : NSObject <PLThumbPersistenceManager> {

	int _format;
	NSString* _path;
	CGSize _thumbnailSize;
	int _imageRowBytes;
	int _imageLength;
	int _entryLength;
	bool _readOnly;
	bool _dying;
	int _fid;
	long long _fileLength;
	long long _entryCount;
	unsigned long long _segmentLength;
	unsigned long long _segmentCount;
	NSMutableArray* _allSegments;
	NSMutableIndexSet* _preheatIndexes;
	NSObject<OS_dispatch_queue>* _preheatIndexIsolation;
	NSObject<OS_dispatch_queue>* _preheatQueue;

}

@property (nonatomic,readonly) NSDictionary * photoUUIDToIndexMap; 
@property (nonatomic,readonly) NSString * path;                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int imageFormat;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) int imageWidth; 
@property (nonatomic,readonly) int imageHeight; 
@property (nonatomic,readonly) int imageRowBytes;                               //@synthesize imageRowBytes=_imageRowBytes - In the implementation block
@property (nonatomic,readonly) int imageLength;                                 //@synthesize imageLength=_imageLength - In the implementation block
@property (nonatomic,readonly) bool isReadOnly; 
@property (nonatomic,readonly) CGSize imageSize; 
+(void)writeImage:(id)arg1 toData:(id*)arg2 thumbnailFormat:(int)arg3 videoDuration:(id)arg4 width:(int*)arg5 height:(int*)arg6 bytesPerRow:(int*)arg7 dataWidth:(int*)arg8 dataHeight:(int*)arg9 dataOffset:(int*)arg10 ;
+(void)releaseSegmentCache;
-(void)dealloc;
-(id)path;
-(CGSize)imageSize;
-(int)_fileDescriptor;
-(id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(bool)arg3 ;
-(void)_releaseSegmentAtIndex:(long long)arg1 ;
-(id)_segmentAtIndex:(long long)arg1 ;
-(void)_reloadSegmentAtIndex:(long long)arg1 ;
-(void)_addEntriesIfNecessaryForIndex:(long long)arg1 ;
-(void)_updateSegmentCount;
-(void)_setEntryCount:(long long)arg1 ;
-(void)_flushEntryAtAddress:(void*)arg1 count:(int)arg2 ;
-(id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(bool)arg2 ;
-(void)_flushEntryAtAddress:(void*)arg1 ;
-(bool)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2 ;
-(void)_verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2 ;
-(int)imageLength;
-(int)imageFormat;
-(int)imageWidth;
-(int)imageHeight;
-(int)imageRowBytes;
-(id)_getAndClearPreheatIndexes;
-(void)_adviseWillNeedEntriesInRange:(NSRange)arg1 ;
-(void)_doPreheat;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5 ;
-(void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 asset:(id)arg4 ;
-(bool)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2 ;
-(id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2 ;
-(bool)usesThumbIdentifiers;
-(id)_debugDescription;
-(void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(void)preheatImageDataAtIndex:(unsigned long long)arg1 ;
-(void)preheatImageDataAtIndexes:(id)arg1 ;
-(long long)entryCount;
-(bool)isReadOnly;
-(id)preheatItemForAsset:(id)arg1 options:(unsigned)arg2 ;
-(id)imageDataAtIndex:(unsigned long long)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 dataOffset:(int*)arg7 ;
-(id)initWithPath:(id)arg1 imageFormat:(int)arg2 ;
-(unsigned long long)_segmentLength;
-(void)_releaseSegment:(id)arg1 ;
-(id)photoUUIDToIndexMap;
-(id)preflightCompactionWithOccupiedIndexes:(id)arg1 ;
-(void)compactWithOccupiedIndexes:(id)arg1 ;
-(void)finishUnicornEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 imageSize:(CGSize)arg3 asset:(id)arg4 ;
@end

