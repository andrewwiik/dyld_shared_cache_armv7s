/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioOptInRequest : RadioRequest {

	unsigned long long _accountIdentifier;
	SSURLConnectionRequest* _request;

}
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)init;
-(void)cancel;
-(void).cxx_destruct;
-(void)startWithOptInCompletionHandler:(/*^block*/ id)arg1 ;
@end

