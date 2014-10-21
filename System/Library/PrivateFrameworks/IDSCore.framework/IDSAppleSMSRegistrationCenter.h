/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSCore/IMUserNotificationListener.h>
#import <IMFoundation/IMSystemMonitorListener.h>

@class IDSPushHandler, NSMutableArray, NSDate, IMTimer;

@interface IDSAppleSMSRegistrationCenter : NSObject <IMUserNotificationListener, IMSystemMonitorListener> {

	IDSPushHandler* _pushHandler;
	long long _status;
	CTServerConnectionRef _ctServer;
	NSMutableArray* _handlers;
	NSMutableArray* _registrations;
	unsigned _numberOfSMSSent;
	unsigned _SMSRetries;
	unsigned _isSMSWarningUp : 1;
	unsigned _hasAcceptedSMSRequest : 1;
	unsigned _commCenterDead : 1;
	int _carrierShortcodeSupported;
	unsigned _smsIsAvailable : 1;
	unsigned _needsToCheckPhoneNumberState : 1;
	NSDate* _nextSendSMSDate;
	IMTimer* _lastSendSMSTimer;

}

@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) bool carrierSupportsShortCode; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(long long)status;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)systemDidStopBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(void)sendRegistration:(id)arg1 ;
-(void)_registrationStateChangedNotification:(id)arg1 ;
-(void)resetSMSCounter;
-(void)heartbeat;
-(void)_registerForDeviceCenterNotifications;
-(void)_registerForLockdownNotifications;
-(void)_registerForCarrierNotifications;
-(void)_startupCoreTelephony;
-(void)_daemonShuttingDown:(id)arg1 ;
-(void)_clearSMSDeliveryTimeout;
-(void)_unregisterForCarrierNotifications;
-(void)_unregisterForCoreTelephonyNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(CTServerConnectionRef)ctServer;
-(void)_scheduleHeartbeat:(double)arg1 ;
-(void)_deviceIDChangedNotification:(id)arg1 ;
-(void)_airplaneModeChangedNotification:(id)arg1 ;
-(void)_registerForCommCenterReadyNotifications;
-(void)_registerForCoreTelephonyNotifications;
-(void)_commCenterAlive;
-(bool)_failIfRegistrationIsNotSupported;
-(bool)_deviceCanRegisterPresently;
-(void)_lockdownStateChanged:(id)arg1 ;
-(void)_smsDeliveryClear;
-(bool)_canDeliverSMSNow;
-(void)_notifyFailureWithError:(long long)arg1 registration:(id)arg2 ;
-(void)timedOutWaitingForSMS;
-(void)_setSMSDeliveryTimeout:(double)arg1 ;
-(bool)carrierSupportsShortCode;
-(void)_sendSMSVerification;
-(void)_notifyNeedsNewIdentification:(id)arg1 ;
-(void)_checkRegistrationStatus;
-(void)_notifySuccess:(id)arg1 token:(id)arg2 ;
-(void)handleRegistrationSMSDeliveryFailed:(id)arg1 ;
-(void)_tryToSendSMSIdentification;
-(void)userNotificationDidFinish:(id)arg1 ;
-(void)_handleSMSAddressAvailable;
-(void)carrierSettingsChanged:(id)arg1 ;
-(void)handlePhoneNumberRegistrationStateChangedNotification:(id)arg1 ;
-(void)handlePhoneNumberChangedNotification:(id)arg1 ;
-(void)handleRegistrationSMSSuccessfullyDelivered:(id)arg1 ;
-(void)handleIncomingSMSForPhoneNumber:(id)arg1 signature:(id)arg2 ;
@end

