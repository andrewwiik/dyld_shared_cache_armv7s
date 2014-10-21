/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKTrafficSupport : NSObject
+(id)sharedTrafficSupport;
-(void)setupTrafficIncidents;
-(id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2 ;
-(long long)_convertType:(int)arg1 ;
-(CGImageRef)imageForGEOIncidentType:(int)arg1 contentScale:(double)arg2 ;
-(CGImageRef)imageForIncidentType:(long long)arg1 contentScale:(double)arg2 ;
@end

