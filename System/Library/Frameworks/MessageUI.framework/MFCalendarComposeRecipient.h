/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {

	NSString* _calAttendeeName;
	id _participant;

}

@property (nonatomic,retain) id participant; 
-(void)setCalAttendeeName:(id)arg1 ;
-(id)initWithComposeRecipient:(id)arg1 ;
-(void)setParticipant:(id)arg1 ;
-(id)participant;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)displayString;
@end
