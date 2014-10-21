/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray;

@interface AppLaunchStatsLaunchQueue : NSObject <DuetLoggerProtocol> {

	bool pushHigh;
	NSObject<OS_dispatch_queue>* launchQueue;
	long long allowedAppLaunchCap;
	long long wifiChargerDuration;
	unsigned long long scheduleLaunchQueue;
	/*^block*/ id highPriorityBlock;
	/*^block*/ id lowPriorityBlock;
	NSDate* lastRetryTrigTime;
	NSMutableArray* whatToLaunchQueue;
	NSMutableArray* trendingQueue;
	NSMutableArray* highPriorityPushQueue;
	NSMutableArray* highPriorityRetryList;
	NSMutableArray* lowPriorityPushQueue;
	NSMutableArray* lowPriorityRetryList;
	NSMutableArray* wifiChargerQueue;
	NSMutableArray* reservationStationList;
	/*^block*/ id wifiChargerCheck;
	NSDate* ageWifiChargerQueue;

}
-(id)init;
-(void).cxx_destruct;
-(void)logAll:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)addToLaunchQueue:(id)arg1 withQueueType:(int)arg2 withItem:(/*^block*/ id)arg3 ;
-(bool)acquireReservationStation:(id)arg1 ;
-(int)reservationStationsFree;
-(int)launchObject:(id)arg1 ;
-(bool)wifiChargeQueueAllowedToProceed;
-(void)addToHighPriorityQueue:(id)arg1 withLaunchBlock:(/*^block*/ id)arg2 ;
-(void)addToLowPriorityQueue:(id)arg1 withLaunchBlock:(/*^block*/ id)arg2 ;
-(bool)confirmReservationStation:(id)arg1 seqNum:(long long)arg2 type:(int)arg3 release:(/*^block*/ id)arg4 ;
-(void)doDispatchQueuedLaunches;
-(void)doDispatchQueuedLPLaunches;
-(void)releaseReservationStation:(id)arg1 seqNum:(long long)arg2 ;
-(bool)refillWifiChargerQueue;
-(void)enableWifiChargerQueue:(/*^block*/ id)arg1 ;
-(void)updateWifiChargerDate;
-(void)setLaunchCapacity:(unsigned long long)arg1 ;
@end
