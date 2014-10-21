/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@protocol YTCaptionsRequestDelegate;
@class NSMutableArray, YTVideo;

@interface YTCaptionsRequest : YTXMLHTTPRequest {

	<YTCaptionsRequestDelegate>* _delegate;
	NSMutableArray* _captions;
	YTVideo* _video;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)video;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)didAuthenticate:(id)arg1 ;
-(void)_requestCaptionsFromURL:(id)arg1 ;
-(id)initRequestingCaptionsForVideo:(id)arg1 withDelegate:(id)arg2 ;
@end

