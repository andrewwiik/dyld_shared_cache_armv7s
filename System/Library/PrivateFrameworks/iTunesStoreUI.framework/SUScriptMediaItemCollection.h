/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, SUScriptMediaItem, MPMediaItemCollection;

@interface SUScriptMediaItemCollection : SUScriptObject {

	NSArray* _items;
	SUScriptMediaItem* _representativeItem;
	bool _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaItemCollection * nativeCollection; 
@property (readonly) long long count; 
@property (readonly) NSArray * items; 
@property (readonly) NSArray * mediaTypes; 
@property (readonly) SUScriptMediaItem * representativeItem; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)representativeItem;
-(void)dealloc;
-(long long)count;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(id)mediaTypes;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(id)nativeCollection;
@end

