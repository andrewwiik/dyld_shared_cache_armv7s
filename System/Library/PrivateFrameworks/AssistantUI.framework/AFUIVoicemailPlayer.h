/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPlayReceiver/AVAudioPlayerDelegate.h>

@protocol AFUIVoicemailPlayerDelegate;
@class SAPhonePlayVoiceMail, AVAudioPlayer, VMVoicemail;

@interface AFUIVoicemailPlayer : NSObject <AVAudioPlayerDelegate> {

	<AFUIVoicemailPlayerDelegate>* _delegate;
	SAPhonePlayVoiceMail* _voicemail;
	AVAudioPlayer* _player;
	VMVoicemail* _voicemailObject;

}

@property (assign,nonatomic,__weak) <AFUIVoicemailPlayerDelegate> * delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SAPhonePlayVoiceMail * voicemail;                                                               //@synthesize voicemail=_voicemail - In the implementation block
@property (setter=_setPlayer:,getter=_player,nonatomic,retain) AVAudioPlayer * player;                                       //@synthesize player=_player - In the implementation block
@property (setter=_setVoicemailObject:,getter=_voicemailObject,nonatomic,retain) VMVoicemail * voicemailObject;              //@synthesize voicemailObject=_voicemailObject - In the implementation block
-(void)stopPlaying;
-(id)_player;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2 ;
-(void)_setVoicemailObject:(id)arg1 ;
-(id)_voicemailURL;
-(void)_setPlayer:(id)arg1 ;
-(id)voicemail;
-(long long)_voicemailID;
-(id)_voicemailObject;
-(void)_updateVoicemailPlayedState:(id)arg1 finished:(bool)arg2 ;
-(void)setVoicemail:(id)arg1 ;
-(void)startPlaying;
@end

