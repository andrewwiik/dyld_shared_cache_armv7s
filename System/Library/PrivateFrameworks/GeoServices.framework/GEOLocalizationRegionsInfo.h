/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDictionary, NSLock;

@interface GEOLocalizationRegionsInfo : NSObject {

	NSDictionary* _regions;
	NSLock* _regionsLock;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(bool)needsLocalizationForKey:(const GEOTileKey*)arg1 language:(id)arg2 ;
@end

