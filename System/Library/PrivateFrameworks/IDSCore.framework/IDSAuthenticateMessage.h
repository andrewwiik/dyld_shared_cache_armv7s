/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSData, NSDictionary;

@interface IDSAuthenticateMessage : IDSBaseMessage <NSCopying> {

	NSString* _realm;
	NSData* _csr;
	NSDictionary* _authenticationInfo;
	NSString* _userID;
	NSData* _responseCertificate;
	NSString* _responseUserID;
	NSString* _protocolVersion;

}

@property (copy) NSString * realm;                               //@synthesize realm=_realm - In the implementation block
@property (copy) NSData * csr;                                   //@synthesize csr=_csr - In the implementation block
@property (copy) NSString * protocolVersion;                     //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSString * userID;                              //@synthesize userID=_userID - In the implementation block
@property (copy) NSDictionary * authenticationInfo;              //@synthesize authenticationInfo=_authenticationInfo - In the implementation block
@property (copy) NSString * responseUserID;                      //@synthesize responseUserID=_responseUserID - In the implementation block
@property (copy) NSData * responseCertificate;                   //@synthesize responseCertificate=_responseCertificate - In the implementation block
-(id)realm;
-(id)bagKey;
-(id)protocolVersion;
-(long long)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setProtocolVersion:(id)arg1 ;
-(id)userID;
-(void)setUserID:(id)arg1 ;
-(void)setRealm:(id)arg1 ;
-(void)setCsr:(id)arg1 ;
-(void)setAuthenticationInfo:(id)arg1 ;
-(id)responseCertificate;
-(id)responseUserID;
-(id)authenticationInfo;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(bool)wantsBagKey;
-(bool)wantsHTTPHeaders;
-(bool)wantsCompressedBody;
-(bool)wantsBinaryPush;
-(long long)responseCommand;
-(id)csr;
-(void)setResponseUserID:(id)arg1 ;
-(void)setResponseCertificate:(id)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end
