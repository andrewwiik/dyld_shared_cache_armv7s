/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSDaemonProtocol <NSObject>
@optional
-(void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7;
-(void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5;
-(void)_removeAndDeregisterAccount:(id)arg1;
-(void)updateAccount:(id)arg1 withAccountInfo:(id)arg2;
-(void)setLoginID:(id)arg1 forAccount:(id)arg2;
-(void)authTokenChanged:(id)arg1 forAccount:(id)arg2;
-(void)passwordChanged:(id)arg1 forAccount:(id)arg2;
-(void)authenticationChangedForAccount:(id)arg1;
-(void)passwordUpdatedForAccount:(id)arg1;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3;
-(void)validateProfileForAccount:(id)arg1;
-(void)addAliases:(id)arg1 toAccount:(id)arg2;
-(void)removeAliases:(id)arg1 fromAccount:(id)arg2;
-(void)validateAliases:(id)arg1 forAccount:(id)arg2;
-(void)unvalidateAliases:(id)arg1 forAccount:(id)arg2;
-(void)_reregisterAndReidentify:(id)arg1 account:(id)arg2;
-(void)deactivateAndPurgeIdentifyForAccount:(id)arg1;
-(void)hardDeregister;
-(void)sendMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(bool)arg5 dataToEncrypt:(id)arg6 encryptPayload:(bool)arg7 wantsResponse:(bool)arg8 timeout:(id)arg9 command:(id)arg10 wantsDeliveryStatus:(bool)arg11 deliveryStatusContext:(id)arg12 messageUUID:(id)arg13 highPriority:(bool)arg14 identifier:(id)arg15;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3;
-(void)requestKeepAlive;
-(void)acknowledgeOutgoingMessageWithGUID:(id)arg1;
-(void)acknowledgeMessageWithGUID:(id)arg1;
-(void)setListenerServices:(id)arg1;
-(void)setListenerCommands:(id)arg1;
-(void)registerAccount:(id)arg1;
-(void)unregisterAccount:(id)arg1;
-(void)authenticateAccount:(id)arg1;
-(void)setListenerCapabilities:(unsigned)arg1;
-(void)disableAccount:(id)arg1;
-(void)enableAccount:(id)arg1;
-(void)_removeAccount:(id)arg1;
@end

