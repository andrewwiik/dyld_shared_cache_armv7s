/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPropertyStorage, AVPixelBufferAttributeMediator, NSMutableDictionary, NSArray, AVPlayerItem, NSMutableSet, NSObject, NSString, NSError, NSDictionary, AVAudioSessionMediaPlayerOnly;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef figPlayer;
	OpaqueCMClockRef figMasterClock;
	AVPropertyStorage* propertyStorage;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSMutableDictionary* pendingFigPlayerProperties;
	NSArray* expectedAssetTypes;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	NSMutableSet* items;
	NSObject<OS_dispatch_queue>* layersQ;
	NSMutableSet* caLayers;
	NSString* externalPlaybackVideoGravity;
	long long status;
	NSError* error;
	NSObject<OS_dispatch_queue>* stateDispatchQueue;
	NSArray* displaysUsedForPlayback;
	bool needsToCreateFigPlayer;
	bool logPerformanceData;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	bool reevaluateBackgroundPlayback;
	bool hostApplicationInForeground;
	bool hadAssociatedOnscreenPlayerLayerWhenSuspended;
	bool iapdExtendedModeIsActive;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	NSDictionary* vibrationPattern;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/ id prerollCompletionHandler;
	NSObject<OS_dispatch_queue>* subtitleQueue;
	NSDictionary* currentSubtitlesPayload;
	bool autoSwitchStreamVariants;
	bool preparesItemsForPlaybackAsynchronously;

}
@end

