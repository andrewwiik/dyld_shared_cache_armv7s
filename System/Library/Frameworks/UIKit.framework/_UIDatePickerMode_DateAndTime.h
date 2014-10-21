/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString, NSDateFormatter;

@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode {

	bool _weekdayLast;
	double _wmdWeekMonthDayWidth;
	double _wmdHourWidth;
	double _wmdMinuteWidth;
	double _wmdAMPMWidth;
	double _wmdWeekdayWidth;
	NSString* _weekdayFormat;
	NSString* _monthDayFormat;
	NSString* _hourFormat;
	NSString* _minuteFormat;
	NSDateFormatter* _relativeFormatter;
	NSDateFormatter* _weekdayFormatter;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(void)dealloc;
-(unsigned long long*)elements;
-(double)weekdayWidth;
-(void)noteCalendarChanged;
-(long long)displayedCalendarUnits;
-(void)loadDate:(id)arg1 animated:(bool)arg2 ;
-(id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3 ;
-(void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(void)resetComponentWidths;
-(void)_shouldReset:(id)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(id)baseDateComponents;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2 ;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(bool)arg2 ;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
-(void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1 ;
-(void)_takeBaseDateComponentsFromDate:(id)arg1 ;
-(id)weekdayFormatter;
-(double)componentWidthForDateTimeCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)_dateForWeekMonthDayRow:(long long)arg1 ;
-(bool)_shouldEnableWeekMonthDayForRow:(long long)arg1 ;
-(id)relativeFormatter;
-(bool)isWeekdayLast;
@end

