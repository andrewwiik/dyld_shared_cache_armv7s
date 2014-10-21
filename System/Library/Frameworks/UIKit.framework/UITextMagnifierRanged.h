/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextMagnifier.h>

@interface UITextMagnifierRanged : UITextMagnifier {

	double _touchOffsetFromMagnificationPoint;
	double _magnifierOffsetFromTouch;
	bool _isHorizontal;
	bool _isAnimating;
	long long _delayedAnimationType;

}

@property (assign,nonatomic) bool isHorizontal;              //@synthesize isHorizontal=_isHorizontal - In the implementation block
+(id)sharedRangedMagnifier;
-(void)dealloc;
-(void)stopMagnifying:(bool)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(bool)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)setIsHorizontal:(bool)arg1 ;
-(bool)terminalPointPlacedCarefully;
-(int)horizontalMovement;
-(void)setAutoscrollDirections:(int)arg1 ;
-(id)initWithFrame;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)remove;
-(void)zoomUpAnimation;
-(void)zoomDownAnimation;
-(bool)isHorizontal;
-(double)offsetFromMagnificationPoint;
-(CGPoint)snappedPoint:(CGPoint)arg1 ;
-(void)updateFrame;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(int)horizontalMovementAtTime:(double)arg1 ;
-(bool)wasPlacedCarefullyAtTime:(double)arg1 ;
@end

