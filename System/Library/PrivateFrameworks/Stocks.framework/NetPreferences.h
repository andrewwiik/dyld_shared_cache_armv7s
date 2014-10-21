/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface NetPreferences : NSObject {

	NSString* _buildVersion;
	NSString* _productVersion;
	NSString* _UUID;
	NSURL* _serviceURL;
	bool _serviceDebugging;
	bool _isNetworkReachable;

}

@property (assign,getter=isNetworkReachable,nonatomic) bool networkReachable; 
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)_cacheDirectoryPath;
-(id)init;
-(id)UUID;
-(bool)isNetworkReachable;
-(void).cxx_destruct;
-(id)serviceURL;
-(void)addStocksHeadersToPostRequest:(id)arg1 ;
-(id)financeRequestAttributes;
-(id)_stocksUserAgent;
-(id)_stocksCountryCode;
-(id)_stocksAcceptLanguage;
-(id)_urlStringWithHost:(id)arg1 ;
-(void)setupLogging;
-(void)setNetworkReachable:(bool)arg1 ;
-(id)newsServiceURLForStock:(id)arg1 ;
-(id)fullQuoteURLOverrideForStock:(id)arg1 ;
-(id)backsideLogoURL;
-(id)logoBacksideImage;
-(id)stocksYQLEnvParameter;
-(id)stocksYQLBaseURL;
-(id)signedRequestForURL:(id)arg1 parameters:(id)arg2 ;
-(id)serviceDebuggingPath;
-(id)logoButtonImage;
-(bool)serviceDebugging;
@end

