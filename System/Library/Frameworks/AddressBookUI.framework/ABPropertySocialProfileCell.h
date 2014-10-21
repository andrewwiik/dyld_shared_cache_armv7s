/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPropertySimpleCell.h>
#import <AddressBookUI/ABPickerControllerDelegate.h>

@class NSString, CNSocialProfile;

@interface ABPropertySocialProfileCell : ABPropertySimpleCell <ABPickerControllerDelegate> {

	NSString* _previousValue;

}

@property (nonatomic,readonly) CNSocialProfile * profile; 
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)labelButtonClicked:(id)arg1 ;
-(void)dealloc;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(SCD_Struct_AB11)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(id)profile;
@end

