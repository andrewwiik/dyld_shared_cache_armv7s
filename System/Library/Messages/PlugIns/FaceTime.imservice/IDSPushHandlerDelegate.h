/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSPushHandlerDelegate <NSObject>
@optional
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;
@end

