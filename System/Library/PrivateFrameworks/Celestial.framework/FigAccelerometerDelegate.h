/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/SBSAccelerometerDelegate.h>

@class SBSAccelerometer;

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate> {

	SBSAccelerometer* sbsaccel;
	opaque_pthread_mutex_t ringMutex;
	int ringIndex;
	float ringX[64];
	float ringY[64];
	float ringZ[64];
	double ringTime[64];

}
-(void)dealloc;
-(id)init;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)deferOnRunloop_accelerometerEventsEnable;
-(void)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
@end
