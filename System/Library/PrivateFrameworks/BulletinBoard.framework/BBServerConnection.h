/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBXPCOutgoingConnection.h>

@interface BBServerConnection : BBXPCOutgoingConnection {

	int _serverListeningToken;

}
-(void)dealloc;
-(void)invalidate;
-(void)connect;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 target:(id)arg3 remoteProtocol:(id)arg4 ;
-(void)_configureRemoteProxy;
@end

