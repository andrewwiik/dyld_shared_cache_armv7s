/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PT2DGraphView.h>
#import <PrototypeTools/PTSHUDControl.h>
#import <UIKit/_UISettingsKeyPathObserver.h>

@class _UISettings, _UISettingsGroup, NSString;

@interface PTSGraphView : PT2DGraphView <PTSHUDControl, _UISettingsKeyPathObserver> {

	bool _enabled;
	int _alignment;
	_UISettings* _settings;
	_UISettingsGroup* _settingsGroup;
	NSString* _xAxisValueKeyPath;
	NSString* _yAxisValueKeyPath;
	NSString* _valueKeyPath;

}

@property (assign,nonatomic,__weak) _UISettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) NSString * valueKeyPath;                                //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (assign,nonatomic) int alignment;                                        //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) bool enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) _UISettingsGroup * settingsGroup;              //@synthesize settingsGroup=_settingsGroup - In the implementation block
@property (nonatomic,copy) NSString * xAxisValueKeyPath;                           //@synthesize xAxisValueKeyPath=_xAxisValueKeyPath - In the implementation block
@property (nonatomic,copy) NSString * yAxisValueKeyPath;                           //@synthesize yAxisValueKeyPath=_yAxisValueKeyPath - In the implementation block
+(CGRect)defaultFrame;
+(id)graphView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAlignment:(int)arg1 ;
-(void)setEnabled:(bool)arg1 ;
-(int)alignment;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(bool)enabled;
-(void).cxx_destruct;
-(void)setSettings:(id)arg1 valueKeyPath:(id)arg2 ;
-(void)setValueKeyPath:(id)arg1 ;
-(id)valueKeyPath;
-(void)setSettingsGroup:(id)arg1 ;
-(id)settingsGroup;
-(void)updateGraphData;
-(id)xAxisValueKeyPath;
-(id)yAxisValueKeyPath;
-(void)setXAxisValueKeyPath:(id)arg1 ;
-(void)setYAxisValueKeyPath:(id)arg1 ;
@end

