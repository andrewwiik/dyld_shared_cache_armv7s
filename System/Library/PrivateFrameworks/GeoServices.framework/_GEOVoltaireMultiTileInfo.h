/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, NSURL;

@interface _GEOVoltaireMultiTileInfo : NSObject {

	GEOTileKeyList* _keys;
	NSURL* _url;
	bool _useStatusCodes;

}

@property (nonatomic,readonly) bool useStatusCodes;                //@synthesize useStatusCodes=_useStatusCodes - In the implementation block
@property (nonatomic,readonly) GEOTileKeyList * keys;              //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(id)url;
-(id)keys;
-(bool)useStatusCodes;
-(id)initWithURL:(id)arg1 useStatusCodes:(bool)arg2 ;
-(void)appendKey:(GEOTileKey*)arg1 ;
@end
