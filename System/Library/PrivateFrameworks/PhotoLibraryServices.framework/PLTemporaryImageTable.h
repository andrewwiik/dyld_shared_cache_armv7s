/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageTable, NSMutableArray, NSString;

@interface PLTemporaryImageTable : NSObject {

	PLImageTable* _imageTable;
	unsigned long long _nextTableEntryIndex;
	NSMutableArray* _itemIndexToThumbEntryMapping;
	NSString* _imageTablePath;
	int _imageFormat;

}
-(void)dealloc;
-(void)reset;
-(void)_cleanup;
-(unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1 ;
-(id)initWithWithPath:(id)arg1 imageFormat:(int)arg2 ;
-(void)setImage:(id)arg1 videoDuration:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(id)dataForItemAtIndex:(unsigned long long)arg1 widthOut:(int*)arg2 heightOut:(int*)arg3 bytesPerRowOut:(int*)arg4 dataWidthOut:(int*)arg5 dataHeightOut:(int*)arg6 imageDataOffset:(int*)arg7 ;
-(id)imageForItemAtIndex:(unsigned long long)arg1 ;
-(void)insertItemAtIndex:(unsigned long long)arg1 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
@end

