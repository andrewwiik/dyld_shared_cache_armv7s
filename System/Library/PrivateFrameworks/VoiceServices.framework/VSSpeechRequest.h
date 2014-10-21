/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSAttributedString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {

	bool _useCustomVoice;
	bool _maintainsInput;
	bool _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _languageCode;
	NSString* _voiceName;
	long long _footprint;
	long long _gender;
	NSURL* _outputPath;
	double _rate;
	double _pitch;
	double _volume;
	/*^block*/ id _stopHandler;
	/*^block*/ id _pauseHandler;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                             //@synthesize voiceName=_voiceName - In the implementation block
@property (assign,nonatomic) long long footprint;                            //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) bool useCustomVoice;                            //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (assign,nonatomic) long long gender;                               //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                               //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) double rate;                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                  //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) bool maintainsInput;                            //@synthesize maintainsInput=_maintainsInput - In the implementation block
@property (assign,nonatomic) bool audioSessionIDIsValid;                     //@synthesize audioSessionIDIsValid=_audioSessionIDIsValid - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                        //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                       //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (nonatomic,copy) id stopHandler;                                   //@synthesize stopHandler=_stopHandler - In the implementation block
@property (nonatomic,copy) id pauseHandler;                                  //@synthesize pauseHandler=_pauseHandler - In the implementation block
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(void).cxx_destruct;
-(id)languageCode;
-(double)rate;
-(bool)maintainsInput;
-(bool)useCustomVoice;
-(bool)audioSessionIDIsValid;
-(unsigned)audioSessionID;
-(unsigned)audioQueueFlags;
-(id)voiceName;
-(id)outputPath;
-(long long)footprint;
-(long long)gender;
-(void)setLanguageCode:(id)arg1 ;
-(void)setVoiceName:(id)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(void)setUseCustomVoice:(bool)arg1 ;
-(void)setGender:(long long)arg1 ;
-(void)setOutputPath:(id)arg1 ;
-(void)setMaintainsInput:(bool)arg1 ;
-(void)setAudioSessionIDIsValid:(bool)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(/*^block*/ id)stopHandler;
-(void)setStopHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)pauseHandler;
-(void)setPauseHandler:(/*^block*/ id)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setRate:(double)arg1 ;
@end

