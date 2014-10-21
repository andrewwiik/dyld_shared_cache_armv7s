/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface PLDuetEvent : NSObject <NSCopying> {

	bool _wasCharging;
	bool _predictedByGasGauge;
	short _updateType;
	short _event;
	NSString* _bundleId;
	unsigned long long _updateSequenceNumber;
	double _energy;
	unsigned long long _startSequenceID;
	unsigned long long _endSequenceID;
	double _duration;

}

@property (copy) NSString * bundleId;                                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign) short updateType;                                     //@synthesize updateType=_updateType - In the implementation block
@property (assign) unsigned long long updateSequenceNumber;              //@synthesize updateSequenceNumber=_updateSequenceNumber - In the implementation block
@property (assign) short event;                                          //@synthesize event=_event - In the implementation block
@property (assign) bool wasCharging;                                     //@synthesize wasCharging=_wasCharging - In the implementation block
@property (assign) bool predictedByGasGauge;                             //@synthesize predictedByGasGauge=_predictedByGasGauge - In the implementation block
@property (assign) double energy;                                        //@synthesize energy=_energy - In the implementation block
@property (assign) unsigned long long startSequenceID;                   //@synthesize startSequenceID=_startSequenceID - In the implementation block
@property (assign) unsigned long long endSequenceID;                     //@synthesize endSequenceID=_endSequenceID - In the implementation block
@property (assign) double duration;                                      //@synthesize duration=_duration - In the implementation block
-(id)stats;
-(id)bundleId;
-(void)setUpdateType:(short)arg1 ;
-(short)updateType;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setEvent:(short)arg1 ;
-(short)event;
-(id)initWithDuetNotification:(id)arg1 ;
-(id)entry;
-(double)energy;
-(void)setEnergy:(double)arg1 ;
-(void)setPredictedByGasGauge:(bool)arg1 ;
-(void)setWasCharging:(bool)arg1 ;
-(unsigned long long)updateSequenceNumber;
-(void)setStartSequenceID:(unsigned long long)arg1 ;
-(void)setEndSequenceID:(unsigned long long)arg1 ;
-(bool)predictedByGasGauge;
-(bool)wasCharging;
-(unsigned long long)endSequenceID;
-(void)setBundleId:(id)arg1 ;
-(void)setUpdateSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)startSequenceID;
@end

