/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBGraphicProperties : NSObject
+(id)mapFillStyle:(const XlChartFillStyle*)arg1 xlPictureFormat:(const XlChartPicF*)arg2 state:(id)arg3 ;
+(float)widthFromLineWeightEnum:(int)arg1 ;
+(id)mapPresetDashFromPattern:(int)arg1 ;
+(id)mapFillStyleForMarker:(const XlChartMarkerStyle*)arg1 complex:(bool)arg2 state:(id)arg3 ;
+(int)oaPresetDashTypeFromLinePatternEnum:(int)arg1 ;
+(id)mapAssociatedEscherObjectstate:(id)arg1 ;
+(int)presetLinePatternEnumFromDash:(id)arg1 ;
+(int)lineWeightEnumFromWidth:(float)arg1 ;
+(id)oadStrokeFrom:(const XlChartLineStyle*)arg1 ;
+(id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const XlChartLineStyle*)arg2 xlFillStyle:(const XlChartFillStyle*)arg3 ;
+(id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType*)arg1 state:(id)arg2 ;
+(id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat*)arg1 state:(id)arg2 ;
+(id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle*)arg1 complex:(bool)arg2 state:(id)arg3 ;
@end

