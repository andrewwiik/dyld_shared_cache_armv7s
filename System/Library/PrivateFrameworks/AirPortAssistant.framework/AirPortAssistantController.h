/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AirPortAssistantController : NSObject {

	id _delegate;
	id _viewController;
	id _context;
	NSString* _configuredSSID;

}

@property (assign,nonatomic) <AirPortAssistantControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (retain) id viewController;                                                      //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSString * configuredSSID;                                              //@synthesize configuredSSID=_configuredSSID - In the implementation block
+(void)downloadAssetsCancel;
+(void)downloadAssetsIfNeeded;
+(id)sharedInstance;
+(bool)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(bool)arg3 ;
+(id)assistantUIViewControllerWithParameters:(id)arg1 ;
+(void)cancelAirPortAssistantController;
+(bool)isAirPlayDevice:(id)arg1 ;
+(bool)isSTAOnlyDevice:(id)arg1 ;
+(bool)isGenericMFiAccessory:(id)arg1 ;
+(bool)isUnconfiguredDevice:(id)arg1 ;
+(id)unconfiguredDeviceName:(id)arg1 ;
+(id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2 ;
+(bool)launchAUForDevice:(id)arg1 getAUFromAppStore:(bool)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)assistantCompleteWithResult:(int)arg1 ;
-(void)setConfiguredSSID:(id)arg1 ;
-(id)configuredSSID;
@end

