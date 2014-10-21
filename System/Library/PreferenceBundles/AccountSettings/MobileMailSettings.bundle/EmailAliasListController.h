/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/MobileMailSettings-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol EmailAliasListControllerDataSource;
@class NSMutableArray;

@interface EmailAliasListController : UITableViewController <UITextFieldDelegate> {

	NSMutableArray* _emailAliases;
	unsigned long long _indexOfDefaultEmailAlias;
	bool _addingEmailAlias;
	bool _disableEmailAliasListChanges;
	<EmailAliasListControllerDataSource>* _dataSource;
	id _specifier;

}

@property (assign,nonatomic) <EmailAliasListControllerDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) id specifier;                                                   //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) bool disableEmailAliasListChanges;                              //@synthesize disableEmailAliasListChanges=_disableEmailAliasListChanges - In the implementation block
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)init;
-(bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)dataSource;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)setDisableEmailAliasListChanges:(bool)arg1 ;
-(bool)disableEmailAliasListChanges;
-(void)startAddingEmailAlias;
@end

