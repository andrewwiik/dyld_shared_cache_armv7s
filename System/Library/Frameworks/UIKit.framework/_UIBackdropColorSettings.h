/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _UIBackdropViewSettings, UIColor;

@interface _UIBackdropColorSettings : NSObject {

	bool _hasObservedValues;
	double _averageHue;
	double _averageSaturation;
	double _averageBrightness;
	double _contrast;
	_UIBackdropViewSettings* _parentSettings;
	double _previousAverageHue;
	double _previousAverageSaturation;
	double _previousAverageBrightness;
	double _previousContrast;

}

@property (assign,nonatomic) double averageHue;                                     //@synthesize averageHue=_averageHue - In the implementation block
@property (assign,nonatomic) double averageSaturation;                              //@synthesize averageSaturation=_averageSaturation - In the implementation block
@property (assign,nonatomic) double averageBrightness;                              //@synthesize averageBrightness=_averageBrightness - In the implementation block
@property (assign,nonatomic) double contrast;                                       //@synthesize contrast=_contrast - In the implementation block
@property (nonatomic,@dynamic,readonly) UIColor * color; 
@property (assign,nonatomic) _UIBackdropViewSettings * parentSettings;              //@synthesize parentSettings=_parentSettings - In the implementation block
@property (assign,nonatomic) double previousAverageHue;                             //@synthesize previousAverageHue=_previousAverageHue - In the implementation block
@property (assign,nonatomic) double previousAverageSaturation;                      //@synthesize previousAverageSaturation=_previousAverageSaturation - In the implementation block
@property (assign,nonatomic) double previousAverageBrightness;                      //@synthesize previousAverageBrightness=_previousAverageBrightness - In the implementation block
@property (assign,nonatomic) double previousContrast;                               //@synthesize previousContrast=_previousContrast - In the implementation block
@property (assign,nonatomic) bool hasObservedValues;                                //@synthesize hasObservedValues=_hasObservedValues - In the implementation block
-(void)setValuesFromModel:(id)arg1 ;
-(void)setAverageHue:(double)arg1 ;
-(void)setAverageSaturation:(double)arg1 ;
-(void)setAverageBrightness:(double)arg1 ;
-(void)setContrast:(double)arg1 ;
-(id)color;
-(void)setDefaultValues;
-(double)averageBrightness;
-(void)setParentSettings:(id)arg1 ;
-(double)averageHue;
-(double)averageSaturation;
-(double)contrast;
-(void)setPreviousAverageHue:(double)arg1 ;
-(void)setPreviousAverageSaturation:(double)arg1 ;
-(void)setPreviousAverageBrightness:(double)arg1 ;
-(void)setPreviousContrast:(double)arg1 ;
-(void)setHasObservedValues:(bool)arg1 ;
-(id)parentSettings;
-(double)previousAverageHue;
-(double)previousAverageSaturation;
-(double)previousAverageBrightness;
-(double)previousContrast;
-(bool)hasObservedValues;
-(bool)applyCABackdropLayerStatistics:(id)arg1 ;
@end

