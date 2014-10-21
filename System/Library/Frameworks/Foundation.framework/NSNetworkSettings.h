/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject {

	NSNetworkSettingsInternal* _internal;

}
+(id)sharedNetworkSettings;
-(void)_updateProxySettings;
-(void)_listenForProxySettingChanges;
-(id)_init;
-(id)proxyDictionary;
-(id)proxyPropertiesForURL:(id)arg1 ;
-(bool)isProxyNeededForURL:(id)arg1 ;
-(void)setProxyPropertiesForURL:(id)arg1 onStream:(CFReadStreamRef)arg2 ;
-(bool)connectedToInternet:(bool)arg1 ;
-(void)setProxyDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
