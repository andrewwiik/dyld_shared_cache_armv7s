/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, AVAssetResourceLoadingRequest;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSURL* _certificateURL;
	NSURL* _keyServerURL;
	AVAssetResourceLoadingRequest* _resourceLoadingRequest;
	/*^block*/ id _responseBlock;

}

@property (retain) NSURL * certificateURL;                                              //@synthesize certificateURL=_certificateURL - In the implementation block
@property (retain) NSURL * keyServerURL;                                                //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (retain) AVAssetResourceLoadingRequest * resourceLoadingRequest;              //@synthesize resourceLoadingRequest=_resourceLoadingRequest - In the implementation block
@property (copy) id responseBlock;                                                      //@synthesize responseBlock=_responseBlock - In the implementation block
-(/*^block*/ id)responseBlock;
-(void)setResponseBlock:(/*^block*/ id)arg1 ;
-(id)certificateURL;
-(void)setCertificateURL:(id)arg1 ;
-(id)keyServerURL;
-(void)setKeyServerURL:(id)arg1 ;
-(void)setResourceLoadingRequest:(id)arg1 ;
-(id)init;
-(void)start;
-(void)main;
-(void).cxx_destruct;
-(void)_sendResponseBlockWithError:(id)arg1 ;
-(id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3 ;
-(id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1 ;
-(id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 error:(id*)arg3 ;
-(id)resourceLoadingRequest;
@end

