/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject {

	MFMailMessage* _message;
	id _content;
	bool _isDraft;

}
-(id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(bool)arg3 ;
-(void)loadAttachments;
-(void)dealloc;
@end
