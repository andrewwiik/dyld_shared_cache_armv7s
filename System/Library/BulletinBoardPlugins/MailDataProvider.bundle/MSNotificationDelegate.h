/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/BulletinBoardPlugins/MailDataProvider.bundle/MailDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSNotificationDelegate
@required
-(void)notificationServiceDidShutdown:(id)arg1 withError:(id)arg2;
-(void)notificationService:(id)arg1 didFetchMessages:(id)arg2;
-(void)notificationService:(id)arg1 didFetchSummaryForMessages:(id)arg2;
-(void)notificationService:(id)arg1 didRemoveMessageIds:(id)arg2;
-(void)notificationService:(id)arg1 didChangeAccounts:(id)arg2 hadError:(bool)arg3;
-(void)messagesInvalidatedForNotificationService:(id)arg1;
-(void)protectedDataBecameAvailableForNotificationService:(id)arg1;
-(void)_invalidateSectionParametersForNotificationService:(id)arg1;
@end

