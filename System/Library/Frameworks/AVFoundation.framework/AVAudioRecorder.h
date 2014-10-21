/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSURL, NSDictionary, NSArray;

@interface AVAudioRecorder : NSObject {

	void* _impl;

}

@property (getter=isRecording,readonly) bool recording; 
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * settings; 
@property (assign) <AVAudioRecorderDelegate> * delegate; 
@property (readonly) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (getter=isMeteringEnabled) bool meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(bool)isRecording;
-(AudioRecorderImpl*)impl;
-(void)finishedRecording;
-(bool)isMeteringEnabled;
-(void)setMeteringEnabled:(bool)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(id)baseInit;
-(double)deviceCurrentTime;
-(id)channelAssignments;
-(void)setChannelAssignments:(id)arg1 ;
-(void)privCommonCleanup;
-(id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(bool)prepareToRecord;
-(bool)recordAtTime:(double)arg1 ;
-(bool)recordForDuration:(double)arg1 ;
-(bool)recordAtTime:(double)arg1 forDuration:(double)arg2 ;
-(bool)deleteRecording;
-(void)endInterruptionWithFlags;
-(double)currentTime;
-(void)beginInterruption;
-(void)endInterruption;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)url;
-(id)settings;
-(void)stop;
-(void)pause;
-(bool)record;
-(void)finalize;
@end
