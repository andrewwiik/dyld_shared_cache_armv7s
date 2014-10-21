/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <Foundation/NSOperation.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableData, SSVURLDataConsumer, NSObject, SSMetricsPageEvent, NSMutableSet, NSURL, NSHTTPURLResponse, NSRunLoop, NSString, NSURLRequest, NSCachedURLResponse;

@interface SSVLoadURLOperation : NSOperation <NSURLConnectionDelegate> {

	NSMutableData* _dataBuffer;
	SSVURLDataConsumer* _dataConsumer;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	/*^block*/ id _expiredOutputBlock;
	bool _iTunesStoreRequest;
	SSMetricsPageEvent* _metricsPageEvent;
	/*^block*/ id _outputBlock;
	NSMutableSet* _protocolRedirectURLs;
	bool _recordsMetrics;
	NSURL* _redirectURL;
	NSHTTPURLResponse* _response;
	NSRunLoop* _runLoop;
	NSString* _storeFrontSuffix;
	bool _stopped;
	NSURLRequest* _urlRequest;

}

@property (readonly) NSURL * URL; 
@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) NSCachedURLResponse * cachedURLResponse; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (getter=isITunesStoreRequest) bool ITunesStoreRequest; 
@property (readonly) SSMetricsPageEvent * metricsPageEvent; 
@property (assign) bool recordsMetrics; 
@property (copy) NSString * storeFrontSuffix; 
@property (copy) id expiredOutputBlock; 
@property (copy) id outputBlock; 
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithURLRequest:(id)arg1 ;
-(id)URLRequest;
-(void)setITunesStoreRequest:(bool)arg1 ;
-(id)init;
-(id)URL;
-(void)cancel;
-(void)main;
-(id)initWithURL:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void).cxx_destruct;
-(void)setDataConsumer:(id)arg1 ;
-(id)dataConsumer;
-(void)dispatchSync:(/*^block*/ id)arg1 ;
-(void)dispatchAsync:(/*^block*/ id)arg1 ;
-(id)metricsPageEvent;
-(void)setStoreFrontSuffix:(id)arg1 ;
-(id)cachedURLResponse;
-(/*^block*/ id)outputBlock;
-(void)setExpiredOutputBlock:(/*^block*/ id)arg1 ;
-(void)setRecordsMetrics:(bool)arg1 ;
-(id)_initSSVLoadURLOperation;
-(bool)isITunesStoreRequest;
-(id)_newURLRequestWithRedirectURL:(id)arg1 ;
-(void)_stopRunLoop;
-(void)_runOnce;
-(void)_finishWithOutput:(id)arg1 error:(id)arg2 ;
-(void)_applyResponseToMetrics:(id)arg1 ;
-(id)_redirectURLForStoreResponse:(id)arg1 data:(id)arg2 ;
-(id)_outputForData:(id)arg1 error:(id*)arg2 ;
-(void)_releaseOutputBlocks;
-(id)storeFrontSuffix;
-(/*^block*/ id)expiredOutputBlock;
-(id)_dataForCachedResponse:(CFCachedURLResponseRef)arg1 ;
-(void)_finishWithData:(id)arg1 ;
-(void)_stopIfCancelled;
-(int)_runRunLoopUntilStopped;
-(void)_keepAliveTimer:(id)arg1 ;
-(bool)recordsMetrics;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(void)setOutputBlock:(/*^block*/ id)arg1 ;
@end

