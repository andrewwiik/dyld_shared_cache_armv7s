/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOPlace, NSString, NSDate;

@interface RTLOIDisplayInfo : NSObject {

	int _style;
	long long _type;
	GEOPlace* _urlPlace;
	NSString* _unknownTypeName;
	double _eta;
	NSDate* _arrival;
	NSDate* _deparature;

}

@property (nonatomic,readonly) int style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) GEOPlace * urlPlace;                     //@synthesize urlPlace=_urlPlace - In the implementation block
@property (nonatomic,readonly) NSString * unknownTypeName;              //@synthesize unknownTypeName=_unknownTypeName - In the implementation block
@property (nonatomic,readonly) double eta;                              //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSDate * arrival;                        //@synthesize arrival=_arrival - In the implementation block
@property (nonatomic,readonly) NSDate * deparature;                     //@synthesize deparature=_deparature - In the implementation block
-(id)description;
-(long long)type;
-(int)style;
-(id)localizedDescription;
-(void).cxx_destruct;
-(id)initWithDurationStyle:(int)arg1 type:(long long)arg2 urlPlace:(id)arg3 unknownTypeName:(id)arg4 eta:(double)arg5 ;
-(id)initWithArrivalStyle:(int)arg1 type:(long long)arg2 urlPlace:(id)arg3 unknownTypeName:(id)arg4 arrival:(id)arg5 departure:(id)arg6 ;
-(bool)isEquivalentToDisplayInfo:(id)arg1 ;
-(id)initWithStyle:(int)arg1 type:(long long)arg2 urlPlace:(id)arg3 unknownTypeName:(id)arg4 eta:(double)arg5 arrival:(id)arg6 departure:(id)arg7 ;
-(id)urlPlace;
-(id)unknownTypeName;
-(double)eta;
-(id)arrival;
-(id)deparature;
-(id)mapsURL;
@end

