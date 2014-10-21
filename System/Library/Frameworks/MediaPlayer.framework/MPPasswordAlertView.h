/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UITextField;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate> {

	/*^block*/ id _completionHandler;
	long long _style;
	UITextField* _passwordTextField;

}

@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
-(id)initWithStyle:(long long)arg1 routeName:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(long long)style;
-(void).cxx_destruct;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
@end

