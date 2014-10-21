/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUDynamicValueFilter : PUValueFilter {

	double _targetValue;
	double _currentTime;

}

@property (assign,nonatomic) double targetValue;              //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(id)init;
-(void)_update;
-(void)setInputValue:(double)arg1 ;
-(double)outputValue;
-(void)setTargetValue:(double)arg1 ;
-(double)targetValue;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3 ;
-(double)outputValueChangeRate;
@end

