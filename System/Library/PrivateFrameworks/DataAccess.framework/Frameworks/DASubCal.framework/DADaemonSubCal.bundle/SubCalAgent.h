/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonSubCal/DARefreshManagerDelegate.h>
#import <DADaemonSubCal/SubCalDaemonAccountDelegate.h>

@interface SubCalAgent : DAAgent <DARefreshManagerDelegate, SubCalDaemonAccountDelegate>
-(void)startMonitoring;
-(id)scheduleIdentifier;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(void)accountDidCompleteRefresh:(id)arg1 withError:(id)arg2 ;
@end
