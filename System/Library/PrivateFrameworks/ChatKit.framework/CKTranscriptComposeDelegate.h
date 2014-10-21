/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKTranscriptComposeDelegate <NSObject>
@optional
-(bool)canEditRecipients;

@required
-(void)didCancelComposition:(id)arg1;
-(void)showForwardedMessageParts:(id)arg1;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
-(void)showNewMessageCompositionForMessageParts:(id)arg1;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2;
-(bool)supportsAttachments;
@end

