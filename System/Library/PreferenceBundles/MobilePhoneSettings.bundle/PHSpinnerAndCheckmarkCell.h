/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIProgressIndicator;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIProgressIndicator* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setLoading:(bool)arg1 ;
-(void)dealloc;
-(void)setChecked:(bool)arg1 ;
-(void)setReallyChecked:(bool)arg1 ;
-(void)_removeSpinner;
-(void)_addSpinner;
-(void)setRow:(int)arg1 ;
@end

