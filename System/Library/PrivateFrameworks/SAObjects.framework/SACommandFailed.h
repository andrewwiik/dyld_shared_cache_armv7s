/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
@property (nonatomic,@dynamic,copy) NSString * appId; 
@property (nonatomic,@dynamic,copy) NSArray * callbacks; 
+(id)commandFailed;
+(id)commandFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandFailedWithErrorCode:(long long)arg1 ;
+(id)commandFailedWithReason:(id)arg1 ;
-(id)groupIdentifier;
-(void)setReason:(id)arg1 ;
-(id)reason;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)initWithErrorCode:(long long)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
@end

