/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSData, NSHTTPURLResponse, NSDictionary;

@interface SLFacebookResponse : NSObject <NSCoding> {

	NSData* _responseData;
	NSHTTPURLResponse* _urlResponse;
	id _untypedResponseParameters;
	long long _httpErrorCode;

}

@property (readonly) NSDictionary * responseParameters; 
@property (readonly) int APIresponseErrorCode; 
@property (readonly) long long httpErrorCode;                        //@synthesize httpErrorCode=_httpErrorCode - In the implementation block
@property (readonly) NSHTTPURLResponse * urlResponse; 
-(bool)hasBadTokenError;
-(long long)httpErrorCode;
-(id)responseParameters;
-(id)untypedResponseParameters;
-(id)initWithResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(bool)hasHTTPStatusOK;
-(id)urlResponse;
-(long long)httpStatusCode;
-(int)APIresponseErrorCode;
-(bool)hasMissingTokenOrAppID;
-(id)checkpointURL;
-(bool)isBatchResponse;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void).cxx_destruct;
-(bool)hasError;
@end
