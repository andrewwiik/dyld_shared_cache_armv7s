/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface MSDaemon : NSObject {

	bool _stabilizedIsBusy;
	int _busyCount;
	int _UIBusyCount;
	NSObject<OS_dispatch_queue>* _idleCountQueue;
	NSTimer* _hysteresisTimer;

}

@property (assign,nonatomic) int busyCount;                                             //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                                           //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
@property (nonatomic,retain) NSTimer * hysteresisTimer;                                 //@synthesize hysteresisTimer=_hysteresisTimer - In the implementation block
@property (assign,nonatomic) bool stabilizedIsBusy;                                     //@synthesize stabilizedIsBusy=_stabilizedIsBusy - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * idleCountQueue;              //@synthesize idleCountQueue=_idleCountQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)retainBusy;
-(void)releaseBusy;
-(void)didIdle;
-(void)didUnidle;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(id)idleCountQueue;
-(void)retainPowerAssertion;
-(void)releasePowerAssertion;
-(id)hysteresisTimer;
-(void)setHysteresisTimer:(id)arg1 ;
-(bool)stabilizedIsBusy;
-(void)setStabilizedIsBusy:(bool)arg1 ;
-(void)stabilizedDidUnidle;
-(void)_hysteresisTimerDidFire:(id)arg1 ;
-(void)_didChangeIdleBusyState:(bool)arg1 ;
-(void)stabilizedDidIdle;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(int)UIBusyCount;
-(void)setUIBusyCount:(int)arg1 ;
-(void)setIdleCountQueue:(id)arg1 ;
-(bool)isBusy;
@end
