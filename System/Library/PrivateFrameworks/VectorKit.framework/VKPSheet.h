/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class VKPGlobalProperties, NSMutableArray;

@interface VKPSheet : PBCodable <NSCopying> {

	VKPGlobalProperties* _globalProperties;
	NSMutableArray* _styles;
	unsigned _version;
	SCD_Struct_VK55 _has;

}

@property (nonatomic,retain) NSMutableArray * styles;                             //@synthesize styles=_styles - In the implementation block
@property (assign,nonatomic) bool hasVersion; 
@property (assign,nonatomic) unsigned version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) bool hasGlobalProperties; 
@property (nonatomic,retain) VKPGlobalProperties * globalProperties;              //@synthesize globalProperties=_globalProperties - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(id)styles;
-(bool)readFrom:(id)arg1 ;
-(id)styleAtIndex:(unsigned long long)arg1 ;
-(void)setStyles:(id)arg1 ;
-(void)setGlobalProperties:(id)arg1 ;
-(void)addStyle:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)stylesCount;
-(void)clearStyles;
-(void)setHasVersion:(bool)arg1 ;
-(bool)hasVersion;
-(bool)hasGlobalProperties;
-(void)copyTo:(id)arg1 ;
-(id)globalProperties;
@end

