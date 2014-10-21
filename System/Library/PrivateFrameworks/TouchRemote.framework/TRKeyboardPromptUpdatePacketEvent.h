/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSString;

@interface TRKeyboardPromptUpdatePacketEvent : TRPacketEvent {

	bool _secureText;
	long long _keyboardType;
	unsigned long long _sessionID;
	NSString* _subtitle;
	NSString* _text;
	NSString* _title;
	long long _updateType;

}

@property (nonatomic,readonly) long long keyboardType;                           //@synthesize keyboardType=_keyboardType - In the implementation block
@property (getter=isSecureText,nonatomic,readonly) bool secureText;              //@synthesize secureText=_secureText - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long updateType;                             //@synthesize updateType=_updateType - In the implementation block
+(unsigned)_packetEventType;
-(long long)updateType;
-(id)description;
-(id)text;
-(id)title;
-(long long)keyboardType;
-(id)subtitle;
-(void).cxx_destruct;
-(unsigned long long)sessionID;
-(bool)isSecureText;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithKeyboardType:(long long)arg1 secureText:(bool)arg2 sessionID:(unsigned long long)arg3 subtitle:(id)arg4 text:(id)arg5 title:(id)arg6 updateType:(long long)arg7 ;
@end

