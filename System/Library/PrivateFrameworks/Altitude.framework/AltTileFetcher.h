/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Altitude.framework/Altitude
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Altitude/Altitude-Structs.h>
@class GEOTileLoader;

@interface AltTileFetcher : NSObject {

	GEOTileLoader* _geoTileLoader;
	KaroMapImp<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp>* _keyToJobMap;
	Mutex* _mutex;
	unsigned _numDownloads;

}
-(bool)isDownloading;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(shared_ptr<altitude::GeoServicesLoadJob>*)getJobForKey:(const GEOTileKey*)arg1 ;
-(void)fetchDataForJob:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)cancelJob:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)updateJobPriority:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)cancelRequests;
-(void)purgeExpired:(double)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
@end

