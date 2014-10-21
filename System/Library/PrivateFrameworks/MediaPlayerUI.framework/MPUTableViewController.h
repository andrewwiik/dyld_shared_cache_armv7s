/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUDataSourceViewController.h>
#import <MediaPlayer/MPStoreDownloadManagerObserver.h>
#import <MediaPlayerUI/MPUActionTableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSMutableArray, MPUQueryDataSource;

@interface MPUTableViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, MPUActionTableViewDataSource, UITableViewDelegate> {

	bool _shouldUpdateVisibleCellsWhenVisible;
	bool _hasAppearedOnce;
	UITableView* _tableView;
	long long _numberOfActionRows;
	NSMutableArray* _visibleActionRows;
	Class _cellConfigurationClass;

}

@property (nonatomic,readonly) Class cellConfigurationClass;                                              //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,readonly) MPUQueryDataSource * queryDataSource; 
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,readonly) bool shouldScrollToFirstDataSourceSectionOnInitialAppearance; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)actionCellConfigurationClasses;
+(Class)_tableViewClass;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(id)tableView;
-(void).cxx_destruct;
-(void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(bool)arg2 ;
-(bool)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
-(void)_configureCellsAfterScroll;
-(void)_loadCellConfiguration;
-(void)_setCellConfigurationClass:(Class)arg1 ;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(bool)shouldShowActionCellConfiguration:(Class)arg1 ;
-(id)queryDataSource;
-(id)indexPathForDataSourceIndex:(long long)arg1 ;
-(long long)indexOfFirstDataSourceSection;
-(long long)dataSourceSectionForSection:(long long)arg1 ;
-(Class)cellConfigurationForIndexPath:(id)arg1 ;
-(long long)dataSourceIndexForIndexPath:(id)arg1 ;
-(bool)isTableViewLoaded;
-(void)reloadActionRowsAnimated:(bool)arg1 ;
-(id)_createTableView;
-(long long)sectionForDataSourceSection:(long long)arg1 ;
-(long long)numberOfActionRowsInTableView:(id)arg1 ;
-(Class)cellConfigurationClass;
@end
