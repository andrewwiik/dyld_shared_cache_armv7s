/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class GEOClientCapabilities, GEOMapRegion, GEOLocation, GEODirectionsRequestFeedback, NSData, GEORouteAttributes, NSMutableArray;

@interface GEODirectionsRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	GEOClientCapabilities* _clientCapabilities;
	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	int _departureTime;
	GEODirectionsRequestFeedback* _feedback;
	unsigned _mainTransportTypeMaxRouteCount;
	NSData* _originalDirectionsResponseID;
	NSData* _originalRouteID;
	NSData* _originalRouteZilchPoints;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _serviceTags;
	unsigned _timeSinceLastRerouteRequest;
	NSMutableArray* _waypoints;
	bool _getRouteForZilchPoints;
	SCD_Struct_GE58 _has;

}

@property (nonatomic,readonly) bool hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * waypoints;                              //@synthesize waypoints=_waypoints - In the implementation block
@property (assign,nonatomic) bool hasMainTransportTypeMaxRouteCount; 
@property (assign,nonatomic) unsigned mainTransportTypeMaxRouteCount;                 //@synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount - In the implementation block
@property (nonatomic,readonly) bool hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                       //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) bool hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion;                         //@synthesize currentMapRegion=_currentMapRegion - In the implementation block
@property (nonatomic,readonly) bool hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID;                                //@synthesize originalRouteID=_originalRouteID - In the implementation block
@property (nonatomic,readonly) bool hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints;                       //@synthesize originalRouteZilchPoints=_originalRouteZilchPoints - In the implementation block
@property (assign,nonatomic) bool hasTimeSinceLastRerouteRequest; 
@property (assign,nonatomic) unsigned timeSinceLastRerouteRequest;                    //@synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest - In the implementation block
@property (nonatomic,readonly) bool hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) bool hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;                   //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
@property (assign,nonatomic) bool hasDepartureTime; 
@property (assign,nonatomic) int departureTime;                                       //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) bool hasGetRouteForZilchPoints; 
@property (assign,nonatomic) bool getRouteForZilchPoints;                             //@synthesize getRouteForZilchPoints=_getRouteForZilchPoints - In the implementation block
@property (assign,nonatomic) bool hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) bool hasFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                 //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                            //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionID:(bool)arg1 ;
-(bool)hasSessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setRouteAttributes:(id)arg1 ;
-(void)setWaypoints:(id)arg1 ;
-(void)setCurrentUserLocation:(id)arg1 ;
-(void)setCurrentMapRegion:(id)arg1 ;
-(void)setOriginalRouteID:(id)arg1 ;
-(void)setOriginalRouteZilchPoints:(id)arg1 ;
-(void)setClientCapabilities:(id)arg1 ;
-(void)setOriginalDirectionsResponseID:(id)arg1 ;
-(void)setFeedback:(id)arg1 ;
-(void)setServiceTags:(id)arg1 ;
-(void)addWaypoint:(id)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(bool)hasRouteAttributes;
-(unsigned)mainTransportTypeMaxRouteCount;
-(void)setMainTransportTypeMaxRouteCount:(unsigned)arg1 ;
-(void)setHasMainTransportTypeMaxRouteCount:(bool)arg1 ;
-(bool)hasMainTransportTypeMaxRouteCount;
-(bool)hasCurrentUserLocation;
-(bool)hasCurrentMapRegion;
-(bool)hasOriginalRouteID;
-(bool)hasOriginalRouteZilchPoints;
-(unsigned)timeSinceLastRerouteRequest;
-(void)setTimeSinceLastRerouteRequest:(unsigned)arg1 ;
-(void)setHasTimeSinceLastRerouteRequest:(bool)arg1 ;
-(bool)hasTimeSinceLastRerouteRequest;
-(bool)hasClientCapabilities;
-(bool)hasOriginalDirectionsResponseID;
-(void)setDepartureTime:(int)arg1 ;
-(void)setHasDepartureTime:(bool)arg1 ;
-(bool)hasDepartureTime;
-(bool)getRouteForZilchPoints;
-(void)setGetRouteForZilchPoints:(bool)arg1 ;
-(void)setHasGetRouteForZilchPoints:(bool)arg1 ;
-(bool)hasGetRouteForZilchPoints;
-(bool)hasFeedback;
-(id)routeAttributes;
-(id)waypoints;
-(id)currentUserLocation;
-(id)currentMapRegion;
-(id)originalRouteID;
-(id)originalRouteZilchPoints;
-(id)clientCapabilities;
-(id)originalDirectionsResponseID;
-(int)departureTime;
-(id)feedback;
-(id)serviceTags;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

