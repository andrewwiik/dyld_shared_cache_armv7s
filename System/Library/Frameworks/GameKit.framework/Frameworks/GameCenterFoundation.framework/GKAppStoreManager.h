/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKAppStoreManager : NSObject
+(id)sharedManager;
-(void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(bool)accountIsLoggedIntoAStore;
-(void)beginObservingKeyBagStatusFor:(id)arg1 withCallback:(/*function pointer*/ void*)arg2 ;
-(void)stopObservingKeyBagStatusFor:(id)arg1 ;
-(void)beginObservingStoreFrontChangesFor:(id)arg1 withSelector:(SEL)arg2 ;
-(void)stopObservingStoreFrontChangesFor:(id)arg1 ;
-(bool)uninstallApplicationWithBundleIdentifier:(id)arg1 ;
-(id)unrestrictedInstalledBundleIDs;
-(void)lookupStoreItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(bool)allowProductionForApplication:(id)arg1 ;
-(bool)allowProductionForXPCConnection:(id)arg1 ;
@end
