/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <AirPortAssistant/TableViewManagerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIView, UILabel, UIActivityIndicatorView, PPPoEConnectionUIViewController;

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {

	UIView* tableHeaderContainerView;
	UIView* justTextContainerView;
	UILabel* justTextLabel;
	UIView* spinnerWithStatusAdjacentView;
	UIActivityIndicatorView* spinnerWithStatusAdjacentSpinner;
	UILabel* spinnerWithStatusAdjacentLabel;
	PPPoEConnectionUIViewController* pppoeConnectionUIViewController;
	id previousNavDelegate;

}

@property (nonatomic,retain) UIView * tableHeaderContainerView; 
@property (nonatomic,retain) UIView * justTextContainerView; 
@property (assign,nonatomic) UILabel * justTextLabel; 
@property (nonatomic,retain) UIView * spinnerWithStatusAdjacentView; 
@property (retain) PPPoEConnectionUIViewController * pppoeConnectionUIViewController; 
-(void)dealloc;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3 ;
-(void)setJustTextContainerView:(id)arg1 ;
-(void)setSpinnerWithStatusAdjacentView:(id)arg1 ;
-(void)setTableHeaderContainerView:(id)arg1 ;
-(id)tableHeaderContainerView;
-(id)justTextLabel;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3 ;
-(id)justTextContainerView;
-(void)setJustTextLabel:(id)arg1 ;
-(id)spinnerWithStatusAdjacentView;
-(void)setupInitialTableHeaderConfiguration;
-(void)setPppoeConnectionUIViewController:(id)arg1 ;
-(id)pppoeConnectionUIViewController;
@end

