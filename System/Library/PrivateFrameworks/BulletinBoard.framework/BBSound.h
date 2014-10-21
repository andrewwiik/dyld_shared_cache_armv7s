/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSDictionary;

@interface BBSound : NSObject <NSCopying, NSCoding> {

	long long _soundType;
	unsigned _systemSoundID;
	unsigned long long _soundBehavior;
	NSString* _audioCategory;
	NSString* _ringtoneName;
	bool _repeats;
	NSDictionary* _vibrationPattern;
	int _alertType;
	NSString* _accountIdentifier;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;

}

@property (assign,nonatomic) long long soundType;                           //@synthesize soundType=_soundType - In the implementation block
@property (assign,nonatomic) unsigned systemSoundID;                        //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,nonatomic) unsigned long long soundBehavior;              //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,copy) NSString * ringtoneName;                         //@synthesize ringtoneName=_ringtoneName - In the implementation block
@property (assign,getter=isRepeating,nonatomic) bool repeats;               //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy) NSDictionary * vibrationPattern;                 //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                        //@synthesize audioCategory=_audioCategory - In the implementation block
@property (assign,nonatomic) int alertType;                                 //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                       //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                  //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
+(id)_possiblyCachedAlertSoundForInitializedSound:(id)arg1 ;
+(id)alertSoundWithSystemSoundID:(unsigned)arg1 ;
-(id)vibrationPattern;
-(void)setVibrationPattern:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setSoundType:(long long)arg1 ;
-(long long)soundType;
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
-(id)initWithSystemSoundID:(unsigned)arg1 behavior:(unsigned long long)arg2 ;
-(bool)_isUniquableAlertSound;
-(id)initWithSystemSoundID:(unsigned)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3 ;
-(void)setSystemSoundID:(unsigned)arg1 ;
-(void)setSoundBehavior:(unsigned long long)arg1 ;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 audioCategory:(id)arg4 ;
-(void)setRingtoneName:(id)arg1 ;
-(void)setRepeats:(bool)arg1 ;
-(void)setAudioCategory:(id)arg1 ;
-(id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)setToneIdentifier:(id)arg1 ;
-(void)setVibrationIdentifier:(id)arg1 ;
-(unsigned)systemSoundID;
-(unsigned long long)soundBehavior;
-(id)ringtoneName;
-(bool)isRepeating;
-(id)audioCategory;
-(id)toneIdentifier;
-(id)vibrationIdentifier;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 ;
-(id)initWithToneAlert:(int)arg1 ;
-(id)initWithToneAlert:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(id)accountIdentifier;
@end

