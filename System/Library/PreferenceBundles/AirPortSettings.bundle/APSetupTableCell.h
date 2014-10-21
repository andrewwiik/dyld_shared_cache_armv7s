/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@interface APSetupTableCell : PSEditableTableCell {

	bool _editable;

}

@property (assign,nonatomic) bool editable;              //@synthesize editable=_editable - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setEditable:(bool)arg1 ;
-(bool)editable;
-(void)textValueChanged:(id)arg1 ;
@end

