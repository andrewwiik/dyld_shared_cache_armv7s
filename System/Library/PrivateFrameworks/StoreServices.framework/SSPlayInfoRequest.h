/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class SSPlayInfoRequestContext, SSPlayInfoResponse;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {

	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;

}

@property (readonly) SSPlayInfoRequestContext * playInfoContext; 
@property (readonly) SSPlayInfoResponse * playInfoResponse; 
@property (assign,nonatomic,@dynamic) <SSPlayInfoRequestDelegate> * delegate; 
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)initWithPlayInfoContext:(id)arg1 ;
-(void)startWithPlayInfoResponseBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)start;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)playInfoContext;
-(id)playInfoResponse;
@end
