/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarProvider/EKBBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface EKBBReminderProvider : EKBBDataProvider {

	NSMutableDictionary* _closedBulletins;
	bool _needsReload;
	NSObject<OS_dispatch_queue>* _loaderQueue;
	NSObject<OS_dispatch_queue>* _closedQueue;
	NSObject<OS_dispatch_queue>* _badgeCountQueue;

}
-(void)databaseChanged:(id)arg1 ;
-(void)clearAlerts;
-(void)deviceUnlocked;
-(id)emptyModalTitle;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(id)entityScheme;
-(void)_updateBadgeCount:(id)arg1 ;
-(id)_bulletinRequestForReminder:(id)arg1 ;
-(void)_handleDeclineAndRemindMessageWithUserInfo:(id)arg1 ;
-(id)modalTitleForAlertInfo:(id)arg1 ;
-(id)modalMessageForAlertInfo:(id)arg1 ;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(id)messageStringForAlert:(id)arg1 ;
-(void)alarmsDidFire:(id)arg1 ;
-(id)expirationDateForAlertInfo:(id)arg1 ;
-(void)bulletinClosed:(id)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(void)_reloadIfNeeded;
-(id)init;
-(void).cxx_destruct;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)sortDescriptors;
-(void)_reload;
@end

