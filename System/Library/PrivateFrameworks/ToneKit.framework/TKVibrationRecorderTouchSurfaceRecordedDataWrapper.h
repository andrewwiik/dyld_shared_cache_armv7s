/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {

	bool _warmUpModeEnabled;
	bool _displayLinkHasRefreshedAtLeastOnce;
	double _vibrationPatternMaximumDuration;
	double _vibrationPatternDidStartTimestamp;
	unsigned long long _maximumFramesPerSecondRate;
	void* _recordedData;
	unsigned long long _recordedDataElementsCount;
	unsigned long long _recordedDataCursor;
	double _warmUpModeDidStartTimestamp;

}

@property (assign,setter=_setVibrationPatternMaximumDuration:,nonatomic) double _vibrationPatternMaximumDuration;                  //@synthesize vibrationPatternMaximumDuration=_vibrationPatternMaximumDuration - In the implementation block
@property (assign,setter=_setVibrationPatternDidStartTimestamp:,nonatomic) double _vibrationPatternDidStartTimestamp;              //@synthesize vibrationPatternDidStartTimestamp=_vibrationPatternDidStartTimestamp - In the implementation block
@property (assign,setter=_setMaximumFramesPerSecondRate:,nonatomic) unsigned long long _maximumFramesPerSecondRate;                //@synthesize maximumFramesPerSecondRate=_maximumFramesPerSecondRate - In the implementation block
@property (assign,setter=_setRecordedData:,nonatomic) void* _recordedData;                                                         //@synthesize recordedData=_recordedData - In the implementation block
@property (assign,setter=_setRecordedDataElementsCount:,nonatomic) unsigned long long _recordedDataElementsCount;                  //@synthesize recordedDataElementsCount=_recordedDataElementsCount - In the implementation block
@property (assign,setter=_setRecordedDataCursor:,nonatomic) unsigned long long _recordedDataCursor;                                //@synthesize recordedDataCursor=_recordedDataCursor - In the implementation block
@property (assign,setter=_setWarmUpModeEnabled:,getter=_isWarmUpModeEnabled,nonatomic) bool _warmUpModeEnabled;                    //@synthesize warmUpModeEnabled=_warmUpModeEnabled - In the implementation block
@property (assign,setter=_setWarmUpModeDidStartTimestamp:,nonatomic) double _warmUpModeDidStartTimestamp;                          //@synthesize warmUpModeDidStartTimestamp=_warmUpModeDidStartTimestamp - In the implementation block
@property (assign,setter=_setDisplayLinkHasRefreshedAtLeastOnce:,nonatomic) bool _displayLinkHasRefreshedAtLeastOnce;              //@synthesize displayLinkHasRefreshedAtLeastOnce=_displayLinkHasRefreshedAtLeastOnce - In the implementation block
-(void)dealloc;
-(bool)_isWarmUpModeEnabled;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 ;
-(void)_setVibrationPatternMaximumDuration:(double)arg1 ;
-(double)_vibrationPatternMaximumDuration;
-(void)didStopRecording;
-(void)recordNormalizedTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 ;
-(bool)getNormalizedTouchLocation:(CGPoint*)arg1 touchPhase:(int*)arg2 forTimeInterval:(double)arg3 ;
-(void)_setMaximumFramesPerSecondRate:(unsigned long long)arg1 ;
-(void)_setWarmUpModeEnabled:(bool)arg1 ;
-(void)_setWarmUpModeDidStartTimestamp:(double)arg1 ;
-(void)_updateMaximumFramesPerSecondRate:(id)arg1 ;
-(void*)_recordedData;
-(unsigned long long)_maximumFramesPerSecondRate;
-(void)_setRecordedData:(void*)arg1 ;
-(void)_setRecordedDataElementsCount:(unsigned long long)arg1 ;
-(void)_setRecordedDataCursor:(unsigned long long)arg1 ;
-(unsigned long long)_recordedDataElementsCount;
-(unsigned long long)_recordedDataCursor;
-(void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1 ;
-(void)_recordFinalDataWithNormalizedTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3 ;
-(double)_vibrationPatternDidStartTimestamp;
-(void)_setVibrationPatternDidStartTimestamp:(double)arg1 ;
-(bool)_displayLinkHasRefreshedAtLeastOnce;
-(double)_warmUpModeDidStartTimestamp;
-(void)_setDisplayLinkHasRefreshedAtLeastOnce:(bool)arg1 ;
@end

