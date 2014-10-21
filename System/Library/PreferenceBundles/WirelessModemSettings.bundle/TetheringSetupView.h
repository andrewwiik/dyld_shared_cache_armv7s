/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray, UIImageView;

@interface TetheringSetupView : UIView {

	UILabel* _title;
	NSMutableArray* _setupSteps;
	UIImageView* _icon;
	long long _layoutDirection;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setIcon:(id)arg1 ;
-(id)_preferenceLabelWithText:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(bool)arg2 ;
-(void)addStep:(id)arg1 ;
-(id)icon;
@end

