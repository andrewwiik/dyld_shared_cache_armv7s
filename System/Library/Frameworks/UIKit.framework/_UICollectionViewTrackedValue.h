/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {

	double _trackedValue;
	NSArray* _values;
	long long _valuesCount;
	long long _currentIndex;
	bool _isAccumulating;

}

@property (assign,nonatomic) double trackedValue;              //@synthesize trackedValue=_trackedValue - In the implementation block
@property (assign,nonatomic) bool isAccumulating;              //@synthesize isAccumulating=_isAccumulating - In the implementation block
-(id)init;
-(double)speed;
-(void)addValue:(double)arg1 ;
-(double)trackedValue;
-(bool)isAccumulating;
-(void)setIsAccumulating:(bool)arg1 ;
-(void)setTrackedValue:(double)arg1 ;
@end

