/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BTSDevice : NSObject
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)identifier;
-(long long)compare:(id)arg1 ;
-(bool)connect;
-(void)disconnect;
-(id)classicDevice;
-(void)unpair;
-(bool)paired;
-(bool)connected;
@end
