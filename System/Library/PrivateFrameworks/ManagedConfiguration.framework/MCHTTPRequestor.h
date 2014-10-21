/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>

@class NSURLConnection, NSMutableData, NSString, NSArray;

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate> {

	bool _didFailDueToMissingCredentials;
	bool _shouldUseResponseBodyAsLoginPrompt;
	NSURLConnection* _connection;
	NSMutableData* _responseData;
	NSString* _username;
	NSString* _password;
	NSArray* _anchorCertificates;
	/*^block*/ id _completionBlock;
	id _selfReference;

}

@property (nonatomic,retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                         //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSString * username;                                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                    //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSArray * anchorCertificates;                         //@synthesize anchorCertificates=_anchorCertificates - In the implementation block
@property (nonatomic,copy) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id selfReference;                                     //@synthesize selfReference=_selfReference - In the implementation block
@property (assign,nonatomic) bool didFailDueToMissingCredentials;                  //@synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials - In the implementation block
@property (assign,nonatomic) bool shouldUseResponseBodyAsLoginPrompt;              //@synthesize shouldUseResponseBodyAsLoginPrompt=_shouldUseResponseBodyAsLoginPrompt - In the implementation block
-(id)password;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)setPassword:(id)arg1 ;
-(id)responseData;
-(id)init;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void).cxx_destruct;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)setResponseData:(id)arg1 ;
-(void)setAnchorCertificates:(id)arg1 ;
-(void)setSelfReference:(id)arg1 ;
-(void)setDidFailDueToMissingCredentials:(bool)arg1 ;
-(void)setShouldUseResponseBodyAsLoginPrompt:(bool)arg1 ;
-(id)anchorCertificates;
-(bool)didFailDueToMissingCredentials;
-(bool)shouldUseResponseBodyAsLoginPrompt;
-(void)didFinishWithError:(id)arg1 ;
-(void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)selfReference;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end

