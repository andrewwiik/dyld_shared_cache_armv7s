/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * tts; 
+(id)acePronunciationItem;
+(id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)commands;
-(void)setCommands:(id)arg1 ;
-(id)encodedClassName;
-(id)tts;
-(void)setTts:(id)arg1 ;
@end
