/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {

	AVCaptureOutputInternal* _outputInternal;

}

@property (nonatomic,readonly) NSArray * connections; 
+(void)initialize;
-(id)session;
-(id)liveConnections;
-(void)setSession:(id)arg1 ;
-(id)connectionWithMediaType:(id)arg1 ;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(void)handleEnabledChangedForConnection:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(int)changeSeed;
-(void)bumpChangeSeed;
-(id)notReadyError;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)_inputForConnection:(id)arg1 ;
-(CGSize)outputSizeForCaptureOptions:(id)arg1 ;
-(bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(void)updateMetadataTransformForCaptureOptions:(id)arg1 ;
-(id)firstEnabledConnectionForMediaType:(id)arg1 ;
-(bool)canAddConnectionForMediaType:(id)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(void)didStartForSessionWithoutGraphRebuild:(id)arg1 ;
-(id)connections;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

