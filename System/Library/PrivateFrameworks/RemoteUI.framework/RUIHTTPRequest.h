/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>

@class NSURLRequest, NSURLConnection, NSMutableData;

@interface RUIHTTPRequest : NSObject <NSURLConnectionDataDelegate> {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	bool _invalidResponse;
	id _delegate;

}
+(id)invalidResponseError;
+(id)nonSecureConnectionNotAllowedError;
+(id)safeBaseURL;
+(id)serviceUnavailableError;
+(bool)anyRequestLoading;
-(void)parseData:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(id)request;
-(bool)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)failWithError:(id)arg1 ;
-(void)willParseData;
-(void)didParseData;
-(void)_finishedLoading;
-(bool)receivedValidResponse:(id)arg1 ;
-(void)loadStatusChanged;
-(void)_startedLoading;
-(bool)loggingEnabled;
@end
