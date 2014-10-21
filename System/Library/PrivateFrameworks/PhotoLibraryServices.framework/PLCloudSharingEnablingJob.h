/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob {

	bool _enableSharing;

}

@property (assign,nonatomic) bool enableSharing;              //@synthesize enableSharing=_enableSharing - In the implementation block
+(void)enableCloudSharing:(bool)arg1 ;
+(void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(bool)arg2 ;
-(id)description;
-(void)run;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(bool)shouldArchiveXPCToDisk;
-(bool)enableSharing;
-(void)setEnableSharing:(bool)arg1 ;
@end

