/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CertUI/CertUI-Structs.h>
@class NSString;

@interface CertUIPrompt : NSObject {

	SecTrustRef _trust;
	NSString* _host;
	NSString* _service;
	NSString* _connectionDisplayName;
	/*^block*/ id _responseBlock;

}

@property (nonatomic,retain) NSString * host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * connectionDisplayName;              //@synthesize connectionDisplayName=_connectionDisplayName - In the implementation block
+(id)stringForResponse:(int)arg1 ;
+(id)promptQueue;
-(id)service;
-(void)setHost:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)host;
-(id)connectionDisplayName;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_titleFromTrust:(SecTrustRef)arg1 ;
-(id)_subtitleFromTrust:(SecTrustRef)arg1 ;
-(id)_purposeFromTrustProperties:(id)arg1 ;
-(id)_expirationFromTrust:(SecTrustRef)arg1 ;
-(id)_digestFromTrust:(SecTrustRef)arg1 ;
-(id)_newUserInfoForDisplayName:(id)arg1 hostname:(id)arg2 trust:(SecTrustRef)arg3 ;
-(id)_messagingCenter;
-(int)_responseFromReplyDict:(id)arg1 ;
-(int)_sendRemoteMessage;
-(SecTrustRef)trust;
-(void)_informConsumerOfResponse:(int)arg1 ;
-(void)showPromptWithResponseBlock:(/*^block*/ id)arg1 ;
-(void)setService:(id)arg1 ;
-(void)setTrust:(SecTrustRef)arg1 ;
-(int)showAndWaitForResponse;
-(void)setConnectionDisplayName:(id)arg1 ;
@end

