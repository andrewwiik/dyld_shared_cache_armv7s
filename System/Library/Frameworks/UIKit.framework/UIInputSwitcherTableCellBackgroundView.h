/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, UITableViewCell, UIKeyboardMenuView;

@interface UIInputSwitcherTableCellBackgroundView : UIView {

	UITableView* _tableView;
	UITableViewCell* _cell;
	UIKeyboardMenuView* _menu;

}

@property (assign,nonatomic) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) UITableViewCell * cell;                 //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setTableView:(id)arg1 ;
-(id)tableView;
-(id)cell;
-(void)setCell:(id)arg1 ;
-(id)menu;
-(id)initWithTableView:(id)arg1 cell:(id)arg2 ;
-(void)setMenu:(id)arg1 ;
@end

