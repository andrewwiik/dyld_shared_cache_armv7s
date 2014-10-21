/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface UIDatePickerWeekMonthDayView : UIView {

	struct {
		unsigned weekdayLast : 1;
	}  _datePickerWeekMonthDayViewFlags;
	bool _isModern;
	UILabel* _dateLabel;
	UILabel* _weekdayLabel;
	NSString* _formattedDateString;
	double _weekdayWidth;

}

@property (nonatomic,readonly) UILabel * dateLabel;                     //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * weekdayLabel;                  //@synthesize weekdayLabel=_weekdayLabel - In the implementation block
@property (nonatomic,copy) NSString * formattedDateString;              //@synthesize formattedDateString=_formattedDateString - In the implementation block
@property (assign,nonatomic) double weekdayWidth;                       //@synthesize weekdayWidth=_weekdayWidth - In the implementation block
@property (assign,nonatomic) bool weekdayLast; 
@property (assign,nonatomic) bool isModern;                             //@synthesize isModern=_isModern - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(bool)_canBeReusedInPickerView;
-(id)dateLabel;
-(id)weekdayLabel;
-(bool)isModern;
-(void)setIsModern:(bool)arg1 ;
-(void)setWeekdayWidth:(double)arg1 ;
-(bool)weekdayLast;
-(void)setWeekdayLast:(bool)arg1 ;
-(id)formattedDateString;
-(void)setFormattedDateString:(id)arg1 ;
-(double)weekdayWidth;
@end

