/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	long long _terminalStatus;
	bool _didRequestMediaDataOnce;

}
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(bool)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(bool)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(bool)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(void)markAsFinished;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1 ;
-(bool)mediaDataRequesterShouldRequestMediaData:(id)arg1 ;
-(long long)status;
@end

