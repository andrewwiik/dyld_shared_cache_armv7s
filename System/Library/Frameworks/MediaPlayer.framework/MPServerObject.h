/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPServerObject : NSObject {

	int _clientPID;
	SCD_Struct_MP14* _clientAuditToken;

}

@property (nonatomic,readonly) int clientPID;                                  //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP14* clientAuditToken;              //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
+(id)_center;
-(void)_registerNotificationsForSelectors;
-(id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(SCD_Struct_MP14*)arg3 ;
-(SCD_Struct_MP14*)clientAuditToken;
-(id)init;
-(int)clientPID;
@end

