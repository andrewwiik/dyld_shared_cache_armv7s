/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AADeviceLocatorConfirmationUtilities : NSObject
+(id)_deviceSpecificLocalizedString:(id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(/*^block*/ id)arg4 ;
+(void)showDisableAlertForAccount:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
+(void)_performFMIPAuthenticationForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(/*^block*/ id)arg4 ;
+(void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forAccount:(id)arg3 message:(id)arg4 confirmationButtonTitle:(id)arg5 completion:(/*^block*/ id)arg6 ;
+(id)_titleForError:(id)arg1 account:(id)arg2 ;
+(id)_messageForError:(id)arg1 account:(id)arg2 ;
+(void)showEnableAlertWithCompletion:(/*^block*/ id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 withTitle:(id)arg2 completion:(/*^block*/ id)arg3 ;
@end

