/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage;

@interface EKEventOccurrenceListItem : UIView {

	NSString* _title;
	NSString* _location;
	NSString* _timeString;
	UIColor* _dotColor;
	UIImage* _dot;
	unsigned _designator : 2;
	unsigned _isAllDay : 1;
	unsigned _isBirthday : 1;
	unsigned _isFacebook : 1;
	unsigned _tentative : 1;
	unsigned _declined : 1;
	unsigned _needsReply : 1;
	unsigned _cancelled : 1;
	unsigned _isEndDate : 1;
	unsigned _indentsWithoutDot : 1;
	unsigned _showsColors : 1;
	bool _isSelected;

}
+(double)xMidpointForCalendarDot;
+(double)timeWidthIncludingDots:(bool)arg1 ;
+(void)_invalidateWidths;
+(void)_calculateWidths;
+(double)hourWidth;
+(double)defaultHeight;
-(bool)isAllDay;
-(id)initWithEvent:(id)arg1 ;
-(void)setDotColor:(id)arg1 ;
-(void)setIsFacebook:(bool)arg1 ;
-(void)setDisplayDate:(id)arg1 ;
-(void)setTentative:(bool)arg1 ;
-(void)setDeclined:(bool)arg1 ;
-(void)setNeedsReply:(bool)arg1 ;
-(void)updateWithEvent:(id)arg1 ;
-(void)setIsAllDay:(bool)arg1 ;
-(void)setIsEndDate:(bool)arg1 ;
-(void)setIsBirthday:(bool)arg1 ;
-(void)drawText:(id)arg1 withDefaultColor:(id)arg2 atPoint:(CGPoint)arg3 forWidth:(double)arg4 font:(id)arg5 lineBreakMode:(long long)arg6 staticColor:(bool)arg7 ;
-(bool)setUpStaticDrawingColor;
-(id)_selectedBackgroundImage;
-(id)outlineImageWithColor:(id)arg1 ;
-(void)drawBoldText:(id)arg1 atPoint:(CGPoint)arg2 forWidth:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5 staticColor:(bool)arg6 ;
-(void)drawDeemphasizedText:(id)arg1 atPoint:(CGPoint)arg2 forWidth:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5 staticColor:(bool)arg6 ;
-(id)_dot;
-(bool)showDisclosure;
-(void)setIndentsForMissingDot:(bool)arg1 ;
-(void)setShowsColors:(bool)arg1 ;
-(unsigned)designator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(void)setCancelled:(bool)arg1 ;
-(bool)isCancelled;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1 ;
@end

