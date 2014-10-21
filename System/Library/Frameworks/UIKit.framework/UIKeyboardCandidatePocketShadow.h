/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIKeyboardCandidatePocketShadow : UIView {

	bool _shadowFadesToBottom;
	bool _drawsShadow;
	double _shadowHeightGrowthFactor;

}

@property (assign,nonatomic) double shadowHeightGrowthFactor;              //@synthesize shadowHeightGrowthFactor=_shadowHeightGrowthFactor - In the implementation block
@property (assign,nonatomic) bool shadowFadesToBottom;                     //@synthesize shadowFadesToBottom=_shadowFadesToBottom - In the implementation block
@property (assign,nonatomic) bool drawsShadow;                             //@synthesize drawsShadow=_drawsShadow - In the implementation block
+(double)width;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowHeightGrowthFactor:(double)arg1 ;
-(void)setShadowFadesToBottom:(bool)arg1 ;
-(void)setDrawsShadow:(bool)arg1 ;
-(bool)shadowFadesToBottom;
-(bool)drawsShadow;
-(double)shadowHeightGrowthFactor;
@end

