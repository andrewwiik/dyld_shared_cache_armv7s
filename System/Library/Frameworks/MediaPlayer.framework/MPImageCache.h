/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPImageRequestDelegate.h>

@protocol OS_dispatch_queue, MPImageCacheDelegate;
@class CPLRUDictionary, NSObject, NSOperationQueue;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {

	CPLRUDictionary* _cachedImages;
	NSObject<OS_dispatch_queue>* _cachedImagesQueue;
	unsigned long long _cacheSize;
	<MPImageCacheDelegate>* _delegate;
	NSOperationQueue* _operationQueue;
	long long _resumeToForegroundCacheSize;
	unsigned long long _backgroundCacheSize;
	/*^block*/ id _idleEventHandler;
	id _libraryDisplayValueChangeObserver;

}

@property (assign,nonatomic) unsigned long long backgroundCacheSize;                   //@synthesize backgroundCacheSize=_backgroundCacheSize - In the implementation block
@property (assign,nonatomic) unsigned long long cacheSize;                             //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign,nonatomic) bool imageRequestsSuspended; 
@property (nonatomic,copy) id idleEventHandler;                                        //@synthesize idleEventHandler=_idleEventHandler - In the implementation block
@property (nonatomic,readonly) bool isIdle; 
@property (assign,nonatomic,__weak) <MPImageCacheDelegate> * delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id libraryDisplayValueChangeObserver;              //@synthesize libraryDisplayValueChangeObserver=_libraryDisplayValueChangeObserver - In the implementation block
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)loadImageForRequest:(id)arg1 asynchronously:(bool)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)cancelAllImageRequests;
-(void)setImageRequestsSuspended:(bool)arg1 ;
-(id)imageForRequest:(id)arg1 error:(id*)arg2 ;
-(void)_didReceiveMemoryWarningNotification:(id)arg1 ;
-(void)_zapCachedPlaceholders;
-(id)_imageByApplyingModificationsForCachedImageForRequest:(id)arg1 ;
-(void)_cacheImage:(id)arg1 forKey:(id)arg2 ;
-(void)setCacheSize:(unsigned long long)arg1 preserveExisting:(bool)arg2 ;
-(void)imageRequest:(id)arg1 failedWithError:(id)arg2 ;
-(void)imageRequest:(id)arg1 loadedImage:(id)arg2 ;
-(void)_zapCache;
-(id)cachedImageForRequest:(id)arg1 ;
-(bool)imageRequestsSuspended;
-(bool)isIdle;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(void)_removeCachedImageForKey:(id)arg1 ;
-(unsigned long long)backgroundCacheSize;
-(void)setBackgroundCacheSize:(unsigned long long)arg1 ;
-(/*^block*/ id)idleEventHandler;
-(void)setIdleEventHandler:(/*^block*/ id)arg1 ;
-(id)libraryDisplayValueChangeObserver;
-(void)setLibraryDisplayValueChangeObserver:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_cachedImageForKey:(id)arg1 ;
-(void).cxx_destruct;
-(unsigned long long)cacheSize;
-(void)_enqueueRequest:(id)arg1 ;
@end

