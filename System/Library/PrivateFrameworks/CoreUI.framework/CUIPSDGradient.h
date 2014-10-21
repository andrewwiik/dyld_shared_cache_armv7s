/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject {

	CUIPSDGradientEvaluator* evaluator;
	double drawingAngle;
	unsigned gradientStyle;

}

@property (retain) CUIPSDGradientEvaluator * evaluator; 
@property (assign) double drawingAngle; 
@property (assign) unsigned gradientStyle; 
+(id)getMidpointLocationFromArray:(id)arg1 atIndex:(long long)arg2 withPolicy:(int)arg3 ;
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 isRadial:(bool)arg5 ;
-(void)dealloc;
-(id)evaluator;
-(unsigned)gradientStyle;
-(double)drawingAngle;
-(id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned)arg3 ;
-(void)setEvaluator:(id)arg1 ;
-(void)setDrawingAngle:(double)arg1 ;
-(void)setGradientStyle:(unsigned)arg1 ;
@end

