/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMServiceSessionProtocol
@optional
-(void)login;
-(void)logout;
-(void)setBlockIdleStatus:(bool)arg1;
-(void)setBlockList:(id)arg1;
-(void)setBlockingMode:(unsigned)arg1;
-(void)setAllowList:(id)arg1;
-(void)requestGroups;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1;
-(void)removeAliases:(id)arg1;
-(void)unvalidateAliases:(id)arg1;
-(void)validateAliases:(id)arg1;
-(void)autoLogin;
-(void)renameGroup:(id)arg1 to:(id)arg2;
-(void)holdBuddyUpdates;
-(void)resumeBuddyUpdates;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
-(void)validateProfile;
-(void)autoReconnect;
-(void)changeGroups:(id)arg1;
-(void)changeGroup:(id)arg1 changes:(id)arg2;
-(void)acceptSubscriptionRequest:(bool)arg1 from:(id)arg2;
-(void)requestSubscriptionTo:(id)arg1;
-(void)startWatchingBuddy:(id)arg1;
-(void)stopWatchingBuddy:(id)arg1;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5;
-(void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
-(void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
-(void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
-(void)passwordUpdated;
-(void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
-(void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
-(void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
@end

