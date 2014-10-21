/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {

	short _alternateGroupID;

}
-(void)setPreferredVolume:(float)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_CM4)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 ;
-(bool)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(bool)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(bool)_canAddInput:(id)arg1 exceptionReason:(id*)arg2 ;
-(bool)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2 ;
-(long long)status;
-(void)startWriting;
-(void)setMetadata:(id)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(bool)arg1 ;
@end

