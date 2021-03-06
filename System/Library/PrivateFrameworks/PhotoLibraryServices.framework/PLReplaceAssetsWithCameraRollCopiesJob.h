/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, PLManagedAlbum, PLPhotoLibrary, PLManagedObjectContext, NSPersistentStoreCoordinator;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob {

	NSArray* _assets;
	PLManagedAlbum* _album;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,copy) NSArray * assets;                                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLManagedAlbum * album;                                       //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator; 
+(void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(id)managedObjectContext;
-(id)assets;
-(id)photoLibrary;
-(void)setPhotoLibrary:(id)arg1 ;
-(void)setAssets:(id)arg1 ;
-(id)album;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(void)setAlbum:(id)arg1 ;
-(id)coordinator;
-(id)_cameraRollAssetDerivedFromAsset:(id)arg1 ;
@end

