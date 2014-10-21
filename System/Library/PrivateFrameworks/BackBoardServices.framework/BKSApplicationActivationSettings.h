/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <BackBoardServices/BKSXPCCoding.h>

@class BKSApplicationLaunchSettings, NSURL, NSData;

@interface BKSApplicationActivationSettings : NSObject <NSCopying, BKSXPCCoding> {

	bool _animated;
	bool _suspended;
	bool _suspendedEventsOnly;
	bool _safe;
	bool _firstLaunchAfterBoot;
	bool _enableTests;
	bool _forRemoteNotification;
	bool _forLocalNotification;
	bool _flip;
	bool _statusBarHidden;
	bool _classic;
	bool _zoomInClassic;
	bool _forBackgroundContentFetching;
	bool _forBackgroundURLSession;
	int _interfaceOrientation;
	int _statusBarStyle;
	BKSApplicationLaunchSettings* _launchSettings;
	NSURL* _openURL;
	NSData* _payload;
	double _userLaunchEventTime;
	double _watchdogExtension;

}

@property (nonatomic,retain) BKSApplicationLaunchSettings * launchSettings;              //@synthesize launchSettings=_launchSettings - In the implementation block
@property (assign,nonatomic) bool animated;                                              //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) bool suspended;                                             //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) bool suspendedEventsOnly;                                   //@synthesize suspendedEventsOnly=_suspendedEventsOnly - In the implementation block
@property (nonatomic,retain) NSURL * openURL;                                            //@synthesize openURL=_openURL - In the implementation block
@property (nonatomic,retain) NSData * payload;                                           //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) bool safe;                                                  //@synthesize safe=_safe - In the implementation block
@property (assign,nonatomic) bool firstLaunchAfterBoot;                                  //@synthesize firstLaunchAfterBoot=_firstLaunchAfterBoot - In the implementation block
@property (assign,nonatomic) bool enableTests;                                           //@synthesize enableTests=_enableTests - In the implementation block
@property (assign,nonatomic) double userLaunchEventTime;                                 //@synthesize userLaunchEventTime=_userLaunchEventTime - In the implementation block
@property (assign,nonatomic) double watchdogExtension;                                   //@synthesize watchdogExtension=_watchdogExtension - In the implementation block
@property (assign,nonatomic) bool forRemoteNotification;                                 //@synthesize forRemoteNotification=_forRemoteNotification - In the implementation block
@property (assign,nonatomic) bool forLocalNotification;                                  //@synthesize forLocalNotification=_forLocalNotification - In the implementation block
@property (assign,nonatomic) bool flip;                                                  //@synthesize flip=_flip - In the implementation block
@property (assign,nonatomic) int interfaceOrientation;                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                                         //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) bool statusBarHidden;                                       //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (assign,nonatomic) bool classic;                                               //@synthesize classic=_classic - In the implementation block
@property (assign,nonatomic) bool zoomInClassic;                                         //@synthesize zoomInClassic=_zoomInClassic - In the implementation block
@property (assign,nonatomic) bool forBackgroundContentFetching;                          //@synthesize forBackgroundContentFetching=_forBackgroundContentFetching - In the implementation block
@property (assign,nonatomic) bool forBackgroundURLSession;                               //@synthesize forBackgroundURLSession=_forBackgroundURLSession - In the implementation block
-(bool)suspended;
-(void)dealloc;
-(id)description;
-(int)interfaceOrientation;
-(int)statusBarStyle;
-(bool)firstLaunchAfterBoot;
-(void)setStatusBarStyle:(int)arg1 ;
-(void)setStatusBarHidden:(bool)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)animated;
-(void)setInterfaceOrientation:(int)arg1 ;
-(void)setAnimated:(bool)arg1 ;
-(bool)flip;
-(void)setSuspended:(bool)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithSettings:(id)arg1 zone:(NSZone)arg2 ;
-(id)launchSettings;
-(bool)suspendedEventsOnly;
-(id)openURL;
-(bool)safe;
-(bool)enableTests;
-(double)userLaunchEventTime;
-(double)watchdogExtension;
-(bool)forRemoteNotification;
-(bool)forLocalNotification;
-(bool)classic;
-(bool)zoomInClassic;
-(bool)forBackgroundContentFetching;
-(bool)forBackgroundURLSession;
-(void)setLaunchSettings:(id)arg1 ;
-(void)setSuspendedEventsOnly:(bool)arg1 ;
-(void)setOpenURL:(id)arg1 ;
-(void)setSafe:(bool)arg1 ;
-(void)setFirstLaunchAfterBoot:(bool)arg1 ;
-(void)setEnableTests:(bool)arg1 ;
-(void)setUserLaunchEventTime:(double)arg1 ;
-(void)setWatchdogExtension:(double)arg1 ;
-(void)setForRemoteNotification:(bool)arg1 ;
-(void)setForLocalNotification:(bool)arg1 ;
-(void)setFlip:(bool)arg1 ;
-(void)setClassic:(bool)arg1 ;
-(void)setZoomInClassic:(bool)arg1 ;
-(void)setForBackgroundContentFetching:(bool)arg1 ;
-(void)setForBackgroundURLSession:(bool)arg1 ;
-(id)payload;
-(void)setPayload:(id)arg1 ;
-(bool)statusBarHidden;
@end

