/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation {

	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _replyDate;
	unsigned char _recipientIndex;

}

@property (assign,nonatomic) unsigned char recipientIndex;                   //@synthesize recipientIndex=_recipientIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * replyDate;                             //@synthesize replyDate=_replyDate - In the implementation block
+(id)secureCodedPropertyKeys;
-(unsigned char)recipientIndex;
-(id)localizableMessage;
-(void)setLocalizableMessage:(id)arg1 ;
-(void)setRecipientIndex:(unsigned char)arg1 ;
-(id)replyDate;
-(void)setReplyDate:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
@end

