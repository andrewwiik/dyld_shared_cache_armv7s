/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSData, NSArray;

@interface MCMDMPayload : MCPayload {

	NSString* _identityUUID;
	NSData* _identityPersistentID;
	bool _useDevelopmentAPNS;
	NSString* _topic;
	NSString* _serverURLString;
	NSString* _checkInURLString;
	int _accessRights;
	bool _signMessage;
	bool _checkOutWhenRemoved;

}

@property (nonatomic,readonly) NSString * identityUUID;                                 //@synthesize identityUUID=_identityUUID - In the implementation block
@property (nonatomic,retain) NSData * identityPersistentID;                             //@synthesize identityPersistentID=_identityPersistentID - In the implementation block
@property (nonatomic,readonly) NSString * topic;                                        //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) NSString * serverURLString;                              //@synthesize serverURLString=_serverURLString - In the implementation block
@property (nonatomic,readonly) bool useDevelopmentAPNS;                                 //@synthesize useDevelopmentAPNS=_useDevelopmentAPNS - In the implementation block
@property (nonatomic,readonly) NSString * checkInURLString;                             //@synthesize checkInURLString=_checkInURLString - In the implementation block
@property (nonatomic,readonly) int accessRights;                                        //@synthesize accessRights=_accessRights - In the implementation block
@property (nonatomic,readonly) NSArray * localizedAccessRightDescriptions; 
@property (nonatomic,readonly) bool signMessage;                                        //@synthesize signMessage=_signMessage - In the implementation block
@property (nonatomic,readonly) bool checkOutWhenRemoved;                                //@synthesize checkOutWhenRemoved=_checkOutWhenRemoved - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(void).cxx_destruct;
-(id)topic;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)_invalidRightsError;
-(id)_invalidTopicError;
-(id)_nonHTTPSURLErrorForField:(id)arg1 ;
-(id)localizedAccessRightDescriptions;
-(id)identityUUID;
-(id)identityPersistentID;
-(void)setIdentityPersistentID:(id)arg1 ;
-(id)serverURLString;
-(bool)useDevelopmentAPNS;
-(id)checkInURLString;
-(int)accessRights;
-(bool)signMessage;
-(bool)checkOutWhenRemoved;
@end

