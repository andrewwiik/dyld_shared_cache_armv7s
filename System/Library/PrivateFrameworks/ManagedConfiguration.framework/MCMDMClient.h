/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject {

	CPDistributedMessagingCenter* _messageCenter;

}
+(id)sharedClient;
-(id)init;
-(void).cxx_destruct;
-(int)accessRights;
-(bool)authenticateWithCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 useDevelopmentAPNS:(bool)arg4 signMessage:(bool)arg5 outError:(id*)arg6 ;
-(bool)checkOutCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 signMessage:(bool)arg4 outError:(id*)arg5 ;
-(void)notifyNewConfiguration;
-(void)scheduleTokenUpdate;
-(void)retryNotNowResponse;
-(void)simulatePush;
-(void)removeManagedAppsAccordingToFlags;
-(bool)isManagedByMDM;
-(bool)isActivationLockAllowedWhileSupervised;
@end

