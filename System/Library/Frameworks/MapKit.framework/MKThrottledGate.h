/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	int _maxAvailableTickets;
	double _availableTickets;
	double _refreshRate;
	NSMutableArray* _waitingJobs;
	VKTimer* _timer;

}
-(void)_timerFired:(id)arg1 ;
-(void)dispatch:(/*^block*/ id)arg1 ;
-(bool)_dispatchWaitingJobsIfNecessary;
-(void)_ensureTimer;
-(bool)_replenishAvailableJobsIfNecessary;
-(id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(void).cxx_destruct;
@end

