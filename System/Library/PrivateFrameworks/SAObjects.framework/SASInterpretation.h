/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray;

@interface SASInterpretation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * tokens; 
+(id)interpretation;
+(id)interpretationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechTokens;
-(id)groupIdentifier;
-(id)tokens;
-(id)encodedClassName;
-(void)setTokens:(id)arg1 ;
@end

