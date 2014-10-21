/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class GEOClientCapabilities, GEOLocation, NSMutableArray, NSData, GEORouteAttributes;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	GEOClientCapabilities* _clientCapabilities;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypoints;
	NSData* _directionsResponseID;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	bool _includeBetterRouteSuggestion;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,readonly) bool hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                       //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) bool hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) bool hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) bool includeBetterRouteSuggestion;                       //@synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypoints;                   //@synthesize destinationWaypoints=_destinationWaypoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                 //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) bool hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) bool hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                           //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) bool hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
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
-(void)setCurrentUserLocation:(id)arg1 ;
-(void)setClientCapabilities:(id)arg1 ;
-(void)setServiceTags:(id)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(bool)hasRouteAttributes;
-(bool)hasCurrentUserLocation;
-(bool)hasClientCapabilities;
-(id)routeAttributes;
-(id)currentUserLocation;
-(id)clientCapabilities;
-(id)serviceTags;
-(void)setRoutes:(id)arg1 ;
-(void)setDirectionsResponseID:(id)arg1 ;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)routesCount;
-(void)clearRoutes;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(bool)hasDirectionsResponseID;
-(id)directionsResponseID;
-(void)setDestinationWaypoints:(id)arg1 ;
-(void)addDestinationWaypoint:(id)arg1 ;
-(unsigned long long)destinationWaypointsCount;
-(void)clearDestinationWaypoints;
-(id)destinationWaypointAtIndex:(unsigned long long)arg1 ;
-(bool)includeBetterRouteSuggestion;
-(void)setIncludeBetterRouteSuggestion:(bool)arg1 ;
-(void)setHasIncludeBetterRouteSuggestion:(bool)arg1 ;
-(bool)hasIncludeBetterRouteSuggestion;
-(id)destinationWaypoints;
-(bool)readFrom:(id)arg1 ;
-(id)routes;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

