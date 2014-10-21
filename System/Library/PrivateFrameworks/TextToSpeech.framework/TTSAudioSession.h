/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TextToSpeech/TextToSpeech-Structs.h>
@class NSObject;

@interface TTSAudioSession : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	bool _audioSessionIsSetUp;
	SCD_Struct_TT0 _desiredState;
	SCD_Struct_TT0 _cachedState;
	bool _bluetoothAllowed;
	CFBagRef _activityBag;
	long long _serverGeneration;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)_audioSessionInterrupted:(id)arg1 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)_setupAudioSession;
-(void)_setCategoryForActivity:(long long)arg1 ;
-(long long)_nextActivityForActive:(bool)arg1 activity:(long long)arg2 serverActivity:(long long)arg3 ;
-(void)_safeSetupAudioSession;
-(long long)_safeServerGeneration;
-(void)_safeSetCategoryForActivity:(long long)arg1 ;
-(void)_safeSetActive:(bool)arg1 withActivity:(long long)arg2 ;
-(void)_safeSetBluetoothInputAllowed:(bool)arg1 ;
@end

