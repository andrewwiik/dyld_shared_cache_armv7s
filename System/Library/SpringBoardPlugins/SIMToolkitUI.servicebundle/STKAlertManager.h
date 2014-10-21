/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <SpringBoardUI/SBPluginBundleController.h>

@class NSString, STKBaseAlertViewController;

@interface STKAlertManager : NSObject <SBPluginBundleController> {

	NSString* _currentRingtoneIdentifier;
	STKBaseAlertViewController* _currentAlertViewController;
	bool _wantsNextUserEvent;
	CTServerConnectionRef _serverConnection;

}

@property (nonatomic,retain) STKBaseAlertViewController * currentAlertViewController;              //@synthesize currentAlertViewController=_currentAlertViewController - In the implementation block
@property (assign,nonatomic) bool wantsNextUserEvent;                                              //@synthesize wantsNextUserEvent=_wantsNextUserEvent - In the implementation block
+(id)sharedInstance;
+(void)awakeFromBundle;
-(void)dealloc;
-(id)currentRingtoneIdentifier;
-(void)registerForAlerts;
-(id)currentAlertViewController;
-(void)setCurrentAlertViewController:(id)arg1 ;
-(CTServerConnectionRef)serverConnection;
-(void)refreshCurrentRingtone;
-(void)preferencesChanged:(id)arg1 ;
-(void)startSTKMonitor;
-(void)idleScreenShown:(id)arg1 ;
-(void)dismissCurrentlyDisplayedAlert;
-(void)userEventOccurred:(id)arg1 ;
-(id)createViewControllerForAlert:(id)arg1 ;
-(bool)wantsNextUserEvent;
-(void)setWantsNextUserEvent:(bool)arg1 ;
@end

