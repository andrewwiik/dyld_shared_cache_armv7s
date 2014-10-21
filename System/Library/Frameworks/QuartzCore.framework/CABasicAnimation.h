/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation

@property (assign) bool roundsToInteger; 
@property (assign) double startAngle; 
@property (assign) double endAngle; 
@property (retain) id fromValue; 
@property (retain) id toValue; 
@property (retain) id byValue; 
+(id)normalizedAnimationWithKeyPath:(id)arg1 ;
-(bool)roundsToInteger;
-(double)endAngle;
-(void)setEndAngle:(double)arg1 ;
-(void)setRoundsToInteger:(bool)arg1 ;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(id)byValue;
-(bool)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(double)_timeFunction:(double)arg1 ;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setByValue:(id)arg1 ;
-(void)CA_prepareRenderValue;
@end

