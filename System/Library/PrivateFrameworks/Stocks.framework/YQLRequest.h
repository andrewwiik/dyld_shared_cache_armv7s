/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURLConnection, NSURLRequest, NSMutableData;

@interface YQLRequest : NSObject <NSURLConnectionDelegate> {

	NSURLConnection* _connection;
	NSURLRequest* _request;
	NSMutableData* _rawData;

}
+(void)setShouldGenerateOfflineData:(bool)arg1 ;
+(bool)shouldGenerateOfflineData;
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
-(void)parseData:(id)arg1 ;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(bool)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void).cxx_destruct;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)failToParseWithData:(id)arg1 ;
-(id)aggregateDictionaryDomain;
@end
