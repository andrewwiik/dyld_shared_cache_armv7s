/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SUGridViewDataSource.h>
#import <iTunesStoreUI/SUGridViewDelegate.h>

@class SUTableDataSource, SUGridView;

@interface SUGridViewController : SUViewController <SUGridViewDataSource, SUGridViewDelegate> {

	SUTableDataSource* _dataSource;
	long long _disappearOrientation;
	double _tableMargin;
	long long _tableViewStyle;

}

@property (nonatomic,readonly) SUGridView * gridView; 
@property (assign,nonatomic) double tableMargin;                          //@synthesize tableMargin=_tableMargin - In the implementation block
@property (nonatomic,retain) SUTableDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(id)dataSource;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)gridView;
-(void)gridView:(id)arg1 commitEditingStyle:(long long)arg2 forCellAtIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInGridView:(id)arg1 ;
-(id)gridView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)gridView:(id)arg1 editingStyleForCellAtIndexPath:(id)arg2 ;
-(double)gridView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)marginForGridView:(id)arg1 ;
-(id)gridView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2 ;
-(long long)gridView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)gridView:(id)arg1 numberOfColumnsInSection:(long long)arg2 ;
-(id)_existingGridView;
-(bool)deleteCellAtIndexPath:(id)arg1 ;
-(double)tableMargin;
-(id)initWithTableViewStyle:(long long)arg1 ;
-(void)setTableMargin:(double)arg1 ;
@end

