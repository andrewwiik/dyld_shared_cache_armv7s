/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface GEORequestThrottler : NSObject {

	NSMapTable* _throttleMap;

}
+(id)sharedThrottler;
-(void)dealloc;
-(id)init;
-(void)clear;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(bool)allowRequest:(unsigned)arg1 toURL:(id)arg2 ;
@end

