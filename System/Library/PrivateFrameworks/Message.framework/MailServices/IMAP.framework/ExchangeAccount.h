/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPAccount.h>

@interface ExchangeAccount : IMAPAccount
+(id)accountTypeString;
-(void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3 ;
-(void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3 ;
-(bool)_syncOnly_defaultValueForShouldStoreJunkOnServer;
-(bool)storeDraftsOnServer;
-(bool)storeSentMessagesOnServer;
-(Class)connectionClass;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(bool)shouldExpungeMessagesOnDelete;
@end

