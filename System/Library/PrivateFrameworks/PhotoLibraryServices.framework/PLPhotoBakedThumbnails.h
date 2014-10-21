/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject {

	int _format;
	int _singleThumbnailImageLength;
	unsigned long long _count;
	bool _dataIsMutable;
	NSData* _thumbnailData;
	NSMutableArray* _thumbnailImages;
	NSMutableDictionary* _options;
	NSData* _optionsData;
	bool _optionsAccessed;
	bool _missingHeader;
	CGSize _size;

}

@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) NSMutableDictionary * options; 
@property (nonatomic,readonly) NSData * optionsData; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) int bitsPerComponent; 
@property (nonatomic,readonly) int bytesPerPixel; 
@property (nonatomic,readonly) unsigned bitmapInfo; 
@property (nonatomic,readonly) CGRect imageRect; 
+(id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2 ;
+(bool)saveBakedThumbnailsOfImages:(id)arg1 toFile:(id)arg2 format:(int)arg3 orientation:(int*)arg4 options:(id)arg5 delegate:(id)arg6 ;
-(void)dealloc;
-(CGSize)size;
-(unsigned long long)count;
-(id)description;
-(int)bitsPerComponent;
-(id)options;
-(CGRect)imageRect;
-(int)format;
-(id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int*)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(id)thumbnailDataAtIndex:(long long)arg1 ;
-(int)bytesPerPixel;
-(id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(bool)arg3 ;
-(bool)saveToFile:(id)arg1 ;
-(id)initWithData:(id)arg1 format:(int)arg2 readOnly:(bool)arg3 ;
-(bool)writeBorderedThumbnailOfImage:(CGImageRef)arg1 toBuffer:(void*)arg2 orientation:(int*)arg3 format:(int)arg4 formatInfo:(const SCD_Struct_PL13*)arg5 delegate:(id)arg6 ;
-(id)_thumbnailData;
-(id)serializedData;
-(char*)thumbnailBytesAtIndex:(long long)arg1 ;
-(unsigned)bitmapInfo;
-(id)initWithData:(id)arg1 format:(int)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 format:(int)arg2 ;
-(unsigned long long)thumbnailLength;
-(CGImageRef)thumbnailImageAtIndex:(long long)arg1 ;
-(id)optionsData;
@end

