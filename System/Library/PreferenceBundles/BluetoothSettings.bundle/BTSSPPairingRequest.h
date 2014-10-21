/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BluetoothDevice, PSSpecifier, UIAlertView;

@interface BTSSPPairingRequest : NSObject {

	BluetoothDevice* _device;
	PSSpecifier* _specifier;
	UIAlertView* _alert;
	id _delegate;
	int _pairingStyle;

}
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)show;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(void)hidPairingResult:(id)arg1 ;
-(id)sanitizeNameForAlert:(id)arg1 ;
@end

