/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * linkedAnswers; 
@property (nonatomic,copy) NSString * title; 
+(id)linkedAnswerGroup;
+(id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)encodedClassName;
-(id)linkedAnswers;
-(void)setLinkedAnswers:(id)arg1 ;
@end

