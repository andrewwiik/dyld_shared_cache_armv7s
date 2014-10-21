/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVConferencePreviewClientDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, CALayer, VideoAttributes, NSObject;

@interface AVConferencePreview : NSObject {

	bool clientWantsPreview;
	unsigned connectionAttempts;
	AVConferenceXPCClient* connection;
	CALayer* caLayerFront;
	CALayer* caLayerBack;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	NSObject<AVConferencePreviewClientDelegate>* delegate;
	NSObject<OS_dispatch_queue>* avConferencePreviewQueue;
	NSObject<OS_dispatch_queue>* avConferencePreviewNotificationQueue;

}

@property (nonatomic,retain) NSObject<AVConferencePreviewClientDelegate> * delegate; 
+(id)AVConferencePreviewSingleton;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)delegate;
-(id)allocWithZone:(NSZone)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)startPreview;
-(bool)isPreviewRunning;
-(id)localVideoAttributes;
-(void)pausePreview;
-(void)stopPreview;
-(void)setLocalVideoAttributes:(id)arg1 ;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)didReceiveErrorFromCamera:(unsigned)arg1 error:(id)arg2 ;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)startPreviewUnpausing:(bool)arg1 ;
-(void)didReceiveCommError;
-(void)setLocalVideoLayer:(id)arg1 front:(bool)arg2 ;
-(void)connectLayer:(id)arg1 withSlot:(unsigned)arg2 ;
-(id)localVideoLayer:(bool)arg1 ;
-(void)setLocalCamera:(unsigned)arg1 ;
-(unsigned)localCamera;
@end

