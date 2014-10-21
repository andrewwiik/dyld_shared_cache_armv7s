/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSSet;

@interface SSDownloadPolicyApplicationState : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	NSString* _applicationIdentifier;
	NSSet* _applicationStates;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                     //@synthesize applicationStates=_applicationStates - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)applicationIdentifier;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setApplicationIdentifier:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)applicationStates;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)addApplicationState:(long long)arg1 ;
-(void)setNotRunningApplicationStates;
-(void)setApplicationStates:(id)arg1 ;
@end

