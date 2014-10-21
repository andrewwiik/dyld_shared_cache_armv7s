/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKVoiceChatService : NSObject {

	id _voiceChatService;

}

@property (assign) <GKVoiceChatClient> * client; 
@property (assign,getter=isMicrophoneMuted,nonatomic) bool microphoneMuted; 
@property (assign,nonatomic) float remoteParticipantVolume; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) bool outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) bool inputMeteringEnabled; 
@property (readonly) float outputMeterLevel; 
@property (readonly) float inputMeterLevel; 
+(bool)isVoIPAllowed;
+(void)initialize;
+(id)defaultVoiceChatService;
-(void)dealloc;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(bool)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(bool)arg1 ;
-(bool)isInputMeteringEnabled;
-(void)setInputMeteringEnabled:(bool)arg1 ;
-(float)outputMeterLevel;
-(float)inputMeterLevel;
-(void)setMicrophoneMuted:(bool)arg1 ;
-(bool)isMicrophoneMuted;
-(bool)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2 ;
-(bool)acceptCallID:(long long)arg1 error:(id*)arg2 ;
-(void)denyCallID:(long long)arg1 ;
-(void)receivedData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)stopVoiceChatWithParticipantID:(id)arg1 ;
-(float)remoteParticipantVolume;
-(void)setRemoteParticipantVolume:(float)arg1 ;
-(void)setClient:(id)arg1 ;
-(id)client;
@end
