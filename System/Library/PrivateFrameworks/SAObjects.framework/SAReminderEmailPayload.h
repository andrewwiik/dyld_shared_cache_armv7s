/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSArray * recipientsTo; 
@property (nonatomic,copy) NSString * subject; 
+(id)emailPayload;
+(id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)encodedClassName;
-(id)recipientsTo;
-(void)setRecipientsTo:(id)arg1 ;
@end

