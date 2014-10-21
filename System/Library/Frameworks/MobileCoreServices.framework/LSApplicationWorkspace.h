/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface LSApplicationWorkspace : NSObject
+(void)_gkBeginObservingApplicationInstallationFor:(id)arg1 withCallback:(/*function pointer*/ void*)arg2 ;
+(void)_gkStopObservingApplicationInstallationFor:(id)arg1 ;
+(id)defaultWorkspace;
-(id)applicationsWithAudioComponents;
-(id)unrestrictedApplications;
-(bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 ;
-(bool)establishConnection;
-(id)remoteObserver;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 ;
-(bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 ;
-(bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(unsigned long long)arg2 ;
-(bool)installPhaseFinishedForProgress:(id)arg1 ;
-(void)clearCreatedProgressForBundleID:(id)arg1 ;
-(void)removeInstallProgressForBundleID:(id)arg1 ;
-(id)delegateProxy;
-(id)applicationForOpeningResource:(id)arg1 ;
-(id)directionsApplications;
-(id)applicationsWithUIBackgroundModes;
-(bool)openApplicationWithBundleID:(id)arg1 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3 ;
-(id)installedApplications;
-(id)allInstalledApplications;
-(id)placeholderApplications;
-(id)allApplications;
-(id)publicURLSchemes;
-(bool)installApplication:(id)arg1 withOptions:(id)arg2 ;
-(bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(bool)registerApplicationDictionary:(id)arg1 ;
-(bool)registerApplication:(id)arg1 ;
-(bool)unregisterApplication:(id)arg1 ;
-(bool)invalidateIconCache:(id)arg1 ;
-(void)clearAdvertisingIdentifier;
-(void)_clearCachedAdvertisingIdentifier;
-(id)deviceIdentifierForAdvertising;
-(id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2 ;
-(bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(bool)arg1 internal:(bool)arg2 user:(bool)arg3 ;
-(bool)_LSPrivateRebuildLaunchServicesDatabase;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(id)privateURLSchemes;
-(id)URLOverrideForURL:(id)arg1 ;
-(bool)openURL:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)deviceIdentifierForVendor;
-(id)applicationsAvailableForOpeningDocument:(id)arg1 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 delegate:(id)arg6 ;
-(bool)openURL:(id)arg1 withOptions:(id)arg2 ;
-(bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(bool)applicationIsInstalled:(id)arg1 ;
@end

