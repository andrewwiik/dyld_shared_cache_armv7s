/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel, UIImageView, SKUIItemOfferButton;

@interface ACUIAppInstallCell : PSTableCell {

	UILabel* _nameLabel;
	UILabel* _publisherLabel;
	UIImageView* _iconView;
	SKUIItemOfferButton* _installButton;
	int _installState;

}

@property (assign,nonatomic) int installState;              //@synthesize installState=_installState - In the implementation block
+(id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setInstallState:(int)arg1 ;
-(int)installState;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void).cxx_destruct;
-(id)_createLabelForAppName:(id)arg1 ;
-(id)_createLabelForPublisher:(id)arg1 ;
-(id)_createInstallButton;
-(void)_updateSubviewsWithInstallState:(int)arg1 ;
-(void)_updateInstallButtonWithState:(int)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

