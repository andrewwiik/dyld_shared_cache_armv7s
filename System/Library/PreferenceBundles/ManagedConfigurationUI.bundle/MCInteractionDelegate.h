/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCInteractionDelegate <NSObject>
@optional
-(void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
-(void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;

@required
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
@end

