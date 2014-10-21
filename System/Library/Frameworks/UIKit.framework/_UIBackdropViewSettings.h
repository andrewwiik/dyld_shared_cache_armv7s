/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIColor, _UIBackdropView, _UIBackdropColorSettings, UIImage, NSString;

@interface _UIBackdropViewSettings : NSObject {

	bool _explicitlySetGraphicsQuality;
	bool _requiresColorStatistics;
	bool _highlighted;
	bool _selected;
	bool _enabled;
	bool _backdropVisible;
	bool _zoomsBack;
	bool _lightenGrayscaleWithSourceOver;
	bool _darkenWithSourceOver;
	bool _designMode;
	bool _usesBackdropEffectView;
	bool _usesGrayscaleTintView;
	bool _usesColorTintView;
	bool _usesColorBurnTintView;
	bool _usesContentView;
	bool _usesDarkeningTintView;
	bool _appliesTintAndBlurSettings;
	UIColor* _combinedTintColor;
	_UIBackdropView* _backdrop;
	long long _style;
	long long _graphicsQuality;
	_UIBackdropColorSettings* _colorSettings;
	long long _renderingHint;
	long long _stackingLevel;
	double _grayscaleTintLevel;
	double _grayscaleTintAlpha;
	double _grayscaleTintMaskAlpha;
	UIImage* _grayscaleTintMaskImage;
	UIColor* _colorTint;
	double _colorTintAlpha;
	double _colorTintMaskAlpha;
	UIImage* _colorTintMaskImage;
	double _colorBurnTintLevel;
	double _colorBurnTintAlpha;
	UIImage* _colorBurnTintMaskImage;
	double _darkeningTintAlpha;
	double _darkeningTintHue;
	double _darkeningTintSaturation;
	double _darkeningTintBrightness;
	UIImage* _darkeningTintMaskImage;
	double _blurRadius;
	NSString* _blurQuality;
	long long _blurHardEdges;
	double _saturationDeltaFactor;
	double _filterMaskAlpha;
	UIImage* _filterMaskImage;
	UIColor* _legibleColor;
	double _scale;
	double _statisticsInterval;
	unsigned long long _version;
	long long _suppressSettingsDidChange;
	CFRunLoopObserverRef _runLoopObserver;

}

@property (assign,nonatomic) _UIBackdropView * backdrop;                                 //@synthesize backdrop=_backdrop - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long graphicsQuality;                                  //@synthesize graphicsQuality=_graphicsQuality - In the implementation block
@property (assign,nonatomic) bool explicitlySetGraphicsQuality;                          //@synthesize explicitlySetGraphicsQuality=_explicitlySetGraphicsQuality - In the implementation block
@property (assign,nonatomic) bool requiresColorStatistics;                               //@synthesize requiresColorStatistics=_requiresColorStatistics - In the implementation block
@property (nonatomic,retain) _UIBackdropColorSettings * colorSettings;                   //@synthesize colorSettings=_colorSettings - In the implementation block
@property (assign,nonatomic) long long renderingHint;                                    //@synthesize renderingHint=_renderingHint - In the implementation block
@property (assign,nonatomic) long long stackingLevel;                                    //@synthesize stackingLevel=_stackingLevel - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) bool highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) bool selected;                            //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isEnabled,nonatomic) bool enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isBackdropVisible,nonatomic) bool backdropVisible;              //@synthesize backdropVisible=_backdropVisible - In the implementation block
@property (assign,nonatomic) bool zoomsBack;                                             //@synthesize zoomsBack=_zoomsBack - In the implementation block
@property (assign,nonatomic) double grayscaleTintLevel;                                  //@synthesize grayscaleTintLevel=_grayscaleTintLevel - In the implementation block
@property (assign,nonatomic) double grayscaleTintAlpha;                                  //@synthesize grayscaleTintAlpha=_grayscaleTintAlpha - In the implementation block
@property (assign,nonatomic) double grayscaleTintMaskAlpha;                              //@synthesize grayscaleTintMaskAlpha=_grayscaleTintMaskAlpha - In the implementation block
@property (nonatomic,retain) UIImage * grayscaleTintMaskImage;                           //@synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage - In the implementation block
@property (assign,nonatomic) bool lightenGrayscaleWithSourceOver;                        //@synthesize lightenGrayscaleWithSourceOver=_lightenGrayscaleWithSourceOver - In the implementation block
@property (nonatomic,retain) UIColor * colorTint;                                        //@synthesize colorTint=_colorTint - In the implementation block
@property (assign,nonatomic) double colorTintAlpha;                                      //@synthesize colorTintAlpha=_colorTintAlpha - In the implementation block
@property (assign,nonatomic) double colorTintMaskAlpha;                                  //@synthesize colorTintMaskAlpha=_colorTintMaskAlpha - In the implementation block
@property (nonatomic,retain) UIImage * colorTintMaskImage;                               //@synthesize colorTintMaskImage=_colorTintMaskImage - In the implementation block
@property (assign,nonatomic) double colorBurnTintLevel;                                  //@synthesize colorBurnTintLevel=_colorBurnTintLevel - In the implementation block
@property (assign,nonatomic) double colorBurnTintAlpha;                                  //@synthesize colorBurnTintAlpha=_colorBurnTintAlpha - In the implementation block
@property (nonatomic,retain) UIImage * colorBurnTintMaskImage;                           //@synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage - In the implementation block
@property (assign,nonatomic) double darkeningTintAlpha;                                  //@synthesize darkeningTintAlpha=_darkeningTintAlpha - In the implementation block
@property (assign,nonatomic) double darkeningTintHue;                                    //@synthesize darkeningTintHue=_darkeningTintHue - In the implementation block
@property (assign,nonatomic) double darkeningTintSaturation;                             //@synthesize darkeningTintSaturation=_darkeningTintSaturation - In the implementation block
@property (assign,nonatomic) double darkeningTintBrightness;                             //@synthesize darkeningTintBrightness=_darkeningTintBrightness - In the implementation block
@property (nonatomic,retain) UIImage * darkeningTintMaskImage;                           //@synthesize darkeningTintMaskImage=_darkeningTintMaskImage - In the implementation block
@property (assign,nonatomic) bool darkenWithSourceOver;                                  //@synthesize darkenWithSourceOver=_darkenWithSourceOver - In the implementation block
@property (assign,nonatomic) double blurRadius;                                          //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,copy) NSString * blurQuality;                                       //@synthesize blurQuality=_blurQuality - In the implementation block
@property (assign,nonatomic) long long blurHardEdges;                                    //@synthesize blurHardEdges=_blurHardEdges - In the implementation block
@property (assign,nonatomic,@dynamic) bool blursWithHardEdges; 
@property (assign,nonatomic) double saturationDeltaFactor;                               //@synthesize saturationDeltaFactor=_saturationDeltaFactor - In the implementation block
@property (assign,nonatomic) double filterMaskAlpha;                                     //@synthesize filterMaskAlpha=_filterMaskAlpha - In the implementation block
@property (nonatomic,retain) UIImage * filterMaskImage;                                  //@synthesize filterMaskImage=_filterMaskImage - In the implementation block
@property (nonatomic,retain) UIColor * legibleColor;                                     //@synthesize legibleColor=_legibleColor - In the implementation block
@property (nonatomic,retain) UIColor * combinedTintColor;                                //@synthesize combinedTintColor=_combinedTintColor - In the implementation block
@property (assign,nonatomic) double scale;                                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double statisticsInterval;                                  //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                 //@synthesize version=_version - In the implementation block
@property (assign,setter=setDesignMode:,nonatomic) bool designMode;                      //@synthesize designMode=_designMode - In the implementation block
@property (assign,nonatomic) bool usesBackdropEffectView;                                //@synthesize usesBackdropEffectView=_usesBackdropEffectView - In the implementation block
@property (assign,nonatomic) bool usesGrayscaleTintView;                                 //@synthesize usesGrayscaleTintView=_usesGrayscaleTintView - In the implementation block
@property (assign,nonatomic) bool usesColorTintView;                                     //@synthesize usesColorTintView=_usesColorTintView - In the implementation block
@property (assign,nonatomic) bool usesColorBurnTintView;                                 //@synthesize usesColorBurnTintView=_usesColorBurnTintView - In the implementation block
@property (assign,nonatomic) bool usesContentView;                                       //@synthesize usesContentView=_usesContentView - In the implementation block
@property (assign,nonatomic) bool usesDarkeningTintView;                                 //@synthesize usesDarkeningTintView=_usesDarkeningTintView - In the implementation block
@property (assign,nonatomic) bool appliesTintAndBlurSettings;                            //@synthesize appliesTintAndBlurSettings=_appliesTintAndBlurSettings - In the implementation block
@property (assign,nonatomic) long long suppressSettingsDidChange;                        //@synthesize suppressSettingsDidChange=_suppressSettingsDidChange - In the implementation block
@property (assign,nonatomic) CFRunLoopObserverRef runLoopObserver;                       //@synthesize runLoopObserver=_runLoopObserver - In the implementation block
+(id)settingsForStyle:(long long)arg1 ;
+(id)settingsForPrivateStyle:(long long)arg1 graphicsQuality:(long long)arg2 ;
+(id)darkeningTintColor;
+(id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2 ;
+(id)settingsForPrivateStyle:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setStyle:(long long)arg1 ;
-(double)scale;
-(id)grayscaleTintMaskImage;
-(id)colorTintMaskImage;
-(id)filterMaskImage;
-(double)blurRadius;
-(double)saturationDeltaFactor;
-(bool)usesBackdropEffectView;
-(long long)style;
-(void)setValuesFromModel:(id)arg1 ;
-(bool)requiresColorStatistics;
-(id)colorSettings;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(bool)usesGrayscaleTintView;
-(double)grayscaleTintAlpha;
-(double)grayscaleTintLevel;
-(bool)usesColorTintView;
-(id)colorTint;
-(double)colorTintAlpha;
-(void)setUsesGrayscaleTintView:(bool)arg1 ;
-(void)setUsesColorTintView:(bool)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(void)setBlurHardEdges:(long long)arg1 ;
-(void)setColorTint:(id)arg1 ;
-(bool)isSelected;
-(void)setSelected:(bool)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(double)darkeningTintAlpha;
-(void)setDarkeningTintAlpha:(double)arg1 ;
-(void)setDefaultValues;
-(void)addKeyPathObserver:(id)arg1 ;
-(void)removeKeyPathObserver:(id)arg1 ;
-(id)initWithDefaultValues;
-(void)restoreDefaultValues;
-(long long)graphicsQuality;
-(void)setRequiresColorStatistics:(bool)arg1 ;
-(void)setBackdropVisible:(bool)arg1 ;
-(void)setGrayscaleTintLevel:(double)arg1 ;
-(void)setGrayscaleTintMaskAlpha:(double)arg1 ;
-(void)setGrayscaleTintMaskImage:(id)arg1 ;
-(void)setColorTintAlpha:(double)arg1 ;
-(void)setColorTintMaskAlpha:(double)arg1 ;
-(void)setColorTintMaskImage:(id)arg1 ;
-(void)setFilterMaskAlpha:(double)arg1 ;
-(void)setFilterMaskImage:(id)arg1 ;
-(void)setUsesBackdropEffectView:(bool)arg1 ;
-(void)setLegibleColor:(id)arg1 ;
-(long long)renderingHint;
-(long long)stackingLevel;
-(void)setGraphicsQuality:(long long)arg1 ;
-(void)setUsesDarkeningTintView:(bool)arg1 ;
-(id)initWithDefaultValuesForGraphicsQuality:(long long)arg1 ;
-(void)incrementSuppressSettingsDidChange;
-(void)setExplicitlySetGraphicsQuality:(bool)arg1 ;
-(void)decrementSuppressSettingsDidChange;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setUsesContentView:(bool)arg1 ;
-(void)setStatisticsInterval:(double)arg1 ;
-(void)setAppliesTintAndBlurSettings:(bool)arg1 ;
-(void)setStackingLevel:(long long)arg1 ;
-(void)setDarkeningTintHue:(double)arg1 ;
-(void)setDarkeningTintSaturation:(double)arg1 ;
-(void)setDarkeningTintBrightness:(double)arg1 ;
-(void)setDarkeningTintMaskImage:(id)arg1 ;
-(void)setBlurQuality:(id)arg1 ;
-(void)setZoomsBack:(bool)arg1 ;
-(void)scheduleSettingsDidChangeIfNeeded;
-(void)clearRunLoopObserver;
-(bool)appliesTintAndBlurSettings;
-(bool)isBackdropVisible;
-(id)blurQuality;
-(long long)blurHardEdges;
-(double)colorTintMaskAlpha;
-(double)colorBurnTintLevel;
-(void)setColorBurnTintLevel:(double)arg1 ;
-(double)colorBurnTintAlpha;
-(void)setColorBurnTintAlpha:(double)arg1 ;
-(id)colorBurnTintMaskImage;
-(void)setColorBurnTintMaskImage:(id)arg1 ;
-(double)darkeningTintHue;
-(double)darkeningTintSaturation;
-(double)darkeningTintBrightness;
-(id)darkeningTintMaskImage;
-(bool)darkenWithSourceOver;
-(void)setDarkenWithSourceOver:(bool)arg1 ;
-(id)combinedTintColor;
-(void)setCombinedTintColor:(id)arg1 ;
-(bool)explicitlySetGraphicsQuality;
-(double)filterMaskAlpha;
-(double)grayscaleTintMaskAlpha;
-(bool)lightenGrayscaleWithSourceOver;
-(void)setLightenGrayscaleWithSourceOver:(bool)arg1 ;
-(id)legibleColor;
-(void)setRenderingHint:(long long)arg1 ;
-(double)statisticsInterval;
-(bool)usesContentView;
-(unsigned long long)version;
-(bool)zoomsBack;
-(long long)suppressSettingsDidChange;
-(void)setSuppressSettingsDidChange:(long long)arg1 ;
-(CFRunLoopObserverRef)runLoopObserver;
-(void)setRunLoopObserver:(CFRunLoopObserverRef)arg1 ;
-(id)backdrop;
-(void)setBlursWithHardEdges:(bool)arg1 ;
-(void)setStackinglevel:(long long)arg1 ;
-(void)setUsesColorBurnTintView:(bool)arg1 ;
-(bool)blursWithHardEdges;
-(void)setBackdrop:(id)arg1 ;
-(void)setColorSettings:(id)arg1 ;
-(bool)designMode;
-(void)setDesignMode:(bool)arg1 ;
-(bool)usesColorBurnTintView;
-(bool)usesDarkeningTintView;
@end

