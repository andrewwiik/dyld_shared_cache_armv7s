/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSArray, AFVoiceInfo;

@interface AFSettingsConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject<OS_dispatch_queue>* _voicesQueue;
	NSArray* _voices;
	AFVoiceInfo* _selectedVoice;

}
-(void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)fetchSupportedLanguageCodes:(/*^block*/ id)arg1 ;
-(id)_connection;
-(void)setLanguage:(id)arg1 ;
-(void)setAssistantEnabled:(bool)arg1 ;
-(void)barrier;
-(void)setDictationEnabled:(bool)arg1 ;
-(void)deleteAccountWithIdentifier:(id)arg1 ;
-(void)setOutputVoice:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)setLanguage:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)_settingsServiceWithErrorHandler:(/*^block*/ id)arg1 ;
-(id)_settingsService;
-(void)_setVoices:(id)arg1 ;
-(id)_voices;
-(id)_filterVoices:(id)arg1 forLanguage:(id)arg2 ;
-(void)_updateVoicesWithCompletion:(/*^block*/ id)arg1 ;
-(void)saveAccount:(id)arg1 setActive:(bool)arg2 ;
-(void)killDaemon;
-(void)_updateVoicesSync;
-(void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setOutputVoice:(id)arg1 ;
-(id)accounts;
-(void)_clearConnection;
@end

