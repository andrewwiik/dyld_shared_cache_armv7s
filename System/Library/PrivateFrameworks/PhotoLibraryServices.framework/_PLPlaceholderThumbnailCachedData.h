/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface _PLPlaceholderThumbnailCachedData : NSObject {

	NSData* _imageData;
	int _width;
	int _height;
	int _bytesPerRow;
	int _dataWidth;
	int _dataHeight;
	int _imageDataOffset;

}
-(void)dealloc;
-(id)initWithImageData:(id)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(int)arg4 dataWidth:(int)arg5 dataHeight:(int)arg6 imageDataOffset:(int)arg7 ;
-(id)imageDataWithWidth:(int*)arg1 height:(int*)arg2 bytesPerRow:(int*)arg3 dataWidth:(int*)arg4 dataHeight:(int*)arg5 imageDataOffset:(int*)arg6 ;
@end
