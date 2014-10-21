/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@class NSString;

@interface PHSettingsNumberCell : PSEditableTableCell {

	NSString* _previouslySavedValue;

}

@property (retain) NSString * previouslySavedValue;              //@synthesize previouslySavedValue=_previouslySavedValue - In the implementation block
-(void)dealloc;
-(id)previouslySavedValue;
-(bool)_valueDifferentFromPreviouslySavedValue;
-(void)setPreviouslySavedValue:(id)arg1 ;
-(void)saveNumberValue;
-(void)endEditingAndSave;
@end
