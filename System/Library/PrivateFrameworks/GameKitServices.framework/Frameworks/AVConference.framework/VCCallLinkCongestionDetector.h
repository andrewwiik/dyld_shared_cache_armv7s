/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface VCCallLinkCongestionDetector : NSObject {

	bool isLinkCongested;
	double rttThreshold;
	double lossRateThreshold;

}

@property (assign,nonatomic) bool isLinkCongested; 
-(id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2 ;
-(void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3 ;
-(bool)isLinkCongested;
-(void)setIsLinkCongested:(bool)arg1 ;
@end

