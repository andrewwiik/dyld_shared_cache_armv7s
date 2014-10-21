/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterConfigurationState, AVWeakReference, NSURL, AVMediaFileType, NSArray, NSError;

@interface AVAssetWriterHelper : NSObject {

	AVAssetWriterConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriter;

}

@property (nonatomic,readonly) AVAssetWriterConfigurationState * configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriter;                                  //@synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL; 
@property (nonatomic,readonly) AVMediaFileType * mediaFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_CM4 movieFragmentInterval; 
@property (assign,nonatomic) bool shouldOptimizeForNetworkUse; 
@property (assign,nonatomic) int movieTimeScale; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) float preferredRate; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * inputGroups; 
-(float)preferredRate;
-(float)preferredVolume;
-(void)setPreferredVolume:(float)arg1 ;
-(id)mediaFileType;
-(SCD_Struct_CM4)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_CM4)arg1 ;
-(bool)shouldOptimizeForNetworkUse;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(id)inputGroups;
-(void)setWeakReferenceToAssetWriter:(id)arg1 ;
-(id)outputURL;
-(id)availableMediaTypes;
-(bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(bool)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(bool)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)cancelWriting;
-(void)finishWriting;
-(void)finishWritingWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)transitionToFailedStatusWithError:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)configurationState;
-(bool)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(opaqueCMFormatDescriptionRef)arg3 exceptionReason:(id*)arg4 ;
-(bool)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)weakReferenceToAssetWriter;
-(bool)_transitionToClientInitiatedTerminalStatus:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)status;
-(void)startWriting;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(CGAffineTransform)preferredTransform;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(bool)arg1 ;
-(id)error;
-(id)inputs;
@end

