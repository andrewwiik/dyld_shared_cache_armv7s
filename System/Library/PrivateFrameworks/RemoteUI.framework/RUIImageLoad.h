/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSURLConnection, NSMutableData;

@interface RUIImageLoad : NSObject <NSURLConnectionDelegate> {

	NSURL* _URL;
	NSURLConnection* _connection;
	NSMutableData* _imageData;
	bool _invalidResponse;

}
-(void)dealloc;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_createImage;
-(void)_loadFinished;
-(bool)receivedValidResponse:(id)arg1 ;
@end

