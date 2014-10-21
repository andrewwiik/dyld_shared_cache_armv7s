/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOLocationShiftFunctionResponse : NSObject {

	SCD_Struct_GE12 _originalCoordinate;
	SCD_Struct_GE12 _shiftedCoordinate;
	double _creationTime;
	double _params[9];
	double _radius;
	bool _isPolyLocationShift;
	bool _shouldUsePolyShiftFunction;

}

@property (assign,nonatomic) SCD_Struct_GE12 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
-(bool)needsNewFunctionForCoordinate:(SCD_Struct_GE12)arg1 ;
-(bool)wantsNewFunctionForCoordinate:(SCD_Struct_GE12)arg1 ;
-(SCD_Struct_GE12)shiftedCoordinateForCoordinate:(SCD_Struct_GE12)arg1 accuracy:(double*)arg2 ;
-(id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE12)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE12)arg2 ;
-(void)setOriginalCoordinate:(SCD_Struct_GE12)arg1 ;
-(SCD_Struct_GE12)originalCoordinate;
@end
