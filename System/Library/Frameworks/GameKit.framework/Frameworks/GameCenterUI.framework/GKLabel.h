/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UILabel.h>

@class GKTextStyle;

@interface GKLabel : UILabel {

	GKTextStyle* _baseStyle;
	GKTextStyle* _appliedStyle;
	bool _usingAttributedText;
	bool _shouldInhibitReplay;
	double _actualFontShrinkageFactor;

}

@property (nonatomic,retain) GKTextStyle * baseStyle; 
@property (nonatomic,readonly) bool usingAttributedText;                    //@synthesize usingAttributedText=_usingAttributedText - In the implementation block
@property (assign,nonatomic) bool shouldInhibitReplay;                      //@synthesize shouldInhibitReplay=_shouldInhibitReplay - In the implementation block
@property (assign,nonatomic) double actualFontShrinkageFactor;              //@synthesize actualFontShrinkageFactor=_actualFontShrinkageFactor - In the implementation block
@property (nonatomic,retain) GKTextStyle * appliedStyle;                    //@synthesize appliedStyle=_appliedStyle - In the implementation block
+(void)initialize;
-(void)_UIAppearance_setBaseStyle:(id)arg1 ;
-(void)replayAndApplyStyle;
-(id)baseStyle;
-(void)setBaseStyle:(id)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(void)setShouldInhibitReplay:(bool)arg1 ;
-(bool)usingAttributedText;
-(id)appliedStyle;
-(void)setAppliedStyle:(id)arg1 ;
-(bool)shouldInhibitReplay;
-(void)setActualFontShrinkageFactor:(double)arg1 ;
-(double)actualFontShrinkageFactor;
-(void)shrinkFontToFitWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
@end

