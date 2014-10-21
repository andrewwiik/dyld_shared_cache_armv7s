/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSMutableDictionary, AVCaptureFigAudioDevice, AVCaptureFigVideoDevice, NSMutableArray, AVCaptureVideoPreviewLayer, NSError, AVRunLoopCondition;

@interface AVCaptureSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	bool adjustingDeviceActiveFormat;
	int sessionPresetChangeSeed;
	int resolvedSessionPresetChangeSeed;
	int videoDeviceChangeSeed;
	int resolvedVideoDeviceChangeSeed;
	int beginConfigRefCount;
	NSMutableDictionary* captureOptions;
	NSMutableDictionary* figRecorderOptions;
	AVCaptureFigAudioDevice* audioDevice;
	AVCaptureFigVideoDevice* videoDevice;
	OpaqueFigRecorderRef recorder;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSMutableArray* connections;
	NSMutableArray* liveConnections;
	AVCaptureVideoPreviewLayer* videoPreviewLayer;
	NSError* stopError;
	bool running;
	bool interrupted;
	bool recording;
	bool usesApplicationAudioSession;
	bool automaticallyConfiguresApplicationAudioSession;
	AVRunLoopCondition* runLoopCondition;
	bool waitingForRecorderDidStartPreviewing;
	bool waitingForRecorderDidStartRecording;
	bool waitingForRecorderDidStopSource;
	bool waitingForRecorderDidStopPreviewing;
	bool waitingForRecorderDidStopRecording;
	OpaqueCMClockRef masterClock;

}
-(void)dealloc;
-(id)init;
@end

