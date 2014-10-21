/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKSearchCompletion.h>

@class GEOPlaceResult, GEOSearchRequest, GEOSearchResponse, MKMapItem;

@interface MKPlaceResultSearchCompletion : MKSearchCompletion {

	GEOPlaceResult* _result;
	GEOSearchRequest* _request;
	GEOSearchResponse* _response;
	MKMapItem* _mapItem;

}
-(bool)getCoordinate:(SCD_Struct_MK1*)arg1 ;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(void)sendFeedback;
-(void)applyToPlaceSearchRequest:(id)arg1 ;
-(id)initWithPlaceResult:(id)arg1 response:(id)arg2 request:(id)arg3 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void).cxx_destruct;
-(id)displayLines;
-(id)mapItem;
@end

