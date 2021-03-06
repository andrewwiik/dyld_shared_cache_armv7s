/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMRemoteDaemonProtocol, OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class IMRemoteObject, NSMutableDictionary, IMLocalObject, IMDaemonListener, NSMutableArray, NSProtocolChecker, NSString, NSObject, NSLock, NSArray;

@interface IMDaemonController : NSObject {

	id _delegate;
	IMRemoteObject<IMRemoteDaemonProtocol>* _remoteObject;
	NSMutableDictionary* _listenerMap;
	IMLocalObject* _localObject;
	IMDaemonListener* _daemonListener;
	NSMutableArray* _services;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSObject<OS_dispatch_queue>* _listenerLockQueue;
	NSObject<OS_dispatch_queue>* _remoteDaemonLockQueue;
	NSObject<OS_dispatch_queue>* _localObjectLockQueue;
	NSObject<OS_dispatch_queue>* _remoteMessageQueue;
	NSLock* _connectionLock;
	NSArray* _servicesToAllow;
	NSArray* _servicesToDeny;
	CFRunLoopSourceRef _runLoopSource;
	NSLock* _blockingLock;
	bool _hasCheckedForDaemon;
	bool _preventReconnect;
	bool _inBlockingConnect;
	bool _acquiringDaemonConnection;
	bool _autoReconnect;
	bool _blocksConnectionAtResume;
	bool _hasBeenSuspended;
	unsigned _gMyFZListenerCapabilities;
	unsigned _cachedCapabilities;
	unsigned _lastUpdatedCapabilities;

}

@property (nonatomic,readonly) IMDaemonListener * listener;                                                    //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,readonly) bool isConnected; 
@property (nonatomic,readonly) unsigned capabilities; 
@property (setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;                                     //@synthesize servicesToAllow=_servicesToAllow - In the implementation block
@property (setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;                                       //@synthesize servicesToDeny=_servicesToDeny - In the implementation block
@property (setter=_setListenerID:,nonatomic,retain) NSString * _listenerID;                                    //@synthesize listenerID=_listenerID - In the implementation block
@property (assign,nonatomic) id delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setBlocksConnectionAtResume:,nonatomic) bool _blocksConnectionAtResume;              //@synthesize blocksConnectionAtResume=_blocksConnectionAtResume - In the implementation block
@property (nonatomic,readonly) bool isConnecting; 
@property (setter=__setCapabilities:) unsigned _capabilities;                                                  //@synthesize gMyFZListenerCapabilities=_gMyFZListenerCapabilities - In the implementation block
@property (setter=_setAutoReconnect:) bool _autoReconnect;                                                     //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;                              //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
+(id)sharedInstance;
+(id)sharedController;
+(void)_blockUntilSendQueueIsEmpty;
+(bool)_applicationWillTerminate;
+(void)_setApplicationWillTerminate;
-(bool)isConnected;
-(bool)isConnecting;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned)_capabilities;
-(bool)connectToDaemon;
-(id)listener;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)blockUntilConnected;
-(bool)connectToDaemonWithLaunch:(bool)arg1 ;
-(void)_setCapabilities:(unsigned)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)sendABInformationToDaemon;
-(id)_servicesToAllow;
-(id)_servicesToDeny;
-(void)_noteSetupComplete;
-(void)_setAutoReconnect:(bool)arg1 ;
-(void)_addressBookChanged:(id)arg1 ;
-(void)__setCapabilities:(unsigned)arg1 ;
-(void)_localObjectCleanup;
-(void)_remoteObjectCleanup;
-(void)disconnectFromDaemonWithForce:(bool)arg1 ;
-(bool)_blocksConnectionAtResume;
-(bool)__isLocalObjectValidOnQueue:(id)arg1 ;
-(bool)__isRemoteObjectValidOnQueue:(id)arg1 ;
-(bool)remoteObjectExists;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)_blockUntilSendQueueIsEmpty;
-(bool)localObjectExists;
-(bool)_autoReconnect;
-(bool)_makeConnectionWithLaunch:(bool)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_connectToDaemonWithLaunch:(bool)arg1 capabilities:(unsigned)arg2 ;
-(bool)connectToDaemonWithLaunch:(bool)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(bool)arg3 ;
-(void)disconnectFromDaemon;
-(bool)hasListenerForID:(id)arg1 ;
-(bool)setCapabilities:(unsigned)arg1 forListenerID:(id)arg2 ;
-(void)_listenerSetUpdated;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3 ;
-(void)_agentDidLaunchNotification:(id)arg1 ;
-(void)_handleDaemonException:(id)arg1 ;
-(bool)addListenerID:(id)arg1 capabilities:(unsigned)arg2 ;
-(bool)removeListenerID:(id)arg1 ;
-(id)_remoteObject;
-(void)setMyPicture:(id)arg1 smallPictureData:(id)arg2 ;
-(void)setMyProfile:(id)arg1 ;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(void)_setBlocksConnectionAtResume:(bool)arg1 ;
-(bool)_acquiringDaemonConnection;
-(void)listener:(id)arg1 setListenerCapabilities:(unsigned)arg2 ;
-(void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3 ;
-(void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3 ;
-(void)setDaemonTerminatesWithoutListeners:(bool)arg1 ;
-(void)setDaemonLogsOutWithoutStatusListeners:(bool)arg1 ;
-(id)_listenerID;
-(void)_setListenerID:(id)arg1 ;
-(void)_setServicesToAllow:(id)arg1 ;
-(void)_setServicesToDeny:(id)arg1 ;
-(id)_remoteMessageQueue;
-(unsigned)capabilities;
@end

