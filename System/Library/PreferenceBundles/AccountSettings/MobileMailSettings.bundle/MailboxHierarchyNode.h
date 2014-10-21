/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MFMailboxUid, NSString;

@interface MailboxHierarchyNode : NSObject {

	NSMutableArray* _children;
	MFMailboxUid* _mailbox;
	MFMailboxUid* _parentMailbox;
	NSString* _displayName;
	int _level;

}

@property (retain) MFMailboxUid * parentMailbox;              //@synthesize parentMailbox=_parentMailbox - In the implementation block
@property (retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)displayName;
-(void)setParentMailbox:(id)arg1 ;
-(id)removeNodeForMailbox:(id)arg1 ;
-(id)parentMailbox;
-(id)_findNodeForMailbox:(id)arg1 removeNode:(bool)arg2 ;
-(id)findNodeForMailbox:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailbox;
-(void)addChild:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)children;
@end
