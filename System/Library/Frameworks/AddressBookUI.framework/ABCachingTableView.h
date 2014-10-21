/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableView.h>

@class NSMutableArray, NSMutableDictionary;

@interface ABCachingTableView : UITableView {

	bool _cellsLayoutCachingEnabled;
	NSMutableArray* _cellsToBeReusedOnDealloc;
	NSMutableDictionary* _cellsReusedByIndex;

}

@property (assign,getter=isEditing,nonatomic) bool editing; 
@property (assign,getter=isCellsLayoutCachingEnabled,nonatomic) bool cellsLayoutCachingEnabled;              //@synthesize cellsLayoutCachingEnabled=_cellsLayoutCachingEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellsToBeReusedOnDealloc;                                      //@synthesize cellsToBeReusedOnDealloc=_cellsToBeReusedOnDealloc - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cellsReusedByIndex;                                       //@synthesize cellsReusedByIndex=_cellsReusedByIndex - In the implementation block
+(void)cacheCell:(id)arg1 editing:(bool)arg2 ;
-(void)cacheCellsForReuse;
-(void)_invalidateCellsByIndex;
-(id)cellsReusedByIndex;
-(id)cellsToBeReusedOnDealloc;
-(void)setCellsToBeReusedOnDealloc:(id)arg1 ;
-(bool)isCellsLayoutCachingEnabled;
-(id)cachedCellForIndexPath:(id)arg1 ;
-(Class)_cellClassForIdentifier:(id)arg1 ;
-(void)setCellsReusedByIndex:(id)arg1 ;
-(void)setCellsLayoutCachingEnabled:(bool)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)beginUpdates;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
@end

