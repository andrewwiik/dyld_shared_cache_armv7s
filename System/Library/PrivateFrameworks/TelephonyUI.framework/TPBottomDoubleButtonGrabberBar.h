/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPBottomDoubleButtonBar.h>
#import <TelephonyUI/TPBottomGrabberBar.h>

@class UIView, UIImage, NSArray;

@interface TPBottomDoubleButtonGrabberBar : TPBottomDoubleButtonBar <TPBottomGrabberBar> {

	UIView* _grabberView;
	UIImage* _grabberImage;
	NSArray* _grabberGestureRecognizers;
	bool _isAnimatingOutGrabber;

}

@property (nonatomic,retain) UIImage * grabberImage;                           //@synthesize grabberImage=_grabberImage - In the implementation block
@property (readonly) UIView * grabberView;                                     //@synthesize grabberView=_grabberView - In the implementation block
@property (nonatomic,retain) NSArray * grabberGestureRecognizers;              //@synthesize grabberGestureRecognizers=_grabberGestureRecognizers - In the implementation block
+(id)declineButtonImage;
+(id)answerButtonImage;
+(id)videoAnswerButtonImage;
+(id)videoDeclineButtonImage;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)grabberImage;
-(void)setGrabberGestureRecognizers:(id)arg1 ;
-(void)setGrabberImage:(id)arg1 ;
-(id)grabberView;
-(void)animateGrabberOutWithCompletion:(/*^block*/ id)arg1 ;
-(id)grabberGestureRecognizers;
@end

