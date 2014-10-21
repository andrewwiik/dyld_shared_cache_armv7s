/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying> {

	NSString* _name;
	NSString* _phoneticName;
	int _phoneticType;
	NSString* _shield;
	int _shieldType;
	int _signType;
	SCD_Struct_GE61 _has;

}

@property (nonatomic,readonly) bool hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) bool hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;              //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) bool hasShield; 
@property (nonatomic,retain) NSString * shield;                    //@synthesize shield=_shield - In the implementation block
@property (assign,nonatomic) bool hasShieldType; 
@property (assign,nonatomic) int shieldType;                       //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) bool hasPhoneticType; 
@property (assign,nonatomic) int phoneticType;                     //@synthesize phoneticType=_phoneticType - In the implementation block
@property (assign,nonatomic) bool hasSignType; 
@property (assign,nonatomic) int signType;                         //@synthesize signType=_signType - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(void)setPhoneticName:(id)arg1 ;
-(bool)hasPhoneticName;
-(id)phoneticName;
-(int)signType;
-(id)shield;
-(void)setShield:(id)arg1 ;
-(void)setPhoneticType:(int)arg1 ;
-(void)setHasPhoneticType:(bool)arg1 ;
-(bool)hasPhoneticType;
-(void)setSignType:(int)arg1 ;
-(void)setHasSignType:(bool)arg1 ;
-(bool)hasSignType;
-(int)phoneticType;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(bool)hasName;
-(int)shieldType;
-(bool)hasShield;
-(void)setShieldType:(int)arg1 ;
-(void)setHasShieldType:(bool)arg1 ;
-(bool)hasShieldType;
@end

