/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Time : _UIDatePickerMode {

	double _timeHourWidth;
	double _timeMinuteWidth;
	double _timeAMPMWidth;
	NSString* _hourFormat;
	NSString* _minuteFormat;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(void)dealloc;
-(double)rowHeight;
-(id)font;
-(void)noteCalendarChanged;
-(long long)displayedCalendarUnits;
-(void)resetComponentWidths;
-(void)_shouldReset:(id)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
@end

