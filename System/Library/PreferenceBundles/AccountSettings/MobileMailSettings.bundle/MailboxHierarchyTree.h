/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MailboxHierarchyNode, NSMutableDictionary;

@interface MailboxHierarchyTree : NSObject {

	MailboxHierarchyNode* _rootMailboxNode;
	NSMutableDictionary* _nodesByMailbox;
	bool _mailboxStructureHasBeenCached;

}
-(void)dealloc;
-(id)addChildMailbox:(id)arg1 forMailboxNode:(id)arg2 ;
-(id)rootMailboxNode;
-(id)initWithRootMailbox:(id)arg1 ;
-(void)_addChildNode:(id)arg1 toParentNode:(id)arg2 ;
-(void)_insertMailboxUidsFlattenedFromMailboxNode:(id)arg1 intoArray:(id)arg2 currentLevel:(int)arg3 ;
-(void)removeNodeForMailbox:(id)arg1 ;
-(void)moveMailbox:(id)arg1 toParent:(id)arg2 ;
-(id)flattenedMailboxTreeRepresentation;
-(id)parentForMailbox:(id)arg1 ;
-(int)levelForMailbox:(id)arg1 ;
-(void)setDisplayName:(id)arg1 forMailbox:(id)arg2 ;
-(id)displayNameForMailbox:(id)arg1 ;
-(bool)mailboxHasSubMailboxes:(id)arg1 ;
@end

