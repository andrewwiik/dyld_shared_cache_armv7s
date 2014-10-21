/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UITableView, NSMutableArray, NSArray, NSString;

@interface PLSlideshowTransitionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UIView* _containerView;
	UITableView* _table;
	NSMutableArray* _tableCells;
	NSArray* _transitionKeys;
	NSArray* _alternateLocalizations;
	NSString* _selectedTransition;

}

@property (nonatomic,retain) NSString * selectedTransition; 
@property (nonatomic,retain) NSArray * alternateLocalizations;              //@synthesize alternateLocalizations=_alternateLocalizations - In the implementation block
@property (nonatomic,retain) NSArray * transitionKeys;                      //@synthesize transitionKeys=_transitionKeys - In the implementation block
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopoverView;
-(void)viewDidUnload;
-(void)setSelectedTransition:(id)arg1 ;
-(id)selectedTransition;
-(void)setTransitionKeys:(id)arg1 alternateLocalizations:(id)arg2 ;
-(id)initWithTransitions:(id)arg1 alternateTransitionLocalizations:(id)arg2 ;
-(void)setTransitionKeys:(id)arg1 ;
-(void)setAlternateLocalizations:(id)arg1 ;
-(void)_configureTableCells;
-(id)transitionKeys;
-(id)alternateLocalizations;
@end
