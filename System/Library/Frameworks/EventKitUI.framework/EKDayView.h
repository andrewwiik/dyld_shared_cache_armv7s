/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <EventKitUI/EKDayAllDayViewDelegate.h>
#import <EventKitUI/EKDayViewContentDelegate.h>
#import <EventKitUI/EKDayTimeViewDelegate.h>

@protocol EKDayViewDelegate, EKDayViewDataSource;
@class UIImageView, UIView, NSArray, NSDate, EKDayAllDayView, EKDayViewContent, EKDayTimeView, UIScrollAnimation, UIScrollView, NSTimer, NSDateComponents, NSCalendar, UIColor, EKEvent;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate> {

	long long _orientation;
	double _dayStart;
	double _dayEnd;
	double _nextDSTTransition;
	bool _scrollbarShowsInside;
	bool _scrollingToOccurrence;
	bool _settingDate;
	bool _userScrolling;
	bool _scrollToOccurrencesOnNextReload;
	UIImageView* _topVerticalGridExtension;
	UIImageView* _bottomVerticalGridExtension;
	UIView* _bottomLine;
	NSArray* _existingTimedOcurrences;
	NSDate* _lastInspectedOccurrenceOnDate;
	CGSize _scrolledToFirstVisibleSecondForSize;
	EKDayAllDayView* _allDayView;
	EKDayViewContent* _dayContent;
	EKDayTimeView* _timeView;
	UIScrollAnimation* _scrollAnimation;
	UIScrollView* _scroller;
	NSTimer* _timeMarkerTimer;
	bool _allowsOccurrenceSelection;
	bool _alignsMidnightToTop;
	bool _shouldEverShowTimeIndicators;
	bool _showsTimeLabel;
	bool _usesVibrantGridDrawing;
	int _outlineStyle;
	<EKDayViewDelegate>* _delegate;
	<EKDayViewDataSource>* _dataSource;
	NSDateComponents* _displayDate;
	NSCalendar* _calendar;
	UIColor* _occurrenceTextBackgroundColor;

}

@property (assign,nonatomic,__weak) <EKDayViewDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) <EKDayViewDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDateComponents * displayDate;                           //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double dayStart;                                      //@synthesize dayStart=_dayStart - In the implementation block
@property (nonatomic,readonly) double dayEnd;                                        //@synthesize dayEnd=_dayEnd - In the implementation block
@property (assign,nonatomic) int firstVisibleSecond; 
@property (assign,nonatomic) bool allowsOccurrenceSelection;                         //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) bool alignsMidnightToTop;                               //@synthesize alignsMidnightToTop=_alignsMidnightToTop - In the implementation block
@property (nonatomic,readonly) double scrollBarOffset; 
@property (nonatomic,readonly) NSArray * occurrenceViews; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence; 
@property (nonatomic,readonly) EKDayAllDayView * allDayView; 
@property (nonatomic,readonly) double leftContentInset; 
@property (assign,nonatomic) bool shouldEverShowTimeIndicators;                      //@synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators - In the implementation block
@property (assign,nonatomic) bool showsTimeLine; 
@property (assign,nonatomic) bool showsTimeMarker; 
@property (assign,nonatomic) bool showsTimeLabel;                                    //@synthesize showsTimeLabel=_showsTimeLabel - In the implementation block
@property (assign,nonatomic) bool eventsFillGrid; 
@property (assign,nonatomic) bool showsLeftBorder; 
@property (assign,nonatomic) bool allowsScrolling; 
@property (assign,nonatomic) int outlineStyle;                                       //@synthesize outlineStyle=_outlineStyle - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle; 
@property (assign,nonatomic) NSRange hoursToRender; 
@property (nonatomic,retain) UIColor * timeViewTextColor; 
@property (nonatomic,retain) UIColor * gridLineColor; 
@property (nonatomic,retain) UIColor * occurrenceTitleColor; 
@property (nonatomic,retain) UIColor * occurrenceLocationColor; 
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor;                //@synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor - In the implementation block
@property (assign,nonatomic) bool usesVibrantGridDrawing;                            //@synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing - In the implementation block
@property (nonatomic,readonly) double scrollOffset; 
@property (assign,nonatomic) CGPoint normalizedContentOffset; 
-(void)setAllowsOccurrenceSelection:(bool)arg1 ;
-(void)setEventsFillGrid:(bool)arg1 ;
-(id)occurrenceViews;
-(void)setShowsLeftBorder:(bool)arg1 ;
-(bool)showsLeftBorder;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 ;
-(id)occurrenceTitleColor;
-(id)occurrenceLocationColor;
-(id)occurrenceTextBackgroundColor;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(id)arg1 ;
-(void)setOccurrenceTitleColor:(id)arg1 ;
-(void)setOccurrenceLocationColor:(id)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(id)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(bool)allowsOccurrenceSelection;
-(bool)eventsFillGrid;
-(id)dimmedOccurrence;
-(void)_localeChanged;
-(CGRect)_scrollerRect;
-(void)_timeViewTapped:(id)arg1 ;
-(void)setShowsTimeMarker:(bool)arg1 ;
-(void)_createAllDayView;
-(void)_adjustForDateOrCalendarChange;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(bool)showsTimeLine;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(double)scrollBarOffset;
-(double)_verticalOffset;
-(void)updateMarkerPosition;
-(void)_disposeAllDayView;
-(void)_stopScrolling;
-(void)setShowsTimeLine:(bool)arg1 ;
-(bool)showsTimeMarker;
-(int)_secondAtPosition:(double)arg1 ;
-(int)firstVisibleSecond;
-(double)_positionOfSecond:(int)arg1 ;
-(void)firstVisibleSecondChanged;
-(NSRange)hoursToRender;
-(void)setHoursToRender:(NSRange)arg1 ;
-(void)setUsesVibrantGridDrawing:(bool)arg1 ;
-(void)_scrollToSecond:(int)arg1 animated:(bool)arg2 whenFinished:(/*^block*/ id)arg3 ;
-(void)_finishedScrollToSecond;
-(bool)alignsMidnightToTop;
-(void)_clearVerticalGridExtensionImageCache;
-(id)_generateVerticalGridExtensionImage;
-(void)scrollEventsIntoViewAnimated:(bool)arg1 ;
-(void)scrollToEvent:(id)arg1 animated:(bool)arg2 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(bool*)arg2 requireAllDayRegionInsistence:(bool)arg3 ;
-(bool)_showingAllDaySection;
-(double)_adjustSecondForwardForDSTHole:(double)arg1 ;
-(double)_adjustSecondBackwardForDSTHole:(double)arg1 ;
-(double)highlightedHour;
-(void)setAllDayLabelHighlighted:(bool)arg1 ;
-(bool)isAllDayLabelHighlighted;
-(void)allDayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)allDayViewDidLayoutSubviews:(id)arg1 ;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2 ;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2 ;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(bool)arg5 scrollbarShowsInside:(bool)arg6 ;
-(void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1 ;
-(void)setDisplayDate:(id)arg1 ;
-(void)setShouldEverShowTimeIndicators:(bool)arg1 ;
-(void)adjustForSignificantTimeChange;
-(void)setShowsTimeLabel:(bool)arg1 ;
-(bool)allowsScrolling;
-(id)timeViewTextColor;
-(void)setTimeViewTextColor:(id)arg1 ;
-(id)gridLineColor;
-(void)setGridLineColor:(id)arg1 ;
-(id)allDayView;
-(double)scrollOffset;
-(CGPoint)normalizedContentOffset;
-(void)setNormalizedContentOffset:(CGPoint)arg1 ;
-(void)scrollToDate:(id)arg1 animated:(bool)arg2 whenFinished:(/*^block*/ id)arg3 ;
-(SCD_Struct_EK5)_selectedDate;
-(void)dayContentView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2 ;
-(void)bringEventToFront:(id)arg1 ;
-(void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2 ;
-(void)setAlignsMidnightToTop:(bool)arg1 ;
-(void)resetLastSelectedOccurrencePoint;
-(double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 ;
-(CGRect)rectForEvent:(id)arg1 ;
-(void)_notifyDelegateOfFinishedScrollingToOccurrence;
-(void)setScrollerYInset:(double)arg1 keepingYPointVisible:(double)arg2 ;
-(void)relayoutExistingTimedOccurrences;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(bool*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(bool)arg2 ;
-(bool)scrollTowardPoint:(CGPoint)arg1 ;
-(double)allDayRegionHeight;
-(void)highlightHour:(double)arg1 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(bool)arg2 ;
-(id)displayDate;
-(double)dayStart;
-(double)dayEnd;
-(bool)shouldEverShowTimeIndicators;
-(bool)showsTimeLabel;
-(bool)usesVibrantGridDrawing;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(id)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)setTimeZone:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setAllowsScrolling:(bool)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(id)calendar;
-(void).cxx_destruct;
-(double)leftContentInset;
-(int)outlineStyle;
-(void)setOutlineStyle:(int)arg1 ;
@end

