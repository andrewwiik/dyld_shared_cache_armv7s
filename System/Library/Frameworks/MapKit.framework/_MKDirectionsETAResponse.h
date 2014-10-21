/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>

@class MKMapItem, GEODirectionsRouteResponse, NSString, GEODirectionsResponse, GEORoute, NSURL;

@interface _MKDirectionsETAResponse : NSObject <NSSecureCoding> {

	MKMapItem* _source;
	MKMapItem* _destination;
	unsigned long long _transportType;
	CGImageRef _routeImage;
	GEODirectionsRouteResponse* _geoResponse;
	CGImageRef _incidentImage;

}

@property (nonatomic,readonly) MKMapItem * source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSString * routeDescription; 
@property (nonatomic,readonly) CGImageRef routeImage;                                   //@synthesize routeImage=_routeImage - In the implementation block
@property (nonatomic,readonly) CGImageRef incidentImage; 
@property (nonatomic,readonly) NSString * incidentDescription; 
@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse; 
@property (nonatomic,readonly) GEORoute * route; 
@property (nonatomic,readonly) double typicalTrafficRatio; 
@property (nonatomic,readonly) unsigned distance; 
@property (nonatomic,readonly) NSURL * mapsURL; 
+(bool)supportsSecureCoding;
-(id)initWithDirectionsResponse:(id)arg1 sourceName:(id)arg2 destinationName:(id)arg3 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 routeImage:(CGImageRef)arg4 geoResponse:(id)arg5 ;
-(id)directionsResponse;
-(double)typicalTrafficRatio;
-(CGImageRef)routeImage;
-(CGImageRef)incidentImage;
-(id)incidentDescription;
-(id)route;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(id)source;
-(id)destination;
-(void).cxx_destruct;
-(id)mapsURL;
-(unsigned)distance;
-(id)routeDescription;
-(unsigned long long)transportType;
@end
