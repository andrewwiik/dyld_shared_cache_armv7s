/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString;

@interface SASportsNewsItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSString * title; 
+(id)newsItem;
+(id)newsItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setLink:(id)arg1 ;
-(id)link;
-(id)encodedClassName;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end

