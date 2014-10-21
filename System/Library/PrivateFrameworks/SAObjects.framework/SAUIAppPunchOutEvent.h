/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * appDisplayName; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSString * punchOutName; 
@property (nonatomic,copy) NSURL * punchOutUri; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)appPunchOutEvent;
+(id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)bundleId;
-(void)setBundleId:(id)arg1 ;
-(id)encodedClassName;
-(id)appDisplayName;
-(void)setAppDisplayName:(id)arg1 ;
-(id)punchOutName;
-(void)setPunchOutName:(id)arg1 ;
-(id)punchOutUri;
-(void)setPunchOutUri:(id)arg1 ;
-(id)originalCommandId;
-(void)setOriginalCommandId:(id)arg1 ;
@end
