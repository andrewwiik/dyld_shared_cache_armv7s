/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSString* _commentText;
	SUConcernItem* _concern;
	unsigned long long _itemIdentifier;

}

@property (retain) NSString * commentText;                         //@synthesize commentText=_commentText - In the implementation block
@property (retain) SUConcernItem * concern;                        //@synthesize concern=_concern - In the implementation block
@property (assign) unsigned long long itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
-(void)dealloc;
-(void)run;
-(id)commentText;
-(void)setCommentText:(id)arg1 ;
-(unsigned long long)itemIdentifier;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(id)initWithConcern:(id)arg1 ;
-(void)setConcern:(id)arg1 ;
-(id)_httpBody;
-(id)concern;
@end
