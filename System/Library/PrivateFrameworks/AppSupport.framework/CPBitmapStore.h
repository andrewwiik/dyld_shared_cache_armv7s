/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCache;

@interface CPBitmapStore : NSObject {

	NSString* _path;
	NSString* _imagePath;
	NSCache* _cache;
	int _version;
	NSString* _versionPath;
	bool _lockOnRead;

}

@property (nonatomic,readonly) int version; 
@property (assign,nonatomic) bool lockOnRead;                                //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned long long cacheItemLimit; 
+(id)CPBitmapStoreWithPath:(id)arg1 version:(int)arg2 useDirectHashing:(bool)arg3 ;
-(int)setVersion:(int)arg1 withOptions:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)commitTransaction;
-(int)setVersion:(int)arg1 ;
-(int)version;
-(id)initWithPath:(id)arg1 version:(int)arg2 ;
-(void)purge;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(bool)arg3 image:(CGImageRef)arg4 ;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setLockOnRead:(bool)arg1 ;
-(void)setCacheItemLimit:(unsigned long long)arg1 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(bool)arg4 scale:(double)arg5 data:(id)arg6 ;
-(CGImageRef)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(bool)arg4 scale:(double)arg5 draw:(/*^block*/ id)arg6 ;
-(void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(bool)arg4 scale:(double)arg5 data:(id)arg6 ;
-(unsigned long long)imageCount;
-(id)imageNameForKey:(id)arg1 inGroup:(id)arg2 ;
-(id)cacheNumberForKey:(id)arg1 ;
-(bool)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(bool)lockOnRead;
-(unsigned)memContentOffset;
-(bool)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(CGImageRef)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(int)arg4 scale:(double)arg5 fillMem:(/*^block*/ id)arg6 alternateCompletion:(/*^block*/ id)arg7 ;
-(id)_versionPath;
-(unsigned long long)cacheItemLimit;
-(CGImageRef)copyImageForKey:(id)arg1 ;
-(void)commitTxn;
-(void)removeImagesInGroups:(id)arg1 ;
-(id)imagePath;
-(id)allGroups;
@end

