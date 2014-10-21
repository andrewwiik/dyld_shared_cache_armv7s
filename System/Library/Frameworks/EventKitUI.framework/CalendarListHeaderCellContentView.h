/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@interface CalendarListHeaderCellContentView : UIView {

	double _date;
	bool _indentsForDots;
	bool _showWeekNumber;

}

@property (assign,nonatomic) double date; 
@property (assign,nonatomic) bool indentsForDots; 
@property (assign,nonatomic) bool showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
-(bool)indentsForDots;
-(void)setIndentsForDots:(bool)arg1 ;
-(void)setShowWeekNumber:(bool)arg1 ;
-(bool)showWeekNumber;
-(CGRect)_rectForOffetTextShadow:(CGRect)arg1 ;
-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(CGRect)arg4 ;
-(id)_weekNumberFont;
-(void)drawRect:(CGRect)arg1 ;
-(double)date;
-(void)setDate:(double)arg1 ;
@end
