/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDictionary, NSNumber, SASiriSupport, SAStarkSupport, NSArray;

@interface SAAppInfo : SADomainObject

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSDictionary * appNameMap; 
@property (nonatomic,copy) NSString * appVersion; 
@property (nonatomic,copy) NSString * displayAppName; 
@property (nonatomic,copy) NSDictionary * displayAppNameMap; 
@property (nonatomic,copy) NSNumber * nowPlayingAppWithBrowsableContent; 
@property (nonatomic,copy) NSString * providerName; 
@property (nonatomic,retain) SASiriSupport * siriSupport; 
@property (nonatomic,copy) NSString * spotlightName; 
@property (nonatomic,copy) NSDictionary * spotlightNameMap; 
@property (nonatomic,retain) SAStarkSupport * starkSupport; 
@property (nonatomic,copy) NSArray * supportedCommands; 
@property (nonatomic,copy) NSArray * supportedSchemes; 
+(id)appInfo;
+(id)appInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)appName;
-(id)providerName;
-(id)encodedClassName;
-(id)appId;
-(void)setAppId:(id)arg1 ;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)starkSupport;
-(void)setAppName:(id)arg1 ;
-(id)appNameMap;
-(void)setAppNameMap:(id)arg1 ;
-(id)appVersion;
-(void)setAppVersion:(id)arg1 ;
-(id)displayAppName;
-(void)setDisplayAppName:(id)arg1 ;
-(id)displayAppNameMap;
-(void)setDisplayAppNameMap:(id)arg1 ;
-(id)nowPlayingAppWithBrowsableContent;
-(void)setNowPlayingAppWithBrowsableContent:(id)arg1 ;
-(void)setProviderName:(id)arg1 ;
-(id)siriSupport;
-(void)setSiriSupport:(id)arg1 ;
-(id)spotlightName;
-(void)setSpotlightName:(id)arg1 ;
-(id)spotlightNameMap;
-(void)setSpotlightNameMap:(id)arg1 ;
-(void)setStarkSupport:(id)arg1 ;
-(id)supportedCommands;
-(void)setSupportedCommands:(id)arg1 ;
-(id)supportedSchemes;
-(void)setSupportedSchemes:(id)arg1 ;
@end

