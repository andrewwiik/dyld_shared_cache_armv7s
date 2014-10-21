/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationAnnotation.h>

@protocol MKUserLocationAnnotation <MKAnnotation>
@required
-(void)setAccuracy:(double)arg1;
@end


@class NSString;

@interface MKUserLocationAnnotation : NSObject <MKUserLocationAnnotation> {

	SCD_Struct_MK1 _coordinate;
	double _accuracy;

}

@property (assign,nonatomic) double accuracy;                          //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(void)setAccuracy:(double)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(void)setCoordinate:(SCD_Struct_MK1)arg1 ;
-(double)accuracy;
@end
