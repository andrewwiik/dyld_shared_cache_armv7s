/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, AVAudioMix, NSMutableDictionary, AVAudioOutputSettings, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject {

	NSArray* audioTracks;
	AVAudioMix* audioMix;
	NSMutableDictionary* audioVolumeCurvesForTracks;
	NSMutableDictionary* audioTimePitchAlgorithmsForTracks;
	NSMutableDictionary* audioTapProcessorsForTracks;
	AVAudioOutputSettings* audioOutputSettings;
	NSString* audioTimePitchAlgorithm;

}
@end

