/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VPNPreferences/VPNPreferences-Structs.h>
@class VPNConnection, NSTimer;

@interface InternetConnectPPPDialer : NSObject {

	VPNConnection* _connection;
	SCNetworkConnectionRef _connectionRef;
	NSTimer* _timer;
	CFRunLoopSourceRef _rls;
	bool _ipSec;
	bool _ssl;

}
-(void)dealloc;
-(void)startTimer;
-(SCNetworkConnectionRef)connection;
-(void)disconnect;
-(long long)elapsedTime;
-(void)notifyStatusChangedCallback;
-(void)registerStateChangedCallbackForNotifications;
-(void)stopTimer;
-(id)getSSLStatusDict;
-(id)getPPPStatusDict;
-(id)convertTimeToString:(long long)arg1 ;
-(id)getIPv4StatusDict;
-(int)generalConnectionState;
-(void)updateStatus:(id)arg1 ;
-(void)updateClock;
-(void)enablePollForStatus:(bool)arg1 ;
-(id)initWithServiceID:(id)arg1 ;
-(void)connectWithUserOptions:(id)arg1 connection:(id)arg2 ;
-(long long)waitUntilRedialTime;
-(id)elapsedTimeLocalizedString;
-(id)ipAddress;
-(id)remoteAddress;
-(long long)remainingTime;
@end

