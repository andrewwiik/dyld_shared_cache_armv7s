/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont, UIColor, TPLegacyLCDTextViewScrollingView, UIFrameAnimation;

@interface TPLegacyLCDTextView : UIView {

	NSString* _text;
	UIFont* _font;
	UIColor* _shadowColor;
	UIColor* _textColor;
	TPLegacyLCDTextViewScrollingView* _scrollingView;
	double _fontSize;
	CGRect _textRect;
	UIFrameAnimation* _animation;
	id _delegate;
	double _minFontSize;
	unsigned _textRectIsValid : 1;
	unsigned _centerText : 1;
	unsigned _animates : 1;
	unsigned _isAnimating : 1;
	unsigned _leftTruncates : 1;

}
+(double)defaultMinimumFontSize;
-(id)_automationID;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(CGSize)sizeToFit;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setMinimumFontSize:(double)arg1 ;
-(void)_tearDownAnimation;
-(bool)animates;
-(CGRect)textRect;
-(void)_setupForAnimationIfNecessary;
-(void)setLCDTextFont:(id)arg1 ;
-(void)_drawTextInRect:(CGRect)arg1 verticallyOffset:(bool)arg2 ;
-(void)_startScrolling;
-(void)_scheduleStartScrolling;
-(void)_finishedScrolling;
-(void)setCenterText:(bool)arg1 ;
-(void)setLeftTruncatesText:(bool)arg1 ;
-(void)setAnimatesIfTruncated:(bool)arg1 ;
-(void)resetAnimation;
@end

