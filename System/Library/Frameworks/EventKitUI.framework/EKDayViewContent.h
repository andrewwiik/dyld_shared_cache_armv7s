/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol EKDayViewContentDelegate;
@class EKDayGridView, UIView, EKEvent, NSMutableArray, EKCalendarDate, NSCalendar, UIColor, NSTimeZone;

@interface EKDayViewContent : UIView <UIGestureRecognizerDelegate> {

	EKDayGridView* _grid;
	UIView* _saturdayDarkeningView;
	UIView* _sundayDarkeningView;
	unsigned long long _daysToDisplay;
	bool* _dayWasLaidOut;
	bool _loadingOccurrences;
	bool _putSelectionOnTop;
	EKEvent* _selectedEvent;
	NSMutableArray* _dayStarts;
	NSMutableArray* _itemsByDay;
	NSMutableArray* _itemsByDayByEndDate;
	CGRect _latestVisibleRect;
	double* _visiblePinnedStackHeightAbove;
	double* _visiblePinnedStackHeightBelow;
	bool _allowsOccurrenceSelection;
	bool _eventsFillGrid;
	bool _usesSmallText;
	bool _darkensWeekends;
	int _occurrenceBackgroundStyle;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	NSCalendar* _calendar;
	<EKDayViewContentDelegate>* _delegate;
	double _fixedDayWidth;
	UIColor* _occurrenceTitleColor;
	UIColor* _occurrenceLocationColor;
	UIColor* _occurrenceTextBackgroundColor;
	EKEvent* _dimmedOccurrence;

}

@property (nonatomic,copy) EKCalendarDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,__weak) <EKDayViewContentDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool allowsOccurrenceSelection;                            //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) bool showsLeftBorder; 
@property (assign,nonatomic) bool eventsFillGrid;                                       //@synthesize eventsFillGrid=_eventsFillGrid - In the implementation block
@property (assign,nonatomic) bool usesSmallText;                                        //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) bool darkensWeekends;                                      //@synthesize darkensWeekends=_darkensWeekends - In the implementation block
@property (assign,nonatomic) double fixedDayWidth;                                      //@synthesize fixedDayWidth=_fixedDayWidth - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTitleColor;                            //@synthesize occurrenceTitleColor=_occurrenceTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceLocationColor;                         //@synthesize occurrenceLocationColor=_occurrenceLocationColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor;                   //@synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle;                             //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (nonatomic,readonly) double firstEventSecond; 
@property (setter=selectEvent:,nonatomic,retain) EKEvent * selectedEvent; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence;                                //@synthesize dimmedOccurrence=_dimmedOccurrence - In the implementation block
-(void)setAllowsOccurrenceSelection:(bool)arg1 ;
-(void)setEventsFillGrid:(bool)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 backgroundColor:(id)arg3 opaque:(bool)arg4 numberOfDaysToDisplay:(unsigned long long)arg5 ;
-(void)setUsesSmallText:(bool)arg1 ;
-(id)occurrenceViews;
-(void)setViewsDimmed:(bool)arg1 forEvent:(id)arg2 ;
-(void)setShowsLeftBorder:(bool)arg1 ;
-(bool)showsLeftBorder;
-(void)setFixedDayWidth:(double)arg1 ;
-(void)setHoursToPadTop:(double)arg1 ;
-(void)_computeDayStartsAndEnds;
-(void)_layoutDaysIfVisible;
-(void)_adjustViewsForPinning;
-(double)_dayWidth;
-(CGPoint)pointForDate:(double)arg1 ;
-(void)rectBecameVisible:(CGRect)arg1 ;
-(void)_layoutDay:(unsigned long long)arg1 ;
-(NSRange)_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg1 ;
-(NSRange)_dayRangeForEvent:(id)arg1 ;
-(id)occurrenceTitleColor;
-(id)occurrenceLocationColor;
-(id)occurrenceTextBackgroundColor;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(bool)containsEvent:(id)arg1 ;
-(bool)_getBottomPinRegion:(double*)arg1 dayIndex:(unsigned long long*)arg2 forPoint:(CGPoint)arg3 ;
-(double)dateForPoint:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(id)arg1 ;
-(void)setOccurrenceTitleColor:(id)arg1 ;
-(void)setOccurrenceLocationColor:(id)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(id)arg1 ;
-(void)setStartDateWithDateComponents:(id)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)setDarkensWeekends:(bool)arg1 ;
-(double)firstEventSecond;
-(id)_dayStarts;
-(id)lastDisplayedSecond;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(bool)eventsIntersectRect:(CGRect)arg1 ;
-(bool)allowsOccurrenceSelection;
-(bool)eventsFillGrid;
-(bool)usesSmallText;
-(bool)darkensWeekends;
-(double)fixedDayWidth;
-(id)dimmedOccurrence;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setTimeZone:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(id)timeZone;
-(id)calendar;
-(void).cxx_destruct;
-(void)setOccurrences:(id)arg1 ;
-(id)grid;
-(id)startDate;
-(id)endDate;
-(void)setStartDate:(id)arg1 ;
@end
