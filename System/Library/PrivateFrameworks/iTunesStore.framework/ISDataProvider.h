/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class SSAuthenticationContext, NSNumber, SSURLBagContext, NSString, ISOperation, NSURL;

@interface ISDataProvider : NSObject <NSCopying> {

	SSAuthenticationContext* _authenticationContext;
	NSNumber* _authenticatedAccountDSID;
	SSURLBagContext* _bagContext;
	long long _contentLength;
	NSString* _contentType;
	id _output;
	ISOperation* _parentOperation;
	NSURL* _redirectURL;
	long long _errorHandlerResponseType;

}

@property (retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) SSURLBagContext * bagContext;                                 //@synthesize bagContext=_bagContext - In the implementation block
@property (assign) ISOperation * parentOperation;                                //@synthesize parentOperation=_parentOperation - In the implementation block
@property (assign) long long contentLength;                                      //@synthesize contentLength=_contentLength - In the implementation block
@property (retain) NSString * contentType;                                       //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                          //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) id output;                                                    //@synthesize output=_output - In the implementation block
@property (retain) NSURL * redirectURL;                                          //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign) long long errorHandlerResponseType;                           //@synthesize errorHandlerResponseType=_errorHandlerResponseType - In the implementation block
+(id)provider;
-(id)output;
-(long long)contentLength;
-(void)setContentLength:(long long)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setContentType:(id)arg1 ;
-(void)setup;
-(id)contentType;
-(id)bagContext;
-(void)setRedirectURL:(id)arg1 ;
-(void)setParentOperation:(id)arg1 ;
-(id)parentOperation;
-(bool)isStream;
-(void)streamCancelled;
-(long long)streamedBytes;
-(bool)isStreamComplete;
-(id)closeStream;
-(long long)errorHandlerResponseType;
-(void)resetStream;
-(void)streamDidFailWithError:(id)arg1 ;
-(bool)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(void)setBagContext:(id)arg1 ;
-(void)setAuthenticatedAccountDSID:(id)arg1 ;
-(bool)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
-(bool)runSubOperation:(id)arg1 error:(id*)arg2 ;
-(void)setErrorHandlerResponseType:(long long)arg1 ;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(void)setOutput:(id)arg1 ;
-(void)configureFromProvider:(id)arg1 ;
-(bool)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)migrateOutputFromSubProvider:(id)arg1 ;
-(bool)runAuthorizationDialog:(id)arg1 error:(id*)arg2 ;
-(id)authenticatedAccountDSID;
-(id)redirectURL;
@end

