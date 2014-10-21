/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarServiceItemView : UIStatusBarItemView {

	NSString* _serviceString;
	NSString* _crossfadeString;
	unsigned long long _crossfadeStep;
	double _maxWidth;
	double _serviceWidth;
	double _crossfadeWidth;
	int _contentType;
	bool _loopingNecessaryForString;
	bool _loopNowIfNecessary;
	bool _loopingNow;
	double _letterSpacing;

}
-(void)dealloc;
-(bool)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(long long)legibilityStyle;
-(double)updateContentsAndWidth;
-(double)standardPadding;
-(void)setVisible:(bool)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(double)extraRightPadding;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(bool)animatesDataChange;
-(void)performPendedActions;
-(bool)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5 ;
-(id)_cachedContentImageForString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3 ;
-(void)_crossfadeStepAnimation;
-(bool)_crossfaded;
-(bool)_loopingNecessary;
-(id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3 ;
-(id)_crossfadeContentsImage;
-(id)_serviceContentsImage;
-(void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_finalAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
@end

