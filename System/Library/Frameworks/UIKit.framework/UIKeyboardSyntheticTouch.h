/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIWindow;

@interface UIKeyboardSyntheticTouch : NSObject {

	double timestamp;
	long long phase;
	unsigned long long tapCount;
	UIWindow* window;
	CGPoint locationInWindow;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	float _pathMajorRadius;

}

@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (nonatomic,retain) UIWindow * window; 
@property (assign,nonatomic) CGPoint locationInWindow; 
@property (nonatomic,readonly) unsigned char _pathIndex;                 //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) unsigned char _pathIdentity;              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) float _pathMajorRadius;                     //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
+(id)syntheticTouchWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(id)window;
-(double)timestamp;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setWindow:(id)arg1 ;
-(long long)phase;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(unsigned char)_pathIndex;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(unsigned long long)tapCount;
-(unsigned char)_pathIdentity;
-(float)_pathMajorRadius;
-(CGPoint)locationInWindow;
-(id)initWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(CGPoint)getLocationInWindow;
-(void)setLocationInWindow:(CGPoint)arg1 ;
-(void)set_pathMajorRadius:(float)arg1 ;
@end

