/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <Message/MFSASLAuthenticator.h>

@class YahooAccount, NSData;

@interface _MFXYMPKIAuthenticator : MFSASLAuthenticator {

	bool sentInitialResponse;
	YahooAccount* _yahooAccount;
	NSData* _cachedSignature;
	bool _usedCachedSignature;

}
-(void)dealloc;
-(id)_XYMPKISignatureData;
-(CFDataRef)_copyDeviceCertificate;
-(CFDataRef)_copyDevicePrivateKey;
-(id)saslName;
-(bool)base64EncodeResponseData;
-(void)setAuthenticationState:(int)arg1 ;
-(id)responseForServerData:(id)arg1 ;
-(bool)couldRetry;
@end

