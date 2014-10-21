/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol EKPickerTableViewDelegate;
@class UIDatePicker, UITableView;

@interface EKPickerTableView : UIView {

	UIDatePicker* _datePicker;
	UITableView* _tableView;
	bool _showsDatePicker;
	bool _usesKeyboard;
	<EKPickerTableViewDelegate>* _delegate;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;                                //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) <EKPickerTableViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool showsDatePicker;                                       //@synthesize showsDatePicker=_showsDatePicker - In the implementation block
@property (assign,nonatomic) bool usesKeyboard;                                          //@synthesize usesKeyboard=_usesKeyboard - In the implementation block
@property (assign,nonatomic) bool usesBlackDatePicker; 
-(id)datePicker;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)_datePickerDoubleTapped:(id)arg1 ;
-(double)_heightForDatePicker;
-(id)initWithFrame:(CGRect)arg1 tableViewController:(id)arg2 ;
-(CGRect)_frameForDatePicker;
-(void)setShowsDatePicker:(bool)arg1 animated:(bool)arg2 ;
-(void)_updateTableContentInset;
-(void)setUsesKeyboard:(bool)arg1 ;
-(void)setUsesBlackDatePicker:(bool)arg1 ;
-(bool)usesBlackDatePicker;
-(void)setShowsDatePicker:(bool)arg1 ;
-(double)heightWithDatePickerAndTableHeight:(double)arg1 ;
-(bool)showsDatePicker;
-(bool)usesKeyboard;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(bool)canBecomeFirstResponder;
-(id)inputView;
-(id)tableView;
-(void).cxx_destruct;
@end
