/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDSeries.h>
#import <OfficeImport/CHDMarkerOwner.h>

@class CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {

	CHDMarker* mMarker;
	bool mSmooth;

}
-(void)dealloc;
-(id)marker;
-(id)initWithChart:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setSmooth:(bool)arg1 ;
-(bool)isSmooth;
@end

