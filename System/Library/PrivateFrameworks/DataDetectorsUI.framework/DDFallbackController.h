/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface DDFallbackController : UIViewController {

	UIWindow* _baseWindow;
	UIWindow* _ourWindow;
	id _interactionDelegate;
	long long _startOrientation;

}
-(void)dealloc;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)dismissViewControllerAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2 ;
@end
