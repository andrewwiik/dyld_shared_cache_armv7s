/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <Foundation/NSURLAuthenticationChallengeSender.h>

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

	AuthenticationClient* m_client;
	CFURLAuthChallengeRef m_cfChallenge;

}
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(id)initWithAuthenticationClient:(AuthenticationClient*)arg1 ;
-(AuthenticationClient*)client;
-(void)detachClient;
-(void)setCFChallenge:(CFURLAuthChallengeRef)arg1 ;
-(CFURLAuthChallengeRef)cfChallenge;
@end

