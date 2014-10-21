/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CHDChart, EDCollection, CHDSeriesCollection, CHDDataLabel;

@interface CHDChartType : NSObject {

	CHDChart* mChart;
	EDCollection* mAxisIds;
	CHDSeriesCollection* mSeries;
	CHDDataLabel* mDefaultDataLabel;
	bool mVaryColors;

}
+(id)chartTypeWithChart:(id)arg1 ;
+(bool)is3DType;
-(void)dealloc;
-(bool)isHorizontal;
-(id)contentFormat;
-(id)axes;
-(id)seriesCollection;
-(id)defaultDataLabel;
-(id)chart;
-(id)initWithChart:(id)arg1 ;
-(id)defaultTitleWithResources:(id)arg1 ;
-(void)setVaryColors:(bool)arg1 ;
-(id)axisIds;
-(void)setDefaultDataLabel:(id)arg1 ;
-(int)defaultLabelPosition;
-(unsigned long long)seriesCount;
-(unsigned long long)categoryCount;
-(bool)isPlotedOnSecondaryAxis;
-(id)axisForClass:(Class)arg1 ;
-(void)setSeriesCollection:(id)arg1 ;
-(bool)isVaryColors;
@end
