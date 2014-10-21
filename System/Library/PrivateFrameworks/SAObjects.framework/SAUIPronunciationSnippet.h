/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString;

@interface SAUIPronunciationSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * cancelCommands; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSArray * pronunciations; 
@property (nonatomic,copy) NSArray * selectNoneCommands; 
@property (nonatomic,copy) NSString * selectNoneText; 
+(id)pronunciationSnippet;
+(id)pronunciationSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)orthography;
-(id)encodedClassName;
-(void)setOrthography:(id)arg1 ;
-(id)interactionId;
-(void)setInteractionId:(id)arg1 ;
-(id)cancelCommands;
-(void)setCancelCommands:(id)arg1 ;
-(id)pronunciations;
-(void)setPronunciations:(id)arg1 ;
-(id)selectNoneCommands;
-(void)setSelectNoneCommands:(id)arg1 ;
-(id)selectNoneText;
-(void)setSelectNoneText:(id)arg1 ;
@end

