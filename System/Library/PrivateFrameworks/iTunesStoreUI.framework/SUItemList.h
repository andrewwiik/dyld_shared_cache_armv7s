/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSDictionary, NSArray;

@interface SUItemList : NSObject <NSCopying> {

	NSMutableArray* _groups;
	NSDictionary* _hintText;
	bool _ignoresEmptySections;

}

@property (nonatomic,readonly) long long numberOfItems; 
@property (assign,nonatomic) bool ignoresEmptySections;                   //@synthesize ignoresEmptySections=_ignoresEmptySections - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setItems:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItems;
-(id)sectionIndexTitles;
-(id)copyItems;
-(void)setItemsFromPropertyList:(id)arg1 ;
-(void)setHintText:(id)arg1 ;
-(long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(id)indexPathOfItemWithIdentifier:(unsigned long long)arg1 ;
-(id)indexPathOfItem:(id)arg1 ;
-(void)replaceItemAtIndexPath:(id)arg1 withItems:(id)arg2 ;
-(void)setIgnoresEmptySections:(bool)arg1 ;
-(id)itemsForSectionAtIndex:(long long)arg1 ;
-(id)sectionItemForSectionAtIndex:(long long)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/ id)arg1 ;
-(id)_groupAtExternalIndex:(long long)arg1 ;
-(void)insertItems:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_removeHiddenItemsFromArray:(id)arg1 ;
-(id)hintTextForKey:(id)arg1 ;
-(bool)ignoresEmptySections;
@end

