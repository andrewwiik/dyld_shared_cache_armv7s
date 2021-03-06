/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <MobileCoreServices/LSApplicationWorkspaceObserverProtocol.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>
#import <AppLaunchStats/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, LSApplicationWorkspace, NSMutableDictionary;

@interface AppLaunchStatsAppWorkSpace : NSObject <LSApplicationWorkspaceObserverProtocol, DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject<OS_dispatch_queue>* wsQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	/*^block*/ id callback;
	LSApplicationWorkspace* appWorkSpace;
	NSMutableDictionary* uninstalledApps;

}
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void).cxx_destruct;
-(void)save:(id)arg1 ;
-(void)logAll:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)saveContext:(id)arg1 ;
-(void)restore:(id)arg1 ;
-(void)deleteExpiredApps;
-(bool)isInUninstalledList:(id)arg1 ;
-(id)init:(/*^block*/ id)arg1 ;
@end

