/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAFolder.h>

@class MFMailboxUid;

@interface DAIMAPNotesFolder : DAFolder {

	MFMailboxUid* _mailboxUid;

}

@property (retain) MFMailboxUid * mailboxUid;              //@synthesize mailboxUid=_mailboxUid - In the implementation block
-(void)dealloc;
-(void)setMailboxUid:(id)arg1 ;
-(id)mailboxUid;
@end

