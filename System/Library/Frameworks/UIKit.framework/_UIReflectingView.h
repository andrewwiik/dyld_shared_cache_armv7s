/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIReflectingView : UIView {

	UIView* _containerView;
	UIView* _gradientView;
	double _reflectionAlpha;

}

@property (nonatomic,readonly) UIView * containerView;               //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) double reflectionFraction; 
@property (assign,nonatomic) double reflectionAlpha; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)containerView;
-(id)_gradientLayer;
-(void)setReflectionAlpha:(double)arg1 ;
-(void)setReflectionFraction:(double)arg1 ;
-(double)reflectionAlpha;
-(void)_updateGradientColors;
-(double)reflectionFraction;
@end
