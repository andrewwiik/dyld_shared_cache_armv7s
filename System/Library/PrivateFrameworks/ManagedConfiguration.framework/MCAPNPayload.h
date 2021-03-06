/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload {

	NSArray* _apnInfos;
	bool _wasInstalled;

}

@property (assign,nonatomic) bool wasInstalled;              //@synthesize wasInstalled=_wasInstalled - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)apnDomainName;
-(id)description;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2 ;
-(bool)_checkForValidContents:(id)arg1 outError:(id*)arg2 ;
-(void)_finishInitializationWithContents:(id)arg1 ;
-(id)_strippedAPNDefaults;
-(id)apnDefaults;
-(bool)wasInstalled;
-(void)setWasInstalled:(bool)arg1 ;
@end

