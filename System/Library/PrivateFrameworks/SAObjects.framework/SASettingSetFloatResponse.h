/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSetNumberResponse.h>

@class SASettingEntity;

@interface SASettingSetFloatResponse : SASettingSetNumberResponse

@property (nonatomic,retain) SASettingEntity * setting; 
+(id)setFloatResponse;
+(id)setFloatResponseWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setFloatResponseWithSetting:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)initWithSetting:(id)arg1 ;
-(void)setSetting:(id)arg1 ;
-(id)setting;
@end

