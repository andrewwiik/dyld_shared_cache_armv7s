/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@protocol OS_dispatch_semaphore;
@class NSCalendar, NSObject;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

	NSCalendar* cal;
	NSObject<OS_dispatch_semaphore>* lock;
	bool needsToCopy;

}
+(id)currentCalendar;
-(id)_initWithCalendar:(id)arg1 ;
-(id)_initWithWrapper:(id)arg1 ;
-(void)_copyWrappedCalendar;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)hash;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)timeZone;
-(id)locale;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(unsigned long long)firstWeekday;
-(unsigned long long)minimumDaysInFirstWeek;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(void)finalize;
@end

