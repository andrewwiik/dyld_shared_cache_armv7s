/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSArray;

@interface WiFiNetwork : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _dict;
	NSMutableDictionary* _customizedSettings;
	bool _available;
	bool _dirty;
	bool _needsFavoritesCheck;
	NSDictionary* _lastProxyDict;
	NSArray* _certificateChain;
	NSDictionary* _eapolProfile;
	NSArray* _requestedInformation;
	id _tlsIdentity;
	id _wapiRoot;
	id _wapiIdentity;
	bool _usernameIsManaged;
	bool _hidden;
	bool _adhoc;
	WiFiNetworkRef _HS20Network;
	bool _isHS20;
	bool _needsHS20Query;

}
-(id)password;
-(void)setPassword:(id)arg1 ;
-(int)proxyType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHidden:(bool)arg1 ;
-(id)description;
-(id)dictionary;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(bool)isSecure;
-(id)strength;
-(id)scanResultDictionary;
-(int)configType;
-(void)setConfigType:(int)arg1 userEntered:(bool)arg2 ;
-(void)setIP:(id)arg1 userEntered:(bool)arg2 ;
-(id)ip;
-(void)setSubnetMask:(id)arg1 userEntered:(bool)arg2 ;
-(id)subnetMask;
-(void)setRouter:(id)arg1 userEntered:(bool)arg2 ;
-(id)router;
-(void)setDNSServers:(id)arg1 userEntered:(bool)arg2 ;
-(void)removeCustomDNSServers;
-(id)DNSServers;
-(void)setSearchDomains:(id)arg1 userEntered:(bool)arg2 ;
-(void)removeCustomSearchDomains;
-(id)searchDomains;
-(void)setDHCPClientID:(id)arg1 userEntered:(bool)arg2 ;
-(id)DHCPClientID;
-(void)setProxy:(id)arg1 userEntered:(bool)arg2 ;
-(void)setProxyPort:(id)arg1 userEntered:(bool)arg2 ;
-(bool)proxyAuthenticated;
-(void)setProxyAuthenticated:(bool)arg1 userEntered:(bool)arg2 ;
-(void)setProxyUsername:(id)arg1 userEntered:(bool)arg2 ;
-(void)setProxyPassword:(id)arg1 userEntered:(bool)arg2 ;
-(void)setProxyType:(int)arg1 userEntered:(bool)arg2 ;
-(id)pacFile;
-(void)setPacFile:(id)arg1 userEntered:(bool)arg2 ;
-(void)removeCustomIP;
-(void)removeCustomRouter;
-(void)removeCustomSubnet;
-(void)setIPv6Enabled:(bool)arg1 userEntered:(bool)arg2 ;
-(id)IPv6Enabled;
-(bool)isAdhoc;
-(id)BSSID;
-(bool)isEnterprise;
-(long long)compareAscending:(id)arg1 ;
-(long long)compareUnconfigAscending:(id)arg1 ;
-(bool)canAttemptJoin;
-(void)setCertificateChain:(id)arg1 ;
-(void)resignActiveNetwork;
-(id)certificateChain;
-(id)eapolProfile;
-(id)eapTypes;
-(bool)requiresTLSIdentityOnly;
-(id)TLSIdentity;
-(void)setEapolProfile:(id)arg1 ;
-(int)securityMode;
-(bool)isHostspot20;
-(bool)isHostspot20Provisioned;
-(WiFiNetworkRef)HS20Data;
-(id)WAPIRoot;
-(id)WAPIIdentityPEMBlob;
-(void)setTLSIdentity:(id)arg1 ;
-(void)setWAPIRoot:(id)arg1 ;
-(void)setWAPIIdentityPEMBlob:(id)arg1 ;
-(void)setRequestedInformation:(id)arg1 ;
-(void)resetCustomSettings;
-(int)proxyTypeForDict:(id)arg1 ;
-(void)loadIPv4Dict:(id)arg1 ;
-(void)loadIPv6Dict:(id)arg1 ;
-(void)loadProxyDict:(id)arg1 ;
-(void)loadDNSDict:(id)arg1 ;
-(bool)requiresSavedPassword;
-(void)setScanResultDictionary:(id)arg1 ;
-(bool)needsHotSpot20Query;
-(void)setHS20Data:(WiFiNetworkRef)arg1 ;
-(id)HS20Badge;
-(void)setSecurityMode:(int)arg1 ;
-(void)setUsername:(id)arg1 isManaged:(bool)arg2 ;
-(id)initWithWirelessDict:(id)arg1 ;
-(void)setIPv4Dict:(id)arg1 ;
-(void)setProxyDict:(id)arg1 ;
-(void)setDNSDict:(id)arg1 ;
-(id)customSettings;
-(id)_initWithDictionary:(id)arg1 available:(bool)arg2 ;
-(void)_setCustomValue:(id)arg1 forKey:(CFStringRef)arg2 protocol:(CFStringRef)arg3 ;
-(void)setBSSID:(id)arg1 ;
-(bool)profileContainsEAPSIM:(id)arg1 ;
-(bool)profileContainsEAPAKA:(id)arg1 ;
-(bool)profileContainsCarrierEAPType:(id)arg1 ;
-(bool)requiresPasswordOnly;
-(bool)requiresUsernameAndPassword;
-(void)setNeedsFavoritesCheck:(bool)arg1 ;
-(bool)needsFavoritesCheck;
-(void)setIsFavorite:(bool)arg1 ;
-(id)lastProxyDictionary;
-(bool)isWAPIEnterprise;
-(bool)usernameIsManaged;
-(id)requestedInformation;
-(long long)compareDescending:(id)arg1 ;
-(bool)isPersonalHotspot;
-(bool)dirty;
-(bool)available;
-(void)setAvailable:(bool)arg1 ;
-(id)proxy;
-(id)proxyPort;
-(id)proxyUsername;
-(id)proxyPassword;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(bool)isFavorite;
-(int)age;
-(bool)hidden;
-(int)profile;
-(void)setProfile:(int)arg1 ;
-(void)setDirty:(bool)arg1 ;
@end

