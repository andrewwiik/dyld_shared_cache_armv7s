/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonIMAPNotes/DAIMAPNotesFolderListConsumer.h>
#import <DADaemonIMAPNotes/DANotesUpdateConsumer.h>
#import <DADaemonIMAPNotes/DADataclassLockWatcher.h>
#import <DADaemonSupport/PCConnectionManagerDelegate.h>

@class NSMutableSet, NSMutableArray, NSLock, PCConnectionManager, NSSet, NSMutableDictionary;

@interface DAIMAPNotesAgent : DAAgent <DAIMAPNotesFolderListConsumer, DANotesUpdateConsumer, DADataclassLockWatcher, PCConnectionManagerDelegate> {

	NSMutableSet* _currentlySyncingFolderIds;
	NSMutableArray* _outstandingFolderRequests;
	NSLock* _folderItemSyncRequestLock;
	PCConnectionManager* _pcManager;
	int _outstandingInvocationCount;
	bool _isShuttingDown;
	/*^block*/ id _fullyShutDownCallback;
	bool _accountHasShutDown;
	NSSet* _lastFolderSetRegisteredForPush;
	NSMutableDictionary* _daFoldersByPushNotificationName;

}
-(void)startMonitoring;
-(void)dealloc;
-(id)waiterID;
-(void)_appendSyncRequestsForFolders:(id)arg1 remoteChanges:(bool)arg2 ;
-(void)_tearDownNotesNotifications;
-(void)_syncAllNotesFoldersWithRemoteChanges:(bool)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(bool)arg1 isUserRequested:(bool)arg2 ;
-(void)_setUpNotesNotifications;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_appendSyncRequest:(id)arg1 ;
-(void)_fireWaitingFolderItemSyncRequests;
-(void)_reallySyncRequest:(id)arg1 ;
-(void)_syncRequest:(id)arg1 ;
-(void)notesFolderWithId:(id)arg1 failedToSyncWithStatus:(int)arg2 error:(id)arg3 ;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(void)syncResultForNotesFolder:(id)arg1 noteContext:(id)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeSet:(id)arg7 notesToDeleteAfterSync:(id)arg8 isInitialSync:(bool)arg9 moreAvailable:(bool)arg10 ;
-(void)failedToRetrieveFolderListWithStatus:(int)arg1 andError:(id)arg2 ;
-(void)successfullyRetrievedFolderList;
-(void)_validateAndSyncWithRemoteChanges:(bool)arg1 ;
-(void)_setLastFolderSetRegisteredForPush:(id)arg1 ;
-(void)_callShutdownBlockIfAppropriate;
-(bool)_clearChangeHistoriesInContext:(id)arg1 changeSet:(id)arg2 ;
-(void)_finishSyncResultOnMainThreadForFolderWithId:(id)arg1 ;
-(id)_copyDAActionsFromNoteChanges:(id)arg1 inStore:(id)arg2 mutableNotesToDeleteAfterSync:(id)arg3 ;
-(void)_syncInLockRequest:(id)arg1 ;
-(void)_handlePushNotificationWithName:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

