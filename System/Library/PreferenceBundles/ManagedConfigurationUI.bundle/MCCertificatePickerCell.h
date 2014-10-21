/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface MCCertificatePickerCell : PSTableCell {

	UILabel* _issuedByLabel;
	UILabel* _issuerLabel;
	UILabel* _expiresByLabel;
	UILabel* _expiryDateLabel;

}
+(id)_dateFormatter;
+(float)defaultCellHeight;
+(id)_attributeFont;
+(float)_attributeLabelSpace;
-(void)layoutSubviews;
-(void)setChecked:(bool)arg1 ;
-(void).cxx_destruct;
-(id)_checkmarkView;
-(void)setIssuer:(id)arg1 ;
-(id)_attributeLabelCopy;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)_labelColor;
-(void)setExpirationDate:(id)arg1 ;
@end

