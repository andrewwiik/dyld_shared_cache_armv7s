/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLFacebookRemoteSessionProtocol;
@interface SLFacebookSession : NSObject {

	<SLFacebookRemoteSessionProtocol>* _remoteSession;

}
+(id)_remoteInterface;
+(id)sharedSession;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(/*^block*/ id)arg3 ;
-(void)likeURL:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)unlikeURL:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(bool)uploadPost:(id)arg1 forPID:(int)arg2 ;
-(void)injectCompletedUploadWithCompletion:(/*^block*/ id)arg1 ;
-(void)uploadPost:(id)arg1 suppressAlerts:(bool)arg2 withPostCompletion:(/*^block*/ id)arg3 ;
-(void)uploadsInProgress:(/*^block*/ id)arg1 ;
-(void)cancelUploadWithIdentifier:(id)arg1 ;
-(void)revokeAccessTokenForAppWithID:(id)arg1 ;
-(id)tokenSecretForEntitledClientWithError:(id*)arg1 ;
-(void)testCall;
-(bool)uploadPost:(id)arg1 ;
-(void)revokeAllAccessTokensForDevice;
-(bool)uploadProfilePicture:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void).cxx_destruct;
@end

