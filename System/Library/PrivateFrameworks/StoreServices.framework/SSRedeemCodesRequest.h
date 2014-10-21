/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class SSAuthenticationContext, NSArray;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	NSArray* _redeemCodes;
	bool _headless;
	bool _cameraRecognized;

}

@property (readonly) NSArray * redeemCodes; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) bool headless;                                              //@synthesize headless=_headless - In the implementation block
@property (assign) bool cameraRecognized;                                      //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)setCameraRecognized:(bool)arg1 ;
-(id)initWithRedeemCodes:(id)arg1 ;
-(void)setHeadless:(bool)arg1 ;
-(void)startWithRedeemResponseBlock:(/*^block*/ id)arg1 ;
-(bool)cameraRecognized;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)redeemCodes;
-(bool)headless;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
@end
