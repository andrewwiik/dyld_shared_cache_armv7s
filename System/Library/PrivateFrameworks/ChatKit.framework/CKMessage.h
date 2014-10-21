/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKMessage <NSObject>
@property (nonatomic,readonly) NSString * previewText; 
@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSAttributedString * subject; 
@property (assign,nonatomic) CKConversation * conversation; 
@property (nonatomic,readonly) IMService * service; 
@property (nonatomic,readonly) NSArray * parts; 
@property (nonatomic,readonly) NSArray * recipients; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSDate * timeRead; 
@property (nonatomic,readonly) CKEntity * sender; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) bool isFromDowngrading; 
@property (nonatomic,readonly) bool hasBeenSent; 
@property (nonatomic,readonly) bool failedSend; 
@property (nonatomic,readonly) bool wantsSendStatus; 
@property (nonatomic,readonly) bool isiMessage; 
@property (nonatomic,readonly) bool isSMS; 
@property (nonatomic,readonly) bool partiallyFailedSend; 
@property (nonatomic,readonly) bool isPlaceholder; 
@property (nonatomic,readonly) bool isTypingIndicator; 
@property (nonatomic,readonly) bool isDelivered; 
@property (nonatomic,readonly) bool isWaitingForDelivery; 
@property (nonatomic,readonly) bool isFromFilteredSender; 
@property (nonatomic,readonly) bool isOutgoing; 
@property (nonatomic,readonly) bool isFromMe; 
@property (nonatomic,readonly) bool supportsDeliveryReceipts; 
@property (nonatomic,readonly) bool isRead; 
@property (nonatomic,readonly) bool hasAttachments; 
@property (nonatomic,readonly) bool shouldUseSeparateSubject; 
@property (nonatomic,readonly) bool isToEmailAddress; 
@property (nonatomic,readonly) bool shouldPlayReceivedTone; 
@property (nonatomic,readonly) unsigned long long messagePartCount; 
@property (nonatomic,readonly) long long sequenceNumber; 
@property (nonatomic,readonly) BOOL outgoingBubbleColor; 
@property (nonatomic,readonly) long long rowID; 
@property (nonatomic,readonly) float percentComplete; 
@property (nonatomic,readonly) long long pendingCount; 
@property (nonatomic,readonly) long long sentCount; 
@property (nonatomic,readonly) long long failedSendCount; 
@required
-(id)service;
-(long long)rowID;
-(long long)sequenceNumber;
-(bool)hasAttachments;
-(float)percentComplete;
-(id)date;
-(id)sender;
-(id)subject;
-(id)conversation;
-(void)setConversation:(id)arg1;
-(bool)isOutgoing;
-(bool)isRead;
-(id)previewText;
-(BOOL)outgoingBubbleColor;
-(bool)shouldUseSeparateSubject;
-(bool)wantsSendStatus;
-(bool)failedSend;
-(bool)hasBeenSent;
-(bool)isFromMe;
-(long long)pendingCount;
-(id)timeRead;
-(long long)failedSendCount;
-(long long)sentCount;
-(bool)isDelivered;
-(bool)partiallyFailedSend;
-(bool)isiMessage;
-(void)loadParts;
-(id)parts;
-(unsigned long long)messagePartCount;
-(bool)isSMS;
-(void)deleteMessageParts:(id)arg1;
-(void)resetParts;
-(bool)isFromDowngrading;
-(void)setIsFromDowngrading:(bool)arg1;
-(bool)isWaitingForDelivery;
-(bool)isFromFilteredSender;
-(bool)supportsDeliveryReceipts;
-(bool)isToEmailAddress;
-(bool)shouldPlayReceivedTone;
-(id)guid;
-(bool)isPlaceholder;
-(id)address;
-(id)error;
-(id)recipients;
-(bool)isTypingIndicator;
@end

