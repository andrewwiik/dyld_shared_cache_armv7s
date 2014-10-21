/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/IMAPAccount.h>

@class IMAPService, NSRecursiveLock, NSString, NSTimer;

@interface IMAPServiceAccount : IMAPAccount {

	IMAPService* _service;
	CFDictionaryRef _cachedStores;
	NSRecursiveLock* _storeCacheLock;
	NSString* _offlineCachePath;
	double _idleTimeout;
	NSTimer* _idleTimer;
	NSRecursiveLock* _idleLock;
	NSRecursiveLock* _serviceAccountLock;
	double _nextIdleFire;
	unsigned _checkInForcefully : 1;
	unsigned _hasBeenInvalidated : 1;

}
-(id)service;
-(void)dealloc;
-(id)init;
-(id)path;
-(void)changePIN:(id)arg1 ;
-(unsigned)readBufferSize;
-(bool)allowsPartialDownloads;
-(void)acquireNetworkAssertion;
-(id)offlineCacheDirectoryPath;
-(bool)requiresDataForOfflineTransfersFromStore:(id)arg1 ;
-(id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 ;
-(void)libraryIMAPStore:(id)arg1 bodyDownloadBeganForUid:(unsigned)arg2 data:(id)arg3 ;
-(void)libraryIMAPStore:(id)arg1 bodyDownloadReceivedMoreDataForUid:(unsigned)arg2 data:(id)arg3 ;
-(void)libraryIMAPStore:(id)arg1 bodyDownloadCompletedForUid:(unsigned)arg2 data:(id)arg3 ;
-(bool)getMailboxListWithConnection:(id)arg1 ;
-(void)checkInConnectionsForStore:(id)arg1 ;
-(id)storeForMailboxUid:(id)arg1 ;
-(void)releaseAllConnections;
-(Class)connectionClass;
-(CFStringRef)connectionServiceType;
-(id)mailboxUidForRelativePath:(id)arg1 create:(bool)arg2 ;
-(void)setupLibrary;
-(Class)storeClassForMailbox:(id)arg1 ;
-(Class)storeClass;
-(bool)shouldExpungeMessagesOnDelete;
-(void)setService:(id)arg1 ;
-(void)checkInConnection:(id)arg1 ;
-(void)invalidateServiceAccount;
-(void)setConnectionIdleTimeout:(double)arg1 ;
-(void)checkInConnectionsPolitelyForStore:(id)arg1 ;
-(id)mimeBodyForRecord:(void*)arg1 ;
-(void*)createNewRecordFromRecord:(void*)arg1 destinedForMailbox:(id)arg2 ;
-(void)willSetFlags:(unsigned)arg1 state:(unsigned)arg2 forRecord:(void*)arg3 needToBeStored:(bool)arg4 ;
-(void)transferRecord:(void*)arg1 usingDestinationRecord:(void*)arg2 ;
-(void)storeFlags:(unsigned)arg1 forRecord:(void*)arg2 ;
-(void)prepareForFlagChange;
-(void)completeFlagChange;
-(void)_clearConnectionCheckOuts;
-(void)storeFlags:(unsigned)arg1 forRecord:(void*)arg2 usingMessage:(id)arg3 ;
-(unsigned)uidValidityForMailbox:(id)arg1 ;
-(void)_disconnectIdleConnections:(id)arg1 ;
-(void)_scheduleIdleTimer;
-(void)_startIdleTimer;
-(void)setUidValidity:(unsigned)arg1 forMailbox:(id)arg2 ;
-(float)mailboxUsage;
@end

