/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MCUIGradientLabel, UIImageView, MCActionButton;

@interface MCDetailsHeaderContentView : UIView {

	UILabel* _displayNameLabel;
	UILabel* _organizationNameLabel;
	MCUIGradientLabel* _trustedLabel;
	UIImageView* _checkmarkView;
	MCActionButton* _actionButton;
	int _headerMode;
	bool _isNewPayload;
	bool _isTrusted;
	bool _isSigned;
	bool _isExpired;
	bool _hidesUntrustedLabel;
	bool _useTrustedNomenclature;
	id _headerDelegate;

}
+(void)_releaseGradients;
+(id)_greenGradient;
+(id)_redGradient;
+(id)_grayGradient;
-(id)_scriptingInfo;
-(void)setOrganizationName:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)setHidesUntrustedLabel:(bool)arg1 ;
-(void)setUseTrustedNomenclature:(bool)arg1 ;
-(void)setIsTrusted:(bool)arg1 ;
-(void)setIsSigned:(bool)arg1 ;
-(void)hideActionButton;
-(void)showActionButton;
-(void)setActionToRemove;
-(id)_displayNameLabel;
-(id)_organizationNameLabel;
-(id)_trustedLabel;
-(id)_stringForSigned:(bool)arg1 andTrusted:(bool)arg2 ;
-(bool)_canFitTrustedStringForWidth:(double)arg1 ;
-(void)setIsExpired:(bool)arg1 ;
-(id)_gradientForSigned:(bool)arg1 andTrusted:(bool)arg2 ;
-(void)setActionToInstall;
-(void)setDisplayName:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)setGradientColor:(int)arg1 ;
@end

