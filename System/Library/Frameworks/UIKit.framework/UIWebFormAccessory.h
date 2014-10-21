/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputView.h>

@protocol UIWebFormAccessoryDelegate;
@class UIToolbar, UIBarButtonItem, UISegmentedControl;

@interface UIWebFormAccessory : UIInputView {

	UIToolbar* _leftToolbar;
	UIToolbar* _rightToolbar;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _flexibleSpaceItem;
	UIBarButtonItem* _previousItem;
	UIBarButtonItem* _nextItem;
	UISegmentedControl* _tab;
	UIBarButtonItem* _autofill;
	UIBarButtonItem* _clearButton;
	<UIWebFormAccessoryDelegate>* delegate;

}

@property (nonatomic,retain) UISegmentedControl * _tab;                                  //@synthesize tab=_tab - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _autofill;                                //@synthesize autofill=_autofill - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _clearButton;                             //@synthesize clearButton=_clearButton - In the implementation block
@property (assign,nonatomic) <UIWebFormAccessoryDelegate> * delegate; 
@property (assign,getter=isNextEnabled,nonatomic) bool nextEnabled; 
@property (assign,getter=isPreviousEnabled,nonatomic) bool previousEnabled; 
+(id)toolbarWithItems:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_clearButton;
-(void)_tabSegmentedControlDidChange:(id)arg1 ;
-(void)_previousTapped:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)done:(id)arg1 ;
-(void)_updateFrame;
-(void)_orientationDidChange:(id)arg1 ;
-(void)_refreshAutofillPresentation;
-(void)_applyTreatmentToAutoFillLabel;
-(id)_autoFillButton;
-(void)set_autofill:(id)arg1 ;
-(void)autoFill:(id)arg1 ;
-(void)showAutoFillButtonWithTitle:(id)arg1 ;
-(void)clear:(id)arg1 ;
-(void)set_clearButton:(id)arg1 ;
-(void)hideAutoFillButton;
-(void)showAutoFillButton;
-(void)setClearVisible:(bool)arg1 ;
-(void)setNextEnabled:(bool)arg1 ;
-(bool)isNextEnabled;
-(void)setPreviousEnabled:(bool)arg1 ;
-(bool)isPreviousEnabled;
-(id)_tab;
-(void)set_tab:(id)arg1 ;
-(id)_autofill;
@end
