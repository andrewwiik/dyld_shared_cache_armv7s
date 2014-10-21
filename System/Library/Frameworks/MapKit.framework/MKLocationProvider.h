/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic,__weak) <MKLocationProviderDelegate> * delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) bool locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) bool airplaneModeBlocksLocation; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) bool usesCLMapCorrection; 
@property (getter=isMonitoringRegionsAvailable,nonatomic,readonly) bool monitoringRegionsAvailable; 
@required
-(double)distanceFilter;
-(double)desiredAccuracy;
-(double)expectedGpsUpdateInterval;
-(int)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(bool)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)startMonitoringRegion:(id)arg1;
-(void)stopMonitoringRegion:(id)arg1;
-(id)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(/*^block*/ id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(/*^block*/ id)arg1;
-(bool)airplaneModeBlocksLocation;
-(bool)usesCLMapCorrection;
-(bool)isMonitoringRegionsAvailable;
-(void)setEffectiveBundle:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(id)effectiveBundle;
-(long long)activityType;
-(int)authorizationStatus;
-(void)setDistanceFilter:(double)arg1;
-(void)setDesiredAccuracy:(double)arg1;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setHeadingOrientation:(int)arg1;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(void)setActivityType:(long long)arg1;
@end

