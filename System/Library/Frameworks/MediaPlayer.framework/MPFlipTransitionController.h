/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransitionController.h>

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {

	UIView* _fromView;
	CGRect _toFrame;
	double _topMargin;

}

@property (nonatomic,retain) UIView * fromView;              //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) CGRect toFrame;                 //@synthesize toFrame=_toFrame - In the implementation block
@property (assign,nonatomic) double topMargin;               //@synthesize topMargin=_topMargin - In the implementation block
-(void)performTransition:(unsigned long long)arg1 ;
-(void)setToFrame:(CGRect)arg1 ;
-(id)_subtypeForTransitionType:(unsigned long long)arg1 ;
-(CGRect)toFrame;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(id)fromView;
-(void)setFromView:(id)arg1 ;
-(void).cxx_destruct;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
@end

