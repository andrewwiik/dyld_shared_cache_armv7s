/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIInputViewAnimationStyle : NSObject {

	bool animated;
	double duration;
	int outDirection;
	unsigned long long extraOptions;
	bool persistUntilComplete;
	bool ignoreNewAnimations;
	NSMutableArray* extraViews;
	bool placeholderKeyboard;
	bool force;

}

@property (assign,nonatomic) bool animated; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) int outDirection; 
@property (assign,nonatomic) unsigned long long extraOptions; 
@property (assign,nonatomic) bool persistUntilComplete; 
@property (assign,nonatomic) bool ignoreNewAnimations; 
@property (nonatomic,readonly) bool isAnimationCompleted; 
@property (nonatomic,retain) NSMutableArray * extraViews; 
@property (assign,nonatomic) bool placeholderKeyboard; 
@property (nonatomic,readonly) bool useCustomTransition; 
@property (assign,nonatomic) bool force; 
+(id)animationStyleAnimated:(bool)arg1 duration:(double)arg2 outDirection:(int)arg3 ;
+(id)animationStyleDefault;
+(id)animationStyleImmediate;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(bool)animated;
-(void)setAnimated:(bool)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(void)setExtraOptions:(unsigned long long)arg1 ;
-(void)launchAnimation:(/*^block*/ id)arg1 afterStarted:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5 ;
-(void)setPersistUntilComplete:(bool)arg1 ;
-(bool)isAnimationCompleted;
-(bool)useCustomTransition;
-(void)setPlaceholderKeyboard:(bool)arg1 ;
-(void)setIgnoreNewAnimations:(bool)arg1 ;
-(void)setForce:(bool)arg1 ;
-(id)extraViews;
-(void)setExtraViews:(id)arg1 ;
-(bool)persistUntilComplete;
-(int)outDirection;
-(bool)ignoreNewAnimations;
-(bool)placeholderKeyboard;
-(bool)force;
-(unsigned long long)extraOptions;
@end

