/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, NSMutableIndexSet, SKUIProductPageTableExpandableHeaderView, NSArray, SKUILayoutCache, SKUIColorScheme, NSDateFormatter;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	NSMutableIndexSet* _expandedIndexSet;
	long long _firstStringIndex;
	SKUIProductPageTableExpandableHeaderView* _headerView;
	NSArray* _releaseNotes;
	SKUILayoutCache* _textLayoutCache;
	SKUIColorScheme* _colorScheme;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) long long firstStringIndex;                     //@synthesize firstStringIndex=_firstStringIndex - In the implementation block
@property (nonatomic,copy) NSArray * releaseNotes;                           //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setExpanded:(bool)arg1 ;
-(void).cxx_destruct;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)textLayoutCache;
-(id)releaseNotes;
-(void)setFirstStringIndex:(long long)arg1 ;
-(void)setReleaseNotes:(id)arg1 ;
-(void)setTextLayoutCache:(id)arg1 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)firstStringIndex;
-(void)_reloadHeaderView;
-(id)initWithClientContext:(id)arg1 ;
@end

