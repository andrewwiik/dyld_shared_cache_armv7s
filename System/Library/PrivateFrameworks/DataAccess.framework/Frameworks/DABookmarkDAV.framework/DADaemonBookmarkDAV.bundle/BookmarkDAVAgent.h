/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DACoreDAVAgent.h>
#import <DADaemonBookmarkDAV/DABookmarkRootFolderConsumer.h>
#import <DADaemonBookmarkDAV/DABookmarkUpdateConsumer.h>
#import <DADaemonBookmarkDAV/DADataclassLockWatcher.h>
#import <DADaemonBookmarkDAV/DARefreshManagerDelegate.h>
#import <DADaemonBookmarkDAV/DAValidityCheckConsumer.h>

@class NSURL, NSString;

@interface BookmarkDAVAgent : DACoreDAVAgent <DABookmarkRootFolderConsumer, DABookmarkUpdateConsumer, DADataclassLockWatcher, DARefreshManagerDelegate, DAValidityCheckConsumer> {

	bool _isSyncing;
	bool _isWaitingToSync;
	bool _isSyncingHierarchy;
	NSURL* _serverTokenRegistrationURL;
	NSString* _containerPushKey;

}
-(id)password;
-(void)startMonitoring;
-(void)dealloc;
-(id)waiterID;
-(id)scheduleIdentifier;
-(bool)_hasEnoughDataToSync;
-(void)_setUpBookmarkNotifications;
-(void)_tearDownBookmarkNotifications;
-(void)_setUpPushNotifications;
-(void)successfullyRetrievedRootFolder;
-(void)failedToRetrieveRootFolderWithError:(id)arg1 ;
-(void)successfullySyncedBookmarkTree;
-(void)failedToSyncBookmarkTreeWithError:(id)arg1 ;
-(void)_validateAndSync:(bool)arg1 ;
-(void)_handlePotential503Error:(id)arg1 ;
-(bool)APSTopicHasValidPrefix:(id)arg1 ;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(id)serverTokenRegistrationURL;
-(void)refreshFolderListRequireChangedFolders:(bool)arg1 isUserRequested:(bool)arg2 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3 ;
-(id)onBehalfOfBundleIdentifier;
-(id)initWithAccount:(id)arg1 ;
-(id)username;
@end

