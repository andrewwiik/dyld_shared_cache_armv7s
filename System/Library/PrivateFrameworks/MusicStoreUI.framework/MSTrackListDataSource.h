/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MSStructuredPageTableDataSource.h>

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
-(id)headerViewForSection:(long long)arg1 ;
-(long long)tableViewStyle;
-(bool)canShowPreviewForItem:(id)arg1 ;
-(id)_stylesheetString;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(bool)canDoubleTapIndexPath:(id)arg1 ;
-(double)heightForPlaceholderCells;
-(void)reloadCellContexts;
-(Class)cellConfigurationClassForItem:(id)arg1 ;
-(id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2 ;
-(bool)canShowItemOfferButtonForItem:(id)arg1 ;
@end

