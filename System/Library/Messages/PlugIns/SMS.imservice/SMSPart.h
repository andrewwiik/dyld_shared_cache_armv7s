/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SMSPart : NSObject {

	NSMutableArray* _textParts;
	NSMutableArray* _attachmentParts;

}

@property (nonatomic,readonly) NSArray * textParts;                    //@synthesize textParts=_textParts - In the implementation block
@property (nonatomic,readonly) NSArray * attachmentParts;              //@synthesize attachmentParts=_attachmentParts - In the implementation block
-(void)dealloc;
-(id)attachmentParts;
-(id)textParts;
-(void)addAttachmentPart:(id)arg1 ;
-(void)addTextPart:(id)arg1 ;
@end

