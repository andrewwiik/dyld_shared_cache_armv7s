/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableDictionary;

@interface GKUIAlertView : UIAlertView <UIAlertViewDelegate, UITextFieldDelegate> {

	/*^block*/ id _dismissHandler;
	long long _buttonIndexForReturnKey;
	NSMutableDictionary* _buttonHandlers;

}

@property (nonatomic,copy) id dismissHandler;                                   //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (assign,nonatomic) long long buttonIndexForReturnKey;                 //@synthesize buttonIndexForReturnKey=_buttonIndexForReturnKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buttonHandlers;              //@synthesize buttonHandlers=_buttonHandlers - In the implementation block
+(id)_gkAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(/*^block*/ id)arg5 ;
+(id)alertViewWithTitle:(id)arg1 message:(id)arg2 ;
+(id)showError:(id)arg1 withTitle:(id)arg2 defaultMessage:(id)arg3 ;
-(void)setDismissHandler:(/*^block*/ id)arg1 ;
-(void)setButtonIndexForReturnKey:(long long)arg1 ;
-(/*^block*/ id)dismissHandler;
-(id)buttonHandlers;
-(long long)addButtonWithTitle:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(long long)addCancelButtonWithTitle:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(bool)shouldRetainSelf;
-(void)setButtonHandlers:(id)arg1 ;
-(long long)buttonIndexForReturnKey;
-(long long)addCancelButtonWithTitle:(id)arg1 ;
-(void)dealloc;
-(void)show;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
@end

