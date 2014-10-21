/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/SCROHandlerProtocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {

	id _callbackDelegate;
	NSLock* _lock;
	bool isInvalid;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(int)handlePerformActionForKey:(int)arg1 trusted:(bool)arg2 ;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(bool)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(bool)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(bool)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(bool)arg4 ;
-(void)setCallbackDelegate:(id)arg1 ;
-(id)callbackDelegate;
@end

