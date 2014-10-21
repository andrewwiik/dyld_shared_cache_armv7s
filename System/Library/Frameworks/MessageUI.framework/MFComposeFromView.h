/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UILabel, UIView;

@interface MFComposeFromView : MFComposeHeaderView {

	UILabel* _accountLabel;
	UIView* _background;

}
-(void)setLabelHighlighted:(bool)arg1 ;
-(void)setAccountLabel:(id)arg1 ;
-(CGRect)accountLabelRect;
-(id)_accountLabel;
-(void)_setBackgroundVisible:(bool)arg1 animated:(bool)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
@end
