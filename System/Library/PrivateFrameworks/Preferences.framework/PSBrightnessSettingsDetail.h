/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSettingsDetail.h>

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>
+(void)setValue:(double)arg1 ;
+(id)iconImage;
+(double)currentValue;
+(id)preferencesURL;
+(double)incrementedBrightnessValue:(double)arg1 ;
+(void)incrementBrightnessValue:(double)arg1 ;
+(void)beginBrightnessAdjustmentTransaction;
+(void)endBrightnessAdjustmentTransaction;
+(void)beginObservingExternalBrightnessChanges:(/*^block*/ id)arg1 changedAction:(/*^block*/ id)arg2 ;
+(void)endObservingExternalBrightnessChanges;
+(bool)deviceSupportsAutoBrightness;
+(void)setAutoBrightnessEnabled:(bool)arg1 ;
+(bool)autoBrightnessEnabled;
@end

