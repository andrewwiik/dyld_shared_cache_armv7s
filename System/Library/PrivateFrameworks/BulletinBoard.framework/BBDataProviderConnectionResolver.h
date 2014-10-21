/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBXPCConnectionDelegate.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class BBXPCIncomingConnection;

@interface BBDataProviderConnectionResolver : NSObject <BBXPCConnectionDelegate, XPCProxyTarget> {

	BBXPCIncomingConnection* _connection;
	/*^block*/ id _establishedBlock;

}
-(void)dealloc;
-(void)invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)connection:(id)arg1 connectionStateDidChange:(bool)arg2 ;
-(void)establishSectionID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 completion:(/*^block*/ id)arg3 ;
@end
