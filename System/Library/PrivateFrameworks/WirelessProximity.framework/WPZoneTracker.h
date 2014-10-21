/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPZoneTrackerDelegate, OS_dispatch_queue;
@class XPCClient, NSObject;

@interface WPZoneTracker : NSObject <XPCClientDelegate> {

	bool _wantEntry;
	bool _wantExit;
	long long _state;
	XPCClient* _connection;
	<WPZoneTrackerDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (assign) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) <WPZoneTrackerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool wantEntry;                                         //@synthesize wantEntry=_wantEntry - In the implementation block
@property (assign,nonatomic) bool wantExit;                                          //@synthesize wantExit=_wantExit - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * queue;                              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void).cxx_destruct;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)connectionInterrupted;
-(void)changeState:(long long)arg1 ;
-(void)unregisterAllZoneChanges;
-(void)setWantEntry:(bool)arg1 ;
-(void)setWantExit:(bool)arg1 ;
-(bool)wantEntry;
-(bool)wantExit;
-(void)registerZonesFailed:(id)arg1 ;
-(void)zonesEntered:(id)arg1 ;
-(void)zonesExited:(id)arg1 ;
-(void)registerForZoneChangesMatching:(id)arg1 ;
-(void)unregisterForZoneChanges:(id)arg1 ;
-(void)getCurrentTrackedZones;
@end

