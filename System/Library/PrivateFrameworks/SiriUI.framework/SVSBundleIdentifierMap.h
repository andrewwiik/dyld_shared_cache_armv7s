/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SVSBundleIdentifierMap : NSObject {

	NSMutableDictionary* _snippetBundles;
	NSMutableDictionary* _providerBundles;
	NSMutableDictionary* _disambiguationBundles;

}
-(id)init;
-(void).cxx_destruct;
-(void)_addItem:(id)arg1 toBundleDictionary:(id)arg2 groupIdentifier:(id)arg3 ;
-(id)_bundleMapArrayForType:(long long)arg1 groupIdentifier:(id)arg2 ;
-(void)registerBundle:(id)arg1 ;
-(id)factoryInstancesForGroupIdentifier:(id)arg1 type:(long long)arg2 ;
@end

