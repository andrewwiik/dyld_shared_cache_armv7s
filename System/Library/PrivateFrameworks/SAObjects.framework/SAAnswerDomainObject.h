/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSString, SAAnswerDirectAnswer, NSArray;

@interface SAAnswerDomainObject : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,retain) SAAnswerDirectAnswer * directAnswer; 
@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)domainObject;
+(id)domainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)appPunchOut;
-(id)directAnswer;
-(void)setAppPunchOut:(id)arg1 ;
-(void)setDirectAnswer:(id)arg1 ;
-(id)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(id)arg1 ;
-(id)structuredAnswers;
-(void)setStructuredAnswers:(id)arg1 ;
@end

