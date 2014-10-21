/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLSystemConfigManager : NSObject {

	void* _prefs;
	bool _notifyForExternalChangeOnly;
	int _applySkipCount;
	NSString* _serviceType;

}
+(id)sharedInstanceForCallbackWhileLocked:(void*)arg1 ;
+(id)sharedInstanceForServiceType:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)_keepAlive;
-(void)_initializeSystemConfigPrefs:(id)arg1 ;
-(void)_setCallback:(/*function pointer*/ void*)arg1 withContext:(SCD_Struct_SL0*)arg2 ;
-(void)_refresh;
-(void)setCachedUsername:(id)arg1 ;
-(id)cachedUsername;
-(void)dealloc;
-(void).cxx_destruct;
-(void)_synchronize;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_notifyTarget:(unsigned)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)_tearDown;
@end

