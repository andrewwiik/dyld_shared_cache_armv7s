/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject {

	CFURLStorageSessionRef _storageSession;
	CFURLCacheRef _urlCache;
	SSAppPurchaseHistoryCache* _purchaseHistoryCache;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)purgeableSpace;
-(unsigned long long)purge:(unsigned long long)arg1 ;
@end

