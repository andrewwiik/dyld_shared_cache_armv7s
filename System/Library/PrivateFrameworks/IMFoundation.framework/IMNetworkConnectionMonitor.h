/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMConnectionMonitor.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMReachabilityDelegate.h>

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {

	bool _isConnected;
	bool _isSleeping;
	IMReachability* _hostReachability;
	IMReachability* _ipReachability;
	unsigned long long _hostFlags;
	unsigned long long _ipFlags;

}

@property (nonatomic,retain) IMReachability * _hostReachability;              //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) IMReachability * _ipReachability;                //@synthesize ipReachability=_ipReachability - In the implementation block
@property (assign,nonatomic) unsigned long long _hostFlags;                   //@synthesize hostFlags=_hostFlags - In the implementation block
@property (assign,nonatomic) unsigned long long _ipFlags;                     //@synthesize ipFlags=_ipFlags - In the implementation block
@property (assign,nonatomic) bool _isConnected;                               //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) bool _isSleeping;                                //@synthesize isSleeping=_isSleeping - In the implementation block
-(void)dealloc;
-(void)clear;
-(bool)isImmediatelyReachable;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)goDisconnected;
-(void)_clearReachability:(id*)arg1 flags:(unsigned long long*)arg2 ;
-(void)_doCallbackNow;
-(void)_doCallbackLater;
-(void)_networkManagedUpdated:(id)arg1 ;
-(void)_setupReachability;
-(id)_hostReachability;
-(void)set_hostReachability:(id)arg1 ;
-(id)_ipReachability;
-(void)set_ipReachability:(id)arg1 ;
-(unsigned long long)_hostFlags;
-(void)set_hostFlags:(unsigned long long)arg1 ;
-(unsigned long long)_ipFlags;
-(void)set_ipFlags:(unsigned long long)arg1 ;
-(bool)_isConnected;
-(void)set_isConnected:(bool)arg1 ;
-(bool)_isSleeping;
-(void)set_isSleeping:(bool)arg1 ;
-(void)systemDidWake;
-(void)systemWillSleep;
-(void)_setup;
@end

