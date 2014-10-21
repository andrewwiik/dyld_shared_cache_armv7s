/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TimingInstance : NSObject {

	float startTiming;
	float stopTiming;
	float totalTime;
	bool isRunning;

}

@property (assign,nonatomic) float startTiming; 
@property (assign,nonatomic) float stopTiming; 
@property (assign,nonatomic) float totalTime; 
@property (assign,nonatomic) bool isRunning; 
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(id)description;
-(bool)isRunning;
-(void)setStartTiming:(float)arg1 ;
-(void)setStopTiming:(float)arg1 ;
-(float)startTiming;
-(float)stopTiming;
-(float)totalTime;
-(void)setTotalTime:(float)arg1 ;
-(void)setIsRunning:(bool)arg1 ;
@end

