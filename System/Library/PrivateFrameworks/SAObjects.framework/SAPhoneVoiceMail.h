/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSString, NSNumber;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (nonatomic,copy) NSString * filePath; 
@property (nonatomic,copy) NSNumber * length; 
+(id)voiceMail;
+(id)voiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)length;
-(void)setLength:(id)arg1 ;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
@end

