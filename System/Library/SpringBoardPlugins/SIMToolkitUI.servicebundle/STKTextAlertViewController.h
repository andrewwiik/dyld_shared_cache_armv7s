/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>

@class UITextView;

@interface STKTextAlertViewController : STKBaseAlertViewController {

	UITextView* _textView;

}
-(void)dealloc;
-(bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)dismiss;
-(void)accept:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
-(id)newTopBar;
-(id)newBottomBar;
-(void)_adjustTextFrame;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
-(id)alertText;
@end

