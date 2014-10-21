/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {

	NSURLProtectionSpaceInternal* _internal;

}
+(bool)supportsSecureCoding;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(id)_internalInit;
-(id)realm;
-(id)proxyType;
-(id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(bool)receivesCredentialSecurely;
-(id)distinguishedNames;
-(SecTrustRef)serverTrust;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(bool)isProxy;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)host;
-(id)authenticationMethod;
-(id)protocol;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(long long)port;
@end

