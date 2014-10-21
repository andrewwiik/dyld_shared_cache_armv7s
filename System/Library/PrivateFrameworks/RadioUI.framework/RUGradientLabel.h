/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor, NSArray;

@interface RUGradientLabel : UILabel {

	double _internalShadowBlur;
	UIColor* _internalShadowColor;
	CGSize _internalShadowOffset;
	UIColor* _internalTextColor;
	NSArray* _gradientColors;
	NSArray* _gradientLocations;

}

@property (nonatomic,copy) NSArray * gradientColors;                 //@synthesize gradientColors=_gradientColors - In the implementation block
@property (nonatomic,copy) NSArray * gradientLocations;              //@synthesize gradientLocations=_gradientLocations - In the implementation block
-(void)setTextColor:(id)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setShadowBlur:(double)arg1 ;
-(void).cxx_destruct;
-(id)gradientColors;
-(void)setGradientColors:(id)arg1 ;
-(void)setGradientLocations:(id)arg1 ;
-(id)gradientLocations;
@end
