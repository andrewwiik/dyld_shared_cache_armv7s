/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <PersistentConnection/PCInterfaceMonitorDelegate.h>

@class NSRecursiveLock, PCSimpleTimer, NSString, NSTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate> {

	NSRecursiveLock* _lock;
	CFDictionaryRef _delegatesAndRunLoops;
	CFSetRef _WiFiAutoAssociationDelegates;
	PCSimpleTimer* _WiFiAutoAssociationDisableTimer;
	CFSetRef _wakeOnWiFiDelegates;
	PCSimpleTimer* _wakeOnWiFiDisableTimer;
	void* _ctServerConnection;
	void* _interfaceAssertion;
	void* _wifiManager;
	int _WWANContextIdentifier;
	NSString* _WWANInterfaceName;
	bool _isWWANInterfaceUp;
	NSTimer* _inCallWWANOverrideTimer;
	bool _isWWANInterfaceDataActive;
	bool _ctIsWWANInHomeCountry;
	bool _hasWWANStatusIndicator;
	bool _isPowerStateDetectionSupported;
	bool _isWWANInterfaceInProlongedHighPowerState;
	bool _isWWANInterfaceActivationPermitted;
	double _lastActivationTime;
	int _wwanRSSI;
	bool _isInCall;
	bool _isWakeOnWiFiSupported;
	bool _isWakeOnWiFiEnabled;
	bool _shouldOverrideOnCallBehavior;

}

@property (readonly) bool isWWANInterfaceUp; 
@property (readonly) bool isWWANInHomeCountry; 
@property (readonly) bool isWWANBetterThanWiFi; 
@property (readonly) bool doesWWANInterfaceExist; 
@property (readonly) NSString * WWANInterfaceName; 
@property (readonly) bool isInternetReachableViaWiFi; 
@property (readonly) bool isWakeOnWiFiSupported; 
@property (readonly) bool isInternetReachable; 
@property (nonatomic,readonly) NSString * currentLinkQualityString; 
@property (readonly) bool isPowerStateDetectionSupported; 
@property (readonly) bool isWWANInterfaceInProlongedHighPowerState; 
@property (readonly) bool isInCall; 
@property (readonly) bool isWWANInterfaceActivationPermitted; 
@property (readonly) bool areAllNetworkInterfacesDisabled; 
+(id)sharedInstance;
-(void)handleMachMessage:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_createWiFiManager;
-(void)_adjustWiFiAutoAssociation;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_createCTConnection;
-(void)_updateWWANInterfaceUpStateLocked;
-(void)_serverCallbackLocked:(id)arg1 info:(id)arg2 ;
-(void)_mainThreadDelayedInvalidation;
-(void)_ctConnectionWasInvalidated;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceUpState;
-(void)_scheduleCalloutsForSelector:(SEL)arg1 ;
-(void)_updateCTIsWWANInHomeCountry:(bool)arg1 isWWANInterfaceDataActive:(bool)arg2 ;
-(bool)_wantsWWANInterfaceAssertion;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_inCallWWANOverrideTimerFired;
-(bool)isInternetReachable;
-(bool)_isWWANInHomeCountryLocked;
-(void)_performCalloutsForSelectorValue:(id)arg1 ;
-(bool)_isInternetReachableLocked;
-(void)_populateWakeOnWiFiCapabilityLocked;
-(void)_adjustWakeOnWiFiLocked;
-(bool)_wantsWakeOnWiFiEnabled;
-(void)_adjustWakeOnWiFi;
-(bool)doesWWANInterfaceExist;
-(bool)isWWANInterfaceActivationPermitted;
-(bool)isInCall;
-(bool)_isWiFiUsable;
-(bool)_allowBindingToWWAN;
-(void)bindCFStream:(CFReadStreamRef)arg1 toWWANInterface:(bool)arg2 ;
-(id)urlConnectionBoundToWWANInterface:(bool)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(bool)arg4 maxContentLength:(long long)arg5 startImmediately:(bool)arg6 connectionProperties:(id)arg7 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)addDelegate:(id)arg1 callbackRunLoop:(id)arg2 ;
-(void)_serverCallback:(id)arg1 info:(id)arg2 ;
-(id)currentLinkQualityString;
-(bool)_wwanIsPoorLinkQuality;
-(bool)_wifiIsPoorLinkQuality;
-(bool)isWWANBetterThanWiFi;
-(bool)isWWANInterfaceUp;
-(id)WWANInterfaceName;
-(bool)isPowerStateDetectionSupported;
-(bool)isWWANInterfaceInProlongedHighPowerState;
-(bool)isWWANInHomeCountry;
-(bool)isInternetReachableViaWiFi;
-(bool)isWakeOnWiFiSupported;
-(bool)areAllNetworkInterfacesDisabled;
-(void)_updateWWANInterfaceAssertions;
-(void)_populateWakeOnWiFiCapability;
-(void)enableWiFiAutoAssociation:(bool)arg1 forDelegate:(id)arg2 ;
-(void)enableWakeOnWiFi:(bool)arg1 forDelegate:(id)arg2 ;
-(id)dhcpT1RenewalDate;
-(id)dhcpHalfLeaseExpirationDate;
-(void)bindCFStreamToWWANInterface:(CFReadStreamRef)arg1 ;
-(id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(bool)arg3 maxContentLength:(long long)arg4 startImmediately:(bool)arg5 connectionProperties:(id)arg6 ;
-(void)removeDelegate:(id)arg1 ;
@end

