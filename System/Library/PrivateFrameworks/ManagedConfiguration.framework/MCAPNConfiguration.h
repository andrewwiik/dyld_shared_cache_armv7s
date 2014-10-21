/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCAPNConfiguration : NSObject {

	NSString* _name;
	NSString* _username;
	NSString* _password;
	NSString* _proxyServer;
	NSNumber* _proxyPort;
	NSString* _authenticationType;

}

@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                     //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;                       //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain) NSString * authenticationType;              //@synthesize authenticationType=_authenticationType - In the implementation block
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void).cxx_destruct;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 outError:(id*)arg2 ;
-(id)authenticationType;
-(id)proxyServer;
-(id)proxyPort;
-(void)setProxyServer:(id)arg1 ;
-(void)setProxyPort:(id)arg1 ;
-(void)setAuthenticationType:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)username;
@end

