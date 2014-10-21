/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface VoiceChatSessionBeaconState : NSObject {

	tagVoiceChatBeacon* lastReceivedBeacon;
	unsigned sentState;
	unsigned receivedState;
	bool needsSend;
	unsigned typeToSend;

}

@property (assign,nonatomic) unsigned sentState; 
@property (assign,nonatomic) unsigned receivedState; 
@property (assign,nonatomic) bool needsSend; 
@property (assign,nonatomic) unsigned typeToSend; 
-(void)dealloc;
-(id)init;
-(tagVoiceChatBeacon*)lastReceivedBeacon;
-(void)setLastReceivedBeacon:(tagVoiceChatBeacon*)arg1 ;
-(unsigned)sentState;
-(void)setSentState:(unsigned)arg1 ;
-(unsigned)receivedState;
-(void)setReceivedState:(unsigned)arg1 ;
-(bool)needsSend;
-(void)setNeedsSend:(bool)arg1 ;
-(unsigned)typeToSend;
-(void)setTypeToSend:(unsigned)arg1 ;
@end
