/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {

	int _lastZilchStitchedIndex;
	GEONameInfo* _nameInfo;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,readonly) bool hasNameInfo; 
@property (nonatomic,retain) GEONameInfo * nameInfo;                      //@synthesize nameInfo=_nameInfo - In the implementation block
@property (assign,nonatomic) bool hasLastZilchStitchedIndex; 
@property (assign,nonatomic) int lastZilchStitchedIndex;                  //@synthesize lastZilchStitchedIndex=_lastZilchStitchedIndex - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setNameInfo:(id)arg1 ;
-(bool)hasNameInfo;
-(int)lastZilchStitchedIndex;
-(void)setLastZilchStitchedIndex:(int)arg1 ;
-(void)setHasLastZilchStitchedIndex:(bool)arg1 ;
-(bool)hasLastZilchStitchedIndex;
-(id)nameInfo;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

