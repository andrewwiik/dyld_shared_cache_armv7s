/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWebFormControl.h>

@class DOMHTMLInputElement, UIDatePicker, NSString;

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {

	DOMHTMLInputElement* _inputElement;
	UIDatePicker* _datePicker;
	NSString* _formatString;
	bool _shouldRemoveTimeZoneInformation;
	bool _isTimeInput;

}

@property (nonatomic,retain) DOMHTMLInputElement * _inputElement;              //@synthesize inputElement=_inputElement - In the implementation block
@property (nonatomic,retain) UIDatePicker * _datePicker;                       //@synthesize datePicker=_datePicker - In the implementation block
-(void)dealloc;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(void)_dateChanged;
-(void)set_inputElement:(id)arg1 ;
-(void)set_datePicker:(id)arg1 ;
-(void)_dateChangeHandler:(id)arg1 ;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(id)_inputElement;
-(id)_datePicker;
@end

