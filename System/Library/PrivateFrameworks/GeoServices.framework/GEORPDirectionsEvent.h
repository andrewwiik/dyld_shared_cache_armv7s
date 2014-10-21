/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, GEOLatLng, NSData;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {

	long long _errorCode;
	NSString* _errorDomain;
	GEOLatLng* _occurrenceLatLng;
	unsigned _occurrenceResponseIndex;
	NSData* _occurrenceRouteID;
	unsigned _occurrenceStepIndex;
	unsigned _switchedToResponseIndex;
	NSData* _switchedToRouteID;
	NSString* _synthesizedStepInstructions;
	int _synthesizedStepManeuverType;
	int _type;
	SCD_Struct_GE56 _has;

}

@property (assign,nonatomic) bool hasType; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) bool hasOccurrenceResponseIndex; 
@property (assign,nonatomic) unsigned occurrenceResponseIndex;                    //@synthesize occurrenceResponseIndex=_occurrenceResponseIndex - In the implementation block
@property (nonatomic,readonly) bool hasOccurrenceRouteID; 
@property (nonatomic,retain) NSData * occurrenceRouteID;                          //@synthesize occurrenceRouteID=_occurrenceRouteID - In the implementation block
@property (assign,nonatomic) bool hasOccurrenceStepIndex; 
@property (assign,nonatomic) unsigned occurrenceStepIndex;                        //@synthesize occurrenceStepIndex=_occurrenceStepIndex - In the implementation block
@property (nonatomic,readonly) bool hasOccurrenceLatLng; 
@property (nonatomic,retain) GEOLatLng * occurrenceLatLng;                        //@synthesize occurrenceLatLng=_occurrenceLatLng - In the implementation block
@property (assign,nonatomic) bool hasSwitchedToResponseIndex; 
@property (assign,nonatomic) unsigned switchedToResponseIndex;                    //@synthesize switchedToResponseIndex=_switchedToResponseIndex - In the implementation block
@property (nonatomic,readonly) bool hasSwitchedToRouteID; 
@property (nonatomic,retain) NSData * switchedToRouteID;                          //@synthesize switchedToRouteID=_switchedToRouteID - In the implementation block
@property (assign,nonatomic) bool hasSynthesizedStepManeuverType; 
@property (assign,nonatomic) int synthesizedStepManeuverType;                     //@synthesize synthesizedStepManeuverType=_synthesizedStepManeuverType - In the implementation block
@property (nonatomic,readonly) bool hasSynthesizedStepInstructions; 
@property (nonatomic,retain) NSString * synthesizedStepInstructions;              //@synthesize synthesizedStepInstructions=_synthesizedStepInstructions - In the implementation block
@property (nonatomic,readonly) bool hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) bool hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                 //@synthesize errorCode=_errorCode - In the implementation block
-(id)errorDomain;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasType:(bool)arg1 ;
-(void)setOccurrenceRouteID:(id)arg1 ;
-(void)setOccurrenceLatLng:(id)arg1 ;
-(void)setSwitchedToRouteID:(id)arg1 ;
-(void)setSynthesizedStepInstructions:(id)arg1 ;
-(void)setErrorDomain:(id)arg1 ;
-(void)setOccurrenceResponseIndex:(unsigned)arg1 ;
-(void)setHasOccurrenceResponseIndex:(bool)arg1 ;
-(bool)hasOccurrenceResponseIndex;
-(bool)hasOccurrenceRouteID;
-(void)setOccurrenceStepIndex:(unsigned)arg1 ;
-(void)setHasOccurrenceStepIndex:(bool)arg1 ;
-(bool)hasOccurrenceStepIndex;
-(bool)hasOccurrenceLatLng;
-(void)setSwitchedToResponseIndex:(unsigned)arg1 ;
-(void)setHasSwitchedToResponseIndex:(bool)arg1 ;
-(bool)hasSwitchedToResponseIndex;
-(bool)hasSwitchedToRouteID;
-(void)setSynthesizedStepManeuverType:(int)arg1 ;
-(void)setHasSynthesizedStepManeuverType:(bool)arg1 ;
-(bool)hasSynthesizedStepManeuverType;
-(bool)hasSynthesizedStepInstructions;
-(bool)hasErrorDomain;
-(unsigned)occurrenceResponseIndex;
-(id)occurrenceRouteID;
-(unsigned)occurrenceStepIndex;
-(id)occurrenceLatLng;
-(unsigned)switchedToResponseIndex;
-(id)switchedToRouteID;
-(int)synthesizedStepManeuverType;
-(id)synthesizedStepInstructions;
-(bool)readFrom:(id)arg1 ;
-(bool)hasType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(bool)arg1 ;
-(bool)hasErrorCode;
-(long long)errorCode;
@end

