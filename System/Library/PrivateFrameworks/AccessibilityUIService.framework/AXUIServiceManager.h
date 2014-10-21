/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUI/AXUIMessageSenderDelegate.h>

@class AXUIDisplayManager, AXAccessQueue, NSMutableArray, NSMutableDictionary, AXUIMessageSender;

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate> {

	bool _didEncounterError;
	bool _shouldAllowServicesToProcessMessages;
	AXUIDisplayManager* _displayManager;
	AXAccessQueue* _resumingConnectionsQueue;
	NSMutableArray* _pausedConnections;
	AXAccessQueue* _entitlementsCheckersAccessQueue;
	NSMutableDictionary* _entitlementsCheckers;
	AXUIMessageSender* _messageSender;
	NSMutableDictionary* _services;
	AXAccessQueue* _servicesAccessQueue;
	unsigned long long _lastUsedClientIdentifier;

}

@property (nonatomic,retain) AXUIDisplayManager * displayManager;                          //@synthesize displayManager=_displayManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * pausedConnections;                           //@synthesize pausedConnections=_pausedConnections - In the implementation block
@property (nonatomic,retain) AXAccessQueue * resumingConnectionsQueue;                     //@synthesize resumingConnectionsQueue=_resumingConnectionsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entitlementsCheckers;                   //@synthesize entitlementsCheckers=_entitlementsCheckers - In the implementation block
@property (nonatomic,retain) AXAccessQueue * entitlementsCheckersAccessQueue;              //@synthesize entitlementsCheckersAccessQueue=_entitlementsCheckersAccessQueue - In the implementation block
@property (assign,nonatomic) bool didEncounterError;                                       //@synthesize didEncounterError=_didEncounterError - In the implementation block
@property (nonatomic,retain) AXUIMessageSender * messageSender;                            //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * services;                               //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) AXAccessQueue * servicesAccessQueue;                          //@synthesize servicesAccessQueue=_servicesAccessQueue - In the implementation block
@property (assign,nonatomic) unsigned long long lastUsedClientIdentifier;                  //@synthesize lastUsedClientIdentifier=_lastUsedClientIdentifier - In the implementation block
@property (assign,nonatomic) bool shouldAllowServicesToProcessMessages;                    //@synthesize shouldAllowServicesToProcessMessages=_shouldAllowServicesToProcessMessages - In the implementation block
+(id)sharedServiceManager;
+(void)_releaseSharedServiceManager;
-(void)setMessageSender:(id)arg1 ;
-(id)messageSender;
-(void)dealloc;
-(id)init;
-(bool)_start;
-(void)_handleConnection:(id)arg1 ;
-(void)setServicesAccessQueue:(id)arg1 ;
-(void)setEntitlementsCheckersAccessQueue:(id)arg1 ;
-(void)setResumingConnectionsQueue:(id)arg1 ;
-(void)setDisplayManager:(id)arg1 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
-(id)displayManager;
-(void)setPausedConnections:(id)arg1 ;
-(void)setEntitlementsCheckers:(id)arg1 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientResponsibleForService:(id)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(bool)arg5 completion:(/*^block*/ id)arg6 ;
-(id)_serviceContextForService:(id)arg1 ;
-(unsigned long long)_registerClientWithConnection:(id)arg1 serviceBundleName:(id)arg2 initiatingMessageIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_serviceContextForClientWithIdentifier:(unsigned long long)arg1 ;
-(bool)_serviceWithClass:(Class)arg1 canProcessMessageWithIdentifier:(unsigned long long)arg2 fromClientWithConnection:(id)arg3 possibleRequiredEntitlements:(id*)arg4 ;
-(void)_unregisterAllClientsWithConnection:(id)arg1 ;
-(id)resumingConnectionsQueue;
-(bool)shouldAllowServicesToProcessMessages;
-(id)pausedConnections;
-(id)entitlementsCheckersAccessQueue;
-(id)entitlementsCheckers;
-(void)setShouldAllowServicesToProcessMessages:(bool)arg1 ;
-(id)servicesAccessQueue;
-(unsigned long long)lastUsedClientIdentifier;
-(void)setLastUsedClientIdentifier:(unsigned long long)arg1 ;
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3 ;
-(void)beginTransactionWithIdentifier:(id)arg1 forService:(id)arg2 ;
-(void)endTransactionWithIdentifier:(id)arg1 forService:(id)arg2 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientResponsibleForService:(id)arg3 targetAccessQueue:(id)arg4 completion:(/*^block*/ id)arg5 ;
-(id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientResponsibleForService:(id)arg3 error:(id*)arg4 ;
-(id)_uniqueIdentifierForService:(id)arg1 ;
-(void)_enumerateServicesForUniqueIdentifiers:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(bool)didEncounterError;
-(void)setDidEncounterError:(bool)arg1 ;
-(void)_applicationDidFinishLaunching;
-(void)setServices:(id)arg1 ;
-(id)services;
@end

