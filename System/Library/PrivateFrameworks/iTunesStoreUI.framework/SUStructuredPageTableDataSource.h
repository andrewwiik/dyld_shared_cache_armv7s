/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class SUItem, NSMutableArray, SUClientInterface, SUStructuredPage;

@interface SUStructuredPageTableDataSource : SUTableDataSource {

	SUItem* _activeLoadMoreItem;
	NSMutableArray* _cachedHeaderViews;
	SUClientInterface* _clientInterface;
	double _offerButtonWidth;
	SUStructuredPage* _structuredPage;
	long long _style;

}

@property (nonatomic,retain) SUItem * activeLoadMoreItem;                      //@synthesize activeLoadMoreItem=_activeLoadMoreItem - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) SUStructuredPage * structuredPage;                //@synthesize structuredPage=_structuredPage - In the implementation block
@property (assign,nonatomic) long long style;                                  //@synthesize style=_style - In the implementation block
-(bool)canSelectIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(long long)numberOfSections;
-(id)headerViewForSection:(long long)arg1 ;
-(long long)tableViewStyle;
-(id)sectionIndexTitles;
-(id)clientInterface;
-(void)setClientInterface:(id)arg1 ;
-(bool)deleteIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(bool)canDeleteIndexPath:(id)arg1 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(id)titleForDeleteConfirmationForIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(id)structuredPage;
-(void)setStructuredPage:(id)arg1 ;
-(id)activeLoadMoreItem;
-(void)setActiveLoadMoreItem:(id)arg1 ;
-(Class)cellConfigurationClassForItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 reuseIdentifier:(id*)arg2 ;
-(bool)_shouldShowItemOfferButtonForItem:(id)arg1 ;
-(id)_itemOfferButtonForCell:(id)arg1 item:(id)arg2 ;
-(id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2 ;
-(void)_configureLoadMoreCell:(id)arg1 forItem:(id)arg2 ;
-(id)newHeaderViewForSection:(long long)arg1 ;
-(bool)canShowItemOfferButtonForItem:(id)arg1 ;
@end

