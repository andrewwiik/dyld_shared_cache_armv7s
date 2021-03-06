/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TPLCDView.h>

@class TPLCDTextView, UIView, UIButton, NSTimer, NSString;

@interface InCallLCDView : TPLCDView {

	TPLCDTextView* _labelView2;
	TPLCDTextView* _textView2;
	UIView* _activeIndicator;
	int _activePosition;
	int _conferencePosition;
	TPLCDTextView* _oldLabelView;
	TPLCDTextView* _oldLabelView2;
	TPLCDTextView* _oldTextView;
	TPLCDTextView* _oldTextView2;
	UIView* _oldActiveIndicator;
	UIButton* _conferenceButton;
	NSTimer* _alternatingTimer;
	NSString* _originalLabel;
	NSString* _originalLabel2;
	NSString* _alternateLabel;
	NSString* _alternateLabel2;
	id _delegate;
	unsigned _ignoreLayout : 1;
	unsigned _animating : 1;
	unsigned _progress : 1;
	unsigned _dimmedText : 2;
	unsigned _canTruncateLabel : 2;
	unsigned _enableFade : 1;
	unsigned _changingForAlternate : 1;
	bool _callerIsAmbiguous;

}

@property (assign,nonatomic) bool callerIsAmbiguous;              //@synthesize callerIsAmbiguous=_callerIsAmbiguous - In the implementation block
-(void)setLabelVisible:(bool)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)setText:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setLabel:(id)arg1 ;
-(void)setSubImage:(id)arg1 ;
-(int)conferencePosition;
-(void)setConferencePosition:(int)arg1 ;
-(void)lcdTextViewCompletedScroll:(id)arg1 ;
-(void)_stopAlternating;
-(void)setText2:(id)arg1 ;
-(void)performTextFadeWithDuration:(float)arg1 delay:(float)arg2 forView:(id*)arg3 newText:(id)arg4 setter:(SEL)arg5 position:(int)arg6 ;
-(void)_cancelScrollingForTextView:(id)arg1 ;
-(void)_enableScrollingForTextView:(id)arg1 start:(bool)arg2 ;
-(void)_updateTextAttributes;
-(void)setAlternateLabel:(id)arg1 ;
-(void)setCanTruncateLabel:(bool)arg1 ;
-(void)setLabel:(id)arg1 alternateLabel:(id)arg2 ;
-(void)setAlternateLabel2:(id)arg1 ;
-(void)setCanTruncateLabel2:(bool)arg1 ;
-(void)setLabel2:(id)arg1 alternateLabel:(id)arg2 ;
-(void)_startAlternating;
-(void)_removeAnimationViews;
-(void)_positionActiveCallIndicator;
-(void)_positionConferenceButton;
-(void)_updateForActivePosition;
-(void)setTextScrolls:(bool)arg1 ;
-(void)setLabel2:(id)arg1 ;
-(void)_conferenceButtonClicked:(id)arg1 ;
-(void)_alternate:(id)arg1 ;
-(void)setTextChangeFadingEnabled:(bool)arg1 ;
-(void)setText:(id)arg1 animating:(bool)arg2 ;
-(void)setTextDimmed:(bool)arg1 ;
-(void)setText2Dimmed:(bool)arg1 ;
-(void)setText2:(id)arg1 animating:(bool)arg2 ;
-(id)text2;
-(id)label2;
-(id)originalLabel;
-(id)originalLabel2;
-(void)setActivePosition:(int)arg1 ;
-(void)animateToActivePosition:(int)arg1 label:(id)arg2 label2:(id)arg3 ;
-(void)setActiveIndicatorShowsProgress:(bool)arg1 ;
-(void)animateCallMergeWithDuration:(float)arg1 ;
-(void)popText;
-(void)animateLabel;
-(void)setCallerIsAmbiguous:(bool)arg1 ;
-(bool)callerIsAmbiguous;
@end

