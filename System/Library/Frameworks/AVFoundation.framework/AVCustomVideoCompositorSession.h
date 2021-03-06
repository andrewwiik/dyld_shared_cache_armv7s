/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVVideoCompositing;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, AVWeakReference, NSObject, AVVideoComposition, NSError, AVVideoCompositionRenderContext;

@interface AVCustomVideoCompositorSession : NSObject {

	OpaqueFigVideoCompositorRef _figCustomCompositor;
	bool _hasRegisteredFigCustomCompositorCallbacks;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	AVWeakReference* _weakSelf;
	NSObject<OS_dispatch_queue>* _videoCompositionQ;
	AVVideoComposition* _videoComposition;
	bool _videoCompositionDidChange;
	NSObject<OS_dispatch_queue>* _clientCustomCompositorQ;
	<AVVideoCompositing>* _clientCustomCompositor;
	NSObject<OS_dispatch_queue>* _clientErrorQ;
	NSError* _clientError;
	NSObject<OS_dispatch_queue>* _renderContextQ;
	AVVideoCompositionRenderContext* _renderContext;
	NSObject<OS_dispatch_queue>* _finishedRequestQ;

}
+(id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2 ;
-(int)_setupFigCallbacks;
-(void)_cleanupFigCallbacks;
-(int)_compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 atTime:(SCD_Struct_CM4)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4 ;
-(int)_customCompositorShouldCancelPendingFrames;
-(void)_customCompositorFigPropertyDidChange;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(void)detachVideoComposition;
-(id)getAndClearClientError;
-(OpaqueFigVideoCompositorRef)_copyFigVideoCompositor;
-(id)initWithVideoComposition:(id)arg1 ;
-(void)_willDeallocOrFinalize;
-(void)request:(id)arg1 didFinishWithComposedPixelBuffer:(CVBufferRef)arg2 ;
-(void)request:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
@end

