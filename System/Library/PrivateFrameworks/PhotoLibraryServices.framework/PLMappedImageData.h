/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@class PLImageTableSegment, NSData, NSString;

@interface PLMappedImageData : NSMutableData {

	PLImageTableSegment* _segment;
	void* _bytes;
	unsigned long long _length;
	bool _freeBytes;
	NSData* _pl_data;

}

@property (assign,nonatomic) unsigned imageWidth; 
@property (assign,nonatomic) unsigned imageHeight; 
@property (nonatomic,copy) NSString * photoUUID; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(void*)mutableBytes;
-(id)initWithImageTableSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long long)arg3 ;
-(unsigned long long)lengthIncludingFooter;
-(void)setPhotoUUID:(id)arg1 ;
-(id)photoUUID;
-(void)setImageWidth:(unsigned)arg1 ;
-(void)setImageHeight:(unsigned)arg1 ;
-(unsigned)imageWidth;
-(unsigned)imageHeight;
-(bool)uuidIsEqual:(id)arg1 ;
-(PLImageTableEntryFooter_s*)_footer;
-(id)initWithThumbnailPath:(id)arg1 ;
-(id)initWithEntryLength:(unsigned long long)arg1 ;
-(id)brokencopy;
-(unsigned long long)pl_advisoryLength;
-(bool)pl_writeToPath:(id)arg1 ;
@end
