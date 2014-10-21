/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {

	AVVideoCompositionCoreAnimationToolInternal* _videoCompositionTool;

}
+(id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2 ;
+(id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2 ;
+(id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2 ;
-(bool)_hasLayerAsAuxiliaryTrack;
-(id)_auxiliaryTrackLayer;
-(bool)_hasPostProcessingLayers;
-(id)_postProcessingRootLayer;
-(int)_auxiliaryTrackID;
-(id)_postProcessingVideoLayers;
-(id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3 ;
-(void)dealloc;
-(void)finalize;
@end

