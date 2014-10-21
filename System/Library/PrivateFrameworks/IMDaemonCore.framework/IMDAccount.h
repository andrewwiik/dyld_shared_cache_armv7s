/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class NSMutableDictionary, NSString, IMDService, IMDServiceSession, NSDictionary;

@interface IMDAccount : NSObject <IMSystemMonitorListener> {

	NSMutableDictionary* _accountDefaults;
	NSString* _account;
	IMDService* _service;
	IMDServiceSession* _session;
	NSMutableDictionary* _myStatus;
	NSDictionary* _lastPostedStatus;
	bool _isLoading;
	bool _isManaged;

}

@property (nonatomic,readonly) NSDictionary * accountDefaults;                    //@synthesize accountDefaults=_accountDefaults - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * loginID; 
@property (nonatomic,readonly) IMDService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IMDServiceSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) bool isActive; 
@property (nonatomic,readonly) bool isDisabled; 
@property (assign,nonatomic) bool isManaged;                                      //@synthesize isManaged=_isManaged - In the implementation block
@property (nonatomic,readonly) NSDictionary * status; 
@property (assign,nonatomic) bool isLoading;                                      //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) bool wasDisabledAutomatically; 
@property (nonatomic,readonly) bool shouldPublishNowPlaying; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,readonly) NSDictionary * statusToSave; 
@property (nonatomic,readonly) NSDictionary * statusToPost; 
@property (nonatomic,readonly) NSDictionary * accountInfoToPost; 
-(id)session;
-(id)service;
-(void)dealloc;
-(bool)isActive;
-(bool)isLoading;
-(id)status;
-(void)setIsLoading:(bool)arg1 ;
-(bool)isDisabled;
-(int)registrationStatus;
-(void)systemDidBecomeIdle;
-(void)systemDidBecomeUnidle;
-(bool)isManaged;
-(void)writeAccountDefaults:(id)arg1 ;
-(id)accountDefaults;
-(void)postAccountCapabilitiesToListener:(id)arg1 ;
-(id)statusToPost;
-(bool)wasDisabledAutomatically;
-(void)setWasDisabledAutomatically:(bool)arg1 ;
-(bool)shouldPublishNowPlaying;
-(void)changeStatus:(id)arg1 ;
-(void)_updateIdle;
-(id)_registrationInfo;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 ;
-(void)setIsManaged:(bool)arg1 ;
-(void)postAccountCapabilities;
-(id)accountInfoToPost;
-(void)createSessionIfNecessary;
-(void)releaseSession;
-(id)statusToSave;
-(void)tunesController:(id)arg1 playerInfoChanged:(id)arg2 ;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(id)loginID;
-(id)registrationAlertInfo;
-(id)accountID;
-(int)registrationError;
@end

