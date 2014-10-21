/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _UIMotionEffectEngineLogger : NSObject {

	long long _motionLevelSamples[8];
	long long _sampleCount;
	long long _updateFreqency;
	double _lastUpdateTimeStamp;

}
-(id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2 ;
-(double)lastRecordedTimestamp;
-(void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2 ;
-(void)_dumpToAggregated;
@end

