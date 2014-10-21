/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VPNPreferences/VPNPreferences-Structs.h>
@class VPNConnection, NSString, NSMutableDictionary, NSMutableArray, NSArray;

@interface VPNConnectionStore : NSObject {

	bool _currentConnectionHasBeenSet;
	VPNConnection* _currentConnection;
	NSString* _activeVPNID;
	NSMutableDictionary* _connectionDict;
	bool _ignoreVPNChangedNotification;
	bool _activeVPNIDLoaded;
	unsigned _vpnServiceCountDirty;
	unsigned _vpnServiceCount;
	NSMutableArray* _vpnServices;
	NSArray* _managedServices;

}
+(id)sharedInstance;
+(id)localizedStringForVPNType:(int)arg1 ;
+(id)localizedStringForPPTPEncryptionType:(int)arg1 ;
+(CFDictionaryRef)createAllVPNByUserDefinedNamesDictionary;
-(id)proxyType:(SCNetworkServiceRef)arg1 ;
-(id)proxyServer:(SCNetworkServiceRef)arg1 ;
-(id)proxyPort:(SCNetworkServiceRef)arg1 ;
-(id)proxyUsername:(SCNetworkServiceRef)arg1 ;
-(id)proxyPassword:(SCNetworkServiceRef)arg1 ;
-(id)proxyPacFile:(SCNetworkServiceRef)arg1 ;
-(bool)setOnDemandEnabled:(id)arg1 onService:(SCNetworkServiceRef)arg2 forVPNType:(int)arg3 ;
-(bool)setDisplayName:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setAuthorizationName:(id)arg1 ofService:(SCNetworkServiceRef)arg2 type:(int)arg3 ;
-(bool)setRemoteAddress:(id)arg1 ofService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(bool)setSharedSecret:(id)arg1 onService:(SCNetworkServiceRef)arg2 type:(int)arg3 ;
-(bool)setRSASecurID:(bool)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(bool)setEncryptionLevel:(id)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(bool)setGroupName:(id)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(bool)setPassword:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setSendAllTraffice:(bool)arg1 onService:(SCNetworkServiceRef)arg2 usingPreferences:(SCPreferencesRef)arg3 ;
-(bool)setCertificate:(void*)arg1 onService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(bool)setProxyType:(int)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setProxyServer:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setProxyPort:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setProxyPacFile:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setProxyAuthenticate:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setProxyUsername:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(bool)setProxyPassword:(id)arg1 onService:(SCNetworkServiceRef)arg2 ;
-(int)connectionTypeFromVPNType:(CFStringRef)arg1 ;
-(id)serviceAuthorizationName:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceRemoteAddress:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceDisplayName:(SCNetworkServiceRef)arg1 ;
-(id)serviceSharedSecret:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(bool)serviceUsesRSASecurID:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceEncryptionLevel:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(id)serviceGroupName:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(bool)serviceRequiresPassword:(SCNetworkServiceRef)arg1 ;
-(id)servicePassword:(SCNetworkServiceRef)arg1 ;
-(void*)certificate:(SCNetworkServiceRef)arg1 vpnType:(int)arg2 ;
-(bool)serviceSendsAllTraffic:(SCNetworkServiceRef)arg1 usingPreferences:(SCPreferencesRef)arg2 ;
-(id)proxyAuthenticate:(SCNetworkServiceRef)arg1 ;
-(bool)isOnDemandCapable:(SCNetworkServiceRef)arg1 ;
-(bool)onDemandEnabled:(SCNetworkServiceRef)arg1 forVPNType:(int)arg2 ;
-(bool)saveActiveVPNIDToPreferences:(id)arg1 ;
-(id)copyActiveVPNIDFromPrefs;
-(void)setPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3 ;
-(id)_passwordForGenericAccount:(id)arg1 service:(id)arg2 ;
-(void)_resetConnectionLoaded;
-(CFStringRef)vpnTypeFromConnectionType:(int)arg1 ;
-(bool)_setPlistInformation:(id)arg1 intoVPNService:(SCNetworkServiceRef)arg2 vpnType:(int)arg3 ;
-(id)passwordForServiceName:(id)arg1 accountName:(id)arg2 ;
-(void)removePasswordForServiceName:(id)arg1 accountName:(id)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(id)currentConnection;
-(void)dealloc;
-(id)init;
-(id)connectionWithServiceID:(id)arg1 ;
-(bool)isOnDemandCapableForServiceID:(id)arg1 ;
-(id)getLastConnectionCauseForServiceID:(id)arg1 ;
-(id)servicePasswordForServiceID:(id)arg1 ;
-(void)_connectionsChanged;
-(id)activeVPNID;
-(id)currentConnection:(bool)arg1 ;
-(bool)setOptions:(id)arg1 toService:(SCNetworkServiceRef)arg2 withPreferences:(SCPreferencesRef)arg3 vpnType:(int)arg4 serviceId:(id)arg5 ;
-(id)sslNameForServiceID:(id)arg1 ;
-(id)optionsForServiceID:(id)arg1 ;
-(id)vpnServicesForCurrentSet;
-(int)vpnTypeForServiceID:(id)arg1 ;
-(bool)isUserCreatedVPN:(SCNetworkServiceRef)arg1 ;
-(id)_defaultDictForType:(int)arg1 ;
-(bool)createVPNWithOptions:(id)arg1 ;
-(bool)updateVPNWithServiceID:(id)arg1 withOptions:(id)arg2 ;
-(bool)deleteVPNWithServiceID:(id)arg1 ;
-(void)setActiveVPNID:(id)arg1 ;
-(bool)isActiveVPNID:(id)arg1 ;
-(void)freeResources;
-(void)reloadVPN;
-(id)organizationForService:(SCNetworkServiceRef)arg1 ;
-(id)getPayloadDictForServiceID:(id)arg1 ;
-(id)vpnServiceCount;
-(id)sslTypeForServiceID:(id)arg1 ;
-(int)vpnTypeForService:(SCNetworkServiceRef)arg1 ;
@end

