/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSData, NSString;

@interface GEORoute : PBCodable <NSCopying> {

	SCD_Struct_GE57* _advisorys;
	SCD_Struct_GE62* _incidentEndOffsetsInRoutes;
	SCD_Struct_GE62* _incidentIndices;
	SCD_Struct_GE62* _trafficColorOffsets;
	SCD_Struct_GE62* _trafficColors;
	NSMutableArray* _advisoryNotices;
	NSData* _arrivalRouteID;
	unsigned _arrivalStepID;
	NSData* _basicPoints;
	NSData* _departureRouteID;
	unsigned _departureStepID;
	unsigned _distance;
	int _drivingSide;
	unsigned _expectedTime;
	unsigned _historicTravelTime;
	NSString* _name;
	NSString* _phoneticName;
	NSData* _routeID;
	NSMutableArray* _routeNames;
	int _routeType;
	NSMutableArray* _steps;
	int _transportType;
	NSData* _unpackedLatLngVertices;
	NSData* _zilchPoints;
	SCD_Struct_GE50 _has;

}

@property (readonly) unsigned pointCount; 
@property (assign,nonatomic) bool hasTransportType; 
@property (assign,nonatomic) int transportType;                                                 //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                            //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) bool hasName; 
@property (nonatomic,retain) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) bool hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                                           //@synthesize phoneticName=_phoneticName - In the implementation block
@property (assign,nonatomic) bool hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                 //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) bool hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) bool hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                                  //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) bool hasRouteType; 
@property (assign,nonatomic) int routeType;                                                     //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) bool hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                              //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) bool hasDrivingSide; 
@property (assign,nonatomic) int drivingSide;                                                   //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) bool hasDepartureRouteID; 
@property (nonatomic,retain) NSData * departureRouteID;                                         //@synthesize departureRouteID=_departureRouteID - In the implementation block
@property (assign,nonatomic) bool hasDepartureStepID; 
@property (assign,nonatomic) unsigned departureStepID;                                          //@synthesize departureStepID=_departureStepID - In the implementation block
@property (nonatomic,readonly) bool hasArrivalRouteID; 
@property (nonatomic,retain) NSData * arrivalRouteID;                                           //@synthesize arrivalRouteID=_arrivalRouteID - In the implementation block
@property (assign,nonatomic) bool hasArrivalStepID; 
@property (assign,nonatomic) unsigned arrivalStepID;                                            //@synthesize arrivalStepID=_arrivalStepID - In the implementation block
@property (nonatomic,readonly) bool hasBasicPoints; 
@property (nonatomic,retain) NSData * basicPoints;                                              //@synthesize basicPoints=_basicPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * advisoryNotices;                                  //@synthesize advisoryNotices=_advisoryNotices - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * routeNames;                                       //@synthesize routeNames=_routeNames - In the implementation block
@property (assign,nonatomic) bool hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                                       //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned long long advisorysCount; 
@property (nonatomic,readonly) int* advisorys; 
@property (nonatomic,readonly) bool hasUnpackedLatLngVertices; 
@property (nonatomic,retain) NSData * unpackedLatLngVertices;                                   //@synthesize unpackedLatLngVertices=_unpackedLatLngVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long incidentIndicesCount; 
@property (nonatomic,readonly) unsigned* incidentIndices; 
@property (nonatomic,readonly) unsigned long long incidentEndOffsetsInRoutesCount; 
@property (nonatomic,readonly) unsigned* incidentEndOffsetsInRoutes; 
-(CGImageRef)_mapKitImage;
-(double)distanceBetweenLocation:(SCD_Struct_GE12)arg1 nextPointIndex:(unsigned)arg2 toPointIndex:(unsigned)arg3 ;
-(double)distanceBetweenRoutePointIndex:(unsigned)arg1 toPointIndex:(unsigned)arg2 ;
-(double)distanceBetweenStep:(id)arg1 andStep:(id)arg2 ;
-(id)instructionsForStep:(id)arg1 ;
-(id)debugDescription;
-(bool)unpackLatLngVertices;
-(void)unpackZilchPoints;
-(bool)unpackBasicPoints;
-(unsigned long long)indexForStepID:(unsigned long long)arg1 ;
-(id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2 ;
-(int)formOfWayAt:(unsigned)arg1 ;
-(unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2 ;
-(id)simplifiedDescription;
-(id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(bool)arg2 uniquePointRange:(NSRange*)arg3 ;
-(id)newETARoute;
-(id)zilchDataFromStepIndex:(unsigned long long)arg1 ;
-(bool)isContingentRouteFor:(id)arg1 afterPoint:(unsigned)arg2 mainRoutes:(id)arg3 ;
-(int)transportTypeForStep:(id)arg1 ;
-(unsigned)pointCount;
-(SCD_Struct_GE12)pointAt:(unsigned)arg1 ;
-(unsigned long long)stepIndexForPointIndex:(unsigned)arg1 ;
-(void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned)arg3 ;
-(double)distanceFromPoint:(PolylineCoordinate)arg1 toPoint:(PolylineCoordinate)arg2 ;
-(void*)controlPoints;
-(int)routeType;
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
-(void)setSteps:(id)arg1 ;
-(void)setRouteID:(id)arg1 ;
-(void)setZilchPoints:(id)arg1 ;
-(void)setDepartureRouteID:(id)arg1 ;
-(void)setArrivalRouteID:(id)arg1 ;
-(void)setBasicPoints:(id)arg1 ;
-(void)setAdvisoryNotices:(id)arg1 ;
-(void)setRouteNames:(id)arg1 ;
-(void)setUnpackedLatLngVertices:(id)arg1 ;
-(void)addStep:(id)arg1 ;
-(void)addAdvisoryNotice:(id)arg1 ;
-(void)addRouteName:(id)arg1 ;
-(void)clearSteps;
-(unsigned long long)advisoryNoticesCount;
-(void)clearAdvisoryNotices;
-(id)advisoryNoticeAtIndex:(unsigned long long)arg1 ;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(unsigned long long)routeNamesCount;
-(void)clearRouteNames;
-(id)routeNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)advisorysCount;
-(void)clearAdvisorys;
-(int)advisoryAtIndex:(unsigned long long)arg1 ;
-(void)addAdvisory:(int)arg1 ;
-(unsigned long long)incidentIndicesCount;
-(void)clearIncidentIndices;
-(unsigned)incidentIndicesAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentIndices:(unsigned)arg1 ;
-(unsigned long long)incidentEndOffsetsInRoutesCount;
-(void)clearIncidentEndOffsetsInRoutes;
-(unsigned)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentEndOffsetsInRoute:(unsigned)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(bool)arg1 ;
-(bool)hasTransportType;
-(void)setHasDistance:(bool)arg1 ;
-(bool)hasDistance;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(bool)arg1 ;
-(bool)hasExpectedTime;
-(bool)hasRouteID;
-(void)setRouteType:(int)arg1 ;
-(void)setHasRouteType:(bool)arg1 ;
-(bool)hasRouteType;
-(bool)hasZilchPoints;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasDrivingSide:(bool)arg1 ;
-(bool)hasDrivingSide;
-(bool)hasDepartureRouteID;
-(void)setDepartureStepID:(unsigned)arg1 ;
-(void)setHasDepartureStepID:(bool)arg1 ;
-(bool)hasDepartureStepID;
-(bool)hasArrivalRouteID;
-(void)setArrivalStepID:(unsigned)arg1 ;
-(void)setHasArrivalStepID:(bool)arg1 ;
-(bool)hasArrivalStepID;
-(bool)hasBasicPoints;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(bool)arg1 ;
-(bool)hasHistoricTravelTime;
-(int*)advisorys;
-(void)setAdvisorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(bool)hasUnpackedLatLngVertices;
-(unsigned*)incidentIndices;
-(void)setIncidentIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)incidentEndOffsetsInRoutes;
-(void)setIncidentEndOffsetsInRoutes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)expectedTime;
-(id)routeID;
-(id)zilchPoints;
-(id)departureRouteID;
-(unsigned)departureStepID;
-(id)arrivalRouteID;
-(unsigned)arrivalStepID;
-(id)basicPoints;
-(id)advisoryNotices;
-(id)routeNames;
-(unsigned)historicTravelTime;
-(id)unpackedLatLngVertices;
-(bool)readFrom:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(bool)hasName;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(int)transportType;
-(unsigned long long)trafficColorsCount;
-(unsigned*)trafficColors;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned*)trafficColorOffsets;
-(unsigned long long)stepsCount;
-(id)steps;
-(int)drivingSide;
@end

