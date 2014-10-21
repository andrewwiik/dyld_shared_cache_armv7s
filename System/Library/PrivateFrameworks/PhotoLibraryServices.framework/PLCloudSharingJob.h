/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class PLPhotoLibrary, NSString;

@interface PLCloudSharingJob : PLDaemonJob {

	PLPhotoLibrary* _photoLibrary;
	NSString* _archiveFilename;
	bool _shouldPrioritize;

}

@property (nonatomic,readonly) PLPhotoLibrary * transientPhotoLibrary; 
@property (assign,nonatomic) bool shouldPrioritize;                                 //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
+(id)archiveDirectory;
+(id)recoveredEventsIgnoringEvent:(id)arg1 ;
+(void)deleteAllRecoveryEvents;
-(void)dealloc;
-(id)init;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(void)archiveXPCToDisk:(id)arg1 ;
-(bool)shouldArchiveXPCToDisk;
-(bool)shouldPrioritize;
-(void)runAndWaitForMessageToBeSent;
-(void)setShouldPrioritize:(bool)arg1 ;
-(id)serialOperationQueue;
-(id)transientPhotoLibrary;
@end

