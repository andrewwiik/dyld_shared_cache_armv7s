/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSURL;

@interface YTFeedRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _videos;
	NSURL* _batchURL;
	unsigned _startIndex;
	unsigned _videosPerPage;
	unsigned _totalResults;
	bool _invalidatedToken;

}
+(int)partialFeedType;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)loadRequest:(id)arg1 withDelegate:(id)arg2 accountAuthRequired:(bool)arg3 ;
@end

