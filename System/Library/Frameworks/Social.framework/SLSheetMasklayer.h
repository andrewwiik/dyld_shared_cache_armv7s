/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, _SLSheetMaskLayer, UIColor;

@interface SLSheetMasklayer : CALayer {

	CALayer* _topLayer;
	CALayer* _leftLayer;
	CALayer* _bottomLayer;
	CALayer* _rightLayer;
	_SLSheetMaskLayer* _sheetMaskLayer;
	CALayer* _solidSheetMaskLayer;
	UIColor* _backgroundColor;
	CGRect _lastBounds;
	CGRect _lastMaskRect;
	double _clipCornerRadius;
	UIColor* _clipBackgroundColor;

}

@property (assign,nonatomic) double clipCornerRadius;                    //@synthesize clipCornerRadius=_clipCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * clipBackgroundColor;              //@synthesize clipBackgroundColor=_clipBackgroundColor - In the implementation block
-(double)clipCornerRadius;
-(id)clipBackgroundColor;
-(void)setClipCornerRadius:(double)arg1 ;
-(void)setClipBackgroundColor:(id)arg1 ;
-(void)updateMaskWithBounds:(CGRect)arg1 maskRect:(CGRect)arg2 ;
-(id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2 ;
-(void)removeSheetCutout;
-(void)restoreSheetCutout;
-(void)animateSheetMaskFromOldSheetFrame:(CGRect)arg1 toSheetFrame:(CGRect)arg2 duration:(double)arg3 ;
-(void).cxx_destruct;
@end

