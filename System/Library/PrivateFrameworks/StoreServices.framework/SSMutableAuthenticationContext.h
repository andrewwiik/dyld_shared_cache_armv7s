/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSAuthenticationContext.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSString, NSDictionary, NSNumber, NSArray;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying>

@property (nonatomic,@dynamic,copy) NSString * accountName; 
@property (@dynamic) long long accountScope; 
@property (assign,getter=isAccountNameEditable,nonatomic,@dynamic) bool accountNameEditable; 
@property (assign,nonatomic,@dynamic) bool allowsRetry; 
@property (assign,nonatomic,@dynamic) bool canCreateNewAccount; 
@property (assign,nonatomic,@dynamic) bool canSetActiveAccount; 
@property (nonatomic,@dynamic,copy) NSString * initialPassword; 
@property (assign,nonatomic,@dynamic) bool persistsPasswordFallback; 
@property (nonatomic,@dynamic,copy) NSString * preferredITunesStoreClient; 
@property (assign,nonatomic,@dynamic) long long promptStyle; 
@property (nonatomic,@dynamic,copy) NSDictionary * requestParameters; 
@property (assign,nonatomic,@dynamic) bool shouldCreateNewSession; 
@property (assign,nonatomic,@dynamic) bool shouldFollowAccountButtons; 
@property (assign,nonatomic,@dynamic) bool shouldSuppressDialogs; 
@property (nonatomic,@dynamic,copy) NSDictionary * signupRequestParameters; 
@property (nonatomic,@dynamic,retain) NSNumber * requiredUniqueIdentifier; 
@property (nonatomic,@dynamic,copy) NSArray * userAgentComponents; 
@property (nonatomic,@dynamic,copy) NSDictionary * HTTPHeaders; 
@property (assign,nonatomic,@dynamic) bool allowsBioAuthentication; 
@property (assign,nonatomic,@dynamic) bool allowsBootstrapCellularData; 
@property (nonatomic,@dynamic,copy) NSString * clientIdentifierHeader; 
@property (assign,getter=isDemoAccount,nonatomic,@dynamic) bool demoAccount; 
@property (assign,nonatomic,@dynamic) bool persistsAcrossDeviceLock; 
@property (nonatomic,@dynamic,copy) NSString * reasonDescription; 
@property (assign,nonatomic,@dynamic) bool shouldIgnoreProtocol; 
@property (assign,nonatomic,@dynamic) long long tokenType; 
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setRequestParameters:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)setAccountName:(id)arg1 ;
-(void)setShouldCreateNewSession:(bool)arg1 ;
-(void)setCanCreateNewAccount:(bool)arg1 ;
-(void)setHTTPHeaders:(id)arg1 ;
-(void)setDemoAccount:(bool)arg1 ;
-(void)setAccountScope:(long long)arg1 ;
-(void)setAllowsBootstrapCellularData:(bool)arg1 ;
-(void)setAccountNameEditable:(bool)arg1 ;
-(void)setAllowsRetry:(bool)arg1 ;
-(void)setCanSetActiveAccount:(bool)arg1 ;
-(void)setInitialPassword:(id)arg1 ;
-(void)setPreferredITunesStoreClient:(id)arg1 ;
-(void)setPersistsPasswordFallback:(bool)arg1 ;
-(void)setShouldIgnoreProtocol:(bool)arg1 ;
-(void)setShouldSuppressDialogs:(bool)arg1 ;
-(void)setSignupRequestParameters:(id)arg1 ;
-(void)setUserAgentComponents:(id)arg1 ;
-(void)setAllowsBioAuthentication:(bool)arg1 ;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(void)setPersistsAcrossDeviceLock:(bool)arg1 ;
-(void)setTokenType:(long long)arg1 ;
-(void)setValuesWithAccount:(id)arg1 ;
-(void)setShouldFollowAccountButtons:(bool)arg1 ;
-(void)setRequiredUniqueIdentifier:(id)arg1 ;
-(void)setPromptStyle:(long long)arg1 ;
-(void)setReasonDescription:(id)arg1 ;
@end

