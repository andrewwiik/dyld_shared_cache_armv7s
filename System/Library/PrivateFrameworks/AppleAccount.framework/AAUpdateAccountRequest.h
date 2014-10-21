/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUpdateAccountRequest : AARequest {

	ACAccount* _account;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(void).cxx_destruct;
-(id)urlString;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
@end

