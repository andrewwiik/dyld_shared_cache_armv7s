/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSNumber, NSString, NSData, NSArray;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSNumber* _contentIdentifier;
	NSString* _playerGUID;
	NSData* _sic;
	NSArray* _sinfs;

}

@property (nonatomic,copy) NSString * playerGUID;                     //@synthesize playerGUID=_playerGUID - In the implementation block
@property (nonatomic,copy) NSData * SICData;                          //@synthesize sic=_sic - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                           //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * contentIdentifier;              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
-(id)sinfs;
-(void)setPlayerGUID:(id)arg1 ;
-(void)setSICData:(id)arg1 ;
-(void)setSinfs:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)setContentIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)accountIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)SICData;
-(id)contentIdentifier;
-(id)playerGUID;
@end

