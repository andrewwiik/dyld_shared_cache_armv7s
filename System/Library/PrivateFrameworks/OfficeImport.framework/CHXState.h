/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CHAutoStyling;
@class EXOfficeArtState, CHDChart, EDResources, OCPPackagePart, CHDChartType, CHDSeries, OADParagraphProperties;

@interface CHXState : NSObject {

	EXOfficeArtState* mDrawingState;
	CHDChart* mChart;
	EDResources* mResources;
	OCPPackagePart* mChartPart;
	CHDChartType* mCurrentChartType;
	CHDSeries* mCurrentSeries;
	OADParagraphProperties* mDefaultTextProperties;
	bool mDefaultTextPropertiesHaveExplicitFontSize;
	<CHAutoStyling>* mAutoStyling;
	bool mIgnoreFormulas;

}

@property (assign,nonatomic) bool ignoreFormulas; 
-(void)dealloc;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)chart;
-(id)autoStyling;
-(id)defaultTextProperties;
-(void)setChart:(id)arg1 ;
-(void)setDefaultTextProperties:(id)arg1 ;
-(id)drawingState;
-(id)currentChartType;
-(void)setDefaultTextPropertiesHaveExplicitFontSize:(bool)arg1 ;
-(void)setCurrentChartType:(id)arg1 ;
-(id)exState;
-(bool)ignoreFormulas;
-(id)currentSeries;
-(void)pushTitleTextProperties:(bool)arg1 ;
-(void)popTitleTextProperties;
-(id)initWithDrawingState:(id)arg1 ;
-(void)setChartPart:(id)arg1 ;
-(void)setCurrentSeries:(id)arg1 ;
-(id)chartPart;
-(void)setIgnoreFormulas:(bool)arg1 ;
@end

