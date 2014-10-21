/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMToken.h>

@class NSString, NSDate;

@interface ACMSSOToken : ACMToken {

	NSString* _sessionToken;
	NSDate* _recentAuthenticationDate;
	bool _isShared;

}

@property (retain) NSString * sessionToken;                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (retain) NSDate * recentAuthenticationDate;              //@synthesize recentAuthenticationDate=_recentAuthenticationDate - In the implementation block
@property (assign) bool isShared;                                  //@synthesize isShared=_isShared - In the implementation block
+(id)tokenWithCreationDate:(id)arg1 nonce:(id)arg2 data:(id)arg3 keyCode:(id)arg4 inOldFormat:(bool)arg5 ;
+(id)tokenWithKeychainTokenInfo:(id)arg1 ;
+(id)tokenWithToken:(id)arg1 data:(id)arg2 ;
-(bool)isShared;
-(id)sessionToken;
-(void)setSessionToken:(id)arg1 ;
-(void)dealloc;
-(void)setRecentAuthenticationDate:(id)arg1 ;
-(id)tokenDictionaryWithKeyCode:(id)arg1 inOldFormat:(bool)arg2 ;
-(id)recentAuthenticationDate;
-(id)encryptionKeyWithKeyCode:(id)arg1 inOldFormat:(bool)arg2 ;
-(bool)validateTokenWithKeyCode:(id)arg1 inOldFormat:(bool)arg2 ;
-(void)setIsShared:(bool)arg1 ;
@end

