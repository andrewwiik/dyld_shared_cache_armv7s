/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBlock, NSXPCInterface, NSDictionary;

@interface _NSXPCConnectionReplyInfo : NSObject {

	NSBlock* _replyBlock;
	/*^block*/ id _errorBlock;
	/*^block*/ id _cleanupBlock;
	SEL _selector;
	NSXPCInterface* _interface;
	NSDictionary* _userInfo;
	unsigned long long _proxyNumber;

}

@property (assign) SEL selector;                                //@synthesize selector=_selector - In the implementation block
@property (copy) NSBlock * replyBlock;                          //@synthesize replyBlock=_replyBlock - In the implementation block
@property (copy) id errorBlock;                                 //@synthesize errorBlock=_errorBlock - In the implementation block
@property (copy) id cleanupBlock;                               //@synthesize cleanupBlock=_cleanupBlock - In the implementation block
@property (retain) NSXPCInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (retain) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign) unsigned long long proxyNumber;              //@synthesize proxyNumber=_proxyNumber - In the implementation block
-(unsigned long long)proxyNumber;
-(id)replyBlock;
-(/*^block*/ id)cleanupBlock;
-(/*^block*/ id)errorBlock;
-(void)setReplyBlock:(id)arg1 ;
-(void)setErrorBlock:(/*^block*/ id)arg1 ;
-(void)setCleanupBlock:(/*^block*/ id)arg1 ;
-(void)setProxyNumber:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setSelector:(SEL)arg1 ;
-(id)userInfo;
-(SEL)selector;
-(void)setUserInfo:(id)arg1 ;
-(id)interface;
-(void)setInterface:(id)arg1 ;
@end

