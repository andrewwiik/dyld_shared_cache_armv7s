/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class AVAudioMixInputParametersInternal, NSString;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInputParametersInternal* _inputParameters;

}

@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,readonly) opaqueMTAudioProcessingTapRef audioTapProcessor; 
-(id)_audioVolumeCurve;
-(opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(id)audioTimePitchAlgorithm;
-(void)setTrackID:(int)arg1 ;
-(id)_volumeCurveAsString;
-(void)_setRamps:(id)arg1 ;
-(void)setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 ;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(bool)getVolumeRampForTime:(SCD_Struct_CM4)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_CM5*)arg4 ;
-(int)trackID;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_CM4)arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(void)finalize;
@end
