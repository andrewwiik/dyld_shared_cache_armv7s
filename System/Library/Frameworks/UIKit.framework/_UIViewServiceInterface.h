/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSXPCConnectionDelegate.h>

@class NSError, _UIAsyncInvocation, NSString, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

	int _terminationStateLock;
	NSError* _terminationError;
	/*^block*/ id _terminationHandler;
	bool _isTerminated;
	_UIAsyncInvocation* _terminateInvocation;
	NSString* _serviceBundleIdentifier;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceConnection;
	int __automatic_invalidation_retainCount;
	bool __automatic_invalidation_invalidated;

}

@property (nonatomic,readonly) int servicePID; 
@property (nonatomic,readonly) SCD_Struct_UI26 serviceAuditToken; 
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/ id)arg3 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(id)disconnect;
-(id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(/*^block*/ id)arg3 ;
-(int)__automatic_invalidation_logic;
-(id)_terminateWithError:(id)arg1 ;
-(void)setTerminationHandler:(/*^block*/ id)arg1 ;
-(void)_terminateUnconditionallyThen:(/*^block*/ id)arg1 ;
-(int)servicePID;
-(SCD_Struct_UI26)serviceAuditToken;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI85)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
@end

