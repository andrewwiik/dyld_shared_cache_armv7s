/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLPowerSnapshot : NSObject {

	double _value;
	double _timeSinceEpoch;

}

@property (assign) double value;                       //@synthesize value=_value - In the implementation block
@property (assign) double timeSinceEpoch;              //@synthesize timeSinceEpoch=_timeSinceEpoch - In the implementation block
-(id)description;
-(void)setValue:(double)arg1 ;
-(double)value;
-(id)initWithValue:(double)arg1 time:(double)arg2 ;
-(double)timeSinceEpoch;
-(void)setTimeSinceEpoch:(double)arg1 ;
@end
