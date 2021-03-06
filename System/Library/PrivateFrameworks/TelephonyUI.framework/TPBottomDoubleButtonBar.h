/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPBottomSingleButtonBar.h>

@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {

	TPButton* _button2;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setButton:(id)arg1 andStyle:(bool)arg2 ;
-(void)setButton2:(id)arg1 andStyle:(bool)arg2 ;
-(void)_layoutButtons;
-(double)_buttonWidth;
-(id)initForIncomingCallWithFrame:(CGRect)arg1 ;
-(id)initForCallFailureWithFrame:(CGRect)arg1 ;
-(id)initForEmergencyCallWithFrame:(CGRect)arg1 ;
-(id)initForVideoChatWithFrame:(CGRect)arg1 ;
-(id)button2;
-(void)setDrawsSeparateWells:(bool)arg1 ;
@end

