/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireMultiTileDownloader.h>

@interface GEOVoltaire3DMultiTileDownloader : GEOVoltaireMultiTileDownloader
-(id)_localizationURLIfNecessaryForTileKey:(GEOTileKey*)arg1 ;
-(GEOTileKey)_tileKeyForURL:(id)arg1 edition:(unsigned*)arg2 isLocalized:(bool*)arg3 ;
-(id)_baseURLStringForTileKey:(GEOTileKey*)arg1 ;
-(id)_urlForTileKey:(GEOTileKey*)arg1 ;
@end
