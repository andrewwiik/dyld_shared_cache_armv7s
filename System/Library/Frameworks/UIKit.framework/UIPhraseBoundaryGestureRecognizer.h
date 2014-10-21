/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder, UIDelayedAction;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

	UIResponder<UITextInput>* _textInput;
	UIDelayedAction* _secondDelayTimer;
	double _secondDelay;
	bool _secondDelayElapsed;
	id _userData;

}

@property (assign,nonatomic) UIResponder<UITextInput> * textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic) double secondDelay;                                //@synthesize secondDelay=_secondDelay - In the implementation block
@property (nonatomic,readonly) bool secondDelayElapsed;                         //@synthesize secondDelayElapsed=_secondDelayElapsed - In the implementation block
@property (assign,nonatomic) id userData;                                       //@synthesize userData=_userData - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)startTimer;
-(void)secondDelayElapsed:(id)arg1 ;
-(double)secondDelay;
-(id)textInput;
-(void)setTextInput:(id)arg1 ;
-(void)setSecondDelay:(double)arg1 ;
-(bool)secondDelayElapsed;
-(id)userData;
-(void)setUserData:(id)arg1 ;
@end

