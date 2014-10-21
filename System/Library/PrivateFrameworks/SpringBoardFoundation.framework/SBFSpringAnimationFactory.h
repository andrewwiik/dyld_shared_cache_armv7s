/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFAnimationFactory.h>

@interface SBFSpringAnimationFactory : SBFAnimationFactory {

	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;

}

@property (nonatomic,readonly) double mass;                   //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) double stiffness;              //@synthesize stiffness=_stiffness - In the implementation block
@property (nonatomic,readonly) double damping;                //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) double epsilon;                //@synthesize epsilon=_epsilon - In the implementation block
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
+(id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
-(double)stiffness;
-(id)description;
-(double)damping;
-(double)mass;
-(double)epsilon;
-(id)_animation;
-(id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 ;
-(void)_calculateDuration;
-(id)_springAnimation;
@end

