/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class NSMutableDictionary, NSArray;

@interface SUActivityViewController : UIActivityViewController {

	NSMutableDictionary* _customTitles;
	NSArray* _suActivityItems;
	long long _transitionSafetyCount;

}
-(void)dealloc;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
@end

