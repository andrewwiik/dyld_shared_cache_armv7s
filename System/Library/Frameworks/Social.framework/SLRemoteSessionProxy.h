/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSXPCInterface, NSXPCConnection, NSMutableArray, NSLock, NSObject;

@interface SLRemoteSessionProxy : NSObject {

	NSString* _serviceName;
	NSXPCInterface* _remoteInterface;
	id _remoteProxy;
	NSXPCConnection* _connection;
	NSMutableArray* _guaranteedRemoteCalls;
	NSLock* _guaranteedRemoteCallsLock;
	NSObject* _exportedObject;
	NSXPCInterface* _exportedInterface;
	/*^block*/ id _connectionResetBlock;

}

@property (__weak) NSObject * exportedObject;                       //@synthesize exportedObject=_exportedObject - In the implementation block
@property (retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (copy) id connectionResetBlock;                           //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
-(id)exportedObject;
-(void)setConnectionResetBlock:(/*^block*/ id)arg1 ;
-(id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2 ;
-(void)dropGuaraneteedRemoteCall:(id)arg1 ;
-(void)registerGuaranteedRemoteCall:(id)arg1 ;
-(/*^block*/ id)connectionResetBlock;
-(void)_remoteSessionConnectionWasInterrupted;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void).cxx_destruct;
-(void)disconnect;
-(id)exportedInterface;
-(void)setExportedInterface:(id)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(void)_setupConnection;
@end

