/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class NSDate, UIFont, NSCalendar, NSString;

@interface UIDateLabel : UILabel {

	bool _forceTimeOnly;
	NSDate* _date;
	bool _boldForAllLocales;
	NSDate* _yesterday;
	NSDate* _today;
	NSDate* _noon;
	NSDate* _tomorrow;
	NSDate* _previousWeek;
	UIFont* _timeDesignatorFont;
	NSCalendar* _calendar;
	bool _shouldRecomputeText;
	double _paddingFromTimeToDesignator;

}

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) UIFont * timeDesignatorFont; 
@property (nonatomic,readonly) NSString * timeDesignator; 
@property (assign,nonatomic) bool forceTimeOnly;                                      //@synthesize forceTimeOnly=_forceTimeOnly - In the implementation block
@property (assign,nonatomic) bool boldForAllLocales;                                  //@synthesize boldForAllLocales=_boldForAllLocales - In the implementation block
@property (assign,nonatomic) double paddingFromTimeToDesignator;                      //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
@property (nonatomic,readonly) bool use24HourTime; 
@property (nonatomic,readonly) bool timeDesignatorAppearsBeforeTime; 
@property (nonatomic,readonly) CGSize timeDesignatorSize; 
@property (getter=_dateString,nonatomic,readonly) NSString * dateString; 
@property (assign,nonatomic) bool shouldRecomputeText;                                //@synthesize shouldRecomputeText=_shouldRecomputeText - In the implementation block
+(id)defaultFont;
+(id)_timeOnlyDateFormatter;
+(id)_relativeDateFormatter;
+(id)_weekdayDateFormatter;
+(id)_dateFormatter;
+(id)_timeFormatWithoutDesignator;
+(id)amString;
+(id)pmString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(id)date;
-(id)text;
-(id)font;
-(id)_stringDrawingContext;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setShouldRecomputeText:(bool)arg1 ;
-(void)_recomputeTextIfNecessary;
-(CGSize)timeDesignatorSize;
-(id)timeDesignator;
-(bool)timeDesignatorAppearsBeforeTime;
-(id)timeDesignatorFont;
-(id)_calendar;
-(id)_todayDate;
-(id)_dateWithDayDiffFromToday:(long long)arg1 ;
-(void)setDate:(id)arg1 ;
-(bool)shouldRecomputeText;
-(id)_dateString;
-(bool)boldForAllLocales;
-(void)_didUpdateDate;
-(double)timeInterval;
-(double)_today;
-(double)_tomorrow;
-(double)_yesterday;
-(double)_lastWeek;
-(bool)use24HourTime;
-(double)_noon;
-(void)setForceTimeOnly:(bool)arg1 ;
-(void)setBoldForAllLocales:(bool)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(bool)forceTimeOnly;
-(double)paddingFromTimeToDesignator;
-(void)setPaddingFromTimeToDesignator:(double)arg1 ;
@end

