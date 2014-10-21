/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSLayoutConstraint;

@interface GKRatingView : UIView {

	double _value;
	UIImageView* _backgroundImageView;
	UIImageView* _foregroundImageView;
	NSLayoutConstraint* _foregroundWidthConstraint;

}

@property (assign,nonatomic) double value;                                                //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIImageView * foregroundImageView;                           //@synthesize foregroundImageView=_foregroundImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * foregroundWidthConstraint;              //@synthesize foregroundWidthConstraint=_foregroundWidthConstraint - In the implementation block
-(void)setForegroundWidthConstraint:(id)arg1 ;
-(id)foregroundImageView;
-(id)foregroundWidthConstraint;
-(void)setBackgroundImageView:(id)arg1 ;
-(void)setForegroundImageView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setValue:(double)arg1 ;
-(double)value;
-(CGSize)intrinsicContentSize;
-(id)backgroundImageView;
@end

