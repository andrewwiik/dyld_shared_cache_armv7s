/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogGetSocialCredential.h>

@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (nonatomic,copy) NSString * consumerKey; 
@property (nonatomic,copy) NSString * consumerSecret; 
+(id)getTwitterCredential;
+(id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)consumerSecret;
-(id)consumerKey;
-(void)setConsumerKey:(id)arg1 ;
-(void)setConsumerSecret:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
@end

